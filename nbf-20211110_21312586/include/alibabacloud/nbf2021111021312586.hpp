// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NBF2021111021312586_H_
#define ALIBABACLOUD_NBF2021111021312586_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_NBF2021111021312586 {
class ApiTestRequest : public Darabonba::Model {
public:
  shared_ptr<string> testCmd{};

  ApiTestRequest() {}

  explicit ApiTestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (testCmd) {
      res["testCmd"] = boost::any(*testCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("testCmd") != m.end() && !m["testCmd"].empty()) {
      testCmd = make_shared<string>(boost::any_cast<string>(m["testCmd"]));
    }
  }


  virtual ~ApiTestRequest() = default;
};
class ApiTestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  ApiTestResponse() {}

  explicit ApiTestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~ApiTestResponse() = default;
};
class BuildSdkRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildCmd{};

  BuildSdkRequest() {}

  explicit BuildSdkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildCmd) {
      res["buildCmd"] = boost::any(*buildCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildCmd") != m.end() && !m["buildCmd"].empty()) {
      buildCmd = make_shared<string>(boost::any_cast<string>(m["buildCmd"]));
    }
  }


  virtual ~BuildSdkRequest() = default;
};
class BuildSdkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  BuildSdkResponse() {}

  explicit BuildSdkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~BuildSdkResponse() = default;
};
class CreateAndReleaseApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> creatApiCmd{};

  CreateAndReleaseApiRequest() {}

  explicit CreateAndReleaseApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creatApiCmd) {
      res["creatApiCmd"] = boost::any(*creatApiCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("creatApiCmd") != m.end() && !m["creatApiCmd"].empty()) {
      creatApiCmd = make_shared<string>(boost::any_cast<string>(m["creatApiCmd"]));
    }
  }


  virtual ~CreateAndReleaseApiRequest() = default;
};
class CreateAndReleaseApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  CreateAndReleaseApiResponse() {}

  explicit CreateAndReleaseApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateAndReleaseApiResponse() = default;
};
class CreateSdkVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> createSdkCmd{};

  CreateSdkVersionRequest() {}

  explicit CreateSdkVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createSdkCmd) {
      res["createSdkCmd"] = boost::any(*createSdkCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createSdkCmd") != m.end() && !m["createSdkCmd"].empty()) {
      createSdkCmd = make_shared<string>(boost::any_cast<string>(m["createSdkCmd"]));
    }
  }


  virtual ~CreateSdkVersionRequest() = default;
};
class CreateSdkVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  CreateSdkVersionResponse() {}

  explicit CreateSdkVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateSdkVersionResponse() = default;
};
class DeleteApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiExternalId{};

  DeleteApiRequest() {}

  explicit DeleteApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiExternalId) {
      res["apiExternalId"] = boost::any(*apiExternalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiExternalId") != m.end() && !m["apiExternalId"].empty()) {
      apiExternalId = make_shared<string>(boost::any_cast<string>(m["apiExternalId"]));
    }
  }


  virtual ~DeleteApiRequest() = default;
};
class DeleteApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  DeleteApiResponse() {}

  explicit DeleteApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~DeleteApiResponse() = default;
};
class GetResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetResultRequest() {}

  explicit GetResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetResultRequest() = default;
};
class GetResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  GetResultResponse() {}

  explicit GetResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~GetResultResponse() = default;
};
class OpenApiGenericProxyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  OpenApiGenericProxyResponseBody() {}

  explicit OpenApiGenericProxyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
  }


  virtual ~OpenApiGenericProxyResponseBody() = default;
};
class OpenApiGenericProxyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenApiGenericProxyResponseBody> body{};

  OpenApiGenericProxyResponse() {}

  explicit OpenApiGenericProxyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenApiGenericProxyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenApiGenericProxyResponseBody>(model1);
      }
    }
  }


  virtual ~OpenApiGenericProxyResponse() = default;
};
class PreCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiSchemaDTO{};
  shared_ptr<string> groupVersionExtraInfo{};
  shared_ptr<string> namespaceExternalId{};

  PreCheckRequest() {}

  explicit PreCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiSchemaDTO) {
      res["apiSchemaDTO"] = boost::any(*apiSchemaDTO);
    }
    if (groupVersionExtraInfo) {
      res["groupVersionExtraInfo"] = boost::any(*groupVersionExtraInfo);
    }
    if (namespaceExternalId) {
      res["namespaceExternalId"] = boost::any(*namespaceExternalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiSchemaDTO") != m.end() && !m["apiSchemaDTO"].empty()) {
      apiSchemaDTO = make_shared<string>(boost::any_cast<string>(m["apiSchemaDTO"]));
    }
    if (m.find("groupVersionExtraInfo") != m.end() && !m["groupVersionExtraInfo"].empty()) {
      groupVersionExtraInfo = make_shared<string>(boost::any_cast<string>(m["groupVersionExtraInfo"]));
    }
    if (m.find("namespaceExternalId") != m.end() && !m["namespaceExternalId"].empty()) {
      namespaceExternalId = make_shared<string>(boost::any_cast<string>(m["namespaceExternalId"]));
    }
  }


  virtual ~PreCheckRequest() = default;
};
class PreCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  PreCheckResponse() {}

  explicit PreCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~PreCheckResponse() = default;
};
class PublishSdkRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  PublishSdkRequest() {}

  explicit PublishSdkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~PublishSdkRequest() = default;
};
class PublishSdkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  PublishSdkResponse() {}

  explicit PublishSdkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~PublishSdkResponse() = default;
};
class SerializeApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiSchemaDTO{};
  shared_ptr<string> type{};

  SerializeApiRequest() {}

  explicit SerializeApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiSchemaDTO) {
      res["apiSchemaDTO"] = boost::any(*apiSchemaDTO);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("apiSchemaDTO") != m.end() && !m["apiSchemaDTO"].empty()) {
      apiSchemaDTO = make_shared<string>(boost::any_cast<string>(m["apiSchemaDTO"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~SerializeApiRequest() = default;
};
class SerializeApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  SerializeApiResponse() {}

  explicit SerializeApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~SerializeApiResponse() = default;
};
class UpdateAndReleaseApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> updateApiCmd{};

  UpdateAndReleaseApiRequest() {}

  explicit UpdateAndReleaseApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (updateApiCmd) {
      res["updateApiCmd"] = boost::any(*updateApiCmd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("updateApiCmd") != m.end() && !m["updateApiCmd"].empty()) {
      updateApiCmd = make_shared<string>(boost::any_cast<string>(m["updateApiCmd"]));
    }
  }


  virtual ~UpdateAndReleaseApiRequest() = default;
};
class UpdateAndReleaseApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<string> body{};

  UpdateAndReleaseApiResponse() {}

  explicit UpdateAndReleaseApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~UpdateAndReleaseApiResponse() = default;
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
  ApiTestResponse apiTestWithOptions(shared_ptr<ApiTestRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApiTestResponse apiTest(shared_ptr<ApiTestRequest> request);
  BuildSdkResponse buildSdkWithOptions(shared_ptr<BuildSdkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BuildSdkResponse buildSdk(shared_ptr<BuildSdkRequest> request);
  CreateAndReleaseApiResponse createAndReleaseApiWithOptions(shared_ptr<CreateAndReleaseApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAndReleaseApiResponse createAndReleaseApi(shared_ptr<CreateAndReleaseApiRequest> request);
  CreateSdkVersionResponse createSdkVersionWithOptions(shared_ptr<CreateSdkVersionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSdkVersionResponse createSdkVersion(shared_ptr<CreateSdkVersionRequest> request);
  DeleteApiResponse deleteApiWithOptions(shared_ptr<DeleteApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApiResponse deleteApi(shared_ptr<DeleteApiRequest> request);
  GetResultResponse getResultWithOptions(shared_ptr<GetResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResultResponse getResult(shared_ptr<GetResultRequest> request);
  OpenApiGenericProxyResponse openApiGenericProxyWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenApiGenericProxyResponse openApiGenericProxy();
  PreCheckResponse preCheckWithOptions(shared_ptr<PreCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PreCheckResponse preCheck(shared_ptr<PreCheckRequest> request);
  PublishSdkResponse publishSdkWithOptions(shared_ptr<PublishSdkRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishSdkResponse publishSdk(shared_ptr<PublishSdkRequest> request);
  SerializeApiResponse serializeApiWithOptions(shared_ptr<SerializeApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SerializeApiResponse serializeApi(shared_ptr<SerializeApiRequest> request);
  UpdateAndReleaseApiResponse updateAndReleaseApiWithOptions(shared_ptr<UpdateAndReleaseApiRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAndReleaseApiResponse updateAndReleaseApi(shared_ptr<UpdateAndReleaseApiRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_NBF2021111021312586

#endif
