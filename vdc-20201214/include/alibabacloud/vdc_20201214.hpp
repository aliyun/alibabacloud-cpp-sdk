// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VDC20201214_H_
#define ALIBABACLOUD_VDC20201214_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Vdc20201214 {
class DescribeAppConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DescribeAppConfigRequest() {}

  explicit DescribeAppConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
  }


  virtual ~DescribeAppConfigRequest() = default;
};
class DescribeAppConfigResponseBodyThresholdConfig : public Darabonba::Model {
public:
  shared_ptr<long> joinSlowTime{};

  DescribeAppConfigResponseBodyThresholdConfig() {}

  explicit DescribeAppConfigResponseBodyThresholdConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinSlowTime) {
      res["JoinSlowTime"] = boost::any(*joinSlowTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinSlowTime") != m.end() && !m["JoinSlowTime"].empty()) {
      joinSlowTime = make_shared<long>(boost::any_cast<long>(m["JoinSlowTime"]));
    }
  }


  virtual ~DescribeAppConfigResponseBodyThresholdConfig() = default;
};
class DescribeAppConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeAppConfigResponseBodyThresholdConfig> thresholdConfig{};

  DescribeAppConfigResponseBody() {}

  explicit DescribeAppConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (thresholdConfig) {
      res["ThresholdConfig"] = thresholdConfig ? boost::any(thresholdConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ThresholdConfig") != m.end() && !m["ThresholdConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ThresholdConfig"].type()) {
        DescribeAppConfigResponseBodyThresholdConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ThresholdConfig"]));
        thresholdConfig = make_shared<DescribeAppConfigResponseBodyThresholdConfig>(model1);
      }
    }
  }


  virtual ~DescribeAppConfigResponseBody() = default;
};
class DescribeAppConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppConfigResponseBody> body{};

  DescribeAppConfigResponse() {}

  explicit DescribeAppConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppConfigResponse() = default;
};
class DescribeCallRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> extDataType{};
  shared_ptr<bool> queryExpInfo{};

  DescribeCallRequest() {}

  explicit DescribeCallRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (extDataType) {
      res["ExtDataType"] = boost::any(*extDataType);
    }
    if (queryExpInfo) {
      res["QueryExpInfo"] = boost::any(*queryExpInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("ExtDataType") != m.end() && !m["ExtDataType"].empty()) {
      extDataType = make_shared<string>(boost::any_cast<string>(m["ExtDataType"]));
    }
    if (m.find("QueryExpInfo") != m.end() && !m["QueryExpInfo"].empty()) {
      queryExpInfo = make_shared<bool>(boost::any_cast<bool>(m["QueryExpInfo"]));
    }
  }


  virtual ~DescribeCallRequest() = default;
};
class DescribeCallResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeCallResponseBodyCallInfo() {}

  explicit DescribeCallResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeCallResponseBodyCallInfo() = default;
};
class DescribeCallResponseBodyUserDetailListDurMetricStatData : public Darabonba::Model {
public:
  shared_ptr<long> pubAudio{};
  shared_ptr<long> pubVideo1080{};
  shared_ptr<long> pubVideo360{};
  shared_ptr<long> pubVideo720{};
  shared_ptr<long> pubVideoScreenShare{};
  shared_ptr<long> subAudio{};
  shared_ptr<long> subVideo1080{};
  shared_ptr<long> subVideo360{};
  shared_ptr<long> subVideo720{};
  shared_ptr<long> subVideoScreenShare{};

  DescribeCallResponseBodyUserDetailListDurMetricStatData() {}

  explicit DescribeCallResponseBodyUserDetailListDurMetricStatData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubAudio) {
      res["PubAudio"] = boost::any(*pubAudio);
    }
    if (pubVideo1080) {
      res["PubVideo1080"] = boost::any(*pubVideo1080);
    }
    if (pubVideo360) {
      res["PubVideo360"] = boost::any(*pubVideo360);
    }
    if (pubVideo720) {
      res["PubVideo720"] = boost::any(*pubVideo720);
    }
    if (pubVideoScreenShare) {
      res["PubVideoScreenShare"] = boost::any(*pubVideoScreenShare);
    }
    if (subAudio) {
      res["SubAudio"] = boost::any(*subAudio);
    }
    if (subVideo1080) {
      res["SubVideo1080"] = boost::any(*subVideo1080);
    }
    if (subVideo360) {
      res["SubVideo360"] = boost::any(*subVideo360);
    }
    if (subVideo720) {
      res["SubVideo720"] = boost::any(*subVideo720);
    }
    if (subVideoScreenShare) {
      res["SubVideoScreenShare"] = boost::any(*subVideoScreenShare);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubAudio") != m.end() && !m["PubAudio"].empty()) {
      pubAudio = make_shared<long>(boost::any_cast<long>(m["PubAudio"]));
    }
    if (m.find("PubVideo1080") != m.end() && !m["PubVideo1080"].empty()) {
      pubVideo1080 = make_shared<long>(boost::any_cast<long>(m["PubVideo1080"]));
    }
    if (m.find("PubVideo360") != m.end() && !m["PubVideo360"].empty()) {
      pubVideo360 = make_shared<long>(boost::any_cast<long>(m["PubVideo360"]));
    }
    if (m.find("PubVideo720") != m.end() && !m["PubVideo720"].empty()) {
      pubVideo720 = make_shared<long>(boost::any_cast<long>(m["PubVideo720"]));
    }
    if (m.find("PubVideoScreenShare") != m.end() && !m["PubVideoScreenShare"].empty()) {
      pubVideoScreenShare = make_shared<long>(boost::any_cast<long>(m["PubVideoScreenShare"]));
    }
    if (m.find("SubAudio") != m.end() && !m["SubAudio"].empty()) {
      subAudio = make_shared<long>(boost::any_cast<long>(m["SubAudio"]));
    }
    if (m.find("SubVideo1080") != m.end() && !m["SubVideo1080"].empty()) {
      subVideo1080 = make_shared<long>(boost::any_cast<long>(m["SubVideo1080"]));
    }
    if (m.find("SubVideo360") != m.end() && !m["SubVideo360"].empty()) {
      subVideo360 = make_shared<long>(boost::any_cast<long>(m["SubVideo360"]));
    }
    if (m.find("SubVideo720") != m.end() && !m["SubVideo720"].empty()) {
      subVideo720 = make_shared<long>(boost::any_cast<long>(m["SubVideo720"]));
    }
    if (m.find("SubVideoScreenShare") != m.end() && !m["SubVideoScreenShare"].empty()) {
      subVideoScreenShare = make_shared<long>(boost::any_cast<long>(m["SubVideoScreenShare"]));
    }
  }


  virtual ~DescribeCallResponseBodyUserDetailListDurMetricStatData() = default;
};
class DescribeCallResponseBodyUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeCallResponseBodyUserDetailListOnlinePeriods() {}

  explicit DescribeCallResponseBodyUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeCallResponseBodyUserDetailListOnlinePeriods() = default;
};
class DescribeCallResponseBodyUserDetailList : public Darabonba::Model {
public:
  shared_ptr<string> callExp{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<DescribeCallResponseBodyUserDetailListDurMetricStatData> durMetricStatData{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeCallResponseBodyUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIdAlias{};

  DescribeCallResponseBodyUserDetailList() {}

  explicit DescribeCallResponseBodyUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callExp) {
      res["CallExp"] = boost::any(*callExp);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (durMetricStatData) {
      res["DurMetricStatData"] = durMetricStatData ? boost::any(durMetricStatData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIdAlias) {
      res["UserIdAlias"] = boost::any(*userIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallExp") != m.end() && !m["CallExp"].empty()) {
      callExp = make_shared<string>(boost::any_cast<string>(m["CallExp"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("DurMetricStatData") != m.end() && !m["DurMetricStatData"].empty()) {
      if (typeid(map<string, boost::any>) == m["DurMetricStatData"].type()) {
        DescribeCallResponseBodyUserDetailListDurMetricStatData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DurMetricStatData"]));
        durMetricStatData = make_shared<DescribeCallResponseBodyUserDetailListDurMetricStatData>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeCallResponseBodyUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallResponseBodyUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeCallResponseBodyUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIdAlias") != m.end() && !m["UserIdAlias"].empty()) {
      userIdAlias = make_shared<string>(boost::any_cast<string>(m["UserIdAlias"]));
    }
  }


  virtual ~DescribeCallResponseBodyUserDetailList() = default;
};
class DescribeCallResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCallResponseBodyCallInfo> callInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeCallResponseBodyUserDetailList>> userDetailList{};

  DescribeCallResponseBody() {}

  explicit DescribeCallResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*userDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserDetailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeCallResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeCallResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserDetailList") != m.end() && !m["UserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserDetailList"].type()) {
        vector<DescribeCallResponseBodyUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallResponseBodyUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userDetailList = make_shared<vector<DescribeCallResponseBodyUserDetailList>>(expect1);
      }
    }
  }


  virtual ~DescribeCallResponseBody() = default;
};
class DescribeCallResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallResponseBody> body{};

  DescribeCallResponse() {}

  explicit DescribeCallResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCallResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallResponse() = default;
};
class DescribeCallInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeCallInfoRequest() {}

  explicit DescribeCallInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeCallInfoRequest() = default;
};
class DescribeCallInfoResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeCallInfoResponseBodyCallInfo() {}

  explicit DescribeCallInfoResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeCallInfoResponseBodyCallInfo() = default;
};
class DescribeCallInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCallInfoResponseBodyCallInfo> callInfo{};
  shared_ptr<string> requestId{};

  DescribeCallInfoResponseBody() {}

  explicit DescribeCallInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeCallInfoResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeCallInfoResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCallInfoResponseBody() = default;
};
class DescribeCallInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallInfoResponseBody> body{};

  DescribeCallInfoResponse() {}

  explicit DescribeCallInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCallInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallInfoResponse() = default;
};
class DescribeCallListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<string> orderBy{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryMode{};
  shared_ptr<long> startTs{};
  shared_ptr<string> userId{};

  DescribeCallListRequest() {}

