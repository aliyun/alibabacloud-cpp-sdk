// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_UMENG-FINPLUS20211125_H_
#define ALIBABACLOUD_UMENG-FINPLUS20211125_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Umeng-finplus20211125 {
class GetMessageStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetMessageStatusRequest() {}

  explicit GetMessageStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetMessageStatusRequest() = default;
};
class GetMessageStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetMessageStatusResponseBodyData() {}

  explicit GetMessageStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetMessageStatusResponseBodyData() = default;
};
class GetMessageStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMessageStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetMessageStatusResponseBody() {}

  explicit GetMessageStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMessageStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMessageStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMessageStatusResponseBody() = default;
};
class GetMessageStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMessageStatusResponseBody> body{};

  GetMessageStatusResponse() {}

  explicit GetMessageStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMessageStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMessageStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetMessageStatusResponse() = default;
};
class SendBatchMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> batchFlag{};
  shared_ptr<string> extendInfo{};
  shared_ptr<string> idType{};
  shared_ptr<string> phoneNumberJson{};
  shared_ptr<string> signNameJson{};
  shared_ptr<string> specificChannel{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParamJson{};

  SendBatchMessageRequest() {}

  explicit SendBatchMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchFlag) {
      res["BatchFlag"] = boost::any(*batchFlag);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (idType) {
      res["IdType"] = boost::any(*idType);
    }
    if (phoneNumberJson) {
      res["PhoneNumberJson"] = boost::any(*phoneNumberJson);
    }
    if (signNameJson) {
      res["SignNameJson"] = boost::any(*signNameJson);
    }
    if (specificChannel) {
      res["SpecificChannel"] = boost::any(*specificChannel);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParamJson) {
      res["TemplateParamJson"] = boost::any(*templateParamJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchFlag") != m.end() && !m["BatchFlag"].empty()) {
      batchFlag = make_shared<string>(boost::any_cast<string>(m["BatchFlag"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("IdType") != m.end() && !m["IdType"].empty()) {
      idType = make_shared<string>(boost::any_cast<string>(m["IdType"]));
    }
    if (m.find("PhoneNumberJson") != m.end() && !m["PhoneNumberJson"].empty()) {
      phoneNumberJson = make_shared<string>(boost::any_cast<string>(m["PhoneNumberJson"]));
    }
    if (m.find("SignNameJson") != m.end() && !m["SignNameJson"].empty()) {
      signNameJson = make_shared<string>(boost::any_cast<string>(m["SignNameJson"]));
    }
    if (m.find("SpecificChannel") != m.end() && !m["SpecificChannel"].empty()) {
      specificChannel = make_shared<string>(boost::any_cast<string>(m["SpecificChannel"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParamJson") != m.end() && !m["TemplateParamJson"].empty()) {
      templateParamJson = make_shared<string>(boost::any_cast<string>(m["TemplateParamJson"]));
    }
  }


  virtual ~SendBatchMessageRequest() = default;
};
class SendBatchMessageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> taskId{};

  SendBatchMessageResponseBodyData() {}

  explicit SendBatchMessageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~SendBatchMessageResponseBodyData() = default;
};
class SendBatchMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<SendBatchMessageResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SendBatchMessageResponseBody() {}

  explicit SendBatchMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SendBatchMessageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendBatchMessageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SendBatchMessageResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendBatchMessageResponseBody() = default;
};
class SendBatchMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendBatchMessageResponseBody> body{};

  SendBatchMessageResponse() {}

  explicit SendBatchMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendBatchMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendBatchMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendBatchMessageResponse() = default;
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
  GetMessageStatusResponse getMessageStatusWithOptions(shared_ptr<GetMessageStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMessageStatusResponse getMessageStatus(shared_ptr<GetMessageStatusRequest> request);
  SendBatchMessageResponse sendBatchMessageWithOptions(shared_ptr<SendBatchMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendBatchMessageResponse sendBatchMessage(shared_ptr<SendBatchMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Umeng-finplus20211125

#endif
