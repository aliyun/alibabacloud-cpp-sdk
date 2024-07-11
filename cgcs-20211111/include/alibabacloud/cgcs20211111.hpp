// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CGCS20211111_H_
#define ALIBABACLOUD_CGCS20211111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CGCS20211111 {
class BatchCheckSessionRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<map<string, boost::any>> referenceInfo{};
  shared_ptr<string> type{};

  BatchCheckSessionRequestRecords() {}

  explicit BatchCheckSessionRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (referenceInfo) {
      res["ReferenceInfo"] = boost::any(*referenceInfo);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("ReferenceInfo") != m.end() && !m["ReferenceInfo"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ReferenceInfo"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      referenceInfo = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~BatchCheckSessionRequestRecords() = default;
};
class BatchCheckSessionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BatchCheckSessionRequestRecords>> records{};

  BatchCheckSessionRequest() {}

  explicit BatchCheckSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<BatchCheckSessionRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchCheckSessionRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<BatchCheckSessionRequestRecords>>(expect1);
      }
    }
  }


  virtual ~BatchCheckSessionRequest() = default;
};
class BatchCheckSessionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> recordsShrink{};

  BatchCheckSessionShrinkRequest() {}

  explicit BatchCheckSessionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recordsShrink) {
      res["Records"] = boost::any(*recordsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      recordsShrink = make_shared<string>(boost::any_cast<string>(m["Records"]));
    }
  }


  virtual ~BatchCheckSessionShrinkRequest() = default;
};
class BatchCheckSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchCheckSessionResponseBody() {}

  explicit BatchCheckSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchCheckSessionResponseBody() = default;
};
class BatchCheckSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchCheckSessionResponseBody> body{};

  BatchCheckSessionResponse() {}

  explicit BatchCheckSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchCheckSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchCheckSessionResponseBody>(model1);
      }
    }
  }


  virtual ~BatchCheckSessionResponse() = default;
};
class CancelReserveTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> taskId{};

  CancelReserveTaskRequest() {}

  explicit CancelReserveTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelReserveTaskRequest() = default;
};
class CancelReserveTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CancelReserveTaskResponseBody() {}

  explicit CancelReserveTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CancelReserveTaskResponseBody() = default;
};
class CancelReserveTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelReserveTaskResponseBody> body{};

  CancelReserveTaskResponse() {}

  explicit CancelReserveTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelReserveTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelReserveTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelReserveTaskResponse() = default;
};
class CreateAdaptationRequestAdaptTarget : public Darabonba::Model {
public:
  shared_ptr<long> bitRate{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> resolution{};
  shared_ptr<string> startProgram{};

  CreateAdaptationRequestAdaptTarget() {}

  explicit CreateAdaptationRequestAdaptTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitRate) {
      res["BitRate"] = boost::any(*bitRate);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (startProgram) {
      res["StartProgram"] = boost::any(*startProgram);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BitRate") != m.end() && !m["BitRate"].empty()) {
      bitRate = make_shared<long>(boost::any_cast<long>(m["BitRate"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("StartProgram") != m.end() && !m["StartProgram"].empty()) {
      startProgram = make_shared<string>(boost::any_cast<string>(m["StartProgram"]));
    }
  }


  virtual ~CreateAdaptationRequestAdaptTarget() = default;
};
class CreateAdaptationRequest : public Darabonba::Model {
public:
  shared_ptr<CreateAdaptationRequestAdaptTarget> adaptTarget{};
  shared_ptr<string> appVersionId{};

  CreateAdaptationRequest() {}

  explicit CreateAdaptationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptTarget) {
      res["AdaptTarget"] = adaptTarget ? boost::any(adaptTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptTarget") != m.end() && !m["AdaptTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdaptTarget"].type()) {
        CreateAdaptationRequestAdaptTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdaptTarget"]));
        adaptTarget = make_shared<CreateAdaptationRequestAdaptTarget>(model1);
      }
    }
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
  }


  virtual ~CreateAdaptationRequest() = default;
};
class CreateAdaptationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> adaptTargetShrink{};
  shared_ptr<string> appVersionId{};

  CreateAdaptationShrinkRequest() {}

