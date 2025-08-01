// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WEBSITEBUILD20250429_H_
#define ALIBABACLOUD_WEBSITEBUILD20250429_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_WebsiteBuild20250429 {
class CreateLogoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> logoVersion{};
  shared_ptr<string> negativePrompt{};
  shared_ptr<string> parameters{};
  shared_ptr<string> prompt{};

  CreateLogoTaskRequest() {}

  explicit CreateLogoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logoVersion) {
      res["LogoVersion"] = boost::any(*logoVersion);
    }
    if (negativePrompt) {
      res["NegativePrompt"] = boost::any(*negativePrompt);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogoVersion") != m.end() && !m["LogoVersion"].empty()) {
      logoVersion = make_shared<string>(boost::any_cast<string>(m["LogoVersion"]));
    }
    if (m.find("NegativePrompt") != m.end() && !m["NegativePrompt"].empty()) {
      negativePrompt = make_shared<string>(boost::any_cast<string>(m["NegativePrompt"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
  }


  virtual ~CreateLogoTaskRequest() = default;
};
class CreateLogoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateLogoTaskResponseBody() {}

  explicit CreateLogoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateLogoTaskResponseBody() = default;
};
class CreateLogoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLogoTaskResponseBody> body{};

  CreateLogoTaskResponse() {}

  explicit CreateLogoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLogoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLogoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLogoTaskResponse() = default;
};
class GetCreateLogoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetCreateLogoTaskRequest() {}

  explicit GetCreateLogoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetCreateLogoTaskRequest() = default;
};
class GetCreateLogoTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<vector<string>> urls{};

  GetCreateLogoTaskResponseBodyTask() {}

  explicit GetCreateLogoTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (urls) {
      res["Urls"] = boost::any(*urls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("Urls") != m.end() && !m["Urls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Urls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Urls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      urls = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetCreateLogoTaskResponseBodyTask() = default;
};
class GetCreateLogoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetCreateLogoTaskResponseBodyTask> task{};

  GetCreateLogoTaskResponseBody() {}

  explicit GetCreateLogoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        GetCreateLogoTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<GetCreateLogoTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetCreateLogoTaskResponseBody() = default;
};
class GetCreateLogoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCreateLogoTaskResponseBody> body{};

  GetCreateLogoTaskResponse() {}

  explicit GetCreateLogoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCreateLogoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCreateLogoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetCreateLogoTaskResponse() = default;
};
class OperateAppInstanceForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> extend{};
  shared_ptr<string> operateEvent{};

  OperateAppInstanceForPartnerRequest() {}

  explicit OperateAppInstanceForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (operateEvent) {
      res["OperateEvent"] = boost::any(*operateEvent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("OperateEvent") != m.end() && !m["OperateEvent"].empty()) {
      operateEvent = make_shared<string>(boost::any_cast<string>(m["OperateEvent"]));
    }
  }


  virtual ~OperateAppInstanceForPartnerRequest() = default;
};
class OperateAppInstanceForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  OperateAppInstanceForPartnerResponseBody() {}

  explicit OperateAppInstanceForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~OperateAppInstanceForPartnerResponseBody() = default;
};
class OperateAppInstanceForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAppInstanceForPartnerResponseBody> body{};

  OperateAppInstanceForPartnerResponse() {}

  explicit OperateAppInstanceForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAppInstanceForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAppInstanceForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAppInstanceForPartnerResponse() = default;
};
class OperateAppServiceForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> extend{};
  shared_ptr<string> operateEvent{};
  shared_ptr<string> serviceType{};

  OperateAppServiceForPartnerRequest() {}

  explicit OperateAppServiceForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (operateEvent) {
      res["OperateEvent"] = boost::any(*operateEvent);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("OperateEvent") != m.end() && !m["OperateEvent"].empty()) {
      operateEvent = make_shared<string>(boost::any_cast<string>(m["OperateEvent"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~OperateAppServiceForPartnerRequest() = default;
};
class OperateAppServiceForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OperateAppServiceForPartnerResponseBody() {}

  explicit OperateAppServiceForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~OperateAppServiceForPartnerResponseBody() = default;
};
class OperateAppServiceForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateAppServiceForPartnerResponseBody> body{};

  OperateAppServiceForPartnerResponse() {}

  explicit OperateAppServiceForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateAppServiceForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateAppServiceForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~OperateAppServiceForPartnerResponse() = default;
};
class SearchImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> colorHex{};
  shared_ptr<bool> hasPerson{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> imageRatio{};
  shared_ptr<long> maxHeight{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> maxWidth{};
  shared_ptr<long> minHeight{};
  shared_ptr<long> minWidth{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ossKey{};
  shared_ptr<long> size{};
  shared_ptr<long> start{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> text{};

  SearchImageRequest() {}

  explicit SearchImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colorHex) {
      res["ColorHex"] = boost::any(*colorHex);
    }
    if (hasPerson) {
      res["HasPerson"] = boost::any(*hasPerson);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (imageRatio) {
      res["ImageRatio"] = boost::any(*imageRatio);
    }
    if (maxHeight) {
      res["MaxHeight"] = boost::any(*maxHeight);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (maxWidth) {
      res["MaxWidth"] = boost::any(*maxWidth);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (minWidth) {
      res["MinWidth"] = boost::any(*minWidth);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColorHex") != m.end() && !m["ColorHex"].empty()) {
      colorHex = make_shared<string>(boost::any_cast<string>(m["ColorHex"]));
    }
    if (m.find("HasPerson") != m.end() && !m["HasPerson"].empty()) {
      hasPerson = make_shared<bool>(boost::any_cast<bool>(m["HasPerson"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("ImageRatio") != m.end() && !m["ImageRatio"].empty()) {
      imageRatio = make_shared<string>(boost::any_cast<string>(m["ImageRatio"]));
    }
    if (m.find("MaxHeight") != m.end() && !m["MaxHeight"].empty()) {
      maxHeight = make_shared<long>(boost::any_cast<long>(m["MaxHeight"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("MaxWidth") != m.end() && !m["MaxWidth"].empty()) {
      maxWidth = make_shared<long>(boost::any_cast<long>(m["MaxWidth"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("MinWidth") != m.end() && !m["MinWidth"].empty()) {
      minWidth = make_shared<long>(boost::any_cast<long>(m["MinWidth"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SearchImageRequest() = default;
};
class SearchImageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> colorHex{};
  shared_ptr<bool> hasPerson{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> imageRatio{};
  shared_ptr<long> maxHeight{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> maxWidth{};
  shared_ptr<long> minHeight{};
  shared_ptr<long> minWidth{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> ossKey{};
  shared_ptr<long> size{};
  shared_ptr<long> start{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> text{};

  SearchImageShrinkRequest() {}

  explicit SearchImageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (colorHex) {
      res["ColorHex"] = boost::any(*colorHex);
    }
    if (hasPerson) {
      res["HasPerson"] = boost::any(*hasPerson);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (imageRatio) {
      res["ImageRatio"] = boost::any(*imageRatio);
    }
    if (maxHeight) {
      res["MaxHeight"] = boost::any(*maxHeight);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (maxWidth) {
      res["MaxWidth"] = boost::any(*maxWidth);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (minWidth) {
      res["MinWidth"] = boost::any(*minWidth);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColorHex") != m.end() && !m["ColorHex"].empty()) {
      colorHex = make_shared<string>(boost::any_cast<string>(m["ColorHex"]));
    }
    if (m.find("HasPerson") != m.end() && !m["HasPerson"].empty()) {
      hasPerson = make_shared<bool>(boost::any_cast<bool>(m["HasPerson"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("ImageRatio") != m.end() && !m["ImageRatio"].empty()) {
      imageRatio = make_shared<string>(boost::any_cast<string>(m["ImageRatio"]));
    }
    if (m.find("MaxHeight") != m.end() && !m["MaxHeight"].empty()) {
      maxHeight = make_shared<long>(boost::any_cast<long>(m["MaxHeight"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("MaxWidth") != m.end() && !m["MaxWidth"].empty()) {
      maxWidth = make_shared<long>(boost::any_cast<long>(m["MaxWidth"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("MinWidth") != m.end() && !m["MinWidth"].empty()) {
      minWidth = make_shared<long>(boost::any_cast<long>(m["MinWidth"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~SearchImageShrinkRequest() = default;
};
class SearchImageResponseBodyImageResponseImageList : public Darabonba::Model {
public:
  shared_ptr<string> descriptiveTones{};
  shared_ptr<long> height{};
  shared_ptr<string> imageCategory{};
  shared_ptr<string> imageRatio{};
  shared_ptr<string> imageUuid{};
  shared_ptr<string> ossKey{};
  shared_ptr<string> quantitativePalette{};
  shared_ptr<string> tagsFromImage{};
  shared_ptr<string> url{};
  shared_ptr<long> width{};

  SearchImageResponseBodyImageResponseImageList() {}

  explicit SearchImageResponseBodyImageResponseImageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (descriptiveTones) {
      res["DescriptiveTones"] = boost::any(*descriptiveTones);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageCategory) {
      res["ImageCategory"] = boost::any(*imageCategory);
    }
    if (imageRatio) {
      res["ImageRatio"] = boost::any(*imageRatio);
    }
    if (imageUuid) {
      res["ImageUuid"] = boost::any(*imageUuid);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (quantitativePalette) {
      res["QuantitativePalette"] = boost::any(*quantitativePalette);
    }
    if (tagsFromImage) {
      res["TagsFromImage"] = boost::any(*tagsFromImage);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DescriptiveTones") != m.end() && !m["DescriptiveTones"].empty()) {
      descriptiveTones = make_shared<string>(boost::any_cast<string>(m["DescriptiveTones"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("ImageCategory") != m.end() && !m["ImageCategory"].empty()) {
      imageCategory = make_shared<string>(boost::any_cast<string>(m["ImageCategory"]));
    }
    if (m.find("ImageRatio") != m.end() && !m["ImageRatio"].empty()) {
      imageRatio = make_shared<string>(boost::any_cast<string>(m["ImageRatio"]));
    }
    if (m.find("ImageUuid") != m.end() && !m["ImageUuid"].empty()) {
      imageUuid = make_shared<string>(boost::any_cast<string>(m["ImageUuid"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("QuantitativePalette") != m.end() && !m["QuantitativePalette"].empty()) {
      quantitativePalette = make_shared<string>(boost::any_cast<string>(m["QuantitativePalette"]));
    }
    if (m.find("TagsFromImage") != m.end() && !m["TagsFromImage"].empty()) {
      tagsFromImage = make_shared<string>(boost::any_cast<string>(m["TagsFromImage"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~SearchImageResponseBodyImageResponseImageList() = default;
};
class SearchImageResponseBodyImageResponse : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageResponseBodyImageResponseImageList>> imageList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  SearchImageResponseBodyImageResponse() {}

  explicit SearchImageResponseBodyImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageList) {
      vector<boost::any> temp1;
      for(auto item1:*imageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageList") != m.end() && !m["ImageList"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageList"].type()) {
        vector<SearchImageResponseBodyImageResponseImageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageResponseBodyImageResponseImageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageList = make_shared<vector<SearchImageResponseBodyImageResponseImageList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~SearchImageResponseBodyImageResponse() = default;
};
class SearchImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<SearchImageResponseBodyImageResponse> imageResponse{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  SearchImageResponseBody() {}

  explicit SearchImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (imageResponse) {
      res["ImageResponse"] = imageResponse ? boost::any(imageResponse->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("ImageResponse") != m.end() && !m["ImageResponse"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageResponse"].type()) {
        SearchImageResponseBodyImageResponse model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageResponse"]));
        imageResponse = make_shared<SearchImageResponseBodyImageResponse>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~SearchImageResponseBody() = default;
};
class SearchImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchImageResponseBody> body{};

  SearchImageResponse() {}

  explicit SearchImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchImageResponseBody>(model1);
      }
    }
  }


  virtual ~SearchImageResponse() = default;
};
class SyncAppInstanceForPartnerRequestAppInstanceProfile : public Darabonba::Model {
public:
  shared_ptr<string> deployArea{};
  shared_ptr<string> lxInstanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> siteVersion{};
  shared_ptr<string> templateEtag{};
  shared_ptr<string> templateId{};

  SyncAppInstanceForPartnerRequestAppInstanceProfile() {}

  explicit SyncAppInstanceForPartnerRequestAppInstanceProfile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployArea) {
      res["DeployArea"] = boost::any(*deployArea);
    }
    if (lxInstanceId) {
      res["LxInstanceId"] = boost::any(*lxInstanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (siteVersion) {
      res["SiteVersion"] = boost::any(*siteVersion);
    }
    if (templateEtag) {
      res["TemplateEtag"] = boost::any(*templateEtag);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployArea") != m.end() && !m["DeployArea"].empty()) {
      deployArea = make_shared<string>(boost::any_cast<string>(m["DeployArea"]));
    }
    if (m.find("LxInstanceId") != m.end() && !m["LxInstanceId"].empty()) {
      lxInstanceId = make_shared<string>(boost::any_cast<string>(m["LxInstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("SiteVersion") != m.end() && !m["SiteVersion"].empty()) {
      siteVersion = make_shared<string>(boost::any_cast<string>(m["SiteVersion"]));
    }
    if (m.find("TemplateEtag") != m.end() && !m["TemplateEtag"].empty()) {
      templateEtag = make_shared<string>(boost::any_cast<string>(m["TemplateEtag"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~SyncAppInstanceForPartnerRequestAppInstanceProfile() = default;
};
class SyncAppInstanceForPartnerRequestAppInstance : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> deleted{};
  shared_ptr<string> domain{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtDelete{};
  shared_ptr<string> gmtPublish{};
  shared_ptr<string> iconUrl{};
  shared_ptr<string> name{};
  shared_ptr<SyncAppInstanceForPartnerRequestAppInstanceProfile> profile{};
  shared_ptr<string> siteHost{};
  shared_ptr<string> slug{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> thumbnailUrl{};
  shared_ptr<string> userId{};

  SyncAppInstanceForPartnerRequestAppInstance() {}

  explicit SyncAppInstanceForPartnerRequestAppInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (gmtDelete) {
      res["GmtDelete"] = boost::any(*gmtDelete);
    }
    if (gmtPublish) {
      res["GmtPublish"] = boost::any(*gmtPublish);
    }
    if (iconUrl) {
      res["IconUrl"] = boost::any(*iconUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = profile ? boost::any(profile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (siteHost) {
      res["SiteHost"] = boost::any(*siteHost);
    }
    if (slug) {
      res["Slug"] = boost::any(*slug);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (thumbnailUrl) {
      res["ThumbnailUrl"] = boost::any(*thumbnailUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<string>(boost::any_cast<string>(m["Deleted"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GmtDelete") != m.end() && !m["GmtDelete"].empty()) {
      gmtDelete = make_shared<string>(boost::any_cast<string>(m["GmtDelete"]));
    }
    if (m.find("GmtPublish") != m.end() && !m["GmtPublish"].empty()) {
      gmtPublish = make_shared<string>(boost::any_cast<string>(m["GmtPublish"]));
    }
    if (m.find("IconUrl") != m.end() && !m["IconUrl"].empty()) {
      iconUrl = make_shared<string>(boost::any_cast<string>(m["IconUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      if (typeid(map<string, boost::any>) == m["Profile"].type()) {
        SyncAppInstanceForPartnerRequestAppInstanceProfile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Profile"]));
        profile = make_shared<SyncAppInstanceForPartnerRequestAppInstanceProfile>(model1);
      }
    }
    if (m.find("SiteHost") != m.end() && !m["SiteHost"].empty()) {
      siteHost = make_shared<string>(boost::any_cast<string>(m["SiteHost"]));
    }
    if (m.find("Slug") != m.end() && !m["Slug"].empty()) {
      slug = make_shared<string>(boost::any_cast<string>(m["Slug"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ThumbnailUrl") != m.end() && !m["ThumbnailUrl"].empty()) {
      thumbnailUrl = make_shared<string>(boost::any_cast<string>(m["ThumbnailUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SyncAppInstanceForPartnerRequestAppInstance() = default;
};
class SyncAppInstanceForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<SyncAppInstanceForPartnerRequestAppInstance> appInstance{};
  shared_ptr<string> eventType{};
  shared_ptr<string> operator_{};
  shared_ptr<string> sourceBizId{};
  shared_ptr<string> sourceType{};

  SyncAppInstanceForPartnerRequest() {}

  explicit SyncAppInstanceForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstance) {
      res["AppInstance"] = appInstance ? boost::any(appInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (sourceBizId) {
      res["SourceBizId"] = boost::any(*sourceBizId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstance") != m.end() && !m["AppInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInstance"].type()) {
        SyncAppInstanceForPartnerRequestAppInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInstance"]));
        appInstance = make_shared<SyncAppInstanceForPartnerRequestAppInstance>(model1);
      }
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SourceBizId") != m.end() && !m["SourceBizId"].empty()) {
      sourceBizId = make_shared<string>(boost::any_cast<string>(m["SourceBizId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SyncAppInstanceForPartnerRequest() = default;
};
class SyncAppInstanceForPartnerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceShrink{};
  shared_ptr<string> eventType{};
  shared_ptr<string> operator_{};
  shared_ptr<string> sourceBizId{};
  shared_ptr<string> sourceType{};

  SyncAppInstanceForPartnerShrinkRequest() {}

  explicit SyncAppInstanceForPartnerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceShrink) {
      res["AppInstance"] = boost::any(*appInstanceShrink);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (sourceBizId) {
      res["SourceBizId"] = boost::any(*sourceBizId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstance") != m.end() && !m["AppInstance"].empty()) {
      appInstanceShrink = make_shared<string>(boost::any_cast<string>(m["AppInstance"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("SourceBizId") != m.end() && !m["SourceBizId"].empty()) {
      sourceBizId = make_shared<string>(boost::any_cast<string>(m["SourceBizId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SyncAppInstanceForPartnerShrinkRequest() = default;
};
class SyncAppInstanceForPartnerResponseBodyDataAppInstance : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  SyncAppInstanceForPartnerResponseBodyDataAppInstance() {}

  explicit SyncAppInstanceForPartnerResponseBodyDataAppInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
  }


  virtual ~SyncAppInstanceForPartnerResponseBodyDataAppInstance() = default;
};
class SyncAppInstanceForPartnerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<SyncAppInstanceForPartnerResponseBodyDataAppInstance> appInstance{};

  SyncAppInstanceForPartnerResponseBodyData() {}

  explicit SyncAppInstanceForPartnerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstance) {
      res["AppInstance"] = appInstance ? boost::any(appInstance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstance") != m.end() && !m["AppInstance"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInstance"].type()) {
        SyncAppInstanceForPartnerResponseBodyDataAppInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInstance"]));
        appInstance = make_shared<SyncAppInstanceForPartnerResponseBodyDataAppInstance>(model1);
      }
    }
  }


  virtual ~SyncAppInstanceForPartnerResponseBodyData() = default;
};
class SyncAppInstanceForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<SyncAppInstanceForPartnerResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SyncAppInstanceForPartnerResponseBody() {}

  explicit SyncAppInstanceForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SyncAppInstanceForPartnerResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SyncAppInstanceForPartnerResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SyncAppInstanceForPartnerResponseBody() = default;
};
class SyncAppInstanceForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncAppInstanceForPartnerResponseBody> body{};

  SyncAppInstanceForPartnerResponse() {}

  explicit SyncAppInstanceForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncAppInstanceForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncAppInstanceForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~SyncAppInstanceForPartnerResponse() = default;
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
  CreateLogoTaskResponse createLogoTaskWithOptions(shared_ptr<CreateLogoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLogoTaskResponse createLogoTask(shared_ptr<CreateLogoTaskRequest> request);
  GetCreateLogoTaskResponse getCreateLogoTaskWithOptions(shared_ptr<GetCreateLogoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCreateLogoTaskResponse getCreateLogoTask(shared_ptr<GetCreateLogoTaskRequest> request);
  OperateAppInstanceForPartnerResponse operateAppInstanceForPartnerWithOptions(shared_ptr<OperateAppInstanceForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAppInstanceForPartnerResponse operateAppInstanceForPartner(shared_ptr<OperateAppInstanceForPartnerRequest> request);
  OperateAppServiceForPartnerResponse operateAppServiceForPartnerWithOptions(shared_ptr<OperateAppServiceForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateAppServiceForPartnerResponse operateAppServiceForPartner(shared_ptr<OperateAppServiceForPartnerRequest> request);
  SearchImageResponse searchImageWithOptions(shared_ptr<SearchImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchImageResponse searchImage(shared_ptr<SearchImageRequest> request);
  SyncAppInstanceForPartnerResponse syncAppInstanceForPartnerWithOptions(shared_ptr<SyncAppInstanceForPartnerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncAppInstanceForPartnerResponse syncAppInstanceForPartner(shared_ptr<SyncAppInstanceForPartnerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_WebsiteBuild20250429

#endif
