# Copyright(C) 2023 InfiniFlow, Inc. All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      https://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import infinity
from infinity.common import REMOTE_HOST


class TestConnection:
    def test_connect_and_disconnect_ok(self):
        """
        target: test connect and server ok
        method: connect server
        expected: ok
        """
        infinity_obj = infinity.connect(REMOTE_HOST)
        assert infinity_obj
        assert infinity_obj.disconnect()
