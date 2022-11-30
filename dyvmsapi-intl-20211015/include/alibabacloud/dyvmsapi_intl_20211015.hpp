// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYVMSAPI-INTL20211015_H_
#define ALIBABACLOUD_DYVMSAPI-INTL20211015_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dyvmsapi-intl20211015 {
class BackendCallGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> calledNumber{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  BackendCallGroupRequest() {}

  explicit BackendCallGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callerIdNumber) {
      res["CallerIdNumber"] = boost::any(*callerIdNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendType) {
      res["SendType"] = boost::any(*sendType);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (timingStart) {
      res["TimingStart"] = boost::any(*timingStart);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CalledNumber"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CalledNumber"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      calledNumber = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CallerIdNumber") != m.end() && !m["CallerIdNumber"].empty()) {
      callerIdNumber = make_shared<string>(boost::any_cast<string>(m["CallerIdNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendType") != m.end() && !m["SendType"].empty()) {
      sendType = make_shared<long>(boost::any_cast<long>(m["SendType"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TimingStart") != m.end() && !m["TimingStart"].empty()) {
      timingStart = make_shared<string>(boost::any_cast<string>(m["TimingStart"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~BackendCallGroupRequest() = default;
};
class BackendCallGroupShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumberShrink{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  BackendCallGroupShrinkRequest() {}

  explicit BackendCallGroupShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumberShrink) {
      res["CalledNumber"] = boost::any(*calledNumberShrink);
    }
    if (callerIdNumber) {
      res["CallerIdNumber"] = boost::any(*callerIdNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendType) {
      res["SendType"] = boost::any(*sendType);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (timingStart) {
      res["TimingStart"] = boost::any(*timingStart);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (voiceCode) {
      res["VoiceCode"] = boost::any(*voiceCode);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumberShrink = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallerIdNumber") != m.end() && !m["CallerIdNumber"].empty()) {
      callerIdNumber = make_shared<string>(boost::any_cast<string>(m["CallerIdNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendType") != m.end() && !m["SendType"].empty()) {
      sendType = make_shared<long>(boost::any_cast<long>(m["SendType"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TimingStart") != m.end() && !m["TimingStart"].empty()) {
      timingStart = make_shared<string>(boost::any_cast<string>(m["TimingStart"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~BackendCallGroupShrinkRequest() = default;
};
class BackendCallGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  BackendCallGroupResponseBody() {}

  explicit BackendCallGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BackendCallGroupResponseBody() = default;
};
class BackendCallGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BackendCallGroupResponseBody> body{};

  BackendCallGroupResponse() {}

  explicit BackendCallGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BackendCallGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BackendCallGroupResponseBody>(model1);
      }
    }
  }


  virtual ~BackendCallGroupResponse() = default;
};
class BackendCallSignalRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> speed{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<long> volume{};

  BackendCallSignalRequest() {}

  explicit BackendCallSignalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callerIdNumber) {
      res["CallerIdNumber"] = boost::any(*callerIdNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (playTimes) {
      res["PlayTimes"] = boost::any(*playTimes);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallerIdNumber") != m.end() && !m["CallerIdNumber"].empty()) {
      callerIdNumber = make_shared<string>(boost::any_cast<string>(m["CallerIdNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PlayTimes") != m.end() && !m["PlayTimes"].empty()) {
      playTimes = make_shared<long>(boost::any_cast<long>(m["PlayTimes"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~BackendCallSignalRequest() = default;
};
class BackendCallSignalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  BackendCallSignalResponseBody() {}

  explicit BackendCallSignalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BackendCallSignalResponseBody() = default;
};
class BackendCallSignalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BackendCallSignalResponseBody> body{};

  BackendCallSignalResponse() {}

  explicit BackendCallSignalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BackendCallSignalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BackendCallSignalResponseBody>(model1);
      }
    }
  }


  virtual ~BackendCallSignalResponse() = default;
};
class CancleGroupCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> taskId{};

  CancleGroupCallRequest() {}

  explicit CancleGroupCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancleGroupCallRequest() = default;
};
class CancleGroupCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CancleGroupCallResponseBody() {}

  explicit CancleGroupCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancleGroupCallResponseBody() = default;
};
class CancleGroupCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancleGroupCallResponseBody> body{};

  CancleGroupCallResponse() {}

  explicit CancleGroupCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CancleGroupCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancleGroupCallResponseBody>(model1);
      }
    }
  }


  virtual ~CancleGroupCallResponse() = default;
};
class DeleteApplyNumberRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteApplyNumberRecordRequest() {}

  explicit DeleteApplyNumberRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteApplyNumberRecordRequest() = default;
};
class DeleteApplyNumberRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteApplyNumberRecordResponseBody() {}

  explicit DeleteApplyNumberRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteApplyNumberRecordResponseBody() = default;
};
class DeleteApplyNumberRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApplyNumberRecordResponseBody> body{};

  DeleteApplyNumberRecordResponse() {}

  explicit DeleteApplyNumberRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteApplyNumberRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApplyNumberRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApplyNumberRecordResponse() = default;
};
class DeleteQualificationRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteQualificationRequest() {}

  explicit DeleteQualificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteQualificationRequest() = default;
};
class DeleteQualificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> requestId{};

  DeleteQualificationResponseBody() {}

  explicit DeleteQualificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteQualificationResponseBody() = default;
};
class DeleteQualificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteQualificationResponseBody> body{};

  DeleteQualificationResponse() {}

  explicit DeleteQualificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteQualificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteQualificationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteQualificationResponse() = default;
};
class DeleteSipTrunkApplyRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteSipTrunkApplyRequest() {}

  explicit DeleteSipTrunkApplyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteSipTrunkApplyRequest() = default;
};
class DeleteSipTrunkApplyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteSipTrunkApplyResponseBody() {}

  explicit DeleteSipTrunkApplyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSipTrunkApplyResponseBody() = default;
};
class DeleteSipTrunkApplyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSipTrunkApplyResponseBody> body{};

  DeleteSipTrunkApplyResponse() {}

  explicit DeleteSipTrunkApplyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSipTrunkApplyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSipTrunkApplyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSipTrunkApplyResponse() = default;
};
class DeleteVoiceFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DeleteVoiceFileRequest() {}

  explicit DeleteVoiceFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DeleteVoiceFileRequest() = default;
};
class DeleteVoiceFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> fileId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteVoiceFileResponseBody() {}

  explicit DeleteVoiceFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteVoiceFileResponseBody() = default;
};
class DeleteVoiceFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVoiceFileResponseBody> body{};

  DeleteVoiceFileResponse() {}

  explicit DeleteVoiceFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVoiceFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVoiceFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVoiceFileResponse() = default;
};
class DeleteVoiceTtsRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateId{};

  DeleteVoiceTtsRequest() {}

  explicit DeleteVoiceTtsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteVoiceTtsRequest() = default;
};
class DeleteVoiceTtsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};

  DeleteVoiceTtsResponseBody() {}

  explicit DeleteVoiceTtsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteVoiceTtsResponseBody() = default;
};
class DeleteVoiceTtsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVoiceTtsResponseBody> body{};

  DeleteVoiceTtsResponse() {}

  explicit DeleteVoiceTtsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteVoiceTtsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVoiceTtsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVoiceTtsResponse() = default;
};
class DownloadTemplateFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  DownloadTemplateFileRequest() {}

  explicit DownloadTemplateFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~DownloadTemplateFileRequest() = default;
};
class DownloadTemplateFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};

  DownloadTemplateFileResponseBody() {}

  explicit DownloadTemplateFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DownloadTemplateFileResponseBody() = default;
};
class DownloadTemplateFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DownloadTemplateFileResponseBody> body{};

  DownloadTemplateFileResponse() {}

  explicit DownloadTemplateFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DownloadTemplateFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DownloadTemplateFileResponseBody>(model1);
      }
    }
  }


  virtual ~DownloadTemplateFileResponse() = default;
};
class GetIntlVoiceOpenStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetIntlVoiceOpenStatusRequest() {}

  explicit GetIntlVoiceOpenStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetIntlVoiceOpenStatusRequest() = default;
};
class GetIntlVoiceOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> openStatus{};
  shared_ptr<string> requestId{};

  GetIntlVoiceOpenStatusResponseBody() {}

  explicit GetIntlVoiceOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (openStatus) {
      res["OpenStatus"] = boost::any(*openStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OpenStatus") != m.end() && !m["OpenStatus"].empty()) {
      openStatus = make_shared<bool>(boost::any_cast<bool>(m["OpenStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetIntlVoiceOpenStatusResponseBody() = default;
};
class GetIntlVoiceOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIntlVoiceOpenStatusResponseBody> body{};

  GetIntlVoiceOpenStatusResponse() {}

  explicit GetIntlVoiceOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIntlVoiceOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIntlVoiceOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetIntlVoiceOpenStatusResponse() = default;
};
class GetOssInfoForUploadFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  GetOssInfoForUploadFileRequest() {}

  explicit GetOssInfoForUploadFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~GetOssInfoForUploadFileRequest() = default;
};
class GetOssInfoForUploadFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};
  shared_ptr<string> startWith{};

  GetOssInfoForUploadFileResponseBody() {}

  explicit GetOssInfoForUploadFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (startWith) {
      res["StartWith"] = boost::any(*startWith);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("StartWith") != m.end() && !m["StartWith"].empty()) {
      startWith = make_shared<string>(boost::any_cast<string>(m["StartWith"]));
    }
  }


  virtual ~GetOssInfoForUploadFileResponseBody() = default;
};
class GetOssInfoForUploadFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOssInfoForUploadFileResponseBody> body{};

  GetOssInfoForUploadFileResponse() {}

  explicit GetOssInfoForUploadFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetOssInfoForUploadFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOssInfoForUploadFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetOssInfoForUploadFileResponse() = default;
};
class HomeStartRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  HomeStartRequest() {}

  explicit HomeStartRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~HomeStartRequest() = default;
};
class HomeStartResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<long> callFailed{};
  shared_ptr<long> callSuccess{};
  shared_ptr<long> callTotal{};
  shared_ptr<string> date{};
  shared_ptr<long> successRate{};

  HomeStartResponseBodyModelList() {}

  explicit HomeStartResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callFailed) {
      res["CallFailed"] = boost::any(*callFailed);
    }
    if (callSuccess) {
      res["CallSuccess"] = boost::any(*callSuccess);
    }
    if (callTotal) {
      res["CallTotal"] = boost::any(*callTotal);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (successRate) {
      res["SuccessRate"] = boost::any(*successRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallFailed") != m.end() && !m["CallFailed"].empty()) {
      callFailed = make_shared<long>(boost::any_cast<long>(m["CallFailed"]));
    }
    if (m.find("CallSuccess") != m.end() && !m["CallSuccess"].empty()) {
      callSuccess = make_shared<long>(boost::any_cast<long>(m["CallSuccess"]));
    }
    if (m.find("CallTotal") != m.end() && !m["CallTotal"].empty()) {
      callTotal = make_shared<long>(boost::any_cast<long>(m["CallTotal"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("SuccessRate") != m.end() && !m["SuccessRate"].empty()) {
      successRate = make_shared<long>(boost::any_cast<long>(m["SuccessRate"]));
    }
  }


  virtual ~HomeStartResponseBodyModelList() = default;
};
class HomeStartResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> cdrDrUrl{};
  shared_ptr<vector<HomeStartResponseBodyModelList>> list{};

  HomeStartResponseBodyModel() {}

  explicit HomeStartResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdrDrUrl) {
      res["CdrDrUrl"] = boost::any(*cdrDrUrl);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdrDrUrl") != m.end() && !m["CdrDrUrl"].empty()) {
      cdrDrUrl = make_shared<string>(boost::any_cast<string>(m["CdrDrUrl"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<HomeStartResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HomeStartResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<HomeStartResponseBodyModelList>>(expect1);
      }
    }
  }


  virtual ~HomeStartResponseBodyModel() = default;
};
class HomeStartResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<HomeStartResponseBodyModel> model{};
  shared_ptr<string> requestId{};

  HomeStartResponseBody() {}

  explicit HomeStartResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        HomeStartResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<HomeStartResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~HomeStartResponseBody() = default;
};
class HomeStartResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HomeStartResponseBody> body{};

  HomeStartResponse() {}

  explicit HomeStartResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HomeStartResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HomeStartResponseBody>(model1);
      }
    }
  }


  virtual ~HomeStartResponse() = default;
};
class ListApplyNumberRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};

  ListApplyNumberRecordRequest() {}

  explicit ListApplyNumberRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListApplyNumberRecordRequest() = default;
};
class ListApplyNumberRecordResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> amount{};
  shared_ptr<string> applyId{};
  shared_ptr<string> applyNote{};
  shared_ptr<string> auditNote{};
  shared_ptr<string> auditTs{};
  shared_ptr<long> batchIndex{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> countryId{};
  shared_ptr<long> inboundConcurrency{};
  shared_ptr<long> outboundConcurrency{};
  shared_ptr<long> phoneType{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> scene{};
  shared_ptr<long> status{};
  shared_ptr<long> support{};
  shared_ptr<string> updateTs{};

  ListApplyNumberRecordResponseBodyList() {}

  explicit ListApplyNumberRecordResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (applyNote) {
      res["ApplyNote"] = boost::any(*applyNote);
    }
    if (auditNote) {
      res["AuditNote"] = boost::any(*auditNote);
    }
    if (auditTs) {
      res["AuditTs"] = boost::any(*auditTs);
    }
    if (batchIndex) {
      res["BatchIndex"] = boost::any(*batchIndex);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (inboundConcurrency) {
      res["InboundConcurrency"] = boost::any(*inboundConcurrency);
    }
    if (outboundConcurrency) {
      res["OutboundConcurrency"] = boost::any(*outboundConcurrency);
    }
    if (phoneType) {
      res["PhoneType"] = boost::any(*phoneType);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (support) {
      res["Support"] = boost::any(*support);
    }
    if (updateTs) {
      res["UpdateTs"] = boost::any(*updateTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<string>(boost::any_cast<string>(m["Amount"]));
    }
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("ApplyNote") != m.end() && !m["ApplyNote"].empty()) {
      applyNote = make_shared<string>(boost::any_cast<string>(m["ApplyNote"]));
    }
    if (m.find("AuditNote") != m.end() && !m["AuditNote"].empty()) {
      auditNote = make_shared<string>(boost::any_cast<string>(m["AuditNote"]));
    }
    if (m.find("AuditTs") != m.end() && !m["AuditTs"].empty()) {
      auditTs = make_shared<string>(boost::any_cast<string>(m["AuditTs"]));
    }
    if (m.find("BatchIndex") != m.end() && !m["BatchIndex"].empty()) {
      batchIndex = make_shared<long>(boost::any_cast<long>(m["BatchIndex"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("InboundConcurrency") != m.end() && !m["InboundConcurrency"].empty()) {
      inboundConcurrency = make_shared<long>(boost::any_cast<long>(m["InboundConcurrency"]));
    }
    if (m.find("OutboundConcurrency") != m.end() && !m["OutboundConcurrency"].empty()) {
      outboundConcurrency = make_shared<long>(boost::any_cast<long>(m["OutboundConcurrency"]));
    }
    if (m.find("PhoneType") != m.end() && !m["PhoneType"].empty()) {
      phoneType = make_shared<long>(boost::any_cast<long>(m["PhoneType"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Support") != m.end() && !m["Support"].empty()) {
      support = make_shared<long>(boost::any_cast<long>(m["Support"]));
    }
    if (m.find("UpdateTs") != m.end() && !m["UpdateTs"].empty()) {
      updateTs = make_shared<string>(boost::any_cast<string>(m["UpdateTs"]));
    }
  }


  virtual ~ListApplyNumberRecordResponseBodyList() = default;
};
class ListApplyNumberRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListApplyNumberRecordResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListApplyNumberRecordResponseBody() {}

  explicit ListApplyNumberRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListApplyNumberRecordResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplyNumberRecordResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListApplyNumberRecordResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListApplyNumberRecordResponseBody() = default;
};
class ListApplyNumberRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplyNumberRecordResponseBody> body{};

  ListApplyNumberRecordResponse() {}

  explicit ListApplyNumberRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListApplyNumberRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplyNumberRecordResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplyNumberRecordResponse() = default;
};
class ListNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> countryId{};
  shared_ptr<string> number{};
  shared_ptr<string> numberName{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> phoneType{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListNumberRequest() {}

  explicit ListNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberName) {
      res["NumberName"] = boost::any(*numberName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneType) {
      res["PhoneType"] = boost::any(*phoneType);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberName") != m.end() && !m["NumberName"].empty()) {
      numberName = make_shared<string>(boost::any_cast<string>(m["NumberName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneType") != m.end() && !m["PhoneType"].empty()) {
      phoneType = make_shared<long>(boost::any_cast<long>(m["PhoneType"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListNumberRequest() = default;
};
class ListNumberResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> countryId{};
  shared_ptr<string> disableTs{};
  shared_ptr<long> inboundConcurrency{};
  shared_ptr<string> number{};
  shared_ptr<string> numberName{};
  shared_ptr<long> outboundConcurrency{};
  shared_ptr<long> phoneType{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceId{};
  shared_ptr<long> status{};
  shared_ptr<string> supplierId{};
  shared_ptr<long> support{};
  shared_ptr<string> updateTs{};

  ListNumberResponseBodyList() {}

  explicit ListNumberResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (disableTs) {
      res["DisableTs"] = boost::any(*disableTs);
    }
    if (inboundConcurrency) {
      res["InboundConcurrency"] = boost::any(*inboundConcurrency);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (numberName) {
      res["NumberName"] = boost::any(*numberName);
    }
    if (outboundConcurrency) {
      res["OutboundConcurrency"] = boost::any(*outboundConcurrency);
    }
    if (phoneType) {
      res["PhoneType"] = boost::any(*phoneType);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplierId) {
      res["SupplierId"] = boost::any(*supplierId);
    }
    if (support) {
      res["Support"] = boost::any(*support);
    }
    if (updateTs) {
      res["UpdateTs"] = boost::any(*updateTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("DisableTs") != m.end() && !m["DisableTs"].empty()) {
      disableTs = make_shared<string>(boost::any_cast<string>(m["DisableTs"]));
    }
    if (m.find("InboundConcurrency") != m.end() && !m["InboundConcurrency"].empty()) {
      inboundConcurrency = make_shared<long>(boost::any_cast<long>(m["InboundConcurrency"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("NumberName") != m.end() && !m["NumberName"].empty()) {
      numberName = make_shared<string>(boost::any_cast<string>(m["NumberName"]));
    }
    if (m.find("OutboundConcurrency") != m.end() && !m["OutboundConcurrency"].empty()) {
      outboundConcurrency = make_shared<long>(boost::any_cast<long>(m["OutboundConcurrency"]));
    }
    if (m.find("PhoneType") != m.end() && !m["PhoneType"].empty()) {
      phoneType = make_shared<long>(boost::any_cast<long>(m["PhoneType"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("SupplierId") != m.end() && !m["SupplierId"].empty()) {
      supplierId = make_shared<string>(boost::any_cast<string>(m["SupplierId"]));
    }
    if (m.find("Support") != m.end() && !m["Support"].empty()) {
      support = make_shared<long>(boost::any_cast<long>(m["Support"]));
    }
    if (m.find("UpdateTs") != m.end() && !m["UpdateTs"].empty()) {
      updateTs = make_shared<string>(boost::any_cast<string>(m["UpdateTs"]));
    }
  }


  virtual ~ListNumberResponseBodyList() = default;
};
class ListNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListNumberResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListNumberResponseBody() {}

  explicit ListNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListNumberResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNumberResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListNumberResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListNumberResponseBody() = default;
};
class ListNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNumberResponseBody> body{};

  ListNumberResponse() {}

  explicit ListNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ListNumberResponse() = default;
};
class ListQualificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyName{};
  shared_ptr<string> contactPhone{};
  shared_ptr<string> countryId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};

  ListQualificationRequest() {}

  explicit ListQualificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (contactPhone) {
      res["ContactPhone"] = boost::any(*contactPhone);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("ContactPhone") != m.end() && !m["ContactPhone"].empty()) {
      contactPhone = make_shared<string>(boost::any_cast<string>(m["ContactPhone"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListQualificationRequest() = default;
};
class ListQualificationResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> auditRemark{};
  shared_ptr<string> auditTs{};
  shared_ptr<string> businessLicenseFileKey{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> companyName{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactPhone{};
  shared_ptr<string> countryId{};
  shared_ptr<string> legalId{};
  shared_ptr<string> legalLicenseFileKey{};
  shared_ptr<string> legalName{};
  shared_ptr<string> networkAccessFileKey{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> status{};
  shared_ptr<string> unifiedCode{};
  shared_ptr<string> updateTs{};

  ListQualificationResponseBodyList() {}

  explicit ListQualificationResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (auditRemark) {
      res["AuditRemark"] = boost::any(*auditRemark);
    }
    if (auditTs) {
      res["AuditTs"] = boost::any(*auditTs);
    }
    if (businessLicenseFileKey) {
      res["BusinessLicenseFileKey"] = boost::any(*businessLicenseFileKey);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactPhone) {
      res["ContactPhone"] = boost::any(*contactPhone);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (legalId) {
      res["LegalId"] = boost::any(*legalId);
    }
    if (legalLicenseFileKey) {
      res["LegalLicenseFileKey"] = boost::any(*legalLicenseFileKey);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (networkAccessFileKey) {
      res["NetworkAccessFileKey"] = boost::any(*networkAccessFileKey);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unifiedCode) {
      res["UnifiedCode"] = boost::any(*unifiedCode);
    }
    if (updateTs) {
      res["UpdateTs"] = boost::any(*updateTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("AuditRemark") != m.end() && !m["AuditRemark"].empty()) {
      auditRemark = make_shared<string>(boost::any_cast<string>(m["AuditRemark"]));
    }
    if (m.find("AuditTs") != m.end() && !m["AuditTs"].empty()) {
      auditTs = make_shared<string>(boost::any_cast<string>(m["AuditTs"]));
    }
    if (m.find("BusinessLicenseFileKey") != m.end() && !m["BusinessLicenseFileKey"].empty()) {
      businessLicenseFileKey = make_shared<string>(boost::any_cast<string>(m["BusinessLicenseFileKey"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactPhone") != m.end() && !m["ContactPhone"].empty()) {
      contactPhone = make_shared<string>(boost::any_cast<string>(m["ContactPhone"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("LegalId") != m.end() && !m["LegalId"].empty()) {
      legalId = make_shared<string>(boost::any_cast<string>(m["LegalId"]));
    }
    if (m.find("LegalLicenseFileKey") != m.end() && !m["LegalLicenseFileKey"].empty()) {
      legalLicenseFileKey = make_shared<string>(boost::any_cast<string>(m["LegalLicenseFileKey"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("NetworkAccessFileKey") != m.end() && !m["NetworkAccessFileKey"].empty()) {
      networkAccessFileKey = make_shared<string>(boost::any_cast<string>(m["NetworkAccessFileKey"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UnifiedCode") != m.end() && !m["UnifiedCode"].empty()) {
      unifiedCode = make_shared<string>(boost::any_cast<string>(m["UnifiedCode"]));
    }
    if (m.find("UpdateTs") != m.end() && !m["UpdateTs"].empty()) {
      updateTs = make_shared<string>(boost::any_cast<string>(m["UpdateTs"]));
    }
  }


  virtual ~ListQualificationResponseBodyList() = default;
};
class ListQualificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListQualificationResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListQualificationResponseBody() {}

  explicit ListQualificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListQualificationResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListQualificationResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListQualificationResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListQualificationResponseBody() = default;
};
class ListQualificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQualificationResponseBody> body{};

  ListQualificationResponse() {}

  explicit ListQualificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQualificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQualificationResponseBody>(model1);
      }
    }
  }


  virtual ~ListQualificationResponse() = default;
};
class ListReceiptRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  ListReceiptRequest() {}

  explicit ListReceiptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListReceiptRequest() = default;
};
class ListReceiptResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> callFailedCount{};
  shared_ptr<long> callSuccessCount{};
  shared_ptr<long> callTotalCount{};
  shared_ptr<string> date{};

  ListReceiptResponseBodyList() {}

  explicit ListReceiptResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callFailedCount) {
      res["CallFailedCount"] = boost::any(*callFailedCount);
    }
    if (callSuccessCount) {
      res["CallSuccessCount"] = boost::any(*callSuccessCount);
    }
    if (callTotalCount) {
      res["CallTotalCount"] = boost::any(*callTotalCount);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallFailedCount") != m.end() && !m["CallFailedCount"].empty()) {
      callFailedCount = make_shared<long>(boost::any_cast<long>(m["CallFailedCount"]));
    }
    if (m.find("CallSuccessCount") != m.end() && !m["CallSuccessCount"].empty()) {
      callSuccessCount = make_shared<long>(boost::any_cast<long>(m["CallSuccessCount"]));
    }
    if (m.find("CallTotalCount") != m.end() && !m["CallTotalCount"].empty()) {
      callTotalCount = make_shared<long>(boost::any_cast<long>(m["CallTotalCount"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
  }


  virtual ~ListReceiptResponseBodyList() = default;
};
class ListReceiptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListReceiptResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> receiptUrl{};
  shared_ptr<string> requestId{};

  ListReceiptResponseBody() {}

  explicit ListReceiptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (receiptUrl) {
      res["ReceiptUrl"] = boost::any(*receiptUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListReceiptResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListReceiptResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListReceiptResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ReceiptUrl") != m.end() && !m["ReceiptUrl"].empty()) {
      receiptUrl = make_shared<string>(boost::any_cast<string>(m["ReceiptUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListReceiptResponseBody() = default;
};
class ListReceiptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListReceiptResponseBody> body{};

  ListReceiptResponse() {}

  explicit ListReceiptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListReceiptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListReceiptResponseBody>(model1);
      }
    }
  }


  virtual ~ListReceiptResponse() = default;
};
class ListSipTrunkRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};

  ListSipTrunkRequest() {}

  explicit ListSipTrunkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListSipTrunkRequest() = default;
};
class ListSipTrunkResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> applyNote{};
  shared_ptr<string> auditNote{};
  shared_ptr<string> auditTs{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> countryId{};
  shared_ptr<string> inboundIpPorts{};
  shared_ptr<string> outboundIps{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> scene{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTs{};
  shared_ptr<string> userUuid{};

  ListSipTrunkResponseBodyList() {}

  explicit ListSipTrunkResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (applyNote) {
      res["ApplyNote"] = boost::any(*applyNote);
    }
    if (auditNote) {
      res["AuditNote"] = boost::any(*auditNote);
    }
    if (auditTs) {
      res["AuditTs"] = boost::any(*auditTs);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (inboundIpPorts) {
      res["InboundIpPorts"] = boost::any(*inboundIpPorts);
    }
    if (outboundIps) {
      res["OutboundIps"] = boost::any(*outboundIps);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTs) {
      res["UpdateTs"] = boost::any(*updateTs);
    }
    if (userUuid) {
      res["UserUuid"] = boost::any(*userUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("ApplyNote") != m.end() && !m["ApplyNote"].empty()) {
      applyNote = make_shared<string>(boost::any_cast<string>(m["ApplyNote"]));
    }
    if (m.find("AuditNote") != m.end() && !m["AuditNote"].empty()) {
      auditNote = make_shared<string>(boost::any_cast<string>(m["AuditNote"]));
    }
    if (m.find("AuditTs") != m.end() && !m["AuditTs"].empty()) {
      auditTs = make_shared<string>(boost::any_cast<string>(m["AuditTs"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("InboundIpPorts") != m.end() && !m["InboundIpPorts"].empty()) {
      inboundIpPorts = make_shared<string>(boost::any_cast<string>(m["InboundIpPorts"]));
    }
    if (m.find("OutboundIps") != m.end() && !m["OutboundIps"].empty()) {
      outboundIps = make_shared<string>(boost::any_cast<string>(m["OutboundIps"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTs") != m.end() && !m["UpdateTs"].empty()) {
      updateTs = make_shared<string>(boost::any_cast<string>(m["UpdateTs"]));
    }
    if (m.find("UserUuid") != m.end() && !m["UserUuid"].empty()) {
      userUuid = make_shared<string>(boost::any_cast<string>(m["UserUuid"]));
    }
  }


  virtual ~ListSipTrunkResponseBodyList() = default;
};
class ListSipTrunkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListSipTrunkResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> total{};

  ListSipTrunkResponseBody() {}

  explicit ListSipTrunkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListSipTrunkResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSipTrunkResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListSipTrunkResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~ListSipTrunkResponseBody() = default;
};
class ListSipTrunkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSipTrunkResponseBody> body{};

  ListSipTrunkResponse() {}

  explicit ListSipTrunkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSipTrunkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSipTrunkResponseBody>(model1);
      }
    }
  }


  virtual ~ListSipTrunkResponse() = default;
};
class ListSipTrunkDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  ListSipTrunkDetailRequest() {}

  explicit ListSipTrunkDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListSipTrunkDetailRequest() = default;
};
class ListSipTrunkDetailResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> answerTime{};
  shared_ptr<long> answered{};
  shared_ptr<string> busiType{};
  shared_ptr<string> callEndTime{};
  shared_ptr<string> callType{};
  shared_ptr<string> calledIp{};
  shared_ptr<string> calledNum{};
  shared_ptr<string> calledNumRegion{};
  shared_ptr<string> calledNumType{};
  shared_ptr<string> callerDisplay{};
  shared_ptr<string> callerIp{};
  shared_ptr<string> callerNum{};
  shared_ptr<string> callerNumRegion{};
  shared_ptr<string> callerNumType{};
  shared_ptr<long> duration{};
  shared_ptr<long> hangup{};
  shared_ptr<long> hangupType{};
  shared_ptr<string> ivnCliType{};
  shared_ptr<string> recordUrl{};
  shared_ptr<string> startTime{};
  shared_ptr<string> userUuid{};
  shared_ptr<string> uuid{};

  ListSipTrunkDetailResponseBodyList() {}

  explicit ListSipTrunkDetailResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerTime) {
      res["AnswerTime"] = boost::any(*answerTime);
    }
    if (answered) {
      res["Answered"] = boost::any(*answered);
    }
    if (busiType) {
      res["BusiType"] = boost::any(*busiType);
    }
    if (callEndTime) {
      res["CallEndTime"] = boost::any(*callEndTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (calledIp) {
      res["CalledIp"] = boost::any(*calledIp);
    }
    if (calledNum) {
      res["CalledNum"] = boost::any(*calledNum);
    }
    if (calledNumRegion) {
      res["CalledNumRegion"] = boost::any(*calledNumRegion);
    }
    if (calledNumType) {
      res["CalledNumType"] = boost::any(*calledNumType);
    }
    if (callerDisplay) {
      res["CallerDisplay"] = boost::any(*callerDisplay);
    }
    if (callerIp) {
      res["CallerIp"] = boost::any(*callerIp);
    }
    if (callerNum) {
      res["CallerNum"] = boost::any(*callerNum);
    }
    if (callerNumRegion) {
      res["CallerNumRegion"] = boost::any(*callerNumRegion);
    }
    if (callerNumType) {
      res["CallerNumType"] = boost::any(*callerNumType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (hangup) {
      res["Hangup"] = boost::any(*hangup);
    }
    if (hangupType) {
      res["HangupType"] = boost::any(*hangupType);
    }
    if (ivnCliType) {
      res["IvnCliType"] = boost::any(*ivnCliType);
    }
    if (recordUrl) {
      res["RecordUrl"] = boost::any(*recordUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userUuid) {
      res["UserUuid"] = boost::any(*userUuid);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerTime") != m.end() && !m["AnswerTime"].empty()) {
      answerTime = make_shared<string>(boost::any_cast<string>(m["AnswerTime"]));
    }
    if (m.find("Answered") != m.end() && !m["Answered"].empty()) {
      answered = make_shared<long>(boost::any_cast<long>(m["Answered"]));
    }
    if (m.find("BusiType") != m.end() && !m["BusiType"].empty()) {
      busiType = make_shared<string>(boost::any_cast<string>(m["BusiType"]));
    }
    if (m.find("CallEndTime") != m.end() && !m["CallEndTime"].empty()) {
      callEndTime = make_shared<string>(boost::any_cast<string>(m["CallEndTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["CallType"]));
    }
    if (m.find("CalledIp") != m.end() && !m["CalledIp"].empty()) {
      calledIp = make_shared<string>(boost::any_cast<string>(m["CalledIp"]));
    }
    if (m.find("CalledNum") != m.end() && !m["CalledNum"].empty()) {
      calledNum = make_shared<string>(boost::any_cast<string>(m["CalledNum"]));
    }
    if (m.find("CalledNumRegion") != m.end() && !m["CalledNumRegion"].empty()) {
      calledNumRegion = make_shared<string>(boost::any_cast<string>(m["CalledNumRegion"]));
    }
    if (m.find("CalledNumType") != m.end() && !m["CalledNumType"].empty()) {
      calledNumType = make_shared<string>(boost::any_cast<string>(m["CalledNumType"]));
    }
    if (m.find("CallerDisplay") != m.end() && !m["CallerDisplay"].empty()) {
      callerDisplay = make_shared<string>(boost::any_cast<string>(m["CallerDisplay"]));
    }
    if (m.find("CallerIp") != m.end() && !m["CallerIp"].empty()) {
      callerIp = make_shared<string>(boost::any_cast<string>(m["CallerIp"]));
    }
    if (m.find("CallerNum") != m.end() && !m["CallerNum"].empty()) {
      callerNum = make_shared<string>(boost::any_cast<string>(m["CallerNum"]));
    }
    if (m.find("CallerNumRegion") != m.end() && !m["CallerNumRegion"].empty()) {
      callerNumRegion = make_shared<string>(boost::any_cast<string>(m["CallerNumRegion"]));
    }
    if (m.find("CallerNumType") != m.end() && !m["CallerNumType"].empty()) {
      callerNumType = make_shared<string>(boost::any_cast<string>(m["CallerNumType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Hangup") != m.end() && !m["Hangup"].empty()) {
      hangup = make_shared<long>(boost::any_cast<long>(m["Hangup"]));
    }
    if (m.find("HangupType") != m.end() && !m["HangupType"].empty()) {
      hangupType = make_shared<long>(boost::any_cast<long>(m["HangupType"]));
    }
    if (m.find("IvnCliType") != m.end() && !m["IvnCliType"].empty()) {
      ivnCliType = make_shared<string>(boost::any_cast<string>(m["IvnCliType"]));
    }
    if (m.find("RecordUrl") != m.end() && !m["RecordUrl"].empty()) {
      recordUrl = make_shared<string>(boost::any_cast<string>(m["RecordUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UserUuid") != m.end() && !m["UserUuid"].empty()) {
      userUuid = make_shared<string>(boost::any_cast<string>(m["UserUuid"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ListSipTrunkDetailResponseBodyList() = default;
};
class ListSipTrunkDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListSipTrunkDetailResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListSipTrunkDetailResponseBody() {}

  explicit ListSipTrunkDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListSipTrunkDetailResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSipTrunkDetailResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListSipTrunkDetailResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListSipTrunkDetailResponseBody() = default;
};
class ListSipTrunkDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSipTrunkDetailResponseBody> body{};

  ListSipTrunkDetailResponse() {}

  explicit ListSipTrunkDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSipTrunkDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSipTrunkDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListSipTrunkDetailResponse() = default;
};
class ListSipTrunkStatRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  ListSipTrunkStatRequest() {}

  explicit ListSipTrunkStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListSipTrunkStatRequest() = default;
};
class ListSipTrunkStatResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> answeredCalls{};
  shared_ptr<long> answeredRate{};
  shared_ptr<long> averageDuration{};
  shared_ptr<long> billing{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<long> failedCalls{};
  shared_ptr<long> totalCalls{};
  shared_ptr<long> totalDuration{};

  ListSipTrunkStatResponseBodyList() {}

  explicit ListSipTrunkStatResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answeredCalls) {
      res["AnsweredCalls"] = boost::any(*answeredCalls);
    }
    if (answeredRate) {
      res["AnsweredRate"] = boost::any(*answeredRate);
    }
    if (averageDuration) {
      res["AverageDuration"] = boost::any(*averageDuration);
    }
    if (billing) {
      res["Billing"] = boost::any(*billing);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (failedCalls) {
      res["FailedCalls"] = boost::any(*failedCalls);
    }
    if (totalCalls) {
      res["TotalCalls"] = boost::any(*totalCalls);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnsweredCalls") != m.end() && !m["AnsweredCalls"].empty()) {
      answeredCalls = make_shared<long>(boost::any_cast<long>(m["AnsweredCalls"]));
    }
    if (m.find("AnsweredRate") != m.end() && !m["AnsweredRate"].empty()) {
      answeredRate = make_shared<long>(boost::any_cast<long>(m["AnsweredRate"]));
    }
    if (m.find("AverageDuration") != m.end() && !m["AverageDuration"].empty()) {
      averageDuration = make_shared<long>(boost::any_cast<long>(m["AverageDuration"]));
    }
    if (m.find("Billing") != m.end() && !m["Billing"].empty()) {
      billing = make_shared<long>(boost::any_cast<long>(m["Billing"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("FailedCalls") != m.end() && !m["FailedCalls"].empty()) {
      failedCalls = make_shared<long>(boost::any_cast<long>(m["FailedCalls"]));
    }
    if (m.find("TotalCalls") != m.end() && !m["TotalCalls"].empty()) {
      totalCalls = make_shared<long>(boost::any_cast<long>(m["TotalCalls"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
  }


  virtual ~ListSipTrunkStatResponseBodyList() = default;
};
class ListSipTrunkStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListSipTrunkStatResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> total{};

  ListSipTrunkStatResponseBody() {}

  explicit ListSipTrunkStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListSipTrunkStatResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSipTrunkStatResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListSipTrunkStatResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~ListSipTrunkStatResponseBody() = default;
};
class ListSipTrunkStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSipTrunkStatResponseBody> body{};

  ListSipTrunkStatResponse() {}

  explicit ListSipTrunkStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListSipTrunkStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSipTrunkStatResponseBody>(model1);
      }
    }
  }


  virtual ~ListSipTrunkStatResponse() = default;
};
class ListVoiceCallRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};

  ListVoiceCallRequest() {}

  explicit ListVoiceCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendType) {
      res["SendType"] = boost::any(*sendType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendType") != m.end() && !m["SendType"].empty()) {
      sendType = make_shared<long>(boost::any_cast<long>(m["SendType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListVoiceCallRequest() = default;
};
class ListVoiceCallResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> answeredCalls{};
  shared_ptr<long> businessType{};
  shared_ptr<long> calledCalls{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> countryId{};
  shared_ptr<long> failedCalls{};
  shared_ptr<long> groupCallType{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sendType{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateId{};
  shared_ptr<string> tickerTs{};
  shared_ptr<long> totalCalls{};
  shared_ptr<long> totalDuration{};
  shared_ptr<string> userUuid{};

  ListVoiceCallResponseBodyList() {}

  explicit ListVoiceCallResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answeredCalls) {
      res["AnsweredCalls"] = boost::any(*answeredCalls);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (calledCalls) {
      res["CalledCalls"] = boost::any(*calledCalls);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (failedCalls) {
      res["FailedCalls"] = boost::any(*failedCalls);
    }
    if (groupCallType) {
      res["GroupCallType"] = boost::any(*groupCallType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sendType) {
      res["SendType"] = boost::any(*sendType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (tickerTs) {
      res["TickerTs"] = boost::any(*tickerTs);
    }
    if (totalCalls) {
      res["TotalCalls"] = boost::any(*totalCalls);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    if (userUuid) {
      res["UserUuid"] = boost::any(*userUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnsweredCalls") != m.end() && !m["AnsweredCalls"].empty()) {
      answeredCalls = make_shared<long>(boost::any_cast<long>(m["AnsweredCalls"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("CalledCalls") != m.end() && !m["CalledCalls"].empty()) {
      calledCalls = make_shared<long>(boost::any_cast<long>(m["CalledCalls"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("FailedCalls") != m.end() && !m["FailedCalls"].empty()) {
      failedCalls = make_shared<long>(boost::any_cast<long>(m["FailedCalls"]));
    }
    if (m.find("GroupCallType") != m.end() && !m["GroupCallType"].empty()) {
      groupCallType = make_shared<long>(boost::any_cast<long>(m["GroupCallType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SendType") != m.end() && !m["SendType"].empty()) {
      sendType = make_shared<long>(boost::any_cast<long>(m["SendType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TickerTs") != m.end() && !m["TickerTs"].empty()) {
      tickerTs = make_shared<string>(boost::any_cast<string>(m["TickerTs"]));
    }
    if (m.find("TotalCalls") != m.end() && !m["TotalCalls"].empty()) {
      totalCalls = make_shared<long>(boost::any_cast<long>(m["TotalCalls"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
    if (m.find("UserUuid") != m.end() && !m["UserUuid"].empty()) {
      userUuid = make_shared<string>(boost::any_cast<string>(m["UserUuid"]));
    }
  }


  virtual ~ListVoiceCallResponseBodyList() = default;
};
class ListVoiceCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListVoiceCallResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListVoiceCallResponseBody() {}

  explicit ListVoiceCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListVoiceCallResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVoiceCallResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListVoiceCallResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVoiceCallResponseBody() = default;
};
class ListVoiceCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVoiceCallResponseBody> body{};

  ListVoiceCallResponse() {}

  explicit ListVoiceCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVoiceCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVoiceCallResponseBody>(model1);
      }
    }
  }


  virtual ~ListVoiceCallResponse() = default;
};
class ListVoiceCallDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> endTime{};
  shared_ptr<long> hangupType{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};

  ListVoiceCallDetailRequest() {}

  explicit ListVoiceCallDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hangupType) {
      res["HangupType"] = boost::any(*hangupType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("HangupType") != m.end() && !m["HangupType"].empty()) {
      hangupType = make_shared<long>(boost::any_cast<long>(m["HangupType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListVoiceCallDetailRequest() = default;
};
class ListVoiceCallDetailResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> billing{};
  shared_ptr<long> businessType{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> countryId{};
  shared_ptr<long> duration{};
  shared_ptr<string> endTs{};
  shared_ptr<long> hangupType{};
  shared_ptr<long> sendType{};
  shared_ptr<string> startTs{};
  shared_ptr<long> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskName{};

  ListVoiceCallDetailResponseBodyList() {}

  explicit ListVoiceCallDetailResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billing) {
      res["Billing"] = boost::any(*billing);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (hangupType) {
      res["HangupType"] = boost::any(*hangupType);
    }
    if (sendType) {
      res["SendType"] = boost::any(*sendType);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Billing") != m.end() && !m["Billing"].empty()) {
      billing = make_shared<long>(boost::any_cast<long>(m["Billing"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<string>(boost::any_cast<string>(m["EndTs"]));
    }
    if (m.find("HangupType") != m.end() && !m["HangupType"].empty()) {
      hangupType = make_shared<long>(boost::any_cast<long>(m["HangupType"]));
    }
    if (m.find("SendType") != m.end() && !m["SendType"].empty()) {
      sendType = make_shared<long>(boost::any_cast<long>(m["SendType"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<string>(boost::any_cast<string>(m["StartTs"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListVoiceCallDetailResponseBodyList() = default;
};
class ListVoiceCallDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListVoiceCallDetailResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListVoiceCallDetailResponseBody() {}

  explicit ListVoiceCallDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListVoiceCallDetailResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVoiceCallDetailResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListVoiceCallDetailResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVoiceCallDetailResponseBody() = default;
};
class ListVoiceCallDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVoiceCallDetailResponseBody> body{};

  ListVoiceCallDetailResponse() {}

  explicit ListVoiceCallDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVoiceCallDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVoiceCallDetailResponseBody>(model1);
      }
    }
  }


  virtual ~ListVoiceCallDetailResponse() = default;
};
class ListVoiceCallStatRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskName{};

  ListVoiceCallStatRequest() {}

  explicit ListVoiceCallStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListVoiceCallStatRequest() = default;
};
class ListVoiceCallStatResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<long> answeredCalls{};
  shared_ptr<long> answeredRate{};
  shared_ptr<long> averageDuration{};
  shared_ptr<long> billing{};
  shared_ptr<long> businessType{};
  shared_ptr<long> failedCalls{};
  shared_ptr<long> totalCalls{};
  shared_ptr<long> totalDuration{};

  ListVoiceCallStatResponseBodyList() {}

  explicit ListVoiceCallStatResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answeredCalls) {
      res["AnsweredCalls"] = boost::any(*answeredCalls);
    }
    if (answeredRate) {
      res["AnsweredRate"] = boost::any(*answeredRate);
    }
    if (averageDuration) {
      res["AverageDuration"] = boost::any(*averageDuration);
    }
    if (billing) {
      res["Billing"] = boost::any(*billing);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (failedCalls) {
      res["FailedCalls"] = boost::any(*failedCalls);
    }
    if (totalCalls) {
      res["TotalCalls"] = boost::any(*totalCalls);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnsweredCalls") != m.end() && !m["AnsweredCalls"].empty()) {
      answeredCalls = make_shared<long>(boost::any_cast<long>(m["AnsweredCalls"]));
    }
    if (m.find("AnsweredRate") != m.end() && !m["AnsweredRate"].empty()) {
      answeredRate = make_shared<long>(boost::any_cast<long>(m["AnsweredRate"]));
    }
    if (m.find("AverageDuration") != m.end() && !m["AverageDuration"].empty()) {
      averageDuration = make_shared<long>(boost::any_cast<long>(m["AverageDuration"]));
    }
    if (m.find("Billing") != m.end() && !m["Billing"].empty()) {
      billing = make_shared<long>(boost::any_cast<long>(m["Billing"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("FailedCalls") != m.end() && !m["FailedCalls"].empty()) {
      failedCalls = make_shared<long>(boost::any_cast<long>(m["FailedCalls"]));
    }
    if (m.find("TotalCalls") != m.end() && !m["TotalCalls"].empty()) {
      totalCalls = make_shared<long>(boost::any_cast<long>(m["TotalCalls"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
  }


  virtual ~ListVoiceCallStatResponseBodyList() = default;
};
class ListVoiceCallStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListVoiceCallStatResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListVoiceCallStatResponseBody() {}

  explicit ListVoiceCallStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListVoiceCallStatResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVoiceCallStatResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListVoiceCallStatResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVoiceCallStatResponseBody() = default;
};
class ListVoiceCallStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVoiceCallStatResponseBody> body{};

  ListVoiceCallStatResponse() {}

  explicit ListVoiceCallStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVoiceCallStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVoiceCallStatResponseBody>(model1);
      }
    }
  }


  virtual ~ListVoiceCallStatResponse() = default;
};
class ListVoiceFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};

  ListVoiceFileRequest() {}

  explicit ListVoiceFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListVoiceFileRequest() = default;
};
class ListVoiceFileResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> auditRemark{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> countryId{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> status{};
  shared_ptr<string> updateTs{};

  ListVoiceFileResponseBodyList() {}

  explicit ListVoiceFileResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRemark) {
      res["AuditRemark"] = boost::any(*auditRemark);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTs) {
      res["UpdateTs"] = boost::any(*updateTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRemark") != m.end() && !m["AuditRemark"].empty()) {
      auditRemark = make_shared<string>(boost::any_cast<string>(m["AuditRemark"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UpdateTs") != m.end() && !m["UpdateTs"].empty()) {
      updateTs = make_shared<string>(boost::any_cast<string>(m["UpdateTs"]));
    }
  }


  virtual ~ListVoiceFileResponseBodyList() = default;
};
class ListVoiceFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListVoiceFileResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListVoiceFileResponseBody() {}

  explicit ListVoiceFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListVoiceFileResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVoiceFileResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListVoiceFileResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVoiceFileResponseBody() = default;
};
class ListVoiceFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVoiceFileResponseBody> body{};

  ListVoiceFileResponse() {}

  explicit ListVoiceFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVoiceFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVoiceFileResponseBody>(model1);
      }
    }
  }


  virtual ~ListVoiceFileResponse() = default;
};
class ListVoiceTtsRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> status{};
  shared_ptr<string> templateName{};

  ListVoiceTtsRequest() {}

  explicit ListVoiceTtsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListVoiceTtsRequest() = default;
};
class ListVoiceTtsResponseBodyList : public Darabonba::Model {
public:
  shared_ptr<string> auditBy{};
  shared_ptr<string> auditRemark{};
  shared_ptr<string> auditTs{};
  shared_ptr<string> commitTs{};
  shared_ptr<string> countryId{};
  shared_ptr<string> language{};
  shared_ptr<string> qualificationId{};
  shared_ptr<long> speed{};
  shared_ptr<long> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateText{};
  shared_ptr<string> updateTs{};
  shared_ptr<string> userUuid{};

  ListVoiceTtsResponseBodyList() {}

  explicit ListVoiceTtsResponseBodyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditBy) {
      res["AuditBy"] = boost::any(*auditBy);
    }
    if (auditRemark) {
      res["AuditRemark"] = boost::any(*auditRemark);
    }
    if (auditTs) {
      res["AuditTs"] = boost::any(*auditTs);
    }
    if (commitTs) {
      res["CommitTs"] = boost::any(*commitTs);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateText) {
      res["TemplateText"] = boost::any(*templateText);
    }
    if (updateTs) {
      res["UpdateTs"] = boost::any(*updateTs);
    }
    if (userUuid) {
      res["UserUuid"] = boost::any(*userUuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditBy") != m.end() && !m["AuditBy"].empty()) {
      auditBy = make_shared<string>(boost::any_cast<string>(m["AuditBy"]));
    }
    if (m.find("AuditRemark") != m.end() && !m["AuditRemark"].empty()) {
      auditRemark = make_shared<string>(boost::any_cast<string>(m["AuditRemark"]));
    }
    if (m.find("AuditTs") != m.end() && !m["AuditTs"].empty()) {
      auditTs = make_shared<string>(boost::any_cast<string>(m["AuditTs"]));
    }
    if (m.find("CommitTs") != m.end() && !m["CommitTs"].empty()) {
      commitTs = make_shared<string>(boost::any_cast<string>(m["CommitTs"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateText") != m.end() && !m["TemplateText"].empty()) {
      templateText = make_shared<string>(boost::any_cast<string>(m["TemplateText"]));
    }
    if (m.find("UpdateTs") != m.end() && !m["UpdateTs"].empty()) {
      updateTs = make_shared<string>(boost::any_cast<string>(m["UpdateTs"]));
    }
    if (m.find("UserUuid") != m.end() && !m["UserUuid"].empty()) {
      userUuid = make_shared<string>(boost::any_cast<string>(m["UserUuid"]));
    }
  }


  virtual ~ListVoiceTtsResponseBodyList() = default;
};
class ListVoiceTtsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListVoiceTtsResponseBodyList>> list{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListVoiceTtsResponseBody() {}

  explicit ListVoiceTtsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListVoiceTtsResponseBodyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVoiceTtsResponseBodyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListVoiceTtsResponseBodyList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListVoiceTtsResponseBody() = default;
};
class ListVoiceTtsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVoiceTtsResponseBody> body{};

  ListVoiceTtsResponse() {}

  explicit ListVoiceTtsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListVoiceTtsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVoiceTtsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVoiceTtsResponse() = default;
};
class NumberEnableRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<string> number{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  NumberEnableRequest() {}

  explicit NumberEnableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~NumberEnableRequest() = default;
};
class NumberEnableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  NumberEnableResponseBody() {}

  explicit NumberEnableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~NumberEnableResponseBody() = default;
};
class NumberEnableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NumberEnableResponseBody> body{};

  NumberEnableResponse() {}

  explicit NumberEnableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        NumberEnableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NumberEnableResponseBody>(model1);
      }
    }
  }


  virtual ~NumberEnableResponse() = default;
};
class OpenIntlVoiceServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> env{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OpenIntlVoiceServiceRequest() {}

  explicit OpenIntlVoiceServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (env) {
      res["Env"] = boost::any(*env);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Env") != m.end() && !m["Env"].empty()) {
      env = make_shared<string>(boost::any_cast<string>(m["Env"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OpenIntlVoiceServiceRequest() = default;
};
class OpenIntlVoiceServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OpenIntlVoiceServiceResponseBody() {}

  explicit OpenIntlVoiceServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~OpenIntlVoiceServiceResponseBody() = default;
};
class OpenIntlVoiceServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenIntlVoiceServiceResponseBody> body{};

  OpenIntlVoiceServiceResponse() {}

  explicit OpenIntlVoiceServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OpenIntlVoiceServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenIntlVoiceServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenIntlVoiceServiceResponse() = default;
};
class OswTest1Request : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  OswTest1Request() {}

  explicit OswTest1Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~OswTest1Request() = default;
};
class OswTest1ResponseBody : public Darabonba::Model {
public:

  OswTest1ResponseBody() {}

  explicit OswTest1ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~OswTest1ResponseBody() = default;
};
class OswTest1Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OswTest1ResponseBody> body{};

  OswTest1Response() {}

  explicit OswTest1Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        OswTest1ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OswTest1ResponseBody>(model1);
      }
    }
  }


  virtual ~OswTest1Response() = default;
};
class QueryFileOssUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> fileKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryFileOssUrlRequest() {}

  explicit QueryFileOssUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryFileOssUrlRequest() = default;
};
class QueryFileOssUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> url{};

  QueryFileOssUrlResponseBody() {}

  explicit QueryFileOssUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryFileOssUrlResponseBody() = default;
};
class QueryFileOssUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFileOssUrlResponseBody> body{};

  QueryFileOssUrlResponse() {}

  explicit QueryFileOssUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFileOssUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFileOssUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFileOssUrlResponse() = default;
};
class QueryHomeStatRequest : public Darabonba::Model {
public:
  shared_ptr<long> businessType{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  QueryHomeStatRequest() {}

  explicit QueryHomeStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<long>(boost::any_cast<long>(m["BusinessType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryHomeStatRequest() = default;
};
class QueryHomeStatResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<long> callFailed{};
  shared_ptr<long> callSuccess{};
  shared_ptr<long> callTotal{};
  shared_ptr<string> date{};
  shared_ptr<long> successRate{};

  QueryHomeStatResponseBodyModelList() {}

  explicit QueryHomeStatResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callFailed) {
      res["CallFailed"] = boost::any(*callFailed);
    }
    if (callSuccess) {
      res["CallSuccess"] = boost::any(*callSuccess);
    }
    if (callTotal) {
      res["CallTotal"] = boost::any(*callTotal);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (successRate) {
      res["SuccessRate"] = boost::any(*successRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallFailed") != m.end() && !m["CallFailed"].empty()) {
      callFailed = make_shared<long>(boost::any_cast<long>(m["CallFailed"]));
    }
    if (m.find("CallSuccess") != m.end() && !m["CallSuccess"].empty()) {
      callSuccess = make_shared<long>(boost::any_cast<long>(m["CallSuccess"]));
    }
    if (m.find("CallTotal") != m.end() && !m["CallTotal"].empty()) {
      callTotal = make_shared<long>(boost::any_cast<long>(m["CallTotal"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("SuccessRate") != m.end() && !m["SuccessRate"].empty()) {
      successRate = make_shared<long>(boost::any_cast<long>(m["SuccessRate"]));
    }
  }


  virtual ~QueryHomeStatResponseBodyModelList() = default;
};
class QueryHomeStatResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> cdrDrUrl{};
  shared_ptr<vector<QueryHomeStatResponseBodyModelList>> list{};

  QueryHomeStatResponseBodyModel() {}

  explicit QueryHomeStatResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdrDrUrl) {
      res["CdrDrUrl"] = boost::any(*cdrDrUrl);
    }
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdrDrUrl") != m.end() && !m["CdrDrUrl"].empty()) {
      cdrDrUrl = make_shared<string>(boost::any_cast<string>(m["CdrDrUrl"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryHomeStatResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryHomeStatResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryHomeStatResponseBodyModelList>>(expect1);
      }
    }
  }


  virtual ~QueryHomeStatResponseBodyModel() = default;
};
class QueryHomeStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<QueryHomeStatResponseBodyModel> model{};
  shared_ptr<string> requestId{};

  QueryHomeStatResponseBody() {}

  explicit QueryHomeStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        QueryHomeStatResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<QueryHomeStatResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryHomeStatResponseBody() = default;
};
class QueryHomeStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryHomeStatResponseBody> body{};

  QueryHomeStatResponse() {}

  explicit QueryHomeStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryHomeStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryHomeStatResponseBody>(model1);
      }
    }
  }


  virtual ~QueryHomeStatResponse() = default;
};
class QueryRecordingEnableRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryRecordingEnableRequest() {}

  explicit QueryRecordingEnableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryRecordingEnableRequest() = default;
};
class QueryRecordingEnableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> enable{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryRecordingEnableResponseBody() {}

  explicit QueryRecordingEnableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryRecordingEnableResponseBody() = default;
};
class QueryRecordingEnableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordingEnableResponseBody> body{};

  QueryRecordingEnableResponse() {}

  explicit QueryRecordingEnableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordingEnableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordingEnableResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordingEnableResponse() = default;
};
class QueryServiceEnableRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QueryServiceEnableRequest() {}

  explicit QueryServiceEnableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QueryServiceEnableRequest() = default;
};
class QueryServiceEnableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> enable{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryServiceEnableResponseBody() {}

  explicit QueryServiceEnableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryServiceEnableResponseBody() = default;
};
class QueryServiceEnableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryServiceEnableResponseBody> body{};

  QueryServiceEnableResponse() {}

  explicit QueryServiceEnableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryServiceEnableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryServiceEnableResponseBody>(model1);
      }
    }
  }


  virtual ~QueryServiceEnableResponse() = default;
};
class RecordingEnableRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  RecordingEnableRequest() {}

  explicit RecordingEnableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RecordingEnableRequest() = default;
};
class RecordingEnableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecordingEnableResponseBody() {}

  explicit RecordingEnableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecordingEnableResponseBody() = default;
};
class RecordingEnableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecordingEnableResponseBody> body{};

  RecordingEnableResponse() {}

  explicit RecordingEnableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecordingEnableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecordingEnableResponseBody>(model1);
      }
    }
  }


  virtual ~RecordingEnableResponse() = default;
};
class SetReceiptUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> cdrDrUrl{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SetReceiptUrlRequest() {}

  explicit SetReceiptUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdrDrUrl) {
      res["CdrDrUrl"] = boost::any(*cdrDrUrl);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdrDrUrl") != m.end() && !m["CdrDrUrl"].empty()) {
      cdrDrUrl = make_shared<string>(boost::any_cast<string>(m["CdrDrUrl"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~SetReceiptUrlRequest() = default;
};
class SetReceiptUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SetReceiptUrlResponseBody() {}

  explicit SetReceiptUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetReceiptUrlResponseBody() = default;
};
class SetReceiptUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetReceiptUrlResponseBody> body{};

  SetReceiptUrlResponse() {}

  explicit SetReceiptUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetReceiptUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetReceiptUrlResponseBody>(model1);
      }
    }
  }


  virtual ~SetReceiptUrlResponse() = default;
};
class SipTrunkDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> endTime{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> startTime{};

  SipTrunkDetailRequest() {}

  explicit SipTrunkDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~SipTrunkDetailRequest() = default;
};
class SipTrunkDetailResponseBodyModelList : public Darabonba::Model {
public:
  shared_ptr<string> answerTime{};
  shared_ptr<long> answered{};
  shared_ptr<string> busiType{};
  shared_ptr<string> callEndTime{};
  shared_ptr<string> callType{};
  shared_ptr<string> calledIp{};
  shared_ptr<string> calledNum{};
  shared_ptr<string> calledNumRegion{};
  shared_ptr<string> calledNumType{};
  shared_ptr<string> callerDisplay{};
  shared_ptr<string> callerIp{};
  shared_ptr<string> callerNum{};
  shared_ptr<string> callerNumRegion{};
  shared_ptr<string> callerNumType{};
  shared_ptr<long> duration{};
  shared_ptr<long> hangup{};
  shared_ptr<long> hangupType{};
  shared_ptr<string> lvnCliType{};
  shared_ptr<string> recordUrl{};
  shared_ptr<string> startTime{};
  shared_ptr<string> userUuid{};
  shared_ptr<string> uuid{};

  SipTrunkDetailResponseBodyModelList() {}

  explicit SipTrunkDetailResponseBodyModelList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerTime) {
      res["AnswerTime"] = boost::any(*answerTime);
    }
    if (answered) {
      res["Answered"] = boost::any(*answered);
    }
    if (busiType) {
      res["BusiType"] = boost::any(*busiType);
    }
    if (callEndTime) {
      res["CallEndTime"] = boost::any(*callEndTime);
    }
    if (callType) {
      res["CallType"] = boost::any(*callType);
    }
    if (calledIp) {
      res["CalledIp"] = boost::any(*calledIp);
    }
    if (calledNum) {
      res["CalledNum"] = boost::any(*calledNum);
    }
    if (calledNumRegion) {
      res["CalledNumRegion"] = boost::any(*calledNumRegion);
    }
    if (calledNumType) {
      res["CalledNumType"] = boost::any(*calledNumType);
    }
    if (callerDisplay) {
      res["CallerDisplay"] = boost::any(*callerDisplay);
    }
    if (callerIp) {
      res["CallerIp"] = boost::any(*callerIp);
    }
    if (callerNum) {
      res["CallerNum"] = boost::any(*callerNum);
    }
    if (callerNumRegion) {
      res["CallerNumRegion"] = boost::any(*callerNumRegion);
    }
    if (callerNumType) {
      res["CallerNumType"] = boost::any(*callerNumType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (hangup) {
      res["Hangup"] = boost::any(*hangup);
    }
    if (hangupType) {
      res["HangupType"] = boost::any(*hangupType);
    }
    if (lvnCliType) {
      res["LvnCliType"] = boost::any(*lvnCliType);
    }
    if (recordUrl) {
      res["RecordUrl"] = boost::any(*recordUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (userUuid) {
      res["UserUuid"] = boost::any(*userUuid);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerTime") != m.end() && !m["AnswerTime"].empty()) {
      answerTime = make_shared<string>(boost::any_cast<string>(m["AnswerTime"]));
    }
    if (m.find("Answered") != m.end() && !m["Answered"].empty()) {
      answered = make_shared<long>(boost::any_cast<long>(m["Answered"]));
    }
    if (m.find("BusiType") != m.end() && !m["BusiType"].empty()) {
      busiType = make_shared<string>(boost::any_cast<string>(m["BusiType"]));
    }
    if (m.find("CallEndTime") != m.end() && !m["CallEndTime"].empty()) {
      callEndTime = make_shared<string>(boost::any_cast<string>(m["CallEndTime"]));
    }
    if (m.find("CallType") != m.end() && !m["CallType"].empty()) {
      callType = make_shared<string>(boost::any_cast<string>(m["CallType"]));
    }
    if (m.find("CalledIp") != m.end() && !m["CalledIp"].empty()) {
      calledIp = make_shared<string>(boost::any_cast<string>(m["CalledIp"]));
    }
    if (m.find("CalledNum") != m.end() && !m["CalledNum"].empty()) {
      calledNum = make_shared<string>(boost::any_cast<string>(m["CalledNum"]));
    }
    if (m.find("CalledNumRegion") != m.end() && !m["CalledNumRegion"].empty()) {
      calledNumRegion = make_shared<string>(boost::any_cast<string>(m["CalledNumRegion"]));
    }
    if (m.find("CalledNumType") != m.end() && !m["CalledNumType"].empty()) {
      calledNumType = make_shared<string>(boost::any_cast<string>(m["CalledNumType"]));
    }
    if (m.find("CallerDisplay") != m.end() && !m["CallerDisplay"].empty()) {
      callerDisplay = make_shared<string>(boost::any_cast<string>(m["CallerDisplay"]));
    }
    if (m.find("CallerIp") != m.end() && !m["CallerIp"].empty()) {
      callerIp = make_shared<string>(boost::any_cast<string>(m["CallerIp"]));
    }
    if (m.find("CallerNum") != m.end() && !m["CallerNum"].empty()) {
      callerNum = make_shared<string>(boost::any_cast<string>(m["CallerNum"]));
    }
    if (m.find("CallerNumRegion") != m.end() && !m["CallerNumRegion"].empty()) {
      callerNumRegion = make_shared<string>(boost::any_cast<string>(m["CallerNumRegion"]));
    }
    if (m.find("CallerNumType") != m.end() && !m["CallerNumType"].empty()) {
      callerNumType = make_shared<string>(boost::any_cast<string>(m["CallerNumType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Hangup") != m.end() && !m["Hangup"].empty()) {
      hangup = make_shared<long>(boost::any_cast<long>(m["Hangup"]));
    }
    if (m.find("HangupType") != m.end() && !m["HangupType"].empty()) {
      hangupType = make_shared<long>(boost::any_cast<long>(m["HangupType"]));
    }
    if (m.find("LvnCliType") != m.end() && !m["LvnCliType"].empty()) {
      lvnCliType = make_shared<string>(boost::any_cast<string>(m["LvnCliType"]));
    }
    if (m.find("RecordUrl") != m.end() && !m["RecordUrl"].empty()) {
      recordUrl = make_shared<string>(boost::any_cast<string>(m["RecordUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("UserUuid") != m.end() && !m["UserUuid"].empty()) {
      userUuid = make_shared<string>(boost::any_cast<string>(m["UserUuid"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~SipTrunkDetailResponseBodyModelList() = default;
};
class SipTrunkDetailResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<SipTrunkDetailResponseBodyModelList>> list{};
  shared_ptr<long> total{};

  SipTrunkDetailResponseBodyModel() {}

  explicit SipTrunkDetailResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<SipTrunkDetailResponseBodyModelList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SipTrunkDetailResponseBodyModelList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<SipTrunkDetailResponseBodyModelList>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~SipTrunkDetailResponseBodyModel() = default;
};
class SipTrunkDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<SipTrunkDetailResponseBodyModel> model{};
  shared_ptr<string> requestId{};

  SipTrunkDetailResponseBody() {}

  explicit SipTrunkDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        SipTrunkDetailResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<SipTrunkDetailResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SipTrunkDetailResponseBody() = default;
};
class SipTrunkDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SipTrunkDetailResponseBody> body{};

  SipTrunkDetailResponse() {}

  explicit SipTrunkDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SipTrunkDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SipTrunkDetailResponseBody>(model1);
      }
    }
  }


  virtual ~SipTrunkDetailResponse() = default;
};
class SubmitGroupCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> fileName{};
  shared_ptr<long> groupCallType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> timingStart{};

  SubmitGroupCallRequest() {}

  explicit SubmitGroupCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (callerIdNumber) {
      res["CallerIdNumber"] = boost::any(*callerIdNumber);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (groupCallType) {
      res["GroupCallType"] = boost::any(*groupCallType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendType) {
      res["SendType"] = boost::any(*sendType);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timingStart) {
      res["TimingStart"] = boost::any(*timingStart);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CallerIdNumber") != m.end() && !m["CallerIdNumber"].empty()) {
      callerIdNumber = make_shared<string>(boost::any_cast<string>(m["CallerIdNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("GroupCallType") != m.end() && !m["GroupCallType"].empty()) {
      groupCallType = make_shared<long>(boost::any_cast<long>(m["GroupCallType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendType") != m.end() && !m["SendType"].empty()) {
      sendType = make_shared<long>(boost::any_cast<long>(m["SendType"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimingStart") != m.end() && !m["TimingStart"].empty()) {
      timingStart = make_shared<string>(boost::any_cast<string>(m["TimingStart"]));
    }
  }


  virtual ~SubmitGroupCallRequest() = default;
};
class SubmitGroupCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  SubmitGroupCallResponseBody() {}

  explicit SubmitGroupCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SubmitGroupCallResponseBody() = default;
};
class SubmitGroupCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitGroupCallResponseBody> body{};

  SubmitGroupCallResponse() {}

  explicit SubmitGroupCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitGroupCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitGroupCallResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitGroupCallResponse() = default;
};
class SubmitNumberRequestNumberList : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<long> inboundConcurrency{};
  shared_ptr<long> outboundConcurrency{};
  shared_ptr<long> phoneType{};
  shared_ptr<long> support{};

  SubmitNumberRequestNumberList() {}

  explicit SubmitNumberRequestNumberList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (inboundConcurrency) {
      res["InboundConcurrency"] = boost::any(*inboundConcurrency);
    }
    if (outboundConcurrency) {
      res["OutboundConcurrency"] = boost::any(*outboundConcurrency);
    }
    if (phoneType) {
      res["PhoneType"] = boost::any(*phoneType);
    }
    if (support) {
      res["Support"] = boost::any(*support);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("InboundConcurrency") != m.end() && !m["InboundConcurrency"].empty()) {
      inboundConcurrency = make_shared<long>(boost::any_cast<long>(m["InboundConcurrency"]));
    }
    if (m.find("OutboundConcurrency") != m.end() && !m["OutboundConcurrency"].empty()) {
      outboundConcurrency = make_shared<long>(boost::any_cast<long>(m["OutboundConcurrency"]));
    }
    if (m.find("PhoneType") != m.end() && !m["PhoneType"].empty()) {
      phoneType = make_shared<long>(boost::any_cast<long>(m["PhoneType"]));
    }
    if (m.find("Support") != m.end() && !m["Support"].empty()) {
      support = make_shared<long>(boost::any_cast<long>(m["Support"]));
    }
  }


  virtual ~SubmitNumberRequestNumberList() = default;
};
class SubmitNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyNote{};
  shared_ptr<string> countryId{};
  shared_ptr<vector<SubmitNumberRequestNumberList>> numberList{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scene{};

  SubmitNumberRequest() {}

  explicit SubmitNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyNote) {
      res["ApplyNote"] = boost::any(*applyNote);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (numberList) {
      vector<boost::any> temp1;
      for(auto item1:*numberList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NumberList"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyNote") != m.end() && !m["ApplyNote"].empty()) {
      applyNote = make_shared<string>(boost::any_cast<string>(m["ApplyNote"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      if (typeid(vector<boost::any>) == m["NumberList"].type()) {
        vector<SubmitNumberRequestNumberList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NumberList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitNumberRequestNumberList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        numberList = make_shared<vector<SubmitNumberRequestNumberList>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~SubmitNumberRequest() = default;
};
class SubmitNumberShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyNote{};
  shared_ptr<string> countryId{};
  shared_ptr<string> numberListShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scene{};

  SubmitNumberShrinkRequest() {}

  explicit SubmitNumberShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyNote) {
      res["ApplyNote"] = boost::any(*applyNote);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (numberListShrink) {
      res["NumberList"] = boost::any(*numberListShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyNote") != m.end() && !m["ApplyNote"].empty()) {
      applyNote = make_shared<string>(boost::any_cast<string>(m["ApplyNote"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("NumberList") != m.end() && !m["NumberList"].empty()) {
      numberListShrink = make_shared<string>(boost::any_cast<string>(m["NumberList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~SubmitNumberShrinkRequest() = default;
};
class SubmitNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};

  SubmitNumberResponseBody() {}

  explicit SubmitNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitNumberResponseBody() = default;
};
class SubmitNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitNumberResponseBody> body{};

  SubmitNumberResponse() {}

  explicit SubmitNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitNumberResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitNumberResponse() = default;
};
class SubmitQualificationRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> businessLicenseFileKey{};
  shared_ptr<string> companyName{};
  shared_ptr<string> contactEmail{};
  shared_ptr<string> contactName{};
  shared_ptr<string> contactPhone{};
  shared_ptr<string> countryId{};
  shared_ptr<string> legalId{};
  shared_ptr<string> legalLicenseFileKey{};
  shared_ptr<string> legalName{};
  shared_ptr<string> networkAccessFileKey{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> unifiedCode{};

  SubmitQualificationRequest() {}

  explicit SubmitQualificationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (businessLicenseFileKey) {
      res["BusinessLicenseFileKey"] = boost::any(*businessLicenseFileKey);
    }
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (contactEmail) {
      res["ContactEmail"] = boost::any(*contactEmail);
    }
    if (contactName) {
      res["ContactName"] = boost::any(*contactName);
    }
    if (contactPhone) {
      res["ContactPhone"] = boost::any(*contactPhone);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (legalId) {
      res["LegalId"] = boost::any(*legalId);
    }
    if (legalLicenseFileKey) {
      res["LegalLicenseFileKey"] = boost::any(*legalLicenseFileKey);
    }
    if (legalName) {
      res["LegalName"] = boost::any(*legalName);
    }
    if (networkAccessFileKey) {
      res["NetworkAccessFileKey"] = boost::any(*networkAccessFileKey);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (unifiedCode) {
      res["UnifiedCode"] = boost::any(*unifiedCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BusinessLicenseFileKey") != m.end() && !m["BusinessLicenseFileKey"].empty()) {
      businessLicenseFileKey = make_shared<string>(boost::any_cast<string>(m["BusinessLicenseFileKey"]));
    }
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("ContactEmail") != m.end() && !m["ContactEmail"].empty()) {
      contactEmail = make_shared<string>(boost::any_cast<string>(m["ContactEmail"]));
    }
    if (m.find("ContactName") != m.end() && !m["ContactName"].empty()) {
      contactName = make_shared<string>(boost::any_cast<string>(m["ContactName"]));
    }
    if (m.find("ContactPhone") != m.end() && !m["ContactPhone"].empty()) {
      contactPhone = make_shared<string>(boost::any_cast<string>(m["ContactPhone"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("LegalId") != m.end() && !m["LegalId"].empty()) {
      legalId = make_shared<string>(boost::any_cast<string>(m["LegalId"]));
    }
    if (m.find("LegalLicenseFileKey") != m.end() && !m["LegalLicenseFileKey"].empty()) {
      legalLicenseFileKey = make_shared<string>(boost::any_cast<string>(m["LegalLicenseFileKey"]));
    }
    if (m.find("LegalName") != m.end() && !m["LegalName"].empty()) {
      legalName = make_shared<string>(boost::any_cast<string>(m["LegalName"]));
    }
    if (m.find("NetworkAccessFileKey") != m.end() && !m["NetworkAccessFileKey"].empty()) {
      networkAccessFileKey = make_shared<string>(boost::any_cast<string>(m["NetworkAccessFileKey"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("UnifiedCode") != m.end() && !m["UnifiedCode"].empty()) {
      unifiedCode = make_shared<string>(boost::any_cast<string>(m["UnifiedCode"]));
    }
  }


  virtual ~SubmitQualificationRequest() = default;
};
class SubmitQualificationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> requestId{};

  SubmitQualificationResponseBody() {}

  explicit SubmitQualificationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitQualificationResponseBody() = default;
};
class SubmitQualificationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitQualificationResponseBody> body{};

  SubmitQualificationResponse() {}

  explicit SubmitQualificationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitQualificationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitQualificationResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitQualificationResponse() = default;
};
class SubmitSipTrunkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applyNote{};
  shared_ptr<string> countryId{};
  shared_ptr<string> inboundIpPorts{};
  shared_ptr<string> outboundIps{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> scene{};

  SubmitSipTrunkRequest() {}

  explicit SubmitSipTrunkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyNote) {
      res["ApplyNote"] = boost::any(*applyNote);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (inboundIpPorts) {
      res["InboundIpPorts"] = boost::any(*inboundIpPorts);
    }
    if (outboundIps) {
      res["OutboundIps"] = boost::any(*outboundIps);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyNote") != m.end() && !m["ApplyNote"].empty()) {
      applyNote = make_shared<string>(boost::any_cast<string>(m["ApplyNote"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("InboundIpPorts") != m.end() && !m["InboundIpPorts"].empty()) {
      inboundIpPorts = make_shared<string>(boost::any_cast<string>(m["InboundIpPorts"]));
    }
    if (m.find("OutboundIps") != m.end() && !m["OutboundIps"].empty()) {
      outboundIps = make_shared<string>(boost::any_cast<string>(m["OutboundIps"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~SubmitSipTrunkRequest() = default;
};
class SubmitSipTrunkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitSipTrunkResponseBody() {}

  explicit SubmitSipTrunkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitSipTrunkResponseBody() = default;
};
class SubmitSipTrunkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitSipTrunkResponseBody> body{};

  SubmitSipTrunkResponse() {}

  explicit SubmitSipTrunkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitSipTrunkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitSipTrunkResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitSipTrunkResponse() = default;
};
class SubmitVoiceFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryId{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  SubmitVoiceFileRequest() {}

  explicit SubmitVoiceFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~SubmitVoiceFileRequest() = default;
};
class SubmitVoiceFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitVoiceFileResponseBody() {}

  explicit SubmitVoiceFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitVoiceFileResponseBody() = default;
};
class SubmitVoiceFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitVoiceFileResponseBody> body{};

  SubmitVoiceFileResponse() {}

  explicit SubmitVoiceFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitVoiceFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitVoiceFileResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitVoiceFileResponse() = default;
};
class SubmitVoiceTtsRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryId{};
  shared_ptr<string> language{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> qualificationId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> speed{};
  shared_ptr<long> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateText{};

  SubmitVoiceTtsRequest() {}

  explicit SubmitVoiceTtsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (qualificationId) {
      res["QualificationId"] = boost::any(*qualificationId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateText) {
      res["TemplateText"] = boost::any(*templateText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("QualificationId") != m.end() && !m["QualificationId"].empty()) {
      qualificationId = make_shared<string>(boost::any_cast<string>(m["QualificationId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateText") != m.end() && !m["TemplateText"].empty()) {
      templateText = make_shared<string>(boost::any_cast<string>(m["TemplateText"]));
    }
  }


  virtual ~SubmitVoiceTtsRequest() = default;
};
class SubmitVoiceTtsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applyId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitVoiceTtsResponseBody() {}

  explicit SubmitVoiceTtsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applyId) {
      res["ApplyId"] = boost::any(*applyId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplyId") != m.end() && !m["ApplyId"].empty()) {
      applyId = make_shared<string>(boost::any_cast<string>(m["ApplyId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitVoiceTtsResponseBody() = default;
};
class SubmitVoiceTtsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitVoiceTtsResponseBody> body{};

  SubmitVoiceTtsResponse() {}

  explicit SubmitVoiceTtsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SubmitVoiceTtsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitVoiceTtsResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitVoiceTtsResponse() = default;
};
class UpdateNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> note{};
  shared_ptr<string> number{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  UpdateNumberRequest() {}

  explicit UpdateNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (note) {
      res["Note"] = boost::any(*note);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Note") != m.end() && !m["Note"].empty()) {
      note = make_shared<string>(boost::any_cast<string>(m["Note"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~UpdateNumberRequest() = default;
};
class UpdateNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateNumberResponseBody() {}

  explicit UpdateNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateNumberResponseBody() = default;
};
class UpdateNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNumberResponseBody> body{};

  UpdateNumberResponse() {}

  explicit UpdateNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNumberResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNumberResponse() = default;
};
class Test02Request : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  Test02Request() {}

  explicit Test02Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~Test02Request() = default;
};
class Test02ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  Test02ResponseBody() {}

  explicit Test02ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~Test02ResponseBody() = default;
};
class Test02Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Test02ResponseBody> body{};

  Test02Response() {}

  explicit Test02Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        Test02ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Test02ResponseBody>(model1);
      }
    }
  }


  virtual ~Test02Response() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  BackendCallGroupResponse backendCallGroupWithOptions(shared_ptr<BackendCallGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BackendCallGroupResponse backendCallGroup(shared_ptr<BackendCallGroupRequest> request);
  BackendCallSignalResponse backendCallSignalWithOptions(shared_ptr<BackendCallSignalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BackendCallSignalResponse backendCallSignal(shared_ptr<BackendCallSignalRequest> request);
  CancleGroupCallResponse cancleGroupCallWithOptions(shared_ptr<CancleGroupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancleGroupCallResponse cancleGroupCall(shared_ptr<CancleGroupCallRequest> request);
  DeleteApplyNumberRecordResponse deleteApplyNumberRecordWithOptions(shared_ptr<DeleteApplyNumberRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApplyNumberRecordResponse deleteApplyNumberRecord(shared_ptr<DeleteApplyNumberRecordRequest> request);
  DeleteQualificationResponse deleteQualificationWithOptions(shared_ptr<DeleteQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteQualificationResponse deleteQualification(shared_ptr<DeleteQualificationRequest> request);
  DeleteSipTrunkApplyResponse deleteSipTrunkApplyWithOptions(shared_ptr<DeleteSipTrunkApplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSipTrunkApplyResponse deleteSipTrunkApply(shared_ptr<DeleteSipTrunkApplyRequest> request);
  DeleteVoiceFileResponse deleteVoiceFileWithOptions(shared_ptr<DeleteVoiceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVoiceFileResponse deleteVoiceFile(shared_ptr<DeleteVoiceFileRequest> request);
  DeleteVoiceTtsResponse deleteVoiceTtsWithOptions(shared_ptr<DeleteVoiceTtsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVoiceTtsResponse deleteVoiceTts(shared_ptr<DeleteVoiceTtsRequest> request);
  DownloadTemplateFileResponse downloadTemplateFileWithOptions(shared_ptr<DownloadTemplateFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DownloadTemplateFileResponse downloadTemplateFile(shared_ptr<DownloadTemplateFileRequest> request);
  GetIntlVoiceOpenStatusResponse getIntlVoiceOpenStatusWithOptions(shared_ptr<GetIntlVoiceOpenStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIntlVoiceOpenStatusResponse getIntlVoiceOpenStatus(shared_ptr<GetIntlVoiceOpenStatusRequest> request);
  GetOssInfoForUploadFileResponse getOssInfoForUploadFileWithOptions(shared_ptr<GetOssInfoForUploadFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOssInfoForUploadFileResponse getOssInfoForUploadFile(shared_ptr<GetOssInfoForUploadFileRequest> request);
  HomeStartResponse homeStartWithOptions(shared_ptr<HomeStartRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HomeStartResponse homeStart(shared_ptr<HomeStartRequest> request);
  ListApplyNumberRecordResponse listApplyNumberRecordWithOptions(shared_ptr<ListApplyNumberRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplyNumberRecordResponse listApplyNumberRecord(shared_ptr<ListApplyNumberRecordRequest> request);
  ListNumberResponse listNumberWithOptions(shared_ptr<ListNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNumberResponse listNumber(shared_ptr<ListNumberRequest> request);
  ListQualificationResponse listQualificationWithOptions(shared_ptr<ListQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQualificationResponse listQualification(shared_ptr<ListQualificationRequest> request);
  ListReceiptResponse listReceiptWithOptions(shared_ptr<ListReceiptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListReceiptResponse listReceipt(shared_ptr<ListReceiptRequest> request);
  ListSipTrunkResponse listSipTrunkWithOptions(shared_ptr<ListSipTrunkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSipTrunkResponse listSipTrunk(shared_ptr<ListSipTrunkRequest> request);
  ListSipTrunkDetailResponse listSipTrunkDetailWithOptions(shared_ptr<ListSipTrunkDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSipTrunkDetailResponse listSipTrunkDetail(shared_ptr<ListSipTrunkDetailRequest> request);
  ListSipTrunkStatResponse listSipTrunkStatWithOptions(shared_ptr<ListSipTrunkStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSipTrunkStatResponse listSipTrunkStat(shared_ptr<ListSipTrunkStatRequest> request);
  ListVoiceCallResponse listVoiceCallWithOptions(shared_ptr<ListVoiceCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVoiceCallResponse listVoiceCall(shared_ptr<ListVoiceCallRequest> request);
  ListVoiceCallDetailResponse listVoiceCallDetailWithOptions(shared_ptr<ListVoiceCallDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVoiceCallDetailResponse listVoiceCallDetail(shared_ptr<ListVoiceCallDetailRequest> request);
  ListVoiceCallStatResponse listVoiceCallStatWithOptions(shared_ptr<ListVoiceCallStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVoiceCallStatResponse listVoiceCallStat(shared_ptr<ListVoiceCallStatRequest> request);
  ListVoiceFileResponse listVoiceFileWithOptions(shared_ptr<ListVoiceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVoiceFileResponse listVoiceFile(shared_ptr<ListVoiceFileRequest> request);
  ListVoiceTtsResponse listVoiceTtsWithOptions(shared_ptr<ListVoiceTtsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVoiceTtsResponse listVoiceTts(shared_ptr<ListVoiceTtsRequest> request);
  NumberEnableResponse numberEnableWithOptions(shared_ptr<NumberEnableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NumberEnableResponse numberEnable(shared_ptr<NumberEnableRequest> request);
  OpenIntlVoiceServiceResponse openIntlVoiceServiceWithOptions(shared_ptr<OpenIntlVoiceServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenIntlVoiceServiceResponse openIntlVoiceService(shared_ptr<OpenIntlVoiceServiceRequest> request);
  OswTest1Response oswTest1WithOptions(shared_ptr<OswTest1Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OswTest1Response oswTest1(shared_ptr<OswTest1Request> request);
  QueryFileOssUrlResponse queryFileOssUrlWithOptions(shared_ptr<QueryFileOssUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFileOssUrlResponse queryFileOssUrl(shared_ptr<QueryFileOssUrlRequest> request);
  QueryHomeStatResponse queryHomeStatWithOptions(shared_ptr<QueryHomeStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryHomeStatResponse queryHomeStat(shared_ptr<QueryHomeStatRequest> request);
  QueryRecordingEnableResponse queryRecordingEnableWithOptions(shared_ptr<QueryRecordingEnableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordingEnableResponse queryRecordingEnable(shared_ptr<QueryRecordingEnableRequest> request);
  QueryServiceEnableResponse queryServiceEnableWithOptions(shared_ptr<QueryServiceEnableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryServiceEnableResponse queryServiceEnable(shared_ptr<QueryServiceEnableRequest> request);
  RecordingEnableResponse recordingEnableWithOptions(shared_ptr<RecordingEnableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecordingEnableResponse recordingEnable(shared_ptr<RecordingEnableRequest> request);
  SetReceiptUrlResponse setReceiptUrlWithOptions(shared_ptr<SetReceiptUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetReceiptUrlResponse setReceiptUrl(shared_ptr<SetReceiptUrlRequest> request);
  SipTrunkDetailResponse sipTrunkDetailWithOptions(shared_ptr<SipTrunkDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SipTrunkDetailResponse sipTrunkDetail(shared_ptr<SipTrunkDetailRequest> request);
  SubmitGroupCallResponse submitGroupCallWithOptions(shared_ptr<SubmitGroupCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitGroupCallResponse submitGroupCall(shared_ptr<SubmitGroupCallRequest> request);
  SubmitNumberResponse submitNumberWithOptions(shared_ptr<SubmitNumberRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitNumberResponse submitNumber(shared_ptr<SubmitNumberRequest> request);
  SubmitQualificationResponse submitQualificationWithOptions(shared_ptr<SubmitQualificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitQualificationResponse submitQualification(shared_ptr<SubmitQualificationRequest> request);
  SubmitSipTrunkResponse submitSipTrunkWithOptions(shared_ptr<SubmitSipTrunkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitSipTrunkResponse submitSipTrunk(shared_ptr<SubmitSipTrunkRequest> request);
  SubmitVoiceFileResponse submitVoiceFileWithOptions(shared_ptr<SubmitVoiceFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitVoiceFileResponse submitVoiceFile(shared_ptr<SubmitVoiceFileRequest> request);
  SubmitVoiceTtsResponse submitVoiceTtsWithOptions(shared_ptr<SubmitVoiceTtsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitVoiceTtsResponse submitVoiceTts(shared_ptr<SubmitVoiceTtsRequest> request);
  UpdateNumberResponse updateNumberWithOptions(shared_ptr<UpdateNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNumberResponse updateNumber(shared_ptr<UpdateNumberRequest> request);
  Test02Response test02WithOptions(shared_ptr<Test02Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Test02Response test02(shared_ptr<Test02Request> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dyvmsapi-intl20211015

#endif