  explicit DescribeCallListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryMode) {
      res["QueryMode"] = boost::any(*queryMode);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryMode") != m.end() && !m["QueryMode"].empty()) {
      queryMode = make_shared<string>(boost::any_cast<string>(m["QueryMode"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeCallListRequest() = default;
};
class DescribeCallListResponseBodyCallList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> badExpUserCnt{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<long> userCnt{};

  DescribeCallListResponseBodyCallList() {}

  explicit DescribeCallListResponseBodyCallList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (badExpUserCnt) {
      res["BadExpUserCnt"] = boost::any(*badExpUserCnt);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (userCnt) {
      res["UserCnt"] = boost::any(*userCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BadExpUserCnt") != m.end() && !m["BadExpUserCnt"].empty()) {
      badExpUserCnt = make_shared<long>(boost::any_cast<long>(m["BadExpUserCnt"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("UserCnt") != m.end() && !m["UserCnt"].empty()) {
      userCnt = make_shared<long>(boost::any_cast<long>(m["UserCnt"]));
    }
  }


  virtual ~DescribeCallListResponseBodyCallList() = default;
};
class DescribeCallListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCallListResponseBodyCallList>> callList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};

  DescribeCallListResponseBody() {}

  explicit DescribeCallListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callList) {
      vector<boost::any> temp1;
      for(auto item1:*callList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallList") != m.end() && !m["CallList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallList"].type()) {
        vector<DescribeCallListResponseBodyCallList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallListResponseBodyCallList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callList = make_shared<vector<DescribeCallListResponseBodyCallList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
  }


  virtual ~DescribeCallListResponseBody() = default;
};
class DescribeCallListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallListResponseBody> body{};

  DescribeCallListResponse() {}

  explicit DescribeCallListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCallListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallListResponse() = default;
};
class DescribeCallUserExpRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeCallUserExpRequest() {}

  explicit DescribeCallUserExpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeCallUserExpRequest() = default;
};
class DescribeCallUserExpResponseBodyExpInfoList : public Darabonba::Model {
public:
  shared_ptr<string> callExp{};
  shared_ptr<string> userId{};

  DescribeCallUserExpResponseBodyExpInfoList() {}

  explicit DescribeCallUserExpResponseBodyExpInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callExp) {
      res["CallExp"] = boost::any(*callExp);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallExp") != m.end() && !m["CallExp"].empty()) {
      callExp = make_shared<string>(boost::any_cast<string>(m["CallExp"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeCallUserExpResponseBodyExpInfoList() = default;
};
class DescribeCallUserExpResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCallUserExpResponseBodyExpInfoList>> expInfoList{};
  shared_ptr<string> requestId{};

  DescribeCallUserExpResponseBody() {}

  explicit DescribeCallUserExpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*expInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExpInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpInfoList") != m.end() && !m["ExpInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["ExpInfoList"].type()) {
        vector<DescribeCallUserExpResponseBodyExpInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExpInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallUserExpResponseBodyExpInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        expInfoList = make_shared<vector<DescribeCallUserExpResponseBodyExpInfoList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCallUserExpResponseBody() = default;
};
class DescribeCallUserExpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallUserExpResponseBody> body{};

  DescribeCallUserExpResponse() {}

  explicit DescribeCallUserExpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCallUserExpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallUserExpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallUserExpResponse() = default;
};
class DescribeCallUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> extDataType{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> queryExpInfo{};
  shared_ptr<string> roleType{};
  shared_ptr<string> userId{};

  DescribeCallUserListRequest() {}

  explicit DescribeCallUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (extDataType) {
      res["ExtDataType"] = boost::any(*extDataType);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryExpInfo) {
      res["QueryExpInfo"] = boost::any(*queryExpInfo);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("ExtDataType") != m.end() && !m["ExtDataType"].empty()) {
      extDataType = make_shared<string>(boost::any_cast<string>(m["ExtDataType"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryExpInfo") != m.end() && !m["QueryExpInfo"].empty()) {
      queryExpInfo = make_shared<bool>(boost::any_cast<bool>(m["QueryExpInfo"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeCallUserListRequest() = default;
};
class DescribeCallUserListResponseBodyUserDetailListDurMetricStatData : public Darabonba::Model {
public:
  shared_ptr<long> pubAudio{};
  shared_ptr<long> pubVideo360{};
  shared_ptr<long> pubVideo720{};
  shared_ptr<long> pubVideoScreenShare{};
  shared_ptr<long> subAudio{};
  shared_ptr<long> subVideo1080{};
  shared_ptr<long> subVideo360{};
  shared_ptr<long> subVideo720{};
  shared_ptr<long> subVideoScreenShare{};

  DescribeCallUserListResponseBodyUserDetailListDurMetricStatData() {}

  explicit DescribeCallUserListResponseBodyUserDetailListDurMetricStatData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubAudio) {
      res["PubAudio"] = boost::any(*pubAudio);
    }
    if (pubVideo360) {
      res["PubVideo360"] = boost::any(*pubVideo360);
    }
    if (pubVideo720) {
      res["PubVideo720"] = boost::any(*pubVideo720);
    }
    if (pubVideoScreenShare) {
      res["PubVideoScreenShare"] = boost::any(*pubVideoScreenShare);
    }
    if (subAudio) {
      res["SubAudio"] = boost::any(*subAudio);
    }
    if (subVideo1080) {
      res["SubVideo1080"] = boost::any(*subVideo1080);
    }
    if (subVideo360) {
      res["SubVideo360"] = boost::any(*subVideo360);
    }
    if (subVideo720) {
      res["SubVideo720"] = boost::any(*subVideo720);
    }
    if (subVideoScreenShare) {
      res["SubVideoScreenShare"] = boost::any(*subVideoScreenShare);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubAudio") != m.end() && !m["PubAudio"].empty()) {
      pubAudio = make_shared<long>(boost::any_cast<long>(m["PubAudio"]));
    }
    if (m.find("PubVideo360") != m.end() && !m["PubVideo360"].empty()) {
      pubVideo360 = make_shared<long>(boost::any_cast<long>(m["PubVideo360"]));
    }
    if (m.find("PubVideo720") != m.end() && !m["PubVideo720"].empty()) {
      pubVideo720 = make_shared<long>(boost::any_cast<long>(m["PubVideo720"]));
    }
    if (m.find("PubVideoScreenShare") != m.end() && !m["PubVideoScreenShare"].empty()) {
      pubVideoScreenShare = make_shared<long>(boost::any_cast<long>(m["PubVideoScreenShare"]));
    }
    if (m.find("SubAudio") != m.end() && !m["SubAudio"].empty()) {
      subAudio = make_shared<long>(boost::any_cast<long>(m["SubAudio"]));
    }
    if (m.find("SubVideo1080") != m.end() && !m["SubVideo1080"].empty()) {
      subVideo1080 = make_shared<long>(boost::any_cast<long>(m["SubVideo1080"]));
    }
    if (m.find("SubVideo360") != m.end() && !m["SubVideo360"].empty()) {
      subVideo360 = make_shared<long>(boost::any_cast<long>(m["SubVideo360"]));
    }
    if (m.find("SubVideo720") != m.end() && !m["SubVideo720"].empty()) {
      subVideo720 = make_shared<long>(boost::any_cast<long>(m["SubVideo720"]));
    }
    if (m.find("SubVideoScreenShare") != m.end() && !m["SubVideoScreenShare"].empty()) {
      subVideoScreenShare = make_shared<long>(boost::any_cast<long>(m["SubVideoScreenShare"]));
    }
  }


  virtual ~DescribeCallUserListResponseBodyUserDetailListDurMetricStatData() = default;
};
class DescribeCallUserListResponseBodyUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeCallUserListResponseBodyUserDetailListOnlinePeriods() {}

  explicit DescribeCallUserListResponseBodyUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeCallUserListResponseBodyUserDetailListOnlinePeriods() = default;
};
class DescribeCallUserListResponseBodyUserDetailList : public Darabonba::Model {
public:
  shared_ptr<string> callExp{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<DescribeCallUserListResponseBodyUserDetailListDurMetricStatData> durMetricStatData{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> locationCn{};
  shared_ptr<string> locationEn{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeCallUserListResponseBodyUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIdAlias{};

  DescribeCallUserListResponseBodyUserDetailList() {}

  explicit DescribeCallUserListResponseBodyUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callExp) {
      res["CallExp"] = boost::any(*callExp);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (durMetricStatData) {
      res["DurMetricStatData"] = durMetricStatData ? boost::any(durMetricStatData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (locationCn) {
      res["LocationCn"] = boost::any(*locationCn);
    }
    if (locationEn) {
      res["LocationEn"] = boost::any(*locationEn);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIdAlias) {
      res["UserIdAlias"] = boost::any(*userIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallExp") != m.end() && !m["CallExp"].empty()) {
      callExp = make_shared<string>(boost::any_cast<string>(m["CallExp"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("DurMetricStatData") != m.end() && !m["DurMetricStatData"].empty()) {
      if (typeid(map<string, boost::any>) == m["DurMetricStatData"].type()) {
        DescribeCallUserListResponseBodyUserDetailListDurMetricStatData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DurMetricStatData"]));
        durMetricStatData = make_shared<DescribeCallUserListResponseBodyUserDetailListDurMetricStatData>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("LocationCn") != m.end() && !m["LocationCn"].empty()) {
      locationCn = make_shared<string>(boost::any_cast<string>(m["LocationCn"]));
    }
    if (m.find("LocationEn") != m.end() && !m["LocationEn"].empty()) {
      locationEn = make_shared<string>(boost::any_cast<string>(m["LocationEn"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeCallUserListResponseBodyUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallUserListResponseBodyUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeCallUserListResponseBodyUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIdAlias") != m.end() && !m["UserIdAlias"].empty()) {
      userIdAlias = make_shared<string>(boost::any_cast<string>(m["UserIdAlias"]));
    }
  }


  virtual ~DescribeCallUserListResponseBodyUserDetailList() = default;
};
class DescribeCallUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};
  shared_ptr<vector<DescribeCallUserListResponseBodyUserDetailList>> userDetailList{};

  DescribeCallUserListResponseBody() {}

  explicit DescribeCallUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    if (userDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*userDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserDetailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
    if (m.find("UserDetailList") != m.end() && !m["UserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserDetailList"].type()) {
        vector<DescribeCallUserListResponseBodyUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCallUserListResponseBodyUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userDetailList = make_shared<vector<DescribeCallUserListResponseBodyUserDetailList>>(expect1);
      }
    }
  }


  virtual ~DescribeCallUserListResponseBody() = default;
};
class DescribeCallUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCallUserListResponseBody> body{};

  DescribeCallUserListResponse() {}

  explicit DescribeCallUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCallUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCallUserListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCallUserListResponse() = default;
};
class DescribeChannelAreaDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> parentArea{};

  DescribeChannelAreaDistributionStatDataRequest() {}

  explicit DescribeChannelAreaDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (parentArea) {
      res["ParentArea"] = boost::any(*parentArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("ParentArea") != m.end() && !m["ParentArea"].empty()) {
      parentArea = make_shared<string>(boost::any_cast<string>(m["ParentArea"]));
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataRequest() = default;
};
class DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList : public Darabonba::Model {
public:
  shared_ptr<string> areaName{};
  shared_ptr<long> callUserCount{};
  shared_ptr<string> highQualityTransmissionRate{};
  shared_ptr<long> pubUserCount{};
  shared_ptr<long> subUserCount{};

  DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList() {}

  explicit DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaName) {
      res["AreaName"] = boost::any(*areaName);
    }
    if (callUserCount) {
      res["CallUserCount"] = boost::any(*callUserCount);
    }
    if (highQualityTransmissionRate) {
      res["HighQualityTransmissionRate"] = boost::any(*highQualityTransmissionRate);
    }
    if (pubUserCount) {
      res["PubUserCount"] = boost::any(*pubUserCount);
    }
    if (subUserCount) {
      res["SubUserCount"] = boost::any(*subUserCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaName") != m.end() && !m["AreaName"].empty()) {
      areaName = make_shared<string>(boost::any_cast<string>(m["AreaName"]));
    }
    if (m.find("CallUserCount") != m.end() && !m["CallUserCount"].empty()) {
      callUserCount = make_shared<long>(boost::any_cast<long>(m["CallUserCount"]));
    }
    if (m.find("HighQualityTransmissionRate") != m.end() && !m["HighQualityTransmissionRate"].empty()) {
      highQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["HighQualityTransmissionRate"]));
    }
    if (m.find("PubUserCount") != m.end() && !m["PubUserCount"].empty()) {
      pubUserCount = make_shared<long>(boost::any_cast<long>(m["PubUserCount"]));
    }
    if (m.find("SubUserCount") != m.end() && !m["SubUserCount"].empty()) {
      subUserCount = make_shared<long>(boost::any_cast<long>(m["SubUserCount"]));
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList() = default;
};
class DescribeChannelAreaDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>> areaStatList{};
  shared_ptr<string> requestId{};

  DescribeChannelAreaDistributionStatDataResponseBody() {}

  explicit DescribeChannelAreaDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (areaStatList) {
      vector<boost::any> temp1;
      for(auto item1:*areaStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AreaStatList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AreaStatList") != m.end() && !m["AreaStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["AreaStatList"].type()) {
        vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AreaStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        areaStatList = make_shared<vector<DescribeChannelAreaDistributionStatDataResponseBodyAreaStatList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataResponseBody() = default;
};
class DescribeChannelAreaDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelAreaDistributionStatDataResponseBody> body{};

  DescribeChannelAreaDistributionStatDataResponse() {}

  explicit DescribeChannelAreaDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelAreaDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelAreaDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelAreaDistributionStatDataResponse() = default;
};
class DescribeChannelDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> statDim{};

  DescribeChannelDistributionStatDataRequest() {}

  explicit DescribeChannelDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeChannelDistributionStatDataRequest() = default;
};
class DescribeChannelDistributionStatDataResponseBodyStatList : public Darabonba::Model {
public:
  shared_ptr<long> callUserCount{};
  shared_ptr<string> callUserRatio{};
  shared_ptr<string> name{};

  DescribeChannelDistributionStatDataResponseBodyStatList() {}

  explicit DescribeChannelDistributionStatDataResponseBodyStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callUserCount) {
      res["CallUserCount"] = boost::any(*callUserCount);
    }
    if (callUserRatio) {
      res["CallUserRatio"] = boost::any(*callUserRatio);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallUserCount") != m.end() && !m["CallUserCount"].empty()) {
      callUserCount = make_shared<long>(boost::any_cast<long>(m["CallUserCount"]));
    }
    if (m.find("CallUserRatio") != m.end() && !m["CallUserRatio"].empty()) {
      callUserRatio = make_shared<string>(boost::any_cast<string>(m["CallUserRatio"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeChannelDistributionStatDataResponseBodyStatList() = default;
};
class DescribeChannelDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeChannelDistributionStatDataResponseBodyStatList>> statList{};

  DescribeChannelDistributionStatDataResponseBody() {}

  explicit DescribeChannelDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statList) {
      vector<boost::any> temp1;
      for(auto item1:*statList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatList") != m.end() && !m["StatList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatList"].type()) {
        vector<DescribeChannelDistributionStatDataResponseBodyStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelDistributionStatDataResponseBodyStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statList = make_shared<vector<DescribeChannelDistributionStatDataResponseBodyStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeChannelDistributionStatDataResponseBody() = default;
};
class DescribeChannelDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelDistributionStatDataResponseBody> body{};

  DescribeChannelDistributionStatDataResponse() {}

  explicit DescribeChannelDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelDistributionStatDataResponse() = default;
};
class DescribeChannelJoinInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelJoinInfoRequest() {}

  explicit DescribeChannelJoinInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelJoinInfoRequest() = default;
};
class DescribeChannelJoinInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> joinFastSuccessRate{};
  shared_ptr<long> joinSlowThreshold{};
  shared_ptr<string> requestId{};

  DescribeChannelJoinInfoResponseBody() {}

  explicit DescribeChannelJoinInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinFastSuccessRate) {
      res["JoinFastSuccessRate"] = boost::any(*joinFastSuccessRate);
    }
    if (joinSlowThreshold) {
      res["JoinSlowThreshold"] = boost::any(*joinSlowThreshold);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinFastSuccessRate") != m.end() && !m["JoinFastSuccessRate"].empty()) {
      joinFastSuccessRate = make_shared<string>(boost::any_cast<string>(m["JoinFastSuccessRate"]));
    }
    if (m.find("JoinSlowThreshold") != m.end() && !m["JoinSlowThreshold"].empty()) {
      joinSlowThreshold = make_shared<long>(boost::any_cast<long>(m["JoinSlowThreshold"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelJoinInfoResponseBody() = default;
};
class DescribeChannelJoinInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelJoinInfoResponseBody> body{};

  DescribeChannelJoinInfoResponse() {}

  explicit DescribeChannelJoinInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelJoinInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelJoinInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelJoinInfoResponse() = default;
};
class DescribeChannelOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelOverallDataRequest() {}

  explicit DescribeChannelOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelOverallDataRequest() = default;
};
class DescribeChannelOverallDataResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeChannelOverallDataResponseBodyCallInfo() {}

  explicit DescribeChannelOverallDataResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyCallInfo() = default;
};
class DescribeChannelOverallDataResponseBodyMetricDatasNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeChannelOverallDataResponseBodyMetricDatasNodes() {}

  explicit DescribeChannelOverallDataResponseBodyMetricDatasNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyMetricDatasNodes() = default;
};
class DescribeChannelOverallDataResponseBodyMetricDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelOverallDataResponseBodyMetricDatasNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeChannelOverallDataResponseBodyMetricDatas() {}

  explicit DescribeChannelOverallDataResponseBodyMetricDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeChannelOverallDataResponseBodyMetricDatasNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelOverallDataResponseBodyMetricDatasNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeChannelOverallDataResponseBodyMetricDatasNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyMetricDatas() = default;
};
class DescribeChannelOverallDataResponseBodyOverallData : public Darabonba::Model {
public:
  shared_ptr<double> connAvgTime{};
  shared_ptr<double> fiveSecJoinRate{};
  shared_ptr<double> totalAudioStuckRate{};
  shared_ptr<double> totalVideoStuckRate{};
  shared_ptr<double> totalVideoVagueRate{};

  DescribeChannelOverallDataResponseBodyOverallData() {}

  explicit DescribeChannelOverallDataResponseBodyOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connAvgTime) {
      res["ConnAvgTime"] = boost::any(*connAvgTime);
    }
    if (fiveSecJoinRate) {
      res["FiveSecJoinRate"] = boost::any(*fiveSecJoinRate);
    }
    if (totalAudioStuckRate) {
      res["TotalAudioStuckRate"] = boost::any(*totalAudioStuckRate);
    }
    if (totalVideoStuckRate) {
      res["TotalVideoStuckRate"] = boost::any(*totalVideoStuckRate);
    }
    if (totalVideoVagueRate) {
      res["TotalVideoVagueRate"] = boost::any(*totalVideoVagueRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnAvgTime") != m.end() && !m["ConnAvgTime"].empty()) {
      connAvgTime = make_shared<double>(boost::any_cast<double>(m["ConnAvgTime"]));
    }
    if (m.find("FiveSecJoinRate") != m.end() && !m["FiveSecJoinRate"].empty()) {
      fiveSecJoinRate = make_shared<double>(boost::any_cast<double>(m["FiveSecJoinRate"]));
    }
    if (m.find("TotalAudioStuckRate") != m.end() && !m["TotalAudioStuckRate"].empty()) {
      totalAudioStuckRate = make_shared<double>(boost::any_cast<double>(m["TotalAudioStuckRate"]));
    }
    if (m.find("TotalVideoStuckRate") != m.end() && !m["TotalVideoStuckRate"].empty()) {
      totalVideoStuckRate = make_shared<double>(boost::any_cast<double>(m["TotalVideoStuckRate"]));
    }
    if (m.find("TotalVideoVagueRate") != m.end() && !m["TotalVideoVagueRate"].empty()) {
      totalVideoVagueRate = make_shared<double>(boost::any_cast<double>(m["TotalVideoVagueRate"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBodyOverallData() = default;
};
class DescribeChannelOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeChannelOverallDataResponseBodyCallInfo> callInfo{};
  shared_ptr<vector<DescribeChannelOverallDataResponseBodyMetricDatas>> metricDatas{};
  shared_ptr<DescribeChannelOverallDataResponseBodyOverallData> overallData{};
  shared_ptr<string> requestId{};

  DescribeChannelOverallDataResponseBody() {}

  explicit DescribeChannelOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (metricDatas) {
      vector<boost::any> temp1;
      for(auto item1:*metricDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricDatas"] = boost::any(temp1);
    }
    if (overallData) {
      res["OverallData"] = overallData ? boost::any(overallData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeChannelOverallDataResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeChannelOverallDataResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("MetricDatas") != m.end() && !m["MetricDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricDatas"].type()) {
        vector<DescribeChannelOverallDataResponseBodyMetricDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelOverallDataResponseBodyMetricDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricDatas = make_shared<vector<DescribeChannelOverallDataResponseBodyMetricDatas>>(expect1);
      }
    }
    if (m.find("OverallData") != m.end() && !m["OverallData"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallData"].type()) {
        DescribeChannelOverallDataResponseBodyOverallData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallData"]));
        overallData = make_shared<DescribeChannelOverallDataResponseBodyOverallData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelOverallDataResponseBody() = default;
};
class DescribeChannelOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelOverallDataResponseBody> body{};

  DescribeChannelOverallDataResponse() {}

  explicit DescribeChannelOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelOverallDataResponse() = default;
};
class DescribeChannelTopPubUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelTopPubUserListRequest() {}

  explicit DescribeChannelTopPubUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelTopPubUserListRequest() = default;
};
class DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods() {}

  explicit DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods() = default;
};
class DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList : public Darabonba::Model {
public:
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> userId{};

  DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList() {}

  explicit DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList() = default;
};
class DescribeChannelTopPubUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>> topPubUserDetailList{};

  DescribeChannelTopPubUserListResponseBody() {}

  explicit DescribeChannelTopPubUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (topPubUserDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*topPubUserDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopPubUserDetailList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TopPubUserDetailList") != m.end() && !m["TopPubUserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["TopPubUserDetailList"].type()) {
        vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopPubUserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topPubUserDetailList = make_shared<vector<DescribeChannelTopPubUserListResponseBodyTopPubUserDetailList>>(expect1);
      }
    }
  }


  virtual ~DescribeChannelTopPubUserListResponseBody() = default;
};
class DescribeChannelTopPubUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelTopPubUserListResponseBody> body{};

  DescribeChannelTopPubUserListResponse() {}

  explicit DescribeChannelTopPubUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelTopPubUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelTopPubUserListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelTopPubUserListResponse() = default;
};
class DescribeChannelUserMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};

  DescribeChannelUserMetricsRequest() {}

  explicit DescribeChannelUserMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
  }


  virtual ~DescribeChannelUserMetricsRequest() = default;
};
class DescribeChannelUserMetricsResponseBodyMetricDatasNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeChannelUserMetricsResponseBodyMetricDatasNodes() {}

  explicit DescribeChannelUserMetricsResponseBodyMetricDatasNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBodyMetricDatasNodes() = default;
};
class DescribeChannelUserMetricsResponseBodyMetricDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelUserMetricsResponseBodyMetricDatasNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeChannelUserMetricsResponseBodyMetricDatas() {}

  explicit DescribeChannelUserMetricsResponseBodyMetricDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeChannelUserMetricsResponseBodyMetricDatasNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelUserMetricsResponseBodyMetricDatasNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeChannelUserMetricsResponseBodyMetricDatasNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBodyMetricDatas() = default;
};
class DescribeChannelUserMetricsResponseBodyOverallData : public Darabonba::Model {
public:
  shared_ptr<long> totalBadExpNum{};
  shared_ptr<long> totalJoinFailNum{};
  shared_ptr<long> totalPubUserNum{};
  shared_ptr<long> totalSubUserNum{};
  shared_ptr<long> totalUserNum{};

  DescribeChannelUserMetricsResponseBodyOverallData() {}

  explicit DescribeChannelUserMetricsResponseBodyOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalBadExpNum) {
      res["TotalBadExpNum"] = boost::any(*totalBadExpNum);
    }
    if (totalJoinFailNum) {
      res["TotalJoinFailNum"] = boost::any(*totalJoinFailNum);
    }
    if (totalPubUserNum) {
      res["TotalPubUserNum"] = boost::any(*totalPubUserNum);
    }
    if (totalSubUserNum) {
      res["TotalSubUserNum"] = boost::any(*totalSubUserNum);
    }
    if (totalUserNum) {
      res["TotalUserNum"] = boost::any(*totalUserNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalBadExpNum") != m.end() && !m["TotalBadExpNum"].empty()) {
      totalBadExpNum = make_shared<long>(boost::any_cast<long>(m["TotalBadExpNum"]));
    }
    if (m.find("TotalJoinFailNum") != m.end() && !m["TotalJoinFailNum"].empty()) {
      totalJoinFailNum = make_shared<long>(boost::any_cast<long>(m["TotalJoinFailNum"]));
    }
    if (m.find("TotalPubUserNum") != m.end() && !m["TotalPubUserNum"].empty()) {
      totalPubUserNum = make_shared<long>(boost::any_cast<long>(m["TotalPubUserNum"]));
    }
    if (m.find("TotalSubUserNum") != m.end() && !m["TotalSubUserNum"].empty()) {
      totalSubUserNum = make_shared<long>(boost::any_cast<long>(m["TotalSubUserNum"]));
    }
    if (m.find("TotalUserNum") != m.end() && !m["TotalUserNum"].empty()) {
      totalUserNum = make_shared<long>(boost::any_cast<long>(m["TotalUserNum"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBodyOverallData() = default;
};
class DescribeChannelUserMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeChannelUserMetricsResponseBodyMetricDatas>> metricDatas{};
  shared_ptr<DescribeChannelUserMetricsResponseBodyOverallData> overallData{};
  shared_ptr<string> requestId{};

  DescribeChannelUserMetricsResponseBody() {}

  explicit DescribeChannelUserMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricDatas) {
      vector<boost::any> temp1;
      for(auto item1:*metricDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MetricDatas"] = boost::any(temp1);
    }
    if (overallData) {
      res["OverallData"] = overallData ? boost::any(overallData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricDatas") != m.end() && !m["MetricDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["MetricDatas"].type()) {
        vector<DescribeChannelUserMetricsResponseBodyMetricDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MetricDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeChannelUserMetricsResponseBodyMetricDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metricDatas = make_shared<vector<DescribeChannelUserMetricsResponseBodyMetricDatas>>(expect1);
      }
    }
    if (m.find("OverallData") != m.end() && !m["OverallData"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallData"].type()) {
        DescribeChannelUserMetricsResponseBodyOverallData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallData"]));
        overallData = make_shared<DescribeChannelUserMetricsResponseBodyOverallData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeChannelUserMetricsResponseBody() = default;
};
class DescribeChannelUserMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeChannelUserMetricsResponseBody> body{};

  DescribeChannelUserMetricsResponse() {}

  explicit DescribeChannelUserMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeChannelUserMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeChannelUserMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeChannelUserMetricsResponse() = default;
};
class DescribeEndPointEventListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> userIdList{};

  DescribeEndPointEventListRequest() {}

  explicit DescribeEndPointEventListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      userIdList = make_shared<string>(boost::any_cast<string>(m["UserIdList"]));
    }
  }


  virtual ~DescribeEndPointEventListRequest() = default;
};
class DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList : public Darabonba::Model {
public:
  shared_ptr<string> acs{};
  shared_ptr<string> eventCode{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<string> os{};
  shared_ptr<string> sdk{};
  shared_ptr<string> streamName{};
  shared_ptr<string> streamType{};
  shared_ptr<string> trackCode{};
  shared_ptr<string> trackName{};
  shared_ptr<long> ts{};
  shared_ptr<string> tsInMs{};
  shared_ptr<string> userId{};

  DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList() {}

  explicit DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acs) {
      res["Acs"] = boost::any(*acs);
    }
    if (eventCode) {
      res["EventCode"] = boost::any(*eventCode);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (sdk) {
      res["Sdk"] = boost::any(*sdk);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (trackCode) {
      res["TrackCode"] = boost::any(*trackCode);
    }
    if (trackName) {
      res["TrackName"] = boost::any(*trackName);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    if (tsInMs) {
      res["TsInMs"] = boost::any(*tsInMs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acs") != m.end() && !m["Acs"].empty()) {
      acs = make_shared<string>(boost::any_cast<string>(m["Acs"]));
    }
    if (m.find("EventCode") != m.end() && !m["EventCode"].empty()) {
      eventCode = make_shared<string>(boost::any_cast<string>(m["EventCode"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Sdk") != m.end() && !m["Sdk"].empty()) {
      sdk = make_shared<string>(boost::any_cast<string>(m["Sdk"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<string>(boost::any_cast<string>(m["StreamType"]));
    }
    if (m.find("TrackCode") != m.end() && !m["TrackCode"].empty()) {
      trackCode = make_shared<string>(boost::any_cast<string>(m["TrackCode"]));
    }
    if (m.find("TrackName") != m.end() && !m["TrackName"].empty()) {
      trackName = make_shared<string>(boost::any_cast<string>(m["TrackName"]));
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
    if (m.find("TsInMs") != m.end() && !m["TsInMs"].empty()) {
      tsInMs = make_shared<string>(boost::any_cast<string>(m["TsInMs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList() = default;
};
class DescribeEndPointEventListResponseBodyNodesEventDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>> eventList{};
  shared_ptr<long> ts{};

  DescribeEndPointEventListResponseBodyNodesEventDataItems() {}

  explicit DescribeEndPointEventListResponseBodyNodesEventDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventList) {
      vector<boost::any> temp1;
      for(auto item1:*eventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventList"] = boost::any(temp1);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventList") != m.end() && !m["EventList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventList"].type()) {
        vector<DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventList = make_shared<vector<DescribeEndPointEventListResponseBodyNodesEventDataItemsEventList>>(expect1);
      }
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBodyNodesEventDataItems() = default;
};
class DescribeEndPointEventListResponseBodyNodes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointEventListResponseBodyNodesEventDataItems>> eventDataItems{};
  shared_ptr<string> userId{};

  DescribeEndPointEventListResponseBodyNodes() {}

  explicit DescribeEndPointEventListResponseBodyNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDataItems) {
      vector<boost::any> temp1;
      for(auto item1:*eventDataItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventDataItems"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDataItems") != m.end() && !m["EventDataItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EventDataItems"].type()) {
        vector<DescribeEndPointEventListResponseBodyNodesEventDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventDataItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointEventListResponseBodyNodesEventDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventDataItems = make_shared<vector<DescribeEndPointEventListResponseBodyNodesEventDataItems>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBodyNodes() = default;
};
class DescribeEndPointEventListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointEventListResponseBodyNodes>> nodes{};
  shared_ptr<string> requestId{};

  DescribeEndPointEventListResponseBody() {}

  explicit DescribeEndPointEventListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeEndPointEventListResponseBodyNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointEventListResponseBodyNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeEndPointEventListResponseBodyNodes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeEndPointEventListResponseBody() = default;
};
class DescribeEndPointEventListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEndPointEventListResponseBody> body{};

  DescribeEndPointEventListResponse() {}

  explicit DescribeEndPointEventListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEndPointEventListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndPointEventListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndPointEventListResponse() = default;
};
class DescribeEndPointMetricDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> metrics{};
  shared_ptr<string> pubCallIdList{};
  shared_ptr<string> pubUserId{};
  shared_ptr<string> subUserId{};

  DescribeEndPointMetricDataRequest() {}

  explicit DescribeEndPointMetricDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (metrics) {
      res["Metrics"] = boost::any(*metrics);
    }
    if (pubCallIdList) {
      res["PubCallIdList"] = boost::any(*pubCallIdList);
    }
    if (pubUserId) {
      res["PubUserId"] = boost::any(*pubUserId);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Metrics") != m.end() && !m["Metrics"].empty()) {
      metrics = make_shared<string>(boost::any_cast<string>(m["Metrics"]));
    }
    if (m.find("PubCallIdList") != m.end() && !m["PubCallIdList"].empty()) {
      pubCallIdList = make_shared<string>(boost::any_cast<string>(m["PubCallIdList"]));
    }
    if (m.find("PubUserId") != m.end() && !m["PubUserId"].empty()) {
      pubUserId = make_shared<string>(boost::any_cast<string>(m["PubUserId"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DescribeEndPointMetricDataRequest() = default;
};
class DescribeEndPointMetricDataResponseBodyPubMetricsNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeEndPointMetricDataResponseBodyPubMetricsNodes() {}

  explicit DescribeEndPointMetricDataResponseBodyPubMetricsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodyPubMetricsNodes() = default;
};
class DescribeEndPointMetricDataResponseBodyPubMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodyPubMetricsNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeEndPointMetricDataResponseBodyPubMetrics() {}

  explicit DescribeEndPointMetricDataResponseBodyPubMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeEndPointMetricDataResponseBodyPubMetricsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodyPubMetricsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeEndPointMetricDataResponseBodyPubMetricsNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodyPubMetrics() = default;
};
class DescribeEndPointMetricDataResponseBodySubMetricsNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeEndPointMetricDataResponseBodySubMetricsNodes() {}

  explicit DescribeEndPointMetricDataResponseBodySubMetricsNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodySubMetricsNodes() = default;
};
class DescribeEndPointMetricDataResponseBodySubMetrics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodySubMetricsNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeEndPointMetricDataResponseBodySubMetrics() {}

  explicit DescribeEndPointMetricDataResponseBodySubMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeEndPointMetricDataResponseBodySubMetricsNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodySubMetricsNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeEndPointMetricDataResponseBodySubMetricsNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBodySubMetrics() = default;
};
class DescribeEndPointMetricDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodyPubMetrics>> pubMetrics{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeEndPointMetricDataResponseBodySubMetrics>> subMetrics{};

  DescribeEndPointMetricDataResponseBody() {}

  explicit DescribeEndPointMetricDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pubMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*pubMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PubMetrics"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*subMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubMetrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PubMetrics") != m.end() && !m["PubMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["PubMetrics"].type()) {
        vector<DescribeEndPointMetricDataResponseBodyPubMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PubMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodyPubMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pubMetrics = make_shared<vector<DescribeEndPointMetricDataResponseBodyPubMetrics>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubMetrics") != m.end() && !m["SubMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["SubMetrics"].type()) {
        vector<DescribeEndPointMetricDataResponseBodySubMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEndPointMetricDataResponseBodySubMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subMetrics = make_shared<vector<DescribeEndPointMetricDataResponseBodySubMetrics>>(expect1);
      }
    }
  }


  virtual ~DescribeEndPointMetricDataResponseBody() = default;
};
class DescribeEndPointMetricDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEndPointMetricDataResponseBody> body{};

  DescribeEndPointMetricDataResponse() {}

  explicit DescribeEndPointMetricDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEndPointMetricDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEndPointMetricDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEndPointMetricDataResponse() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> startTs{};

  DescribeFaultDiagnosisFactorDistributionStatRequest() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatRequest() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList : public Darabonba::Model {
public:
  shared_ptr<string> factorId{};
  shared_ptr<long> userCount{};
  shared_ptr<double> userRatio{};

  DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factorId) {
      res["FactorId"] = boost::any(*factorId);
    }
    if (userCount) {
      res["UserCount"] = boost::any(*userCount);
    }
    if (userRatio) {
      res["UserRatio"] = boost::any(*userRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FactorId") != m.end() && !m["FactorId"].empty()) {
      factorId = make_shared<string>(boost::any_cast<string>(m["FactorId"]));
    }
    if (m.find("UserCount") != m.end() && !m["UserCount"].empty()) {
      userCount = make_shared<long>(boost::any_cast<long>(m["UserCount"]));
    }
    if (m.find("UserRatio") != m.end() && !m["UserRatio"].empty()) {
      userRatio = make_shared<double>(boost::any_cast<double>(m["UserRatio"]));
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>> statList{};

  DescribeFaultDiagnosisFactorDistributionStatResponseBody() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statList) {
      vector<boost::any> temp1;
      for(auto item1:*statList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StatList") != m.end() && !m["StatList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatList"].type()) {
        vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statList = make_shared<vector<DescribeFaultDiagnosisFactorDistributionStatResponseBodyStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatResponseBody() = default;
};
class DescribeFaultDiagnosisFactorDistributionStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisFactorDistributionStatResponseBody> body{};

  DescribeFaultDiagnosisFactorDistributionStatResponse() {}

  explicit DescribeFaultDiagnosisFactorDistributionStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaultDiagnosisFactorDistributionStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisFactorDistributionStatResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisFactorDistributionStatResponse() = default;
};
class DescribeFaultDiagnosisOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endTs{};
  shared_ptr<long> startTs{};
  shared_ptr<string> statDim{};

  DescribeFaultDiagnosisOverallDataRequest() {}

  explicit DescribeFaultDiagnosisOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataRequest() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBodyMetricData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>> nodes{};

  DescribeFaultDiagnosisOverallDataResponseBodyMetricData() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBodyMetricData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeFaultDiagnosisOverallDataResponseBodyMetricDataNodes>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBodyMetricData() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBodyOverallData : public Darabonba::Model {
public:
  shared_ptr<long> faultUserCount{};
  shared_ptr<double> faultUserRatio{};
  shared_ptr<long> totalUserCount{};

  DescribeFaultDiagnosisOverallDataResponseBodyOverallData() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBodyOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faultUserCount) {
      res["FaultUserCount"] = boost::any(*faultUserCount);
    }
    if (faultUserRatio) {
      res["FaultUserRatio"] = boost::any(*faultUserRatio);
    }
    if (totalUserCount) {
      res["TotalUserCount"] = boost::any(*totalUserCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaultUserCount") != m.end() && !m["FaultUserCount"].empty()) {
      faultUserCount = make_shared<long>(boost::any_cast<long>(m["FaultUserCount"]));
    }
    if (m.find("FaultUserRatio") != m.end() && !m["FaultUserRatio"].empty()) {
      faultUserRatio = make_shared<double>(boost::any_cast<double>(m["FaultUserRatio"]));
    }
    if (m.find("TotalUserCount") != m.end() && !m["TotalUserCount"].empty()) {
      totalUserCount = make_shared<long>(boost::any_cast<long>(m["TotalUserCount"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBodyOverallData() = default;
};
class DescribeFaultDiagnosisOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFaultDiagnosisOverallDataResponseBodyMetricData> metricData{};
  shared_ptr<DescribeFaultDiagnosisOverallDataResponseBodyOverallData> overallData{};
  shared_ptr<string> requestId{};

  DescribeFaultDiagnosisOverallDataResponseBody() {}

  explicit DescribeFaultDiagnosisOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metricData) {
      res["MetricData"] = metricData ? boost::any(metricData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (overallData) {
      res["OverallData"] = overallData ? boost::any(overallData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MetricData") != m.end() && !m["MetricData"].empty()) {
      if (typeid(map<string, boost::any>) == m["MetricData"].type()) {
        DescribeFaultDiagnosisOverallDataResponseBodyMetricData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MetricData"]));
        metricData = make_shared<DescribeFaultDiagnosisOverallDataResponseBodyMetricData>(model1);
      }
    }
    if (m.find("OverallData") != m.end() && !m["OverallData"].empty()) {
      if (typeid(map<string, boost::any>) == m["OverallData"].type()) {
        DescribeFaultDiagnosisOverallDataResponseBodyOverallData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OverallData"]));
        overallData = make_shared<DescribeFaultDiagnosisOverallDataResponseBodyOverallData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponseBody() = default;
};
class DescribeFaultDiagnosisOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisOverallDataResponseBody> body{};

  DescribeFaultDiagnosisOverallDataResponse() {}

  explicit DescribeFaultDiagnosisOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaultDiagnosisOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisOverallDataResponse() = default;
};
class DescribeFaultDiagnosisUserDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<string> faultType{};
  shared_ptr<bool> queryCallUserInfo{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailRequest() {}

  explicit DescribeFaultDiagnosisUserDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (faultType) {
      res["FaultType"] = boost::any(*faultType);
    }
    if (queryCallUserInfo) {
      res["QueryCallUserInfo"] = boost::any(*queryCallUserInfo);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("FaultType") != m.end() && !m["FaultType"].empty()) {
      faultType = make_shared<string>(boost::any_cast<string>(m["FaultType"]));
    }
    if (m.find("QueryCallUserInfo") != m.end() && !m["QueryCallUserInfo"].empty()) {
      queryCallUserInfo = make_shared<bool>(boost::any_cast<bool>(m["QueryCallUserInfo"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailRequest() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyCallInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> callStatus{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};

  DescribeFaultDiagnosisUserDetailResponseBodyCallInfo() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyCallInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyCallInfo() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList : public Darabonba::Model {
public:
  shared_ptr<string> acs{};
  shared_ptr<string> eventCode{};
  shared_ptr<string> eventName{};
  shared_ptr<string> eventType{};
  shared_ptr<string> os{};
  shared_ptr<string> sdk{};
  shared_ptr<string> streamName{};
  shared_ptr<string> streamType{};
  shared_ptr<string> trackCode{};
  shared_ptr<string> trackName{};
  shared_ptr<long> ts{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acs) {
      res["Acs"] = boost::any(*acs);
    }
    if (eventCode) {
      res["EventCode"] = boost::any(*eventCode);
    }
    if (eventName) {
      res["EventName"] = boost::any(*eventName);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (sdk) {
      res["Sdk"] = boost::any(*sdk);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (trackCode) {
      res["TrackCode"] = boost::any(*trackCode);
    }
    if (trackName) {
      res["TrackName"] = boost::any(*trackName);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Acs") != m.end() && !m["Acs"].empty()) {
      acs = make_shared<string>(boost::any_cast<string>(m["Acs"]));
    }
    if (m.find("EventCode") != m.end() && !m["EventCode"].empty()) {
      eventCode = make_shared<string>(boost::any_cast<string>(m["EventCode"]));
    }
    if (m.find("EventName") != m.end() && !m["EventName"].empty()) {
      eventName = make_shared<string>(boost::any_cast<string>(m["EventName"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("Sdk") != m.end() && !m["Sdk"].empty()) {
      sdk = make_shared<string>(boost::any_cast<string>(m["Sdk"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<string>(boost::any_cast<string>(m["StreamType"]));
    }
    if (m.find("TrackCode") != m.end() && !m["TrackCode"].empty()) {
      trackCode = make_shared<string>(boost::any_cast<string>(m["TrackCode"]));
    }
    if (m.find("TrackName") != m.end() && !m["TrackName"].empty()) {
      trackName = make_shared<string>(boost::any_cast<string>(m["TrackName"]));
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>> eventList{};
  shared_ptr<long> ts{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventList) {
      vector<boost::any> temp1;
      for(auto item1:*eventList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventList"] = boost::any(temp1);
    }
    if (ts) {
      res["Ts"] = boost::any(*ts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventList") != m.end() && !m["EventList"].empty()) {
      if (typeid(vector<boost::any>) == m["EventList"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventList = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItemsEventList>>(expect1);
      }
    }
    if (m.find("Ts") != m.end() && !m["Ts"].empty()) {
      ts = make_shared<long>(boost::any_cast<long>(m["Ts"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>> eventDataItems{};
  shared_ptr<string> role{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventDataItems) {
      vector<boost::any> temp1;
      for(auto item1:*eventDataItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EventDataItems"] = boost::any(temp1);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventDataItems") != m.end() && !m["EventDataItems"].empty()) {
      if (typeid(vector<boost::any>) == m["EventDataItems"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EventDataItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eventDataItems = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatasEventDataItems>>(expect1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes>> nodes{};
  shared_ptr<string> role{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatasNodes>>(expect1);
      }
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFactorList : public Darabonba::Model {
public:
  shared_ptr<string> factorId{};
  shared_ptr<string> faultSource{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>> relatedEventDatas{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>> relatedMetricDatas{};

  DescribeFaultDiagnosisUserDetailResponseBodyFactorList() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFactorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factorId) {
      res["FactorId"] = boost::any(*factorId);
    }
    if (faultSource) {
      res["FaultSource"] = boost::any(*faultSource);
    }
    if (relatedEventDatas) {
      vector<boost::any> temp1;
      for(auto item1:*relatedEventDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedEventDatas"] = boost::any(temp1);
    }
    if (relatedMetricDatas) {
      vector<boost::any> temp1;
      for(auto item1:*relatedMetricDatas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedMetricDatas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FactorId") != m.end() && !m["FactorId"].empty()) {
      factorId = make_shared<string>(boost::any_cast<string>(m["FactorId"]));
    }
    if (m.find("FaultSource") != m.end() && !m["FaultSource"].empty()) {
      faultSource = make_shared<string>(boost::any_cast<string>(m["FaultSource"]));
    }
    if (m.find("RelatedEventDatas") != m.end() && !m["RelatedEventDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedEventDatas"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedEventDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedEventDatas = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedEventDatas>>(expect1);
      }
    }
    if (m.find("RelatedMetricDatas") != m.end() && !m["RelatedMetricDatas"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedMetricDatas"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedMetricDatas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedMetricDatas = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorListRelatedMetricDatas>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFactorList() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>> nodes{};

  DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricDataNodes>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBodyUserDetail : public Darabonba::Model {
public:
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserDetailResponseBodyUserDetail() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBodyUserDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyUserDetailOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBodyUserDetail() = default;
};
class DescribeFaultDiagnosisUserDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyCallInfo> callInfo{};
  shared_ptr<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>> factorList{};
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData> faultMetricData{};
  shared_ptr<vector<string>> networkOperators{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBodyUserDetail> userDetail{};

  DescribeFaultDiagnosisUserDetailResponseBody() {}

  explicit DescribeFaultDiagnosisUserDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callInfo) {
      res["CallInfo"] = callInfo ? boost::any(callInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (factorList) {
      vector<boost::any> temp1;
      for(auto item1:*factorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FactorList"] = boost::any(temp1);
    }
    if (faultMetricData) {
      res["FaultMetricData"] = faultMetricData ? boost::any(faultMetricData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (networkOperators) {
      res["NetworkOperators"] = boost::any(*networkOperators);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userDetail) {
      res["UserDetail"] = userDetail ? boost::any(userDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallInfo") != m.end() && !m["CallInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CallInfo"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBodyCallInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CallInfo"]));
        callInfo = make_shared<DescribeFaultDiagnosisUserDetailResponseBodyCallInfo>(model1);
      }
    }
    if (m.find("FactorList") != m.end() && !m["FactorList"].empty()) {
      if (typeid(vector<boost::any>) == m["FactorList"].type()) {
        vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FactorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserDetailResponseBodyFactorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        factorList = make_shared<vector<DescribeFaultDiagnosisUserDetailResponseBodyFactorList>>(expect1);
      }
    }
    if (m.find("FaultMetricData") != m.end() && !m["FaultMetricData"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaultMetricData"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaultMetricData"]));
        faultMetricData = make_shared<DescribeFaultDiagnosisUserDetailResponseBodyFaultMetricData>(model1);
      }
    }
    if (m.find("NetworkOperators") != m.end() && !m["NetworkOperators"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkOperators"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkOperators"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkOperators = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserDetail") != m.end() && !m["UserDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserDetail"].type()) {
        DescribeFaultDiagnosisUserDetailResponseBodyUserDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserDetail"]));
        userDetail = make_shared<DescribeFaultDiagnosisUserDetailResponseBodyUserDetail>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponseBody() = default;
};
class DescribeFaultDiagnosisUserDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisUserDetailResponseBody> body{};

  DescribeFaultDiagnosisUserDetailResponse() {}

  explicit DescribeFaultDiagnosisUserDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaultDiagnosisUserDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisUserDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserDetailResponse() = default;
};
class DescribeFaultDiagnosisUserListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> endTs{};
  shared_ptr<string> faultTypes{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTs{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserListRequest() {}

  explicit DescribeFaultDiagnosisUserListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (faultTypes) {
      res["FaultTypes"] = boost::any(*faultTypes);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("FaultTypes") != m.end() && !m["FaultTypes"].empty()) {
      faultTypes = make_shared<string>(boost::any_cast<string>(m["FaultTypes"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserListRequest() = default;
};
class DescribeFaultDiagnosisUserListResponseBodyUserListFaultList : public Darabonba::Model {
public:
  shared_ptr<string> faultType{};

  DescribeFaultDiagnosisUserListResponseBodyUserListFaultList() {}

  explicit DescribeFaultDiagnosisUserListResponseBodyUserListFaultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faultType) {
      res["FaultType"] = boost::any(*faultType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaultType") != m.end() && !m["FaultType"].empty()) {
      faultType = make_shared<string>(boost::any_cast<string>(m["FaultType"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponseBodyUserListFaultList() = default;
};
class DescribeFaultDiagnosisUserListResponseBodyUserList : public Darabonba::Model {
public:
  shared_ptr<long> channelCreatedTs{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<vector<DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>> faultList{};
  shared_ptr<string> userId{};

  DescribeFaultDiagnosisUserListResponseBodyUserList() {}

  explicit DescribeFaultDiagnosisUserListResponseBodyUserList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelCreatedTs) {
      res["ChannelCreatedTs"] = boost::any(*channelCreatedTs);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (faultList) {
      vector<boost::any> temp1;
      for(auto item1:*faultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaultList"] = boost::any(temp1);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelCreatedTs") != m.end() && !m["ChannelCreatedTs"].empty()) {
      channelCreatedTs = make_shared<long>(boost::any_cast<long>(m["ChannelCreatedTs"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("FaultList") != m.end() && !m["FaultList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaultList"].type()) {
        vector<DescribeFaultDiagnosisUserListResponseBodyUserListFaultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserListResponseBodyUserListFaultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faultList = make_shared<vector<DescribeFaultDiagnosisUserListResponseBodyUserListFaultList>>(expect1);
      }
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponseBodyUserList() = default;
};
class DescribeFaultDiagnosisUserListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCnt{};
  shared_ptr<vector<DescribeFaultDiagnosisUserListResponseBodyUserList>> userList{};

  DescribeFaultDiagnosisUserListResponseBody() {}

  explicit DescribeFaultDiagnosisUserListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCnt) {
      res["TotalCnt"] = boost::any(*totalCnt);
    }
    if (userList) {
      vector<boost::any> temp1;
      for(auto item1:*userList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCnt") != m.end() && !m["TotalCnt"].empty()) {
      totalCnt = make_shared<long>(boost::any_cast<long>(m["TotalCnt"]));
    }
    if (m.find("UserList") != m.end() && !m["UserList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserList"].type()) {
        vector<DescribeFaultDiagnosisUserListResponseBodyUserList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaultDiagnosisUserListResponseBodyUserList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userList = make_shared<vector<DescribeFaultDiagnosisUserListResponseBodyUserList>>(expect1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponseBody() = default;
};
class DescribeFaultDiagnosisUserListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaultDiagnosisUserListResponseBody> body{};

  DescribeFaultDiagnosisUserListResponse() {}

  explicit DescribeFaultDiagnosisUserListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaultDiagnosisUserListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaultDiagnosisUserListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaultDiagnosisUserListResponse() = default;
};
class DescribeIceDurPeriodByDaySubTypeRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTs{};
  shared_ptr<string> jobType{};
  shared_ptr<long> startTs{};
  shared_ptr<string> timeZone{};

  DescribeIceDurPeriodByDaySubTypeRequest() {}

  explicit DescribeIceDurPeriodByDaySubTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTs) {
      res["EndTs"] = boost::any(*endTs);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (startTs) {
      res["StartTs"] = boost::any(*startTs);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTs") != m.end() && !m["EndTs"].empty()) {
      endTs = make_shared<long>(boost::any_cast<long>(m["EndTs"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("StartTs") != m.end() && !m["StartTs"].empty()) {
      startTs = make_shared<long>(boost::any_cast<long>(m["StartTs"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~DescribeIceDurPeriodByDaySubTypeRequest() = default;
};
class DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList : public Darabonba::Model {
public:
  shared_ptr<long> subJobDuration{};
  shared_ptr<string> subJobType{};

  DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList() {}

  explicit DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subJobDuration) {
      res["SubJobDuration"] = boost::any(*subJobDuration);
    }
    if (subJobType) {
      res["SubJobType"] = boost::any(*subJobType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubJobDuration") != m.end() && !m["SubJobDuration"].empty()) {
      subJobDuration = make_shared<long>(boost::any_cast<long>(m["SubJobDuration"]));
    }
    if (m.find("SubJobType") != m.end() && !m["SubJobType"].empty()) {
      subJobType = make_shared<string>(boost::any_cast<string>(m["SubJobType"]));
    }
  }


  virtual ~DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList() = default;
};
class DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList : public Darabonba::Model {
public:
  shared_ptr<long> dateTs{};
  shared_ptr<long> duration{};
  shared_ptr<vector<DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList>> subJobInfoList{};

  DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList() {}

  explicit DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dateTs) {
      res["DateTs"] = boost::any(*dateTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (subJobInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*subJobInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubJobInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DateTs") != m.end() && !m["DateTs"].empty()) {
      dateTs = make_shared<long>(boost::any_cast<long>(m["DateTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("SubJobInfoList") != m.end() && !m["SubJobInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["SubJobInfoList"].type()) {
        vector<DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubJobInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subJobInfoList = make_shared<vector<DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoListSubJobInfoList>>(expect1);
      }
    }
  }


  virtual ~DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList() = default;
};
class DescribeIceDurPeriodByDaySubTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList>> jobInfoList{};
  shared_ptr<string> requestId{};

  DescribeIceDurPeriodByDaySubTypeResponseBody() {}

  explicit DescribeIceDurPeriodByDaySubTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*jobInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInfoList") != m.end() && !m["JobInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["JobInfoList"].type()) {
        vector<DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInfoList = make_shared<vector<DescribeIceDurPeriodByDaySubTypeResponseBodyJobInfoList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIceDurPeriodByDaySubTypeResponseBody() = default;
};
class DescribeIceDurPeriodByDaySubTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIceDurPeriodByDaySubTypeResponseBody> body{};

  DescribeIceDurPeriodByDaySubTypeResponse() {}

  explicit DescribeIceDurPeriodByDaySubTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIceDurPeriodByDaySubTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIceDurPeriodByDaySubTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIceDurPeriodByDaySubTypeResponse() = default;
};
class DescribeIceDurSummaryOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<long> curTs{};
  shared_ptr<string> timeZone{};

  DescribeIceDurSummaryOverviewRequest() {}

  explicit DescribeIceDurSummaryOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (curTs) {
      res["CurTs"] = boost::any(*curTs);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurTs") != m.end() && !m["CurTs"].empty()) {
      curTs = make_shared<long>(boost::any_cast<long>(m["CurTs"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~DescribeIceDurSummaryOverviewRequest() = default;
};
class DescribeIceDurSummaryOverviewResponseBodyJobInfoList : public Darabonba::Model {
public:
  shared_ptr<long> duration{};
  shared_ptr<string> jobType{};
  shared_ptr<string> timeRange{};

  DescribeIceDurSummaryOverviewResponseBodyJobInfoList() {}

  explicit DescribeIceDurSummaryOverviewResponseBodyJobInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (timeRange) {
      res["TimeRange"] = boost::any(*timeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("TimeRange") != m.end() && !m["TimeRange"].empty()) {
      timeRange = make_shared<string>(boost::any_cast<string>(m["TimeRange"]));
    }
  }


  virtual ~DescribeIceDurSummaryOverviewResponseBodyJobInfoList() = default;
};
class DescribeIceDurSummaryOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeIceDurSummaryOverviewResponseBodyJobInfoList>> jobInfoList{};
  shared_ptr<string> requestId{};

  DescribeIceDurSummaryOverviewResponseBody() {}

  explicit DescribeIceDurSummaryOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*jobInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobInfoList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobInfoList") != m.end() && !m["JobInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["JobInfoList"].type()) {
        vector<DescribeIceDurSummaryOverviewResponseBodyJobInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIceDurSummaryOverviewResponseBodyJobInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobInfoList = make_shared<vector<DescribeIceDurSummaryOverviewResponseBodyJobInfoList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIceDurSummaryOverviewResponseBody() = default;
};
class DescribeIceDurSummaryOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIceDurSummaryOverviewResponseBody> body{};

  DescribeIceDurSummaryOverviewResponse() {}

  explicit DescribeIceDurSummaryOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIceDurSummaryOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIceDurSummaryOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIceDurSummaryOverviewResponse() = default;
};
class DescribePubUserListBySubUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> subUserId{};

  DescribePubUserListBySubUserRequest() {}

  explicit DescribePubUserListBySubUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (subUserId) {
      res["SubUserId"] = boost::any(*subUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("SubUserId") != m.end() && !m["SubUserId"].empty()) {
      subUserId = make_shared<string>(boost::any_cast<string>(m["SubUserId"]));
    }
  }


  virtual ~DescribePubUserListBySubUserRequest() = default;
};
class DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods() {}

  explicit DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods() = default;
};
class DescribePubUserListBySubUserResponseBodyPubUserDetailList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callIdList{};
  shared_ptr<string> clientType{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIdAlias{};

  DescribePubUserListBySubUserResponseBodyPubUserDetailList() {}

  explicit DescribePubUserListBySubUserResponseBodyPubUserDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callIdList) {
      res["CallIdList"] = boost::any(*callIdList);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIdAlias) {
      res["UserIdAlias"] = boost::any(*userIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallIdList") != m.end() && !m["CallIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailListOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIdAlias") != m.end() && !m["UserIdAlias"].empty()) {
      userIdAlias = make_shared<string>(boost::any_cast<string>(m["UserIdAlias"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodyPubUserDetailList() = default;
};
class DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods : public Darabonba::Model {
public:
  shared_ptr<long> joinTs{};
  shared_ptr<long> leaveTs{};

  DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods() {}

  explicit DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinTs) {
      res["JoinTs"] = boost::any(*joinTs);
    }
    if (leaveTs) {
      res["LeaveTs"] = boost::any(*leaveTs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinTs") != m.end() && !m["JoinTs"].empty()) {
      joinTs = make_shared<long>(boost::any_cast<long>(m["JoinTs"]));
    }
    if (m.find("LeaveTs") != m.end() && !m["LeaveTs"].empty()) {
      leaveTs = make_shared<long>(boost::any_cast<long>(m["LeaveTs"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods() = default;
};
class DescribePubUserListBySubUserResponseBodySubUserDetail : public Darabonba::Model {
public:
  shared_ptr<string> clientType{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<long> duration{};
  shared_ptr<string> location{};
  shared_ptr<string> network{};
  shared_ptr<vector<string>> networkList{};
  shared_ptr<long> onlineDuration{};
  shared_ptr<vector<DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods>> onlinePeriods{};
  shared_ptr<string> os{};
  shared_ptr<vector<string>> osList{};
  shared_ptr<vector<string>> roles{};
  shared_ptr<string> sdkVersion{};
  shared_ptr<vector<string>> sdkVersionList{};
  shared_ptr<string> userId{};
  shared_ptr<string> userIdAlias{};

  DescribePubUserListBySubUserResponseBodySubUserDetail() {}

  explicit DescribePubUserListBySubUserResponseBodySubUserDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (network) {
      res["Network"] = boost::any(*network);
    }
    if (networkList) {
      res["NetworkList"] = boost::any(*networkList);
    }
    if (onlineDuration) {
      res["OnlineDuration"] = boost::any(*onlineDuration);
    }
    if (onlinePeriods) {
      vector<boost::any> temp1;
      for(auto item1:*onlinePeriods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlinePeriods"] = boost::any(temp1);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osList) {
      res["OsList"] = boost::any(*osList);
    }
    if (roles) {
      res["Roles"] = boost::any(*roles);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    if (sdkVersionList) {
      res["SdkVersionList"] = boost::any(*sdkVersionList);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userIdAlias) {
      res["UserIdAlias"] = boost::any(*userIdAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      network = make_shared<string>(boost::any_cast<string>(m["Network"]));
    }
    if (m.find("NetworkList") != m.end() && !m["NetworkList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NetworkList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NetworkList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      networkList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OnlineDuration") != m.end() && !m["OnlineDuration"].empty()) {
      onlineDuration = make_shared<long>(boost::any_cast<long>(m["OnlineDuration"]));
    }
    if (m.find("OnlinePeriods") != m.end() && !m["OnlinePeriods"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlinePeriods"].type()) {
        vector<DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlinePeriods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlinePeriods = make_shared<vector<DescribePubUserListBySubUserResponseBodySubUserDetailOnlinePeriods>>(expect1);
      }
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsList") != m.end() && !m["OsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      osList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Roles") != m.end() && !m["Roles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Roles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Roles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      roles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
    if (m.find("SdkVersionList") != m.end() && !m["SdkVersionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SdkVersionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SdkVersionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sdkVersionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserIdAlias") != m.end() && !m["UserIdAlias"].empty()) {
      userIdAlias = make_shared<string>(boost::any_cast<string>(m["UserIdAlias"]));
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBodySubUserDetail() = default;
};
class DescribePubUserListBySubUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callStatus{};
  shared_ptr<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>> pubUserDetailList{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePubUserListBySubUserResponseBodySubUserDetail> subUserDetail{};

  DescribePubUserListBySubUserResponseBody() {}

  explicit DescribePubUserListBySubUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callStatus) {
      res["CallStatus"] = boost::any(*callStatus);
    }
    if (pubUserDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*pubUserDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PubUserDetailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subUserDetail) {
      res["SubUserDetail"] = subUserDetail ? boost::any(subUserDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallStatus") != m.end() && !m["CallStatus"].empty()) {
      callStatus = make_shared<string>(boost::any_cast<string>(m["CallStatus"]));
    }
    if (m.find("PubUserDetailList") != m.end() && !m["PubUserDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["PubUserDetailList"].type()) {
        vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PubUserDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePubUserListBySubUserResponseBodyPubUserDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pubUserDetailList = make_shared<vector<DescribePubUserListBySubUserResponseBodyPubUserDetailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubUserDetail") != m.end() && !m["SubUserDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["SubUserDetail"].type()) {
        DescribePubUserListBySubUserResponseBodySubUserDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SubUserDetail"]));
        subUserDetail = make_shared<DescribePubUserListBySubUserResponseBodySubUserDetail>(model1);
      }
    }
  }


  virtual ~DescribePubUserListBySubUserResponseBody() = default;
};
class DescribePubUserListBySubUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePubUserListBySubUserResponseBody> body{};

  DescribePubUserListBySubUserResponse() {}

  explicit DescribePubUserListBySubUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePubUserListBySubUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePubUserListBySubUserResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePubUserListBySubUserResponse() = default;
};
class DescribeQoeMetricDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> channelId{};
  shared_ptr<long> createdTs{};
  shared_ptr<long> destroyedTs{};
  shared_ptr<string> userId{};

  DescribeQoeMetricDataRequest() {}

  explicit DescribeQoeMetricDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (createdTs) {
      res["CreatedTs"] = boost::any(*createdTs);
    }
    if (destroyedTs) {
      res["DestroyedTs"] = boost::any(*destroyedTs);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("CreatedTs") != m.end() && !m["CreatedTs"].empty()) {
      createdTs = make_shared<long>(boost::any_cast<long>(m["CreatedTs"]));
    }
    if (m.find("DestroyedTs") != m.end() && !m["DestroyedTs"].empty()) {
      destroyedTs = make_shared<long>(boost::any_cast<long>(m["DestroyedTs"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeQoeMetricDataRequest() = default;
};
class DescribeQoeMetricDataResponseBodyAudioDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeQoeMetricDataResponseBodyAudioDataNodes() {}

  explicit DescribeQoeMetricDataResponseBodyAudioDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyAudioDataNodes() = default;
};
class DescribeQoeMetricDataResponseBodyAudioData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyAudioDataNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeQoeMetricDataResponseBodyAudioData() {}

  explicit DescribeQoeMetricDataResponseBodyAudioData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeQoeMetricDataResponseBodyAudioDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyAudioDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeQoeMetricDataResponseBodyAudioDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyAudioData() = default;
};
class DescribeQoeMetricDataResponseBodyVideoDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeQoeMetricDataResponseBodyVideoDataNodes() {}

  explicit DescribeQoeMetricDataResponseBodyVideoDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyVideoDataNodes() = default;
};
class DescribeQoeMetricDataResponseBodyVideoData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyVideoDataNodes>> nodes{};
  shared_ptr<string> type{};
  shared_ptr<string> userId{};

  DescribeQoeMetricDataResponseBodyVideoData() {}

  explicit DescribeQoeMetricDataResponseBodyVideoData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeQoeMetricDataResponseBodyVideoDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyVideoDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeQoeMetricDataResponseBodyVideoDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeQoeMetricDataResponseBodyVideoData() = default;
};
class DescribeQoeMetricDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyAudioData>> audioData{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeQoeMetricDataResponseBodyVideoData>> videoData{};

  DescribeQoeMetricDataResponseBody() {}

  explicit DescribeQoeMetricDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioData) {
      vector<boost::any> temp1;
      for(auto item1:*audioData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioData"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (videoData) {
      vector<boost::any> temp1;
      for(auto item1:*videoData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioData") != m.end() && !m["AudioData"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioData"].type()) {
        vector<DescribeQoeMetricDataResponseBodyAudioData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyAudioData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioData = make_shared<vector<DescribeQoeMetricDataResponseBodyAudioData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VideoData") != m.end() && !m["VideoData"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoData"].type()) {
        vector<DescribeQoeMetricDataResponseBodyVideoData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQoeMetricDataResponseBodyVideoData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoData = make_shared<vector<DescribeQoeMetricDataResponseBodyVideoData>>(expect1);
      }
    }
  }


  virtual ~DescribeQoeMetricDataResponseBody() = default;
};
class DescribeQoeMetricDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQoeMetricDataResponseBody> body{};

  DescribeQoeMetricDataResponse() {}

  explicit DescribeQoeMetricDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQoeMetricDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQoeMetricDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQoeMetricDataResponse() = default;
};
class DescribeQualityAreaDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<string> parentArea{};
  shared_ptr<long> startDate{};

  DescribeQualityAreaDistributionStatDataRequest() {}

  explicit DescribeQualityAreaDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (parentArea) {
      res["ParentArea"] = boost::any(*parentArea);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("ParentArea") != m.end() && !m["ParentArea"].empty()) {
      parentArea = make_shared<string>(boost::any_cast<string>(m["ParentArea"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataRequest() = default;
};
class DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList : public Darabonba::Model {
public:
  shared_ptr<long> audioDelay{};
  shared_ptr<string> audioHighQualityTransmissionRate{};
  shared_ptr<long> audioSpeakOutDuration{};
  shared_ptr<string> audioStuckRate{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> joinChannelSucFiveSecRate{};
  shared_ptr<string> joinChannelSucRate{};
  shared_ptr<string> name{};
  shared_ptr<long> videoDelay{};
  shared_ptr<long> videoFirstPicDuration{};
  shared_ptr<string> videoHighQualityTransmissionRate{};
  shared_ptr<string> videoStuckRate{};

  DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList() {}

  explicit DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDelay) {
      res["AudioDelay"] = boost::any(*audioDelay);
    }
    if (audioHighQualityTransmissionRate) {
      res["AudioHighQualityTransmissionRate"] = boost::any(*audioHighQualityTransmissionRate);
    }
    if (audioSpeakOutDuration) {
      res["AudioSpeakOutDuration"] = boost::any(*audioSpeakOutDuration);
    }
    if (audioStuckRate) {
      res["AudioStuckRate"] = boost::any(*audioStuckRate);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (joinChannelSucFiveSecRate) {
      res["JoinChannelSucFiveSecRate"] = boost::any(*joinChannelSucFiveSecRate);
    }
    if (joinChannelSucRate) {
      res["JoinChannelSucRate"] = boost::any(*joinChannelSucRate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (videoDelay) {
      res["VideoDelay"] = boost::any(*videoDelay);
    }
    if (videoFirstPicDuration) {
      res["VideoFirstPicDuration"] = boost::any(*videoFirstPicDuration);
    }
    if (videoHighQualityTransmissionRate) {
      res["VideoHighQualityTransmissionRate"] = boost::any(*videoHighQualityTransmissionRate);
    }
    if (videoStuckRate) {
      res["VideoStuckRate"] = boost::any(*videoStuckRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDelay") != m.end() && !m["AudioDelay"].empty()) {
      audioDelay = make_shared<long>(boost::any_cast<long>(m["AudioDelay"]));
    }
    if (m.find("AudioHighQualityTransmissionRate") != m.end() && !m["AudioHighQualityTransmissionRate"].empty()) {
      audioHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["AudioHighQualityTransmissionRate"]));
    }
    if (m.find("AudioSpeakOutDuration") != m.end() && !m["AudioSpeakOutDuration"].empty()) {
      audioSpeakOutDuration = make_shared<long>(boost::any_cast<long>(m["AudioSpeakOutDuration"]));
    }
    if (m.find("AudioStuckRate") != m.end() && !m["AudioStuckRate"].empty()) {
      audioStuckRate = make_shared<string>(boost::any_cast<string>(m["AudioStuckRate"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("JoinChannelSucFiveSecRate") != m.end() && !m["JoinChannelSucFiveSecRate"].empty()) {
      joinChannelSucFiveSecRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucFiveSecRate"]));
    }
    if (m.find("JoinChannelSucRate") != m.end() && !m["JoinChannelSucRate"].empty()) {
      joinChannelSucRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucRate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VideoDelay") != m.end() && !m["VideoDelay"].empty()) {
      videoDelay = make_shared<long>(boost::any_cast<long>(m["VideoDelay"]));
    }
    if (m.find("VideoFirstPicDuration") != m.end() && !m["VideoFirstPicDuration"].empty()) {
      videoFirstPicDuration = make_shared<long>(boost::any_cast<long>(m["VideoFirstPicDuration"]));
    }
    if (m.find("VideoHighQualityTransmissionRate") != m.end() && !m["VideoHighQualityTransmissionRate"].empty()) {
      videoHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["VideoHighQualityTransmissionRate"]));
    }
    if (m.find("VideoStuckRate") != m.end() && !m["VideoStuckRate"].empty()) {
      videoStuckRate = make_shared<string>(boost::any_cast<string>(m["VideoStuckRate"]));
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList() = default;
};
class DescribeQualityAreaDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>> qualityStatDataList{};
  shared_ptr<string> requestId{};

  DescribeQualityAreaDistributionStatDataResponseBody() {}

  explicit DescribeQualityAreaDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityStatDataList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityStatDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityStatDataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityStatDataList") != m.end() && !m["QualityStatDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityStatDataList"].type()) {
        vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityStatDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityStatDataList = make_shared<vector<DescribeQualityAreaDistributionStatDataResponseBodyQualityStatDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataResponseBody() = default;
};
class DescribeQualityAreaDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityAreaDistributionStatDataResponseBody> body{};

  DescribeQualityAreaDistributionStatDataResponse() {}

  explicit DescribeQualityAreaDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQualityAreaDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityAreaDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityAreaDistributionStatDataResponse() = default;
};
class DescribeQualityDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> statDim{};

  DescribeQualityDistributionStatDataRequest() {}

  explicit DescribeQualityDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeQualityDistributionStatDataRequest() = default;
};
class DescribeQualityDistributionStatDataResponseBodyQualityStatDataList : public Darabonba::Model {
public:
  shared_ptr<long> audioDelay{};
  shared_ptr<string> audioHighQualityTransmissionRate{};
  shared_ptr<long> audioSpeakOutDuration{};
  shared_ptr<string> audioStuckRate{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> joinChannelSucFiveSecRate{};
  shared_ptr<string> joinChannelSucRate{};
  shared_ptr<string> name{};
  shared_ptr<long> videoDelay{};
  shared_ptr<long> videoFirstPicDuration{};
  shared_ptr<string> videoHighQualityTransmissionRate{};
  shared_ptr<string> videoStuckRate{};

  DescribeQualityDistributionStatDataResponseBodyQualityStatDataList() {}

  explicit DescribeQualityDistributionStatDataResponseBodyQualityStatDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDelay) {
      res["AudioDelay"] = boost::any(*audioDelay);
    }
    if (audioHighQualityTransmissionRate) {
      res["AudioHighQualityTransmissionRate"] = boost::any(*audioHighQualityTransmissionRate);
    }
    if (audioSpeakOutDuration) {
      res["AudioSpeakOutDuration"] = boost::any(*audioSpeakOutDuration);
    }
    if (audioStuckRate) {
      res["AudioStuckRate"] = boost::any(*audioStuckRate);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (joinChannelSucFiveSecRate) {
      res["JoinChannelSucFiveSecRate"] = boost::any(*joinChannelSucFiveSecRate);
    }
    if (joinChannelSucRate) {
      res["JoinChannelSucRate"] = boost::any(*joinChannelSucRate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (videoDelay) {
      res["VideoDelay"] = boost::any(*videoDelay);
    }
    if (videoFirstPicDuration) {
      res["VideoFirstPicDuration"] = boost::any(*videoFirstPicDuration);
    }
    if (videoHighQualityTransmissionRate) {
      res["VideoHighQualityTransmissionRate"] = boost::any(*videoHighQualityTransmissionRate);
    }
    if (videoStuckRate) {
      res["VideoStuckRate"] = boost::any(*videoStuckRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDelay") != m.end() && !m["AudioDelay"].empty()) {
      audioDelay = make_shared<long>(boost::any_cast<long>(m["AudioDelay"]));
    }
    if (m.find("AudioHighQualityTransmissionRate") != m.end() && !m["AudioHighQualityTransmissionRate"].empty()) {
      audioHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["AudioHighQualityTransmissionRate"]));
    }
    if (m.find("AudioSpeakOutDuration") != m.end() && !m["AudioSpeakOutDuration"].empty()) {
      audioSpeakOutDuration = make_shared<long>(boost::any_cast<long>(m["AudioSpeakOutDuration"]));
    }
    if (m.find("AudioStuckRate") != m.end() && !m["AudioStuckRate"].empty()) {
      audioStuckRate = make_shared<string>(boost::any_cast<string>(m["AudioStuckRate"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("JoinChannelSucFiveSecRate") != m.end() && !m["JoinChannelSucFiveSecRate"].empty()) {
      joinChannelSucFiveSecRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucFiveSecRate"]));
    }
    if (m.find("JoinChannelSucRate") != m.end() && !m["JoinChannelSucRate"].empty()) {
      joinChannelSucRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucRate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VideoDelay") != m.end() && !m["VideoDelay"].empty()) {
      videoDelay = make_shared<long>(boost::any_cast<long>(m["VideoDelay"]));
    }
    if (m.find("VideoFirstPicDuration") != m.end() && !m["VideoFirstPicDuration"].empty()) {
      videoFirstPicDuration = make_shared<long>(boost::any_cast<long>(m["VideoFirstPicDuration"]));
    }
    if (m.find("VideoHighQualityTransmissionRate") != m.end() && !m["VideoHighQualityTransmissionRate"].empty()) {
      videoHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["VideoHighQualityTransmissionRate"]));
    }
    if (m.find("VideoStuckRate") != m.end() && !m["VideoStuckRate"].empty()) {
      videoStuckRate = make_shared<string>(boost::any_cast<string>(m["VideoStuckRate"]));
    }
  }


  virtual ~DescribeQualityDistributionStatDataResponseBodyQualityStatDataList() = default;
};
class DescribeQualityDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>> qualityStatDataList{};
  shared_ptr<string> requestId{};

  DescribeQualityDistributionStatDataResponseBody() {}

  explicit DescribeQualityDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityStatDataList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityStatDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityStatDataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityStatDataList") != m.end() && !m["QualityStatDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityStatDataList"].type()) {
        vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityStatDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityDistributionStatDataResponseBodyQualityStatDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityStatDataList = make_shared<vector<DescribeQualityDistributionStatDataResponseBodyQualityStatDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityDistributionStatDataResponseBody() = default;
};
class DescribeQualityDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityDistributionStatDataResponseBody> body{};

  DescribeQualityDistributionStatDataResponse() {}

  explicit DescribeQualityDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQualityDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityDistributionStatDataResponse() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};

  DescribeQualityOsSdkVersionDistributionStatDataRequest() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataRequest() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList : public Darabonba::Model {
public:
  shared_ptr<long> audioDelay{};
  shared_ptr<string> audioHighQualityTransmissionRate{};
  shared_ptr<long> audioSpeakOutDuration{};
  shared_ptr<string> audioStuckRate{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> joinChannelSucFiveSecRate{};
  shared_ptr<string> joinChannelSucRate{};
  shared_ptr<string> name{};
  shared_ptr<string> os{};
  shared_ptr<long> videoDelay{};
  shared_ptr<long> videoFirstPicDuration{};
  shared_ptr<string> videoHighQualityTransmissionRate{};
  shared_ptr<string> videoStuckRate{};

  DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDelay) {
      res["AudioDelay"] = boost::any(*audioDelay);
    }
    if (audioHighQualityTransmissionRate) {
      res["AudioHighQualityTransmissionRate"] = boost::any(*audioHighQualityTransmissionRate);
    }
    if (audioSpeakOutDuration) {
      res["AudioSpeakOutDuration"] = boost::any(*audioSpeakOutDuration);
    }
    if (audioStuckRate) {
      res["AudioStuckRate"] = boost::any(*audioStuckRate);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (joinChannelSucFiveSecRate) {
      res["JoinChannelSucFiveSecRate"] = boost::any(*joinChannelSucFiveSecRate);
    }
    if (joinChannelSucRate) {
      res["JoinChannelSucRate"] = boost::any(*joinChannelSucRate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (videoDelay) {
      res["VideoDelay"] = boost::any(*videoDelay);
    }
    if (videoFirstPicDuration) {
      res["VideoFirstPicDuration"] = boost::any(*videoFirstPicDuration);
    }
    if (videoHighQualityTransmissionRate) {
      res["VideoHighQualityTransmissionRate"] = boost::any(*videoHighQualityTransmissionRate);
    }
    if (videoStuckRate) {
      res["VideoStuckRate"] = boost::any(*videoStuckRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDelay") != m.end() && !m["AudioDelay"].empty()) {
      audioDelay = make_shared<long>(boost::any_cast<long>(m["AudioDelay"]));
    }
    if (m.find("AudioHighQualityTransmissionRate") != m.end() && !m["AudioHighQualityTransmissionRate"].empty()) {
      audioHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["AudioHighQualityTransmissionRate"]));
    }
    if (m.find("AudioSpeakOutDuration") != m.end() && !m["AudioSpeakOutDuration"].empty()) {
      audioSpeakOutDuration = make_shared<long>(boost::any_cast<long>(m["AudioSpeakOutDuration"]));
    }
    if (m.find("AudioStuckRate") != m.end() && !m["AudioStuckRate"].empty()) {
      audioStuckRate = make_shared<string>(boost::any_cast<string>(m["AudioStuckRate"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("JoinChannelSucFiveSecRate") != m.end() && !m["JoinChannelSucFiveSecRate"].empty()) {
      joinChannelSucFiveSecRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucFiveSecRate"]));
    }
    if (m.find("JoinChannelSucRate") != m.end() && !m["JoinChannelSucRate"].empty()) {
      joinChannelSucRate = make_shared<string>(boost::any_cast<string>(m["JoinChannelSucRate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("VideoDelay") != m.end() && !m["VideoDelay"].empty()) {
      videoDelay = make_shared<long>(boost::any_cast<long>(m["VideoDelay"]));
    }
    if (m.find("VideoFirstPicDuration") != m.end() && !m["VideoFirstPicDuration"].empty()) {
      videoFirstPicDuration = make_shared<long>(boost::any_cast<long>(m["VideoFirstPicDuration"]));
    }
    if (m.find("VideoHighQualityTransmissionRate") != m.end() && !m["VideoHighQualityTransmissionRate"].empty()) {
      videoHighQualityTransmissionRate = make_shared<string>(boost::any_cast<string>(m["VideoHighQualityTransmissionRate"]));
    }
    if (m.find("VideoStuckRate") != m.end() && !m["VideoStuckRate"].empty()) {
      videoStuckRate = make_shared<string>(boost::any_cast<string>(m["VideoStuckRate"]));
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>> qualityOsSdkVersionStatDataList{};
  shared_ptr<string> requestId{};

  DescribeQualityOsSdkVersionDistributionStatDataResponseBody() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityOsSdkVersionStatDataList) {
      vector<boost::any> temp1;
      for(auto item1:*qualityOsSdkVersionStatDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityOsSdkVersionStatDataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityOsSdkVersionStatDataList") != m.end() && !m["QualityOsSdkVersionStatDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityOsSdkVersionStatDataList"].type()) {
        vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityOsSdkVersionStatDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityOsSdkVersionStatDataList = make_shared<vector<DescribeQualityOsSdkVersionDistributionStatDataResponseBodyQualityOsSdkVersionStatDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponseBody() = default;
};
class DescribeQualityOsSdkVersionDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataResponseBody> body{};

  DescribeQualityOsSdkVersionDistributionStatDataResponse() {}

  explicit DescribeQualityOsSdkVersionDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQualityOsSdkVersionDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityOsSdkVersionDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityOsSdkVersionDistributionStatDataResponse() = default;
};
class DescribeQualityOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> types{};

  DescribeQualityOverallDataRequest() {}

  explicit DescribeQualityOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~DescribeQualityOverallDataRequest() = default;
};
class DescribeQualityOverallDataResponseBodyQualityOverallDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeQualityOverallDataResponseBodyQualityOverallDataNodes() {}

  explicit DescribeQualityOverallDataResponseBodyQualityOverallDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeQualityOverallDataResponseBodyQualityOverallDataNodes() = default;
};
class DescribeQualityOverallDataResponseBodyQualityOverallData : public Darabonba::Model {
public:
  shared_ptr<string> average{};
  shared_ptr<vector<DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeQualityOverallDataResponseBodyQualityOverallData() {}

  explicit DescribeQualityOverallDataResponseBodyQualityOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (average) {
      res["Average"] = boost::any(*average);
    }
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Average") != m.end() && !m["Average"].empty()) {
      average = make_shared<string>(boost::any_cast<string>(m["Average"]));
    }
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeQualityOverallDataResponseBodyQualityOverallDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityOverallDataResponseBodyQualityOverallDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeQualityOverallDataResponseBodyQualityOverallDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeQualityOverallDataResponseBodyQualityOverallData() = default;
};
class DescribeQualityOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeQualityOverallDataResponseBodyQualityOverallData>> qualityOverallData{};
  shared_ptr<string> requestId{};

  DescribeQualityOverallDataResponseBody() {}

  explicit DescribeQualityOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (qualityOverallData) {
      vector<boost::any> temp1;
      for(auto item1:*qualityOverallData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QualityOverallData"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QualityOverallData") != m.end() && !m["QualityOverallData"].empty()) {
      if (typeid(vector<boost::any>) == m["QualityOverallData"].type()) {
        vector<DescribeQualityOverallDataResponseBodyQualityOverallData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QualityOverallData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeQualityOverallDataResponseBodyQualityOverallData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        qualityOverallData = make_shared<vector<DescribeQualityOverallDataResponseBodyQualityOverallData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeQualityOverallDataResponseBody() = default;
};
class DescribeQualityOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeQualityOverallDataResponseBody> body{};

  DescribeQualityOverallDataResponse() {}

  explicit DescribeQualityOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeQualityOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeQualityOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeQualityOverallDataResponse() = default;
};
class DescribeUsageAreaDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> parentArea{};
  shared_ptr<string> startDate{};

  DescribeUsageAreaDistributionStatDataRequest() {}

  explicit DescribeUsageAreaDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (parentArea) {
      res["ParentArea"] = boost::any(*parentArea);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ParentArea") != m.end() && !m["ParentArea"].empty()) {
      parentArea = make_shared<string>(boost::any_cast<string>(m["ParentArea"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataRequest() = default;
};
class DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList : public Darabonba::Model {
public:
  shared_ptr<long> audioCallDuration{};
  shared_ptr<string> name{};
  shared_ptr<long> totalCallDuration{};
  shared_ptr<long> videoCallDuration{};

  DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList() {}

  explicit DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioCallDuration) {
      res["AudioCallDuration"] = boost::any(*audioCallDuration);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (totalCallDuration) {
      res["TotalCallDuration"] = boost::any(*totalCallDuration);
    }
    if (videoCallDuration) {
      res["VideoCallDuration"] = boost::any(*videoCallDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioCallDuration") != m.end() && !m["AudioCallDuration"].empty()) {
      audioCallDuration = make_shared<long>(boost::any_cast<long>(m["AudioCallDuration"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TotalCallDuration") != m.end() && !m["TotalCallDuration"].empty()) {
      totalCallDuration = make_shared<long>(boost::any_cast<long>(m["TotalCallDuration"]));
    }
    if (m.find("VideoCallDuration") != m.end() && !m["VideoCallDuration"].empty()) {
      videoCallDuration = make_shared<long>(boost::any_cast<long>(m["VideoCallDuration"]));
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList() = default;
};
class DescribeUsageAreaDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>> usageAreaStatList{};

  DescribeUsageAreaDistributionStatDataResponseBody() {}

  explicit DescribeUsageAreaDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageAreaStatList) {
      vector<boost::any> temp1;
      for(auto item1:*usageAreaStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageAreaStatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageAreaStatList") != m.end() && !m["UsageAreaStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageAreaStatList"].type()) {
        vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageAreaStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageAreaStatList = make_shared<vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataResponseBody() = default;
};
class DescribeUsageAreaDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageAreaDistributionStatDataResponseBody> body{};

  DescribeUsageAreaDistributionStatDataResponse() {}

  explicit DescribeUsageAreaDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsageAreaDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageAreaDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageAreaDistributionStatDataResponse() = default;
};
class DescribeUsageDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> statDim{};

  DescribeUsageDistributionStatDataRequest() {}

  explicit DescribeUsageDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (statDim) {
      res["StatDim"] = boost::any(*statDim);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("StatDim") != m.end() && !m["StatDim"].empty()) {
      statDim = make_shared<string>(boost::any_cast<string>(m["StatDim"]));
    }
  }


  virtual ~DescribeUsageDistributionStatDataRequest() = default;
};
class DescribeUsageDistributionStatDataResponseBodyUsageStatList : public Darabonba::Model {
public:
  shared_ptr<long> audioCallDuration{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> name{};
  shared_ptr<long> totalCallDuration{};
  shared_ptr<long> videoCallDuration{};

  DescribeUsageDistributionStatDataResponseBodyUsageStatList() {}

  explicit DescribeUsageDistributionStatDataResponseBodyUsageStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioCallDuration) {
      res["AudioCallDuration"] = boost::any(*audioCallDuration);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (totalCallDuration) {
      res["TotalCallDuration"] = boost::any(*totalCallDuration);
    }
    if (videoCallDuration) {
      res["VideoCallDuration"] = boost::any(*videoCallDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioCallDuration") != m.end() && !m["AudioCallDuration"].empty()) {
      audioCallDuration = make_shared<long>(boost::any_cast<long>(m["AudioCallDuration"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TotalCallDuration") != m.end() && !m["TotalCallDuration"].empty()) {
      totalCallDuration = make_shared<long>(boost::any_cast<long>(m["TotalCallDuration"]));
    }
    if (m.find("VideoCallDuration") != m.end() && !m["VideoCallDuration"].empty()) {
      videoCallDuration = make_shared<long>(boost::any_cast<long>(m["VideoCallDuration"]));
    }
  }


  virtual ~DescribeUsageDistributionStatDataResponseBodyUsageStatList() = default;
};
class DescribeUsageDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>> usageStatList{};

  DescribeUsageDistributionStatDataResponseBody() {}

  explicit DescribeUsageDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageStatList) {
      vector<boost::any> temp1;
      for(auto item1:*usageStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageStatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageStatList") != m.end() && !m["UsageStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageStatList"].type()) {
        vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageDistributionStatDataResponseBodyUsageStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageStatList = make_shared<vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageDistributionStatDataResponseBody() = default;
};
class DescribeUsageDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageDistributionStatDataResponseBody> body{};

  DescribeUsageDistributionStatDataResponse() {}

  explicit DescribeUsageDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsageDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageDistributionStatDataResponse() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};

  DescribeUsageOsSdkVersionDistributionStatDataRequest() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataRequest() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList : public Darabonba::Model {
public:
  shared_ptr<long> audioCallDuration{};
  shared_ptr<string> callDurationRatio{};
  shared_ptr<string> name{};
  shared_ptr<string> os{};
  shared_ptr<long> totalCallDuration{};
  shared_ptr<long> videoCallDuration{};

  DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioCallDuration) {
      res["AudioCallDuration"] = boost::any(*audioCallDuration);
    }
    if (callDurationRatio) {
      res["CallDurationRatio"] = boost::any(*callDurationRatio);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (totalCallDuration) {
      res["TotalCallDuration"] = boost::any(*totalCallDuration);
    }
    if (videoCallDuration) {
      res["VideoCallDuration"] = boost::any(*videoCallDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioCallDuration") != m.end() && !m["AudioCallDuration"].empty()) {
      audioCallDuration = make_shared<long>(boost::any_cast<long>(m["AudioCallDuration"]));
    }
    if (m.find("CallDurationRatio") != m.end() && !m["CallDurationRatio"].empty()) {
      callDurationRatio = make_shared<string>(boost::any_cast<string>(m["CallDurationRatio"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("TotalCallDuration") != m.end() && !m["TotalCallDuration"].empty()) {
      totalCallDuration = make_shared<long>(boost::any_cast<long>(m["TotalCallDuration"]));
    }
    if (m.find("VideoCallDuration") != m.end() && !m["VideoCallDuration"].empty()) {
      videoCallDuration = make_shared<long>(boost::any_cast<long>(m["VideoCallDuration"]));
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>> usageOsSdkVersionStatList{};

  DescribeUsageOsSdkVersionDistributionStatDataResponseBody() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageOsSdkVersionStatList) {
      vector<boost::any> temp1;
      for(auto item1:*usageOsSdkVersionStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageOsSdkVersionStatList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageOsSdkVersionStatList") != m.end() && !m["UsageOsSdkVersionStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageOsSdkVersionStatList"].type()) {
        vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageOsSdkVersionStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageOsSdkVersionStatList = make_shared<vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBody() = default;
};
class DescribeUsageOsSdkVersionDistributionStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataResponseBody> body{};

  DescribeUsageOsSdkVersionDistributionStatDataResponse() {}

  explicit DescribeUsageOsSdkVersionDistributionStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsageOsSdkVersionDistributionStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageOsSdkVersionDistributionStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponse() = default;
};
class DescribeUsageOverallDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> endDate{};
  shared_ptr<long> startDate{};
  shared_ptr<string> types{};

  DescribeUsageOverallDataRequest() {}

  explicit DescribeUsageOverallDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~DescribeUsageOverallDataRequest() = default;
};
class DescribeUsageOverallDataResponseBodyUsageOverallDataNodes : public Darabonba::Model {
public:
  shared_ptr<string> x{};
  shared_ptr<string> y{};

  DescribeUsageOverallDataResponseBodyUsageOverallDataNodes() {}

  explicit DescribeUsageOverallDataResponseBodyUsageOverallDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<string>(boost::any_cast<string>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<string>(boost::any_cast<string>(m["Y"]));
    }
  }


  virtual ~DescribeUsageOverallDataResponseBodyUsageOverallDataNodes() = default;
};
class DescribeUsageOverallDataResponseBodyUsageOverallData : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>> nodes{};
  shared_ptr<string> type{};

  DescribeUsageOverallDataResponseBodyUsageOverallData() {}

  explicit DescribeUsageOverallDataResponseBodyUsageOverallData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<DescribeUsageOverallDataResponseBodyUsageOverallDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageOverallDataResponseBodyUsageOverallDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<DescribeUsageOverallDataResponseBodyUsageOverallDataNodes>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeUsageOverallDataResponseBodyUsageOverallData() = default;
};
class DescribeUsageOverallDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeUsageOverallDataResponseBodyUsageOverallData>> usageOverallData{};

  DescribeUsageOverallDataResponseBody() {}

  explicit DescribeUsageOverallDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (usageOverallData) {
      vector<boost::any> temp1;
      for(auto item1:*usageOverallData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UsageOverallData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UsageOverallData") != m.end() && !m["UsageOverallData"].empty()) {
      if (typeid(vector<boost::any>) == m["UsageOverallData"].type()) {
        vector<DescribeUsageOverallDataResponseBodyUsageOverallData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UsageOverallData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageOverallDataResponseBodyUsageOverallData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usageOverallData = make_shared<vector<DescribeUsageOverallDataResponseBodyUsageOverallData>>(expect1);
      }
    }
  }


  virtual ~DescribeUsageOverallDataResponseBody() = default;
};
class DescribeUsageOverallDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageOverallDataResponseBody> body{};

  DescribeUsageOverallDataResponse() {}

  explicit DescribeUsageOverallDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsageOverallDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageOverallDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageOverallDataResponse() = default;
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
  DescribeAppConfigResponse describeAppConfigWithOptions(shared_ptr<DescribeAppConfigRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppConfigResponse describeAppConfig(shared_ptr<DescribeAppConfigRequest> request);
  DescribeCallResponse describeCallWithOptions(shared_ptr<DescribeCallRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallResponse describeCall(shared_ptr<DescribeCallRequest> request);
  DescribeCallInfoResponse describeCallInfoWithOptions(shared_ptr<DescribeCallInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallInfoResponse describeCallInfo(shared_ptr<DescribeCallInfoRequest> request);
  DescribeCallListResponse describeCallListWithOptions(shared_ptr<DescribeCallListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallListResponse describeCallList(shared_ptr<DescribeCallListRequest> request);
  DescribeCallUserExpResponse describeCallUserExpWithOptions(shared_ptr<DescribeCallUserExpRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallUserExpResponse describeCallUserExp(shared_ptr<DescribeCallUserExpRequest> request);
  DescribeCallUserListResponse describeCallUserListWithOptions(shared_ptr<DescribeCallUserListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCallUserListResponse describeCallUserList(shared_ptr<DescribeCallUserListRequest> request);
  DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatDataWithOptions(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelAreaDistributionStatDataResponse describeChannelAreaDistributionStatData(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request);
  DescribeChannelDistributionStatDataResponse describeChannelDistributionStatDataWithOptions(shared_ptr<DescribeChannelDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelDistributionStatDataResponse describeChannelDistributionStatData(shared_ptr<DescribeChannelDistributionStatDataRequest> request);
  DescribeChannelJoinInfoResponse describeChannelJoinInfoWithOptions(shared_ptr<DescribeChannelJoinInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelJoinInfoResponse describeChannelJoinInfo(shared_ptr<DescribeChannelJoinInfoRequest> request);
  DescribeChannelOverallDataResponse describeChannelOverallDataWithOptions(shared_ptr<DescribeChannelOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelOverallDataResponse describeChannelOverallData(shared_ptr<DescribeChannelOverallDataRequest> request);
  DescribeChannelTopPubUserListResponse describeChannelTopPubUserListWithOptions(shared_ptr<DescribeChannelTopPubUserListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelTopPubUserListResponse describeChannelTopPubUserList(shared_ptr<DescribeChannelTopPubUserListRequest> request);
  DescribeChannelUserMetricsResponse describeChannelUserMetricsWithOptions(shared_ptr<DescribeChannelUserMetricsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeChannelUserMetricsResponse describeChannelUserMetrics(shared_ptr<DescribeChannelUserMetricsRequest> request);
  DescribeEndPointEventListResponse describeEndPointEventListWithOptions(shared_ptr<DescribeEndPointEventListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndPointEventListResponse describeEndPointEventList(shared_ptr<DescribeEndPointEventListRequest> request);
  DescribeEndPointMetricDataResponse describeEndPointMetricDataWithOptions(shared_ptr<DescribeEndPointMetricDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEndPointMetricDataResponse describeEndPointMetricData(shared_ptr<DescribeEndPointMetricDataRequest> request);
  DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStatWithOptions(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisFactorDistributionStatResponse describeFaultDiagnosisFactorDistributionStat(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request);
  DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallDataWithOptions(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisOverallDataResponse describeFaultDiagnosisOverallData(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request);
  DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetailWithOptions(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisUserDetailResponse describeFaultDiagnosisUserDetail(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request);
  DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserListWithOptions(shared_ptr<DescribeFaultDiagnosisUserListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaultDiagnosisUserListResponse describeFaultDiagnosisUserList(shared_ptr<DescribeFaultDiagnosisUserListRequest> request);
  DescribeIceDurPeriodByDaySubTypeResponse describeIceDurPeriodByDaySubTypeWithOptions(shared_ptr<DescribeIceDurPeriodByDaySubTypeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIceDurPeriodByDaySubTypeResponse describeIceDurPeriodByDaySubType(shared_ptr<DescribeIceDurPeriodByDaySubTypeRequest> request);
  DescribeIceDurSummaryOverviewResponse describeIceDurSummaryOverviewWithOptions(shared_ptr<DescribeIceDurSummaryOverviewRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIceDurSummaryOverviewResponse describeIceDurSummaryOverview(shared_ptr<DescribeIceDurSummaryOverviewRequest> request);
  DescribePubUserListBySubUserResponse describePubUserListBySubUserWithOptions(shared_ptr<DescribePubUserListBySubUserRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePubUserListBySubUserResponse describePubUserListBySubUser(shared_ptr<DescribePubUserListBySubUserRequest> request);
  DescribeQoeMetricDataResponse describeQoeMetricDataWithOptions(shared_ptr<DescribeQoeMetricDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQoeMetricDataResponse describeQoeMetricData(shared_ptr<DescribeQoeMetricDataRequest> request);
  DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatDataWithOptions(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityAreaDistributionStatDataResponse describeQualityAreaDistributionStatData(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request);
  DescribeQualityDistributionStatDataResponse describeQualityDistributionStatDataWithOptions(shared_ptr<DescribeQualityDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityDistributionStatDataResponse describeQualityDistributionStatData(shared_ptr<DescribeQualityDistributionStatDataRequest> request);
  DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityOsSdkVersionDistributionStatDataResponse describeQualityOsSdkVersionDistributionStatData(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request);
  DescribeQualityOverallDataResponse describeQualityOverallDataWithOptions(shared_ptr<DescribeQualityOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeQualityOverallDataResponse describeQualityOverallData(shared_ptr<DescribeQualityOverallDataRequest> request);
  DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatDataWithOptions(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageAreaDistributionStatDataResponse describeUsageAreaDistributionStatData(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request);
  DescribeUsageDistributionStatDataResponse describeUsageDistributionStatDataWithOptions(shared_ptr<DescribeUsageDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageDistributionStatDataResponse describeUsageDistributionStatData(shared_ptr<DescribeUsageDistributionStatDataRequest> request);
  DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageOsSdkVersionDistributionStatDataResponse describeUsageOsSdkVersionDistributionStatData(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request);
  DescribeUsageOverallDataResponse describeUsageOverallDataWithOptions(shared_ptr<DescribeUsageOverallDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageOverallDataResponse describeUsageOverallData(shared_ptr<DescribeUsageOverallDataRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Vdc20201214

#endif