  explicit CreateAdaptationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptTargetShrink) {
      res["AdaptTarget"] = boost::any(*adaptTargetShrink);
    }
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptTarget") != m.end() && !m["AdaptTarget"].empty()) {
      adaptTargetShrink = make_shared<string>(boost::any_cast<string>(m["AdaptTarget"]));
    }
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
  }


  virtual ~CreateAdaptationShrinkRequest() = default;
};
class CreateAdaptationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> adaptApplyId{};
  shared_ptr<string> requestId{};

  CreateAdaptationResponseBody() {}

  explicit CreateAdaptationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptApplyId) {
      res["AdaptApplyId"] = boost::any(*adaptApplyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptApplyId") != m.end() && !m["AdaptApplyId"].empty()) {
      adaptApplyId = make_shared<long>(boost::any_cast<long>(m["AdaptApplyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAdaptationResponseBody() = default;
};
class CreateAdaptationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAdaptationResponseBody> body{};

  CreateAdaptationResponse() {}

  explicit CreateAdaptationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAdaptationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAdaptationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAdaptationResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> streamingAppId{};
  shared_ptr<string> streamingSolution{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (streamingAppId) {
      res["StreamingAppId"] = boost::any(*streamingAppId);
    }
    if (streamingSolution) {
      res["StreamingSolution"] = boost::any(*streamingSolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("StreamingAppId") != m.end() && !m["StreamingAppId"].empty()) {
      streamingAppId = make_shared<string>(boost::any_cast<string>(m["StreamingAppId"]));
    }
    if (m.find("StreamingSolution") != m.end() && !m["StreamingSolution"].empty()) {
      streamingSolution = make_shared<string>(boost::any_cast<string>(m["StreamingSolution"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateAppSessionRequestStartParameters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionRequestStartParameters() {}

  explicit CreateAppSessionRequestStartParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionRequestStartParameters() = default;
};
class CreateAppSessionRequestSystemInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionRequestSystemInfo() {}

  explicit CreateAppSessionRequestSystemInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionRequestSystemInfo() = default;
};
class CreateAppSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> adapterFileId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> customUserId{};
  shared_ptr<string> districtId{};
  shared_ptr<bool> enablePostpaid{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<CreateAppSessionRequestStartParameters>> startParameters{};
  shared_ptr<vector<CreateAppSessionRequestSystemInfo>> systemInfo{};
  shared_ptr<long> timeout{};

  CreateAppSessionRequest() {}

  explicit CreateAppSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adapterFileId) {
      res["AdapterFileId"] = boost::any(*adapterFileId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (enablePostpaid) {
      res["EnablePostpaid"] = boost::any(*enablePostpaid);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startParameters) {
      vector<boost::any> temp1;
      for(auto item1:*startParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StartParameters"] = boost::any(temp1);
    }
    if (systemInfo) {
      vector<boost::any> temp1;
      for(auto item1:*systemInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemInfo"] = boost::any(temp1);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdapterFileId") != m.end() && !m["AdapterFileId"].empty()) {
      adapterFileId = make_shared<string>(boost::any_cast<string>(m["AdapterFileId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("EnablePostpaid") != m.end() && !m["EnablePostpaid"].empty()) {
      enablePostpaid = make_shared<bool>(boost::any_cast<bool>(m["EnablePostpaid"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StartParameters") != m.end() && !m["StartParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["StartParameters"].type()) {
        vector<CreateAppSessionRequestStartParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StartParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionRequestStartParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        startParameters = make_shared<vector<CreateAppSessionRequestStartParameters>>(expect1);
      }
    }
    if (m.find("SystemInfo") != m.end() && !m["SystemInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemInfo"].type()) {
        vector<CreateAppSessionRequestSystemInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionRequestSystemInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemInfo = make_shared<vector<CreateAppSessionRequestSystemInfo>>(expect1);
      }
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~CreateAppSessionRequest() = default;
};
class CreateAppSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<string> requestId{};

  CreateAppSessionResponseBody() {}

  explicit CreateAppSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppSessionResponseBody() = default;
};
class CreateAppSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppSessionResponseBody> body{};

  CreateAppSessionResponse() {}

  explicit CreateAppSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppSessionResponse() = default;
};
class CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo() {}

  explicit CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo() = default;
};
class CreateAppSessionBatchRequestAppInfosResultStore : public Darabonba::Model {
public:
  shared_ptr<bool> need{};
  shared_ptr<vector<CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo>> storeInfo{};
  shared_ptr<string> type{};

  CreateAppSessionBatchRequestAppInfosResultStore() {}

  explicit CreateAppSessionBatchRequestAppInfosResultStore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (need) {
      res["Need"] = boost::any(*need);
    }
    if (storeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*storeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StoreInfo"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Need") != m.end() && !m["Need"].empty()) {
      need = make_shared<bool>(boost::any_cast<bool>(m["Need"]));
    }
    if (m.find("StoreInfo") != m.end() && !m["StoreInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["StoreInfo"].type()) {
        vector<CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StoreInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storeInfo = make_shared<vector<CreateAppSessionBatchRequestAppInfosResultStoreStoreInfo>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAppSessionBatchRequestAppInfosResultStore() = default;
};
class CreateAppSessionBatchRequestAppInfosStartParameters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionBatchRequestAppInfosStartParameters() {}

  explicit CreateAppSessionBatchRequestAppInfosStartParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionBatchRequestAppInfosStartParameters() = default;
};
class CreateAppSessionBatchRequestAppInfosSystemInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionBatchRequestAppInfosSystemInfo() {}

  explicit CreateAppSessionBatchRequestAppInfosSystemInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionBatchRequestAppInfosSystemInfo() = default;
};
class CreateAppSessionBatchRequestAppInfos : public Darabonba::Model {
public:
  shared_ptr<string> adapterFileId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> customUserId{};
  shared_ptr<string> customerSessionId{};
  shared_ptr<string> datasetId{};
  shared_ptr<string> districtId{};
  shared_ptr<string> projectId{};
  shared_ptr<CreateAppSessionBatchRequestAppInfosResultStore> resultStore{};
  shared_ptr<vector<CreateAppSessionBatchRequestAppInfosStartParameters>> startParameters{};
  shared_ptr<vector<CreateAppSessionBatchRequestAppInfosSystemInfo>> systemInfo{};

  CreateAppSessionBatchRequestAppInfos() {}

  explicit CreateAppSessionBatchRequestAppInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adapterFileId) {
      res["AdapterFileId"] = boost::any(*adapterFileId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (customerSessionId) {
      res["CustomerSessionId"] = boost::any(*customerSessionId);
    }
    if (datasetId) {
      res["DatasetId"] = boost::any(*datasetId);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resultStore) {
      res["ResultStore"] = resultStore ? boost::any(resultStore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startParameters) {
      vector<boost::any> temp1;
      for(auto item1:*startParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StartParameters"] = boost::any(temp1);
    }
    if (systemInfo) {
      vector<boost::any> temp1;
      for(auto item1:*systemInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdapterFileId") != m.end() && !m["AdapterFileId"].empty()) {
      adapterFileId = make_shared<string>(boost::any_cast<string>(m["AdapterFileId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("CustomerSessionId") != m.end() && !m["CustomerSessionId"].empty()) {
      customerSessionId = make_shared<string>(boost::any_cast<string>(m["CustomerSessionId"]));
    }
    if (m.find("DatasetId") != m.end() && !m["DatasetId"].empty()) {
      datasetId = make_shared<string>(boost::any_cast<string>(m["DatasetId"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ResultStore") != m.end() && !m["ResultStore"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultStore"].type()) {
        CreateAppSessionBatchRequestAppInfosResultStore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultStore"]));
        resultStore = make_shared<CreateAppSessionBatchRequestAppInfosResultStore>(model1);
      }
    }
    if (m.find("StartParameters") != m.end() && !m["StartParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["StartParameters"].type()) {
        vector<CreateAppSessionBatchRequestAppInfosStartParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StartParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchRequestAppInfosStartParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        startParameters = make_shared<vector<CreateAppSessionBatchRequestAppInfosStartParameters>>(expect1);
      }
    }
    if (m.find("SystemInfo") != m.end() && !m["SystemInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemInfo"].type()) {
        vector<CreateAppSessionBatchRequestAppInfosSystemInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchRequestAppInfosSystemInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemInfo = make_shared<vector<CreateAppSessionBatchRequestAppInfosSystemInfo>>(expect1);
      }
    }
  }


  virtual ~CreateAppSessionBatchRequestAppInfos() = default;
};
class CreateAppSessionBatchRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAppSessionBatchRequestAppInfos>> appInfos{};
  shared_ptr<string> customTaskId{};
  shared_ptr<long> timeout{};

  CreateAppSessionBatchRequest() {}

  explicit CreateAppSessionBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfos) {
      vector<boost::any> temp1;
      for(auto item1:*appInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfos"] = boost::any(temp1);
    }
    if (customTaskId) {
      res["CustomTaskId"] = boost::any(*customTaskId);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfos") != m.end() && !m["AppInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfos"].type()) {
        vector<CreateAppSessionBatchRequestAppInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchRequestAppInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfos = make_shared<vector<CreateAppSessionBatchRequestAppInfos>>(expect1);
      }
    }
    if (m.find("CustomTaskId") != m.end() && !m["CustomTaskId"].empty()) {
      customTaskId = make_shared<string>(boost::any_cast<string>(m["CustomTaskId"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~CreateAppSessionBatchRequest() = default;
};
class CreateAppSessionBatchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInfosShrink{};
  shared_ptr<string> customTaskId{};
  shared_ptr<long> timeout{};

  CreateAppSessionBatchShrinkRequest() {}

  explicit CreateAppSessionBatchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfosShrink) {
      res["AppInfos"] = boost::any(*appInfosShrink);
    }
    if (customTaskId) {
      res["CustomTaskId"] = boost::any(*customTaskId);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfos") != m.end() && !m["AppInfos"].empty()) {
      appInfosShrink = make_shared<string>(boost::any_cast<string>(m["AppInfos"]));
    }
    if (m.find("CustomTaskId") != m.end() && !m["CustomTaskId"].empty()) {
      customTaskId = make_shared<string>(boost::any_cast<string>(m["CustomTaskId"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~CreateAppSessionBatchShrinkRequest() = default;
};
class CreateAppSessionBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> customTaskId{};
  shared_ptr<string> platformTaskId{};
  shared_ptr<string> requestId{};

  CreateAppSessionBatchResponseBody() {}

  explicit CreateAppSessionBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customTaskId) {
      res["CustomTaskId"] = boost::any(*customTaskId);
    }
    if (platformTaskId) {
      res["PlatformTaskId"] = boost::any(*platformTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomTaskId") != m.end() && !m["CustomTaskId"].empty()) {
      customTaskId = make_shared<string>(boost::any_cast<string>(m["CustomTaskId"]));
    }
    if (m.find("PlatformTaskId") != m.end() && !m["PlatformTaskId"].empty()) {
      platformTaskId = make_shared<string>(boost::any_cast<string>(m["PlatformTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppSessionBatchResponseBody() = default;
};
class CreateAppSessionBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppSessionBatchResponseBody> body{};

  CreateAppSessionBatchResponse() {}

  explicit CreateAppSessionBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppSessionBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppSessionBatchResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppSessionBatchResponse() = default;
};
class CreateAppSessionBatchSyncRequestAppInfosMatchRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> values{};

  CreateAppSessionBatchSyncRequestAppInfosMatchRules() {}

  explicit CreateAppSessionBatchSyncRequestAppInfosMatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAppSessionBatchSyncRequestAppInfosMatchRules() = default;
};
class CreateAppSessionBatchSyncRequestAppInfosStartParameters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionBatchSyncRequestAppInfosStartParameters() {}

  explicit CreateAppSessionBatchSyncRequestAppInfosStartParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncRequestAppInfosStartParameters() = default;
};
class CreateAppSessionBatchSyncRequestAppInfosSystemInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionBatchSyncRequestAppInfosSystemInfo() {}

  explicit CreateAppSessionBatchSyncRequestAppInfosSystemInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncRequestAppInfosSystemInfo() = default;
};
class CreateAppSessionBatchSyncRequestAppInfosTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionBatchSyncRequestAppInfosTags() {}

  explicit CreateAppSessionBatchSyncRequestAppInfosTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncRequestAppInfosTags() = default;
};
class CreateAppSessionBatchSyncRequestAppInfos : public Darabonba::Model {
public:
  shared_ptr<string> adapterFileId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> customUserId{};
  shared_ptr<string> customerSessionId{};
  shared_ptr<string> districtId{};
  shared_ptr<vector<CreateAppSessionBatchSyncRequestAppInfosMatchRules>> matchRules{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<CreateAppSessionBatchSyncRequestAppInfosStartParameters>> startParameters{};
  shared_ptr<vector<CreateAppSessionBatchSyncRequestAppInfosSystemInfo>> systemInfo{};
  shared_ptr<vector<CreateAppSessionBatchSyncRequestAppInfosTags>> tags{};

  CreateAppSessionBatchSyncRequestAppInfos() {}

  explicit CreateAppSessionBatchSyncRequestAppInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adapterFileId) {
      res["AdapterFileId"] = boost::any(*adapterFileId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (customerSessionId) {
      res["CustomerSessionId"] = boost::any(*customerSessionId);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (matchRules) {
      vector<boost::any> temp1;
      for(auto item1:*matchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchRules"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startParameters) {
      vector<boost::any> temp1;
      for(auto item1:*startParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StartParameters"] = boost::any(temp1);
    }
    if (systemInfo) {
      vector<boost::any> temp1;
      for(auto item1:*systemInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemInfo"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdapterFileId") != m.end() && !m["AdapterFileId"].empty()) {
      adapterFileId = make_shared<string>(boost::any_cast<string>(m["AdapterFileId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("CustomerSessionId") != m.end() && !m["CustomerSessionId"].empty()) {
      customerSessionId = make_shared<string>(boost::any_cast<string>(m["CustomerSessionId"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("MatchRules") != m.end() && !m["MatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchRules"].type()) {
        vector<CreateAppSessionBatchSyncRequestAppInfosMatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncRequestAppInfosMatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchRules = make_shared<vector<CreateAppSessionBatchSyncRequestAppInfosMatchRules>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StartParameters") != m.end() && !m["StartParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["StartParameters"].type()) {
        vector<CreateAppSessionBatchSyncRequestAppInfosStartParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StartParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncRequestAppInfosStartParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        startParameters = make_shared<vector<CreateAppSessionBatchSyncRequestAppInfosStartParameters>>(expect1);
      }
    }
    if (m.find("SystemInfo") != m.end() && !m["SystemInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemInfo"].type()) {
        vector<CreateAppSessionBatchSyncRequestAppInfosSystemInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncRequestAppInfosSystemInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemInfo = make_shared<vector<CreateAppSessionBatchSyncRequestAppInfosSystemInfo>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateAppSessionBatchSyncRequestAppInfosTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncRequestAppInfosTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateAppSessionBatchSyncRequestAppInfosTags>>(expect1);
      }
    }
  }


  virtual ~CreateAppSessionBatchSyncRequestAppInfos() = default;
};
class CreateAppSessionBatchSyncRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateAppSessionBatchSyncRequestAppInfos>> appInfos{};
  shared_ptr<string> batchId{};

  CreateAppSessionBatchSyncRequest() {}

  explicit CreateAppSessionBatchSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfos) {
      vector<boost::any> temp1;
      for(auto item1:*appInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfos"] = boost::any(temp1);
    }
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfos") != m.end() && !m["AppInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfos"].type()) {
        vector<CreateAppSessionBatchSyncRequestAppInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncRequestAppInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfos = make_shared<vector<CreateAppSessionBatchSyncRequestAppInfos>>(expect1);
      }
    }
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncRequest() = default;
};
class CreateAppSessionBatchSyncShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInfosShrink{};
  shared_ptr<string> batchId{};

  CreateAppSessionBatchSyncShrinkRequest() {}

  explicit CreateAppSessionBatchSyncShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfosShrink) {
      res["AppInfos"] = boost::any(*appInfosShrink);
    }
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfos") != m.end() && !m["AppInfos"].empty()) {
      appInfosShrink = make_shared<string>(boost::any_cast<string>(m["AppInfos"]));
    }
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncShrinkRequest() = default;
};
class CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo() {}

  explicit CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo() = default;
};
class CreateAppSessionBatchSyncResponseBodyFailedList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> customSessionId{};
  shared_ptr<CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo> failedInfo{};

  CreateAppSessionBatchSyncResponseBodyFailedList() {}

  explicit CreateAppSessionBatchSyncResponseBodyFailedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (failedInfo) {
      res["FailedInfo"] = failedInfo ? boost::any(failedInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("FailedInfo") != m.end() && !m["FailedInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailedInfo"].type()) {
        CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailedInfo"]));
        failedInfo = make_shared<CreateAppSessionBatchSyncResponseBodyFailedListFailedInfo>(model1);
      }
    }
  }


  virtual ~CreateAppSessionBatchSyncResponseBodyFailedList() = default;
};
class CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> accessHost{};
  shared_ptr<string> accessPort{};
  shared_ptr<string> districtId{};
  shared_ptr<string> isp{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints() {}

  explicit CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessHost) {
      res["AccessHost"] = boost::any(*accessHost);
    }
    if (accessPort) {
      res["AccessPort"] = boost::any(*accessPort);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessHost") != m.end() && !m["AccessHost"].empty()) {
      accessHost = make_shared<string>(boost::any_cast<string>(m["AccessHost"]));
    }
    if (m.find("AccessPort") != m.end() && !m["AccessPort"].empty()) {
      accessPort = make_shared<string>(boost::any_cast<string>(m["AccessPort"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints() = default;
};
class CreateAppSessionBatchSyncResponseBodyResultListBizInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> biz{};
  shared_ptr<vector<CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints>> endpoints{};

  CreateAppSessionBatchSyncResponseBodyResultListBizInfo() {}

  explicit CreateAppSessionBatchSyncResponseBodyResultListBizInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (biz) {
      res["Biz"] = boost::any(*biz);
    }
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Biz"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      biz = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<CreateAppSessionBatchSyncResponseBodyResultListBizInfoEndpoints>>(expect1);
      }
    }
  }


  virtual ~CreateAppSessionBatchSyncResponseBodyResultListBizInfo() = default;
};
class CreateAppSessionBatchSyncResponseBodyResultList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<CreateAppSessionBatchSyncResponseBodyResultListBizInfo> bizInfo{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};

  CreateAppSessionBatchSyncResponseBodyResultList() {}

  explicit CreateAppSessionBatchSyncResponseBodyResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (bizInfo) {
      res["BizInfo"] = bizInfo ? boost::any(bizInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BizInfo") != m.end() && !m["BizInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizInfo"].type()) {
        CreateAppSessionBatchSyncResponseBodyResultListBizInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizInfo"]));
        bizInfo = make_shared<CreateAppSessionBatchSyncResponseBodyResultListBizInfo>(model1);
      }
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
  }


  virtual ~CreateAppSessionBatchSyncResponseBodyResultList() = default;
};
class CreateAppSessionBatchSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> batchId{};
  shared_ptr<vector<CreateAppSessionBatchSyncResponseBodyFailedList>> failedList{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<CreateAppSessionBatchSyncResponseBodyResultList>> resultList{};

  CreateAppSessionBatchSyncResponseBody() {}

  explicit CreateAppSessionBatchSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (failedList) {
      vector<boost::any> temp1;
      for(auto item1:*failedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultList) {
      vector<boost::any> temp1;
      for(auto item1:*resultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("FailedList") != m.end() && !m["FailedList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedList"].type()) {
        vector<CreateAppSessionBatchSyncResponseBodyFailedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncResponseBodyFailedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedList = make_shared<vector<CreateAppSessionBatchSyncResponseBodyFailedList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultList") != m.end() && !m["ResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultList"].type()) {
        vector<CreateAppSessionBatchSyncResponseBodyResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionBatchSyncResponseBodyResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultList = make_shared<vector<CreateAppSessionBatchSyncResponseBodyResultList>>(expect1);
      }
    }
  }


  virtual ~CreateAppSessionBatchSyncResponseBody() = default;
};
class CreateAppSessionBatchSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppSessionBatchSyncResponseBody> body{};

  CreateAppSessionBatchSyncResponse() {}

  explicit CreateAppSessionBatchSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppSessionBatchSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppSessionBatchSyncResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppSessionBatchSyncResponse() = default;
};
class CreateAppSessionSyncRequestMatchRules : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> values{};

  CreateAppSessionSyncRequestMatchRules() {}

  explicit CreateAppSessionSyncRequestMatchRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateAppSessionSyncRequestMatchRules() = default;
};
class CreateAppSessionSyncRequestStartParameters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionSyncRequestStartParameters() {}

  explicit CreateAppSessionSyncRequestStartParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionSyncRequestStartParameters() = default;
};
class CreateAppSessionSyncRequestSystemInfo : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionSyncRequestSystemInfo() {}

  explicit CreateAppSessionSyncRequestSystemInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionSyncRequestSystemInfo() = default;
};
class CreateAppSessionSyncRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateAppSessionSyncRequestTags() {}

  explicit CreateAppSessionSyncRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateAppSessionSyncRequestTags() = default;
};
class CreateAppSessionSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> adapterFileId{};
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> customUserId{};
  shared_ptr<string> districtId{};
  shared_ptr<vector<CreateAppSessionSyncRequestMatchRules>> matchRules{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<CreateAppSessionSyncRequestStartParameters>> startParameters{};
  shared_ptr<vector<CreateAppSessionSyncRequestSystemInfo>> systemInfo{};
  shared_ptr<vector<CreateAppSessionSyncRequestTags>> tags{};

  CreateAppSessionSyncRequest() {}

  explicit CreateAppSessionSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adapterFileId) {
      res["AdapterFileId"] = boost::any(*adapterFileId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (matchRules) {
      vector<boost::any> temp1;
      for(auto item1:*matchRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MatchRules"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startParameters) {
      vector<boost::any> temp1;
      for(auto item1:*startParameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StartParameters"] = boost::any(temp1);
    }
    if (systemInfo) {
      vector<boost::any> temp1;
      for(auto item1:*systemInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemInfo"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdapterFileId") != m.end() && !m["AdapterFileId"].empty()) {
      adapterFileId = make_shared<string>(boost::any_cast<string>(m["AdapterFileId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("MatchRules") != m.end() && !m["MatchRules"].empty()) {
      if (typeid(vector<boost::any>) == m["MatchRules"].type()) {
        vector<CreateAppSessionSyncRequestMatchRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MatchRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionSyncRequestMatchRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        matchRules = make_shared<vector<CreateAppSessionSyncRequestMatchRules>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StartParameters") != m.end() && !m["StartParameters"].empty()) {
      if (typeid(vector<boost::any>) == m["StartParameters"].type()) {
        vector<CreateAppSessionSyncRequestStartParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StartParameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionSyncRequestStartParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        startParameters = make_shared<vector<CreateAppSessionSyncRequestStartParameters>>(expect1);
      }
    }
    if (m.find("SystemInfo") != m.end() && !m["SystemInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemInfo"].type()) {
        vector<CreateAppSessionSyncRequestSystemInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionSyncRequestSystemInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemInfo = make_shared<vector<CreateAppSessionSyncRequestSystemInfo>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<CreateAppSessionSyncRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionSyncRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<CreateAppSessionSyncRequestTags>>(expect1);
      }
    }
  }


  virtual ~CreateAppSessionSyncRequest() = default;
};
class CreateAppSessionSyncResponseBodyBizInfoEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> accessHost{};
  shared_ptr<string> accessPort{};
  shared_ptr<string> districtId{};
  shared_ptr<string> isp{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateAppSessionSyncResponseBodyBizInfoEndpoints() {}

  explicit CreateAppSessionSyncResponseBodyBizInfoEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessHost) {
      res["AccessHost"] = boost::any(*accessHost);
    }
    if (accessPort) {
      res["AccessPort"] = boost::any(*accessPort);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (isp) {
      res["Isp"] = boost::any(*isp);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessHost") != m.end() && !m["AccessHost"].empty()) {
      accessHost = make_shared<string>(boost::any_cast<string>(m["AccessHost"]));
    }
    if (m.find("AccessPort") != m.end() && !m["AccessPort"].empty()) {
      accessPort = make_shared<string>(boost::any_cast<string>(m["AccessPort"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("Isp") != m.end() && !m["Isp"].empty()) {
      isp = make_shared<string>(boost::any_cast<string>(m["Isp"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateAppSessionSyncResponseBodyBizInfoEndpoints() = default;
};
class CreateAppSessionSyncResponseBodyBizInfo : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> biz{};
  shared_ptr<vector<CreateAppSessionSyncResponseBodyBizInfoEndpoints>> endpoints{};

  CreateAppSessionSyncResponseBodyBizInfo() {}

  explicit CreateAppSessionSyncResponseBodyBizInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (biz) {
      res["Biz"] = boost::any(*biz);
    }
    if (endpoints) {
      vector<boost::any> temp1;
      for(auto item1:*endpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Endpoints"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Biz"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      biz = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["Endpoints"].type()) {
        vector<CreateAppSessionSyncResponseBodyBizInfoEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Endpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppSessionSyncResponseBodyBizInfoEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpoints = make_shared<vector<CreateAppSessionSyncResponseBodyBizInfoEndpoints>>(expect1);
      }
    }
  }


  virtual ~CreateAppSessionSyncResponseBodyBizInfo() = default;
};
class CreateAppSessionSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<CreateAppSessionSyncResponseBodyBizInfo> bizInfo{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<string> requestId{};

  CreateAppSessionSyncResponseBody() {}

  explicit CreateAppSessionSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (bizInfo) {
      res["BizInfo"] = bizInfo ? boost::any(bizInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BizInfo") != m.end() && !m["BizInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizInfo"].type()) {
        CreateAppSessionSyncResponseBodyBizInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizInfo"]));
        bizInfo = make_shared<CreateAppSessionSyncResponseBodyBizInfo>(model1);
      }
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppSessionSyncResponseBody() = default;
};
class CreateAppSessionSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppSessionSyncResponseBody> body{};

  CreateAppSessionSyncResponse() {}

  explicit CreateAppSessionSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppSessionSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppSessionSyncResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppSessionSyncResponse() = default;
};
class CreateAppVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersionName{};

  CreateAppVersionRequest() {}

  explicit CreateAppVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
  }


  virtual ~CreateAppVersionRequest() = default;
};
class CreateAppVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appVersionId{};
  shared_ptr<string> requestId{};

  CreateAppVersionResponseBody() {}

  explicit CreateAppVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppVersionResponseBody() = default;
};
class CreateAppVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppVersionResponseBody> body{};

  CreateAppVersionResponse() {}

  explicit CreateAppVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppVersionResponse() = default;
};
class CreateCapacityReservationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> districtId{};
  shared_ptr<string> expectResourceReadyTime{};
  shared_ptr<long> expectSessionCapacity{};
  shared_ptr<string> projectId{};

  CreateCapacityReservationRequest() {}

  explicit CreateCapacityReservationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (expectResourceReadyTime) {
      res["ExpectResourceReadyTime"] = boost::any(*expectResourceReadyTime);
    }
    if (expectSessionCapacity) {
      res["ExpectSessionCapacity"] = boost::any(*expectSessionCapacity);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("ExpectResourceReadyTime") != m.end() && !m["ExpectResourceReadyTime"].empty()) {
      expectResourceReadyTime = make_shared<string>(boost::any_cast<string>(m["ExpectResourceReadyTime"]));
    }
    if (m.find("ExpectSessionCapacity") != m.end() && !m["ExpectSessionCapacity"].empty()) {
      expectSessionCapacity = make_shared<long>(boost::any_cast<long>(m["ExpectSessionCapacity"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~CreateCapacityReservationRequest() = default;
};
class CreateCapacityReservationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currMaxAllocatableSessionCapacity{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateCapacityReservationResponseBody() {}

  explicit CreateCapacityReservationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currMaxAllocatableSessionCapacity) {
      res["CurrMaxAllocatableSessionCapacity"] = boost::any(*currMaxAllocatableSessionCapacity);
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
    if (m.find("CurrMaxAllocatableSessionCapacity") != m.end() && !m["CurrMaxAllocatableSessionCapacity"].empty()) {
      currMaxAllocatableSessionCapacity = make_shared<long>(boost::any_cast<long>(m["CurrMaxAllocatableSessionCapacity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateCapacityReservationResponseBody() = default;
};
class CreateCapacityReservationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCapacityReservationResponseBody> body{};

  CreateCapacityReservationResponse() {}

  explicit CreateCapacityReservationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCapacityReservationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCapacityReservationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCapacityReservationResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteAppVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersionId{};

  DeleteAppVersionRequest() {}

  explicit DeleteAppVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
  }


  virtual ~DeleteAppVersionRequest() = default;
};
class DeleteAppVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appVersionId{};
  shared_ptr<string> requestId{};

  DeleteAppVersionResponseBody() {}

  explicit DeleteAppVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppVersionResponseBody() = default;
};
class DeleteAppVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppVersionResponseBody> body{};

  DeleteAppVersionResponse() {}

  explicit DeleteAppVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppVersionResponse() = default;
};
class DescribeInstanceStatsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> districtIds{};
  shared_ptr<vector<string>> instanceTypes{};
  shared_ptr<vector<string>> projectIds{};

  DescribeInstanceStatsInfoRequest() {}

  explicit DescribeInstanceStatsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (districtIds) {
      res["DistrictIds"] = boost::any(*districtIds);
    }
    if (instanceTypes) {
      res["InstanceTypes"] = boost::any(*instanceTypes);
    }
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistrictIds") != m.end() && !m["DistrictIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DistrictIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DistrictIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      districtIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProjectIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProjectIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeInstanceStatsInfoRequest() = default;
};
class DescribeInstanceStatsInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> districtId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> operatingInstanceCount{};
  shared_ptr<string> projectId{};
  shared_ptr<long> releasingInstanceCount{};
  shared_ptr<long> reservingInstanceCount{};
  shared_ptr<long> runningInstanceCount{};
  shared_ptr<long> totalCount{};

  DescribeInstanceStatsInfoResponseBodyData() {}

  explicit DescribeInstanceStatsInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (operatingInstanceCount) {
      res["OperatingInstanceCount"] = boost::any(*operatingInstanceCount);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (releasingInstanceCount) {
      res["ReleasingInstanceCount"] = boost::any(*releasingInstanceCount);
    }
    if (reservingInstanceCount) {
      res["ReservingInstanceCount"] = boost::any(*reservingInstanceCount);
    }
    if (runningInstanceCount) {
      res["RunningInstanceCount"] = boost::any(*runningInstanceCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("OperatingInstanceCount") != m.end() && !m["OperatingInstanceCount"].empty()) {
      operatingInstanceCount = make_shared<long>(boost::any_cast<long>(m["OperatingInstanceCount"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ReleasingInstanceCount") != m.end() && !m["ReleasingInstanceCount"].empty()) {
      releasingInstanceCount = make_shared<long>(boost::any_cast<long>(m["ReleasingInstanceCount"]));
    }
    if (m.find("ReservingInstanceCount") != m.end() && !m["ReservingInstanceCount"].empty()) {
      reservingInstanceCount = make_shared<long>(boost::any_cast<long>(m["ReservingInstanceCount"]));
    }
    if (m.find("RunningInstanceCount") != m.end() && !m["RunningInstanceCount"].empty()) {
      runningInstanceCount = make_shared<long>(boost::any_cast<long>(m["RunningInstanceCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstanceStatsInfoResponseBodyData() = default;
};
class DescribeInstanceStatsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceStatsInfoResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeInstanceStatsInfoResponseBody() {}

  explicit DescribeInstanceStatsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<DescribeInstanceStatsInfoResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceStatsInfoResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeInstanceStatsInfoResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeInstanceStatsInfoResponseBody() = default;
};
class DescribeInstanceStatsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceStatsInfoResponseBody> body{};

  DescribeInstanceStatsInfoResponse() {}

  explicit DescribeInstanceStatsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceStatsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceStatsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceStatsInfoResponse() = default;
};
class GetAdaptationRequest : public Darabonba::Model {
public:
  shared_ptr<long> adaptApplyId{};
  shared_ptr<string> appVersionId{};

  GetAdaptationRequest() {}

  explicit GetAdaptationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptApplyId) {
      res["AdaptApplyId"] = boost::any(*adaptApplyId);
    }
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptApplyId") != m.end() && !m["AdaptApplyId"].empty()) {
      adaptApplyId = make_shared<long>(boost::any_cast<long>(m["AdaptApplyId"]));
    }
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
  }


  virtual ~GetAdaptationRequest() = default;
};
class GetAdaptationResponseBodyAdaptTarget : public Darabonba::Model {
public:
  shared_ptr<long> bitRate{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> resolution{};
  shared_ptr<string> startProgram{};

  GetAdaptationResponseBodyAdaptTarget() {}

  explicit GetAdaptationResponseBodyAdaptTarget(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitRate) {
      res["BitRate"] = boost::any(*bitRate);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (startProgram) {
      res["StartProgram"] = boost::any(*startProgram);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BitRate") != m.end() && !m["BitRate"].empty()) {
      bitRate = make_shared<long>(boost::any_cast<long>(m["BitRate"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("StartProgram") != m.end() && !m["StartProgram"].empty()) {
      startProgram = make_shared<string>(boost::any_cast<string>(m["StartProgram"]));
    }
  }


  virtual ~GetAdaptationResponseBodyAdaptTarget() = default;
};
class GetAdaptationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> adaptApplyId{};
  shared_ptr<GetAdaptationResponseBodyAdaptTarget> adaptTarget{};
  shared_ptr<string> appId{};
  shared_ptr<string> appVersionId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};

  GetAdaptationResponseBody() {}

  explicit GetAdaptationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptApplyId) {
      res["AdaptApplyId"] = boost::any(*adaptApplyId);
    }
    if (adaptTarget) {
      res["AdaptTarget"] = adaptTarget ? boost::any(adaptTarget->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptApplyId") != m.end() && !m["AdaptApplyId"].empty()) {
      adaptApplyId = make_shared<long>(boost::any_cast<long>(m["AdaptApplyId"]));
    }
    if (m.find("AdaptTarget") != m.end() && !m["AdaptTarget"].empty()) {
      if (typeid(map<string, boost::any>) == m["AdaptTarget"].type()) {
        GetAdaptationResponseBodyAdaptTarget model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AdaptTarget"]));
        adaptTarget = make_shared<GetAdaptationResponseBodyAdaptTarget>(model1);
      }
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAdaptationResponseBody() = default;
};
class GetAdaptationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAdaptationResponseBody> body{};

  GetAdaptationResponse() {}

  explicit GetAdaptationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAdaptationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAdaptationResponseBody>(model1);
      }
    }
  }


  virtual ~GetAdaptationResponse() = default;
};
class GetAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};

  GetAppRequest() {}

  explicit GetAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAppRequest() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};
  shared_ptr<string> streamingAppId{};
  shared_ptr<string> streamingSolution{};
  shared_ptr<long> versionAdaptNum{};
  shared_ptr<long> versionTotalNum{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (streamingAppId) {
      res["StreamingAppId"] = boost::any(*streamingAppId);
    }
    if (streamingSolution) {
      res["StreamingSolution"] = boost::any(*streamingSolution);
    }
    if (versionAdaptNum) {
      res["VersionAdaptNum"] = boost::any(*versionAdaptNum);
    }
    if (versionTotalNum) {
      res["VersionTotalNum"] = boost::any(*versionTotalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StreamingAppId") != m.end() && !m["StreamingAppId"].empty()) {
      streamingAppId = make_shared<string>(boost::any_cast<string>(m["StreamingAppId"]));
    }
    if (m.find("StreamingSolution") != m.end() && !m["StreamingSolution"].empty()) {
      streamingSolution = make_shared<string>(boost::any_cast<string>(m["StreamingSolution"]));
    }
    if (m.find("VersionAdaptNum") != m.end() && !m["VersionAdaptNum"].empty()) {
      versionAdaptNum = make_shared<long>(boost::any_cast<long>(m["VersionAdaptNum"]));
    }
    if (m.find("VersionTotalNum") != m.end() && !m["VersionTotalNum"].empty()) {
      versionTotalNum = make_shared<long>(boost::any_cast<long>(m["VersionTotalNum"]));
    }
  }


  virtual ~GetAppResponseBody() = default;
};
class GetAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppResponseBody> body{};

  GetAppResponse() {}

  explicit GetAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetAppCcuRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> projectId{};

  GetAppCcuRequest() {}

  explicit GetAppCcuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetAppCcuRequest() = default;
};
class GetAppCcuResponseBodyDetailList : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> ccu{};
  shared_ptr<string> districtId{};
  shared_ptr<string> projectId{};

  GetAppCcuResponseBodyDetailList() {}

  explicit GetAppCcuResponseBodyDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (ccu) {
      res["Ccu"] = boost::any(*ccu);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("Ccu") != m.end() && !m["Ccu"].empty()) {
      ccu = make_shared<string>(boost::any_cast<string>(m["Ccu"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetAppCcuResponseBodyDetailList() = default;
};
class GetAppCcuResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetAppCcuResponseBodyDetailList>> detailList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> timestamp{};

  GetAppCcuResponseBody() {}

  explicit GetAppCcuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailList) {
      vector<boost::any> temp1;
      for(auto item1:*detailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetailList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailList") != m.end() && !m["DetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetailList"].type()) {
        vector<GetAppCcuResponseBodyDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppCcuResponseBodyDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detailList = make_shared<vector<GetAppCcuResponseBodyDetailList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~GetAppCcuResponseBody() = default;
};
class GetAppCcuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppCcuResponseBody> body{};

  GetAppCcuResponse() {}

  explicit GetAppCcuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppCcuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppCcuResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppCcuResponse() = default;
};
class GetAppSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};

  GetAppSessionRequest() {}

  explicit GetAppSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
  }


  virtual ~GetAppSessionRequest() = default;
};
class GetAppSessionResponseBodyBizInfo : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> stopTime{};

  GetAppSessionResponseBodyBizInfo() {}

  explicit GetAppSessionResponseBodyBizInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
  }


  virtual ~GetAppSessionResponseBodyBizInfo() = default;
};
class GetAppSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<GetAppSessionResponseBodyBizInfo> bizInfo{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetAppSessionResponseBody() {}

  explicit GetAppSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (bizInfo) {
      res["BizInfo"] = bizInfo ? boost::any(bizInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BizInfo") != m.end() && !m["BizInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizInfo"].type()) {
        GetAppSessionResponseBodyBizInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizInfo"]));
        bizInfo = make_shared<GetAppSessionResponseBodyBizInfo>(model1);
      }
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAppSessionResponseBody() = default;
};
class GetAppSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppSessionResponseBody> body{};

  GetAppSessionResponse() {}

  explicit GetAppSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppSessionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppSessionResponse() = default;
};
class GetAppVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersionId{};

  GetAppVersionRequest() {}

  explicit GetAppVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
  }


  virtual ~GetAppVersionRequest() = default;
};
class GetAppVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersionId{};
  shared_ptr<string> appVersionName{};
  shared_ptr<string> appVersionStatus{};
  shared_ptr<string> appVersionStatusMemo{};
  shared_ptr<double> consumeCu{};
  shared_ptr<string> fileAddress{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> fileUploadFinishTime{};
  shared_ptr<string> fileUploadType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> requestId{};

  GetAppVersionResponseBody() {}

  explicit GetAppVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    if (appVersionStatus) {
      res["AppVersionStatus"] = boost::any(*appVersionStatus);
    }
    if (appVersionStatusMemo) {
      res["AppVersionStatusMemo"] = boost::any(*appVersionStatusMemo);
    }
    if (consumeCu) {
      res["ConsumeCu"] = boost::any(*consumeCu);
    }
    if (fileAddress) {
      res["FileAddress"] = boost::any(*fileAddress);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUploadFinishTime) {
      res["FileUploadFinishTime"] = boost::any(*fileUploadFinishTime);
    }
    if (fileUploadType) {
      res["FileUploadType"] = boost::any(*fileUploadType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
    if (m.find("AppVersionStatus") != m.end() && !m["AppVersionStatus"].empty()) {
      appVersionStatus = make_shared<string>(boost::any_cast<string>(m["AppVersionStatus"]));
    }
    if (m.find("AppVersionStatusMemo") != m.end() && !m["AppVersionStatusMemo"].empty()) {
      appVersionStatusMemo = make_shared<string>(boost::any_cast<string>(m["AppVersionStatusMemo"]));
    }
    if (m.find("ConsumeCu") != m.end() && !m["ConsumeCu"].empty()) {
      consumeCu = make_shared<double>(boost::any_cast<double>(m["ConsumeCu"]));
    }
    if (m.find("FileAddress") != m.end() && !m["FileAddress"].empty()) {
      fileAddress = make_shared<string>(boost::any_cast<string>(m["FileAddress"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileUploadFinishTime") != m.end() && !m["FileUploadFinishTime"].empty()) {
      fileUploadFinishTime = make_shared<string>(boost::any_cast<string>(m["FileUploadFinishTime"]));
    }
    if (m.find("FileUploadType") != m.end() && !m["FileUploadType"].empty()) {
      fileUploadType = make_shared<string>(boost::any_cast<string>(m["FileUploadType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppVersionResponseBody() = default;
};
class GetAppVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppVersionResponseBody> body{};

  GetAppVersionResponse() {}

  explicit GetAppVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppVersionResponse() = default;
};
class GetCapacityRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> districtId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};

  GetCapacityRequest() {}

  explicit GetCapacityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetCapacityRequest() = default;
};
class GetCapacityResponseBodyCapacities : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> districtId{};
  shared_ptr<string> projectId{};
  shared_ptr<long> sessionCapacity{};

  GetCapacityResponseBodyCapacities() {}

  explicit GetCapacityResponseBodyCapacities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sessionCapacity) {
      res["SessionCapacity"] = boost::any(*sessionCapacity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SessionCapacity") != m.end() && !m["SessionCapacity"].empty()) {
      sessionCapacity = make_shared<long>(boost::any_cast<long>(m["SessionCapacity"]));
    }
  }


  virtual ~GetCapacityResponseBodyCapacities() = default;
};
class GetCapacityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetCapacityResponseBodyCapacities>> capacities{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GetCapacityResponseBody() {}

  explicit GetCapacityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacities) {
      vector<boost::any> temp1;
      for(auto item1:*capacities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Capacities"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Capacities") != m.end() && !m["Capacities"].empty()) {
      if (typeid(vector<boost::any>) == m["Capacities"].type()) {
        vector<GetCapacityResponseBodyCapacities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Capacities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCapacityResponseBodyCapacities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        capacities = make_shared<vector<GetCapacityResponseBodyCapacities>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetCapacityResponseBody() = default;
};
class GetCapacityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCapacityResponseBody> body{};

  GetCapacityResponse() {}

  explicit GetCapacityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCapacityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCapacityResponseBody>(model1);
      }
    }
  }


  virtual ~GetCapacityResponse() = default;
};
class GetReserveTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetReserveTaskDetailRequest() {}

  explicit GetReserveTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetReserveTaskDetailRequest() = default;
};
class GetReserveTaskDetailResponseBodyResBatchList : public Darabonba::Model {
public:
  shared_ptr<string> resBatchId{};
  shared_ptr<string> resBatchTagName{};

  GetReserveTaskDetailResponseBodyResBatchList() {}

  explicit GetReserveTaskDetailResponseBodyResBatchList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resBatchId) {
      res["ResBatchId"] = boost::any(*resBatchId);
    }
    if (resBatchTagName) {
      res["ResBatchTagName"] = boost::any(*resBatchTagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResBatchId") != m.end() && !m["ResBatchId"].empty()) {
      resBatchId = make_shared<string>(boost::any_cast<string>(m["ResBatchId"]));
    }
    if (m.find("ResBatchTagName") != m.end() && !m["ResBatchTagName"].empty()) {
      resBatchTagName = make_shared<string>(boost::any_cast<string>(m["ResBatchTagName"]));
    }
  }


  virtual ~GetReserveTaskDetailResponseBodyResBatchList() = default;
};
class GetReserveTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<long> currCompletedSessionCapacity{};
  shared_ptr<string> districtId{};
  shared_ptr<string> expectResourceReadyTime{};
  shared_ptr<long> expectSessionCapacity{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetReserveTaskDetailResponseBodyResBatchList>> resBatchList{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  GetReserveTaskDetailResponseBody() {}

  explicit GetReserveTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (currCompletedSessionCapacity) {
      res["CurrCompletedSessionCapacity"] = boost::any(*currCompletedSessionCapacity);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (expectResourceReadyTime) {
      res["ExpectResourceReadyTime"] = boost::any(*expectResourceReadyTime);
    }
    if (expectSessionCapacity) {
      res["ExpectSessionCapacity"] = boost::any(*expectSessionCapacity);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resBatchList) {
      vector<boost::any> temp1;
      for(auto item1:*resBatchList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResBatchList"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CurrCompletedSessionCapacity") != m.end() && !m["CurrCompletedSessionCapacity"].empty()) {
      currCompletedSessionCapacity = make_shared<long>(boost::any_cast<long>(m["CurrCompletedSessionCapacity"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("ExpectResourceReadyTime") != m.end() && !m["ExpectResourceReadyTime"].empty()) {
      expectResourceReadyTime = make_shared<string>(boost::any_cast<string>(m["ExpectResourceReadyTime"]));
    }
    if (m.find("ExpectSessionCapacity") != m.end() && !m["ExpectSessionCapacity"].empty()) {
      expectSessionCapacity = make_shared<long>(boost::any_cast<long>(m["ExpectSessionCapacity"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResBatchList") != m.end() && !m["ResBatchList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResBatchList"].type()) {
        vector<GetReserveTaskDetailResponseBodyResBatchList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResBatchList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetReserveTaskDetailResponseBodyResBatchList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resBatchList = make_shared<vector<GetReserveTaskDetailResponseBodyResBatchList>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~GetReserveTaskDetailResponseBody() = default;
};
class GetReserveTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReserveTaskDetailResponseBody> body{};

  GetReserveTaskDetailResponse() {}

  explicit GetReserveTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReserveTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReserveTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetReserveTaskDetailResponse() = default;
};
class GetResourcePublicIPsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};

  GetResourcePublicIPsRequest() {}

  explicit GetResourcePublicIPsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetResourcePublicIPsRequest() = default;
};
class GetResourcePublicIPsResponseBodyIpList : public Darabonba::Model {
public:
  shared_ptr<string> ip{};
  shared_ptr<string> projectId{};

  GetResourcePublicIPsResponseBodyIpList() {}

  explicit GetResourcePublicIPsResponseBodyIpList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetResourcePublicIPsResponseBodyIpList() = default;
};
class GetResourcePublicIPsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetResourcePublicIPsResponseBodyIpList>> ipList{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GetResourcePublicIPsResponseBody() {}

  explicit GetResourcePublicIPsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipList) {
      vector<boost::any> temp1;
      for(auto item1:*ipList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpList"] = boost::any(temp1);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      if (typeid(vector<boost::any>) == m["IpList"].type()) {
        vector<GetResourcePublicIPsResponseBodyIpList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetResourcePublicIPsResponseBodyIpList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipList = make_shared<vector<GetResourcePublicIPsResponseBodyIpList>>(expect1);
      }
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetResourcePublicIPsResponseBody() = default;
};
class GetResourcePublicIPsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourcePublicIPsResponseBody> body{};

  GetResourcePublicIPsResponse() {}

  explicit GetResourcePublicIPsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourcePublicIPsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcePublicIPsResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcePublicIPsResponse() = default;
};
class ListAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> keySearch{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAppRequest() {}

  explicit ListAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keySearch) {
      res["KeySearch"] = boost::any(*keySearch);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeySearch") != m.end() && !m["KeySearch"].empty()) {
      keySearch = make_shared<string>(boost::any_cast<string>(m["KeySearch"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAppRequest() = default;
};
class ListAppResponseBodyApps : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> versionAdaptNum{};
  shared_ptr<long> versionTotalNum{};

  ListAppResponseBodyApps() {}

  explicit ListAppResponseBodyApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (versionAdaptNum) {
      res["VersionAdaptNum"] = boost::any(*versionAdaptNum);
    }
    if (versionTotalNum) {
      res["VersionTotalNum"] = boost::any(*versionTotalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("VersionAdaptNum") != m.end() && !m["VersionAdaptNum"].empty()) {
      versionAdaptNum = make_shared<long>(boost::any_cast<long>(m["VersionAdaptNum"]));
    }
    if (m.find("VersionTotalNum") != m.end() && !m["VersionTotalNum"].empty()) {
      versionTotalNum = make_shared<long>(boost::any_cast<long>(m["VersionTotalNum"]));
    }
  }


  virtual ~ListAppResponseBodyApps() = default;
};
class ListAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppResponseBodyApps>> apps{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListAppResponseBody() {}

  explicit ListAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apps) {
      vector<boost::any> temp1;
      for(auto item1:*apps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Apps"] = boost::any(temp1);
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
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(vector<boost::any>) == m["Apps"].type()) {
        vector<ListAppResponseBodyApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Apps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppResponseBodyApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apps = make_shared<vector<ListAppResponseBodyApps>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListAppResponseBody() = default;
};
class ListAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppResponseBody> body{};

  ListAppResponse() {}

  explicit ListAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppResponse() = default;
};
class ListAppSessionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<string>> customSessionIds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> platformSessionIds{};
  shared_ptr<string> projectId{};

  ListAppSessionsRequest() {}

  explicit ListAppSessionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (customSessionIds) {
      res["CustomSessionIds"] = boost::any(*customSessionIds);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (platformSessionIds) {
      res["PlatformSessionIds"] = boost::any(*platformSessionIds);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CustomSessionIds") != m.end() && !m["CustomSessionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CustomSessionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CustomSessionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      customSessionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlatformSessionIds") != m.end() && !m["PlatformSessionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PlatformSessionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PlatformSessionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      platformSessionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListAppSessionsRequest() = default;
};
class ListAppSessionsResponseBodyAppSessionsBizInfo : public Darabonba::Model {
public:
  shared_ptr<string> startTime{};
  shared_ptr<string> stopTime{};

  ListAppSessionsResponseBodyAppSessionsBizInfo() {}

  explicit ListAppSessionsResponseBodyAppSessionsBizInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (stopTime) {
      res["StopTime"] = boost::any(*stopTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StopTime") != m.end() && !m["StopTime"].empty()) {
      stopTime = make_shared<string>(boost::any_cast<string>(m["StopTime"]));
    }
  }


  virtual ~ListAppSessionsResponseBodyAppSessionsBizInfo() = default;
};
class ListAppSessionsResponseBodyAppSessions : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<ListAppSessionsResponseBodyAppSessionsBizInfo> bizInfo{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};

  ListAppSessionsResponseBodyAppSessions() {}

  explicit ListAppSessionsResponseBodyAppSessions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (bizInfo) {
      res["BizInfo"] = bizInfo ? boost::any(bizInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BizInfo") != m.end() && !m["BizInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizInfo"].type()) {
        ListAppSessionsResponseBodyAppSessionsBizInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizInfo"]));
        bizInfo = make_shared<ListAppSessionsResponseBodyAppSessionsBizInfo>(model1);
      }
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListAppSessionsResponseBodyAppSessions() = default;
};
class ListAppSessionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppSessionsResponseBodyAppSessions>> appSessions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAppSessionsResponseBody() {}

  explicit ListAppSessionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSessions) {
      vector<boost::any> temp1;
      for(auto item1:*appSessions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppSessions"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSessions") != m.end() && !m["AppSessions"].empty()) {
      if (typeid(vector<boost::any>) == m["AppSessions"].type()) {
        vector<ListAppSessionsResponseBodyAppSessions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppSessions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppSessionsResponseBodyAppSessions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appSessions = make_shared<vector<ListAppSessionsResponseBodyAppSessions>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAppSessionsResponseBody() = default;
};
class ListAppSessionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppSessionsResponseBody> body{};

  ListAppSessionsResponse() {}

  explicit ListAppSessionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppSessionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppSessionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppSessionsResponse() = default;
};
class ListAppVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAppVersionRequest() {}

  explicit ListAppVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListAppVersionRequest() = default;
};
class ListAppVersionResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersionId{};
  shared_ptr<string> appVersionName{};
  shared_ptr<string> appVersionStatus{};
  shared_ptr<string> appVersionStatusMemo{};
  shared_ptr<double> consumeCu{};
  shared_ptr<string> fileAddress{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> fileUploadFinishTime{};
  shared_ptr<string> fileUploadType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};

  ListAppVersionResponseBodyVersions() {}

  explicit ListAppVersionResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    if (appVersionStatus) {
      res["AppVersionStatus"] = boost::any(*appVersionStatus);
    }
    if (appVersionStatusMemo) {
      res["AppVersionStatusMemo"] = boost::any(*appVersionStatusMemo);
    }
    if (consumeCu) {
      res["ConsumeCu"] = boost::any(*consumeCu);
    }
    if (fileAddress) {
      res["FileAddress"] = boost::any(*fileAddress);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (fileUploadFinishTime) {
      res["FileUploadFinishTime"] = boost::any(*fileUploadFinishTime);
    }
    if (fileUploadType) {
      res["FileUploadType"] = boost::any(*fileUploadType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
    if (m.find("AppVersionStatus") != m.end() && !m["AppVersionStatus"].empty()) {
      appVersionStatus = make_shared<string>(boost::any_cast<string>(m["AppVersionStatus"]));
    }
    if (m.find("AppVersionStatusMemo") != m.end() && !m["AppVersionStatusMemo"].empty()) {
      appVersionStatusMemo = make_shared<string>(boost::any_cast<string>(m["AppVersionStatusMemo"]));
    }
    if (m.find("ConsumeCu") != m.end() && !m["ConsumeCu"].empty()) {
      consumeCu = make_shared<double>(boost::any_cast<double>(m["ConsumeCu"]));
    }
    if (m.find("FileAddress") != m.end() && !m["FileAddress"].empty()) {
      fileAddress = make_shared<string>(boost::any_cast<string>(m["FileAddress"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("FileUploadFinishTime") != m.end() && !m["FileUploadFinishTime"].empty()) {
      fileUploadFinishTime = make_shared<string>(boost::any_cast<string>(m["FileUploadFinishTime"]));
    }
    if (m.find("FileUploadType") != m.end() && !m["FileUploadType"].empty()) {
      fileUploadType = make_shared<string>(boost::any_cast<string>(m["FileUploadType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
  }


  virtual ~ListAppVersionResponseBodyVersions() = default;
};
class ListAppVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};
  shared_ptr<vector<ListAppVersionResponseBodyVersions>> versions{};

  ListAppVersionResponseBody() {}

  explicit ListAppVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ListAppVersionResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppVersionResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListAppVersionResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListAppVersionResponseBody() = default;
};
class ListAppVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppVersionResponseBody> body{};

  ListAppVersionResponse() {}

  explicit ListAppVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppVersionResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> districtId{};
  shared_ptr<vector<string>> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> districtId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ModifyAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};

  ModifyAppRequest() {}

  explicit ModifyAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
  }


  virtual ~ModifyAppRequest() = default;
};
class ModifyAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestId{};

  ModifyAppResponseBody() {}

  explicit ModifyAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppResponseBody() = default;
};
class ModifyAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppResponseBody> body{};

  ModifyAppResponse() {}

  explicit ModifyAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppResponse() = default;
};
class ModifyAppVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersionId{};
  shared_ptr<string> appVersionName{};

  ModifyAppVersionRequest() {}

  explicit ModifyAppVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (appVersionName) {
      res["AppVersionName"] = boost::any(*appVersionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("AppVersionName") != m.end() && !m["AppVersionName"].empty()) {
      appVersionName = make_shared<string>(boost::any_cast<string>(m["AppVersionName"]));
    }
  }


  virtual ~ModifyAppVersionRequest() = default;
};
class ModifyAppVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appVersionId{};
  shared_ptr<string> requestId{};

  ModifyAppVersionResponseBody() {}

  explicit ModifyAppVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersionId) {
      res["AppVersionId"] = boost::any(*appVersionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppVersionId") != m.end() && !m["AppVersionId"].empty()) {
      appVersionId = make_shared<string>(boost::any_cast<string>(m["AppVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppVersionResponseBody() = default;
};
class ModifyAppVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppVersionResponseBody> body{};

  ModifyAppVersionResponse() {}

  explicit ModifyAppVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAppVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppVersionResponse() = default;
};
class ReleaseCapacityRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> districtId{};
  shared_ptr<long> expectReleaseSessionCapacity{};
  shared_ptr<string> projectId{};

  ReleaseCapacityRequest() {}

  explicit ReleaseCapacityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (expectReleaseSessionCapacity) {
      res["ExpectReleaseSessionCapacity"] = boost::any(*expectReleaseSessionCapacity);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("ExpectReleaseSessionCapacity") != m.end() && !m["ExpectReleaseSessionCapacity"].empty()) {
      expectReleaseSessionCapacity = make_shared<long>(boost::any_cast<long>(m["ExpectReleaseSessionCapacity"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ReleaseCapacityRequest() = default;
};
class ReleaseCapacityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ReleaseCapacityResponseBody() {}

  explicit ReleaseCapacityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ReleaseCapacityResponseBody() = default;
};
class ReleaseCapacityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseCapacityResponseBody> body{};

  ReleaseCapacityResponse() {}

  explicit ReleaseCapacityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseCapacityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseCapacityResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseCapacityResponse() = default;
};
class ReleaseCapacityByBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> resBatchId{};

  ReleaseCapacityByBatchRequest() {}

  explicit ReleaseCapacityByBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resBatchId) {
      res["ResBatchId"] = boost::any(*resBatchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResBatchId") != m.end() && !m["ResBatchId"].empty()) {
      resBatchId = make_shared<string>(boost::any_cast<string>(m["ResBatchId"]));
    }
  }


  virtual ~ReleaseCapacityByBatchRequest() = default;
};
class ReleaseCapacityByBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReleaseCapacityByBatchResponseBody() {}

  explicit ReleaseCapacityByBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseCapacityByBatchResponseBody() = default;
};
class ReleaseCapacityByBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseCapacityByBatchResponseBody> body{};

  ReleaseCapacityByBatchResponse() {}

  explicit ReleaseCapacityByBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseCapacityByBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseCapacityByBatchResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseCapacityByBatchResponse() = default;
};
class ReleaseInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> districtId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> projectId{};

  ReleaseInstancesRequest() {}

  explicit ReleaseInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ReleaseInstancesRequest() = default;
};
class ReleaseInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> requestId{};

  ReleaseInstancesResponseBody() {}

  explicit ReleaseInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReleaseInstancesResponseBody() = default;
};
class ReleaseInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseInstancesResponseBody> body{};

  ReleaseInstancesResponse() {}

  explicit ReleaseInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseInstancesResponse() = default;
};
class ReserveInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> amount{};
  shared_ptr<string> districtId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> projectId{};

  ReserveInstancesRequest() {}

  explicit ReserveInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (districtId) {
      res["DistrictId"] = boost::any(*districtId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("DistrictId") != m.end() && !m["DistrictId"].empty()) {
      districtId = make_shared<string>(boost::any_cast<string>(m["DistrictId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ReserveInstancesRequest() = default;
};
class ReserveInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> requestId{};

  ReserveInstancesResponseBody() {}

  explicit ReserveInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReserveInstancesResponseBody() = default;
};
class ReserveInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReserveInstancesResponseBody> body{};

  ReserveInstancesResponse() {}

  explicit ReserveInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReserveInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReserveInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ReserveInstancesResponse() = default;
};
class SendBizCocChangeCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> platformSessionId{};
  shared_ptr<bool> result{};

  SendBizCocChangeCallbackRequest() {}

  explicit SendBizCocChangeCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~SendBizCocChangeCallbackRequest() = default;
};
class SendBizCocChangeCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendBizCocChangeCallbackResponseBody() {}

  explicit SendBizCocChangeCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendBizCocChangeCallbackResponseBody() = default;
};
class SendBizCocChangeCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendBizCocChangeCallbackResponseBody> body{};

  SendBizCocChangeCallbackResponse() {}

  explicit SendBizCocChangeCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendBizCocChangeCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendBizCocChangeCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~SendBizCocChangeCallbackResponse() = default;
};
class StopAppSessionRequestStopParam : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<boost::any> value{};

  StopAppSessionRequestStopParam() {}

  explicit StopAppSessionRequestStopParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["Value"]));
    }
  }


  virtual ~StopAppSessionRequestStopParam() = default;
};
class StopAppSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<vector<StopAppSessionRequestStopParam>> stopParam{};

  StopAppSessionRequest() {}

  explicit StopAppSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (stopParam) {
      vector<boost::any> temp1;
      for(auto item1:*stopParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StopParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("StopParam") != m.end() && !m["StopParam"].empty()) {
      if (typeid(vector<boost::any>) == m["StopParam"].type()) {
        vector<StopAppSessionRequestStopParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StopParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StopAppSessionRequestStopParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stopParam = make_shared<vector<StopAppSessionRequestStopParam>>(expect1);
      }
    }
  }


  virtual ~StopAppSessionRequest() = default;
};
class StopAppSessionShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<string> stopParamShrink{};

  StopAppSessionShrinkRequest() {}

  explicit StopAppSessionShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (stopParamShrink) {
      res["StopParam"] = boost::any(*stopParamShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("StopParam") != m.end() && !m["StopParam"].empty()) {
      stopParamShrink = make_shared<string>(boost::any_cast<string>(m["StopParam"]));
    }
  }


  virtual ~StopAppSessionShrinkRequest() = default;
};
class StopAppSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};
  shared_ptr<string> requestId{};

  StopAppSessionResponseBody() {}

  explicit StopAppSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopAppSessionResponseBody() = default;
};
class StopAppSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAppSessionResponseBody> body{};

  StopAppSessionResponse() {}

  explicit StopAppSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAppSessionResponseBody>(model1);
      }
    }
  }


  virtual ~StopAppSessionResponse() = default;
};
class StopAppSessionBatchRequestStopParam : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<boost::any> value{};

  StopAppSessionBatchRequestStopParam() {}

  explicit StopAppSessionBatchRequestStopParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["Value"]));
    }
  }


  virtual ~StopAppSessionBatchRequestStopParam() = default;
};
class StopAppSessionBatchRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  StopAppSessionBatchRequestTags() {}

  explicit StopAppSessionBatchRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~StopAppSessionBatchRequestTags() = default;
};
class StopAppSessionBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> batchId{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<StopAppSessionBatchRequestStopParam>> stopParam{};
  shared_ptr<vector<StopAppSessionBatchRequestTags>> tags{};

