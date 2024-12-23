// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYVMSAPI-INTL20211015_H_
#define ALIBABACLOUD_DYVMSAPI-INTL20211015_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
  shared_ptr<string> outId{};
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
  shared_ptr<string> outId{};
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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

  void validate() override {}

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
  shared_ptr<string> outId{};
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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

  void validate() override {}

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
class GroupCallRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> calledNumber{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<string> signature{};
  shared_ptr<string> signatureNonce{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  GroupCallRequest() {}

  explicit GroupCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (signatureNonce) {
      res["SignatureNonce"] = boost::any(*signatureNonce);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (timingStart) {
      res["TimingStart"] = boost::any(*timingStart);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("SignatureNonce") != m.end() && !m["SignatureNonce"].empty()) {
      signatureNonce = make_shared<string>(boost::any_cast<string>(m["SignatureNonce"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("TimingStart") != m.end() && !m["TimingStart"].empty()) {
      timingStart = make_shared<string>(boost::any_cast<string>(m["TimingStart"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~GroupCallRequest() = default;
};
class GroupCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumberShrink{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<string> signature{};
  shared_ptr<string> signatureNonce{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  GroupCallShrinkRequest() {}

  explicit GroupCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (signatureNonce) {
      res["SignatureNonce"] = boost::any(*signatureNonce);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (timingStart) {
      res["TimingStart"] = boost::any(*timingStart);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("SignatureNonce") != m.end() && !m["SignatureNonce"].empty()) {
      signatureNonce = make_shared<string>(boost::any_cast<string>(m["SignatureNonce"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("TimingStart") != m.end() && !m["TimingStart"].empty()) {
      timingStart = make_shared<string>(boost::any_cast<string>(m["TimingStart"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~GroupCallShrinkRequest() = default;
};
class GroupCallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GroupCallResponseBodyModel() {}

  explicit GroupCallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GroupCallResponseBodyModel() = default;
};
class GroupCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<GroupCallResponseBodyModel> model{};
  shared_ptr<string> requestId{};

  GroupCallResponseBody() {}

  explicit GroupCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        GroupCallResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<GroupCallResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GroupCallResponseBody() = default;
};
class GroupCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GroupCallResponseBody> body{};

  GroupCallResponse() {}

  explicit GroupCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GroupCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GroupCallResponseBody>(model1);
      }
    }
  }


  virtual ~GroupCallResponse() = default;
};
class SignalCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<string> signature{};
  shared_ptr<string> signatureNonce{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  SignalCallRequest() {}

  explicit SignalCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (signatureNonce) {
      res["SignatureNonce"] = boost::any(*signatureNonce);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (timingStart) {
      res["TimingStart"] = boost::any(*timingStart);
    }
    if (ttsCode) {
      res["TtsCode"] = boost::any(*ttsCode);
    }
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
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
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallerIdNumber") != m.end() && !m["CallerIdNumber"].empty()) {
      callerIdNumber = make_shared<string>(boost::any_cast<string>(m["CallerIdNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("SignatureNonce") != m.end() && !m["SignatureNonce"].empty()) {
      signatureNonce = make_shared<string>(boost::any_cast<string>(m["SignatureNonce"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<long>(boost::any_cast<long>(m["Speed"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("TimingStart") != m.end() && !m["TimingStart"].empty()) {
      timingStart = make_shared<string>(boost::any_cast<string>(m["TimingStart"]));
    }
    if (m.find("TtsCode") != m.end() && !m["TtsCode"].empty()) {
      ttsCode = make_shared<string>(boost::any_cast<string>(m["TtsCode"]));
    }
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~SignalCallRequest() = default;
};
class SignalCallResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<string> callId{};

  SignalCallResponseBodyModel() {}

  explicit SignalCallResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callId) {
      res["CallId"] = boost::any(*callId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallId") != m.end() && !m["CallId"].empty()) {
      callId = make_shared<string>(boost::any_cast<string>(m["CallId"]));
    }
  }


  virtual ~SignalCallResponseBodyModel() = default;
};
class SignalCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<SignalCallResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SignalCallResponseBody() {}

  explicit SignalCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        SignalCallResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<SignalCallResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SignalCallResponseBody() = default;
};
class SignalCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SignalCallResponseBody> body{};

  SignalCallResponse() {}

  explicit SignalCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        SignalCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SignalCallResponseBody>(model1);
      }
    }
  }


  virtual ~SignalCallResponse() = default;
};
class VoiceGroupCallRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> calledNumber{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  VoiceGroupCallRequest() {}

  explicit VoiceGroupCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~VoiceGroupCallRequest() = default;
};
class VoiceGroupCallShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumberShrink{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  VoiceGroupCallShrinkRequest() {}

  explicit VoiceGroupCallShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~VoiceGroupCallShrinkRequest() = default;
};
class VoiceGroupCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VoiceGroupCallResponseBody() {}

  explicit VoiceGroupCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VoiceGroupCallResponseBody() = default;
};
class VoiceGroupCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceGroupCallResponseBody> body{};

  VoiceGroupCallResponse() {}

  explicit VoiceGroupCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        VoiceGroupCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceGroupCallResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceGroupCallResponse() = default;
};
class VoiceSingleCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callerIdNumber{};
  shared_ptr<string> countryId{};
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> playTimes{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<long> sendType{};
  shared_ptr<long> speed{};
  shared_ptr<string> taskName{};
  shared_ptr<string> timingStart{};
  shared_ptr<string> ttsCode{};
  shared_ptr<string> ttsParam{};
  shared_ptr<string> voiceCode{};
  shared_ptr<long> volume{};

  VoiceSingleCallRequest() {}

  explicit VoiceSingleCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (outId) {
      res["OutId"] = boost::any(*outId);
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
    if (ttsParam) {
      res["TtsParam"] = boost::any(*ttsParam);
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
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallerIdNumber") != m.end() && !m["CallerIdNumber"].empty()) {
      callerIdNumber = make_shared<string>(boost::any_cast<string>(m["CallerIdNumber"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
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
    if (m.find("TtsParam") != m.end() && !m["TtsParam"].empty()) {
      ttsParam = make_shared<string>(boost::any_cast<string>(m["TtsParam"]));
    }
    if (m.find("VoiceCode") != m.end() && !m["VoiceCode"].empty()) {
      voiceCode = make_shared<string>(boost::any_cast<string>(m["VoiceCode"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~VoiceSingleCallRequest() = default;
};
class VoiceSingleCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  VoiceSingleCallResponseBody() {}

  explicit VoiceSingleCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~VoiceSingleCallResponseBody() = default;
};
class VoiceSingleCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VoiceSingleCallResponseBody> body{};

  VoiceSingleCallResponse() {}

  explicit VoiceSingleCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        VoiceSingleCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VoiceSingleCallResponseBody>(model1);
      }
    }
  }


  virtual ~VoiceSingleCallResponse() = default;
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
  GroupCallResponse groupCallWithOptions(shared_ptr<GroupCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GroupCallResponse groupCall(shared_ptr<GroupCallRequest> request);
  SignalCallResponse signalCallWithOptions(shared_ptr<SignalCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SignalCallResponse signalCall(shared_ptr<SignalCallRequest> request);
  VoiceGroupCallResponse voiceGroupCallWithOptions(shared_ptr<VoiceGroupCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceGroupCallResponse voiceGroupCall(shared_ptr<VoiceGroupCallRequest> request);
  VoiceSingleCallResponse voiceSingleCallWithOptions(shared_ptr<VoiceSingleCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VoiceSingleCallResponse voiceSingleCall(shared_ptr<VoiceSingleCallRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dyvmsapi-intl20211015

#endif