  StopAppSessionBatchRequest() {}

  explicit StopAppSessionBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (stopParam) {
      vector<boost::any> temp1;
      for(auto item1:*stopParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StopParam"] = boost::any(temp1);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StopParam") != m.end() && !m["StopParam"].empty()) {
      if (typeid(vector<boost::any>) == m["StopParam"].type()) {
        vector<StopAppSessionBatchRequestStopParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StopParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StopAppSessionBatchRequestStopParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stopParam = make_shared<vector<StopAppSessionBatchRequestStopParam>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<StopAppSessionBatchRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StopAppSessionBatchRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<StopAppSessionBatchRequestTags>>(expect1);
      }
    }
  }


  virtual ~StopAppSessionBatchRequest() = default;
};
class StopAppSessionBatchShrinkRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  StopAppSessionBatchShrinkRequestTags() {}

  explicit StopAppSessionBatchShrinkRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~StopAppSessionBatchShrinkRequestTags() = default;
};
class StopAppSessionBatchShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> batchId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> stopParamShrink{};
  shared_ptr<vector<StopAppSessionBatchShrinkRequestTags>> tags{};

  StopAppSessionBatchShrinkRequest() {}

  explicit StopAppSessionBatchShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (stopParamShrink) {
      res["StopParam"] = boost::any(*stopParamShrink);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StopParam") != m.end() && !m["StopParam"].empty()) {
      stopParamShrink = make_shared<string>(boost::any_cast<string>(m["StopParam"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<StopAppSessionBatchShrinkRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            StopAppSessionBatchShrinkRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<StopAppSessionBatchShrinkRequestTags>>(expect1);
      }
    }
  }


  virtual ~StopAppSessionBatchShrinkRequest() = default;
};
class StopAppSessionBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> batchId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  StopAppSessionBatchResponseBody() {}

  explicit StopAppSessionBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (batchId) {
      res["BatchId"] = boost::any(*batchId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("BatchId") != m.end() && !m["BatchId"].empty()) {
      batchId = make_shared<string>(boost::any_cast<string>(m["BatchId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopAppSessionBatchResponseBody() = default;
};
class StopAppSessionBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAppSessionBatchResponseBody> body{};

  StopAppSessionBatchResponse() {}

  explicit StopAppSessionBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppSessionBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAppSessionBatchResponseBody>(model1);
      }
    }
  }


  virtual ~StopAppSessionBatchResponse() = default;
};
class UpdateSessionBizStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizStatus{};
  shared_ptr<string> platformSessionId{};

  UpdateSessionBizStatusRequest() {}

  explicit UpdateSessionBizStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["BizStatus"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
  }


  virtual ~UpdateSessionBizStatusRequest() = default;
};
class UpdateSessionBizStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customSessionId{};
  shared_ptr<string> platformSessionId{};

  UpdateSessionBizStatusResponseBodyData() {}

  explicit UpdateSessionBizStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSessionId) {
      res["CustomSessionId"] = boost::any(*customSessionId);
    }
    if (platformSessionId) {
      res["PlatformSessionId"] = boost::any(*platformSessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSessionId") != m.end() && !m["CustomSessionId"].empty()) {
      customSessionId = make_shared<string>(boost::any_cast<string>(m["CustomSessionId"]));
    }
    if (m.find("PlatformSessionId") != m.end() && !m["PlatformSessionId"].empty()) {
      platformSessionId = make_shared<string>(boost::any_cast<string>(m["PlatformSessionId"]));
    }
  }


  virtual ~UpdateSessionBizStatusResponseBodyData() = default;
};
class UpdateSessionBizStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateSessionBizStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSessionBizStatusResponseBody() {}

  explicit UpdateSessionBizStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateSessionBizStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateSessionBizStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateSessionBizStatusResponseBody() = default;
};
class UpdateSessionBizStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSessionBizStatusResponseBody> body{};

  UpdateSessionBizStatusResponse() {}

  explicit UpdateSessionBizStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSessionBizStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSessionBizStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSessionBizStatusResponse() = default;
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
  BatchCheckSessionResponse batchCheckSessionWithOptions(shared_ptr<BatchCheckSessionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchCheckSessionResponse batchCheckSession(shared_ptr<BatchCheckSessionRequest> request);
  CancelReserveTaskResponse cancelReserveTaskWithOptions(shared_ptr<CancelReserveTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelReserveTaskResponse cancelReserveTask(shared_ptr<CancelReserveTaskRequest> request);
  CreateAdaptationResponse createAdaptationWithOptions(shared_ptr<CreateAdaptationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAdaptationResponse createAdaptation(shared_ptr<CreateAdaptationRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateAppSessionResponse createAppSessionWithOptions(shared_ptr<CreateAppSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppSessionResponse createAppSession(shared_ptr<CreateAppSessionRequest> request);
  CreateAppSessionBatchResponse createAppSessionBatchWithOptions(shared_ptr<CreateAppSessionBatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppSessionBatchResponse createAppSessionBatch(shared_ptr<CreateAppSessionBatchRequest> request);
  CreateAppSessionBatchSyncResponse createAppSessionBatchSyncWithOptions(shared_ptr<CreateAppSessionBatchSyncRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppSessionBatchSyncResponse createAppSessionBatchSync(shared_ptr<CreateAppSessionBatchSyncRequest> request);
  CreateAppSessionSyncResponse createAppSessionSyncWithOptions(shared_ptr<CreateAppSessionSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppSessionSyncResponse createAppSessionSync(shared_ptr<CreateAppSessionSyncRequest> request);
  CreateAppVersionResponse createAppVersionWithOptions(shared_ptr<CreateAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppVersionResponse createAppVersion(shared_ptr<CreateAppVersionRequest> request);
  CreateCapacityReservationResponse createCapacityReservationWithOptions(shared_ptr<CreateCapacityReservationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCapacityReservationResponse createCapacityReservation(shared_ptr<CreateCapacityReservationRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteAppVersionResponse deleteAppVersionWithOptions(shared_ptr<DeleteAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppVersionResponse deleteAppVersion(shared_ptr<DeleteAppVersionRequest> request);
  DescribeInstanceStatsInfoResponse describeInstanceStatsInfoWithOptions(shared_ptr<DescribeInstanceStatsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceStatsInfoResponse describeInstanceStatsInfo(shared_ptr<DescribeInstanceStatsInfoRequest> request);
  GetAdaptationResponse getAdaptationWithOptions(shared_ptr<GetAdaptationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAdaptationResponse getAdaptation(shared_ptr<GetAdaptationRequest> request);
  GetAppResponse getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<GetAppRequest> request);
  GetAppCcuResponse getAppCcuWithOptions(shared_ptr<GetAppCcuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppCcuResponse getAppCcu(shared_ptr<GetAppCcuRequest> request);
  GetAppSessionResponse getAppSessionWithOptions(shared_ptr<GetAppSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppSessionResponse getAppSession(shared_ptr<GetAppSessionRequest> request);
  GetAppVersionResponse getAppVersionWithOptions(shared_ptr<GetAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppVersionResponse getAppVersion(shared_ptr<GetAppVersionRequest> request);
  GetCapacityResponse getCapacityWithOptions(shared_ptr<GetCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCapacityResponse getCapacity(shared_ptr<GetCapacityRequest> request);
  GetReserveTaskDetailResponse getReserveTaskDetailWithOptions(shared_ptr<GetReserveTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReserveTaskDetailResponse getReserveTaskDetail(shared_ptr<GetReserveTaskDetailRequest> request);
  GetResourcePublicIPsResponse getResourcePublicIPsWithOptions(shared_ptr<GetResourcePublicIPsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcePublicIPsResponse getResourcePublicIPs(shared_ptr<GetResourcePublicIPsRequest> request);
  ListAppResponse listAppWithOptions(shared_ptr<ListAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppResponse listApp(shared_ptr<ListAppRequest> request);
  ListAppSessionsResponse listAppSessionsWithOptions(shared_ptr<ListAppSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppSessionsResponse listAppSessions(shared_ptr<ListAppSessionsRequest> request);
  ListAppVersionResponse listAppVersionWithOptions(shared_ptr<ListAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppVersionResponse listAppVersion(shared_ptr<ListAppVersionRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ModifyAppResponse modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppResponse modifyApp(shared_ptr<ModifyAppRequest> request);
  ModifyAppVersionResponse modifyAppVersionWithOptions(shared_ptr<ModifyAppVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppVersionResponse modifyAppVersion(shared_ptr<ModifyAppVersionRequest> request);
  ReleaseCapacityResponse releaseCapacityWithOptions(shared_ptr<ReleaseCapacityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseCapacityResponse releaseCapacity(shared_ptr<ReleaseCapacityRequest> request);
  ReleaseCapacityByBatchResponse releaseCapacityByBatchWithOptions(shared_ptr<ReleaseCapacityByBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseCapacityByBatchResponse releaseCapacityByBatch(shared_ptr<ReleaseCapacityByBatchRequest> request);
  ReleaseInstancesResponse releaseInstancesWithOptions(shared_ptr<ReleaseInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseInstancesResponse releaseInstances(shared_ptr<ReleaseInstancesRequest> request);
  ReserveInstancesResponse reserveInstancesWithOptions(shared_ptr<ReserveInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReserveInstancesResponse reserveInstances(shared_ptr<ReserveInstancesRequest> request);
  SendBizCocChangeCallbackResponse sendBizCocChangeCallbackWithOptions(shared_ptr<SendBizCocChangeCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendBizCocChangeCallbackResponse sendBizCocChangeCallback(shared_ptr<SendBizCocChangeCallbackRequest> request);
  StopAppSessionResponse stopAppSessionWithOptions(shared_ptr<StopAppSessionRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAppSessionResponse stopAppSession(shared_ptr<StopAppSessionRequest> request);
  StopAppSessionBatchResponse stopAppSessionBatchWithOptions(shared_ptr<StopAppSessionBatchRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAppSessionBatchResponse stopAppSessionBatch(shared_ptr<StopAppSessionBatchRequest> request);
  UpdateSessionBizStatusResponse updateSessionBizStatusWithOptions(shared_ptr<UpdateSessionBizStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSessionBizStatusResponse updateSessionBizStatus(shared_ptr<UpdateSessionBizStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CGCS20211111

#endif
