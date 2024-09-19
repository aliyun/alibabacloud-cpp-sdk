// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DATAWORKS-PUBLIC20240518_H_
#define ALIBABACLOUD_DATAWORKS-PUBLIC20240518_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dataworks-public20240518 {
class AbolishDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  AbolishDeploymentRequest() {}

  explicit AbolishDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~AbolishDeploymentRequest() = default;
};
class AbolishDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AbolishDeploymentResponseBody() {}

  explicit AbolishDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AbolishDeploymentResponseBody() = default;
};
class AbolishDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbolishDeploymentResponseBody> body{};

  AbolishDeploymentResponse() {}

  explicit AbolishDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbolishDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbolishDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~AbolishDeploymentResponse() = default;
};
class CreateDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> objectIds{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  CreateDeploymentRequest() {}

  explicit CreateDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (objectIds) {
      res["ObjectIds"] = boost::any(*objectIds);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ObjectIds") != m.end() && !m["ObjectIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ObjectIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ObjectIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objectIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDeploymentRequest() = default;
};
class CreateDeploymentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> objectIdsShrink{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  CreateDeploymentShrinkRequest() {}

  explicit CreateDeploymentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (objectIdsShrink) {
      res["ObjectIds"] = boost::any(*objectIdsShrink);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ObjectIds") != m.end() && !m["ObjectIds"].empty()) {
      objectIdsShrink = make_shared<string>(boost::any_cast<string>(m["ObjectIds"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDeploymentShrinkRequest() = default;
};
class CreateDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateDeploymentResponseBody() {}

  explicit CreateDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeploymentResponseBody() = default;
};
class CreateDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeploymentResponseBody> body{};

  CreateDeploymentResponse() {}

  explicit CreateDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeploymentResponse() = default;
};
class CreateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  CreateFunctionRequest() {}

  explicit CreateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateFunctionRequest() = default;
};
class CreateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateFunctionResponseBody() {}

  explicit CreateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFunctionResponseBody() = default;
};
class CreateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionResponseBody> body{};

  CreateFunctionResponse() {}

  explicit CreateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionResponse() = default;
};
class CreateNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> scene{};
  shared_ptr<string> spec{};

  CreateNodeRequest() {}

  explicit CreateNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateNodeRequest() = default;
};
class CreateNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateNodeResponseBody() {}

  explicit CreateNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNodeResponseBody() = default;
};
class CreateNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodeResponseBody> body{};

  CreateNodeResponse() {}

  explicit CreateNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodeResponse() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceResponseBody() = default;
};
class CreateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceResponseBody> body{};

  CreateResourceResponse() {}

  explicit CreateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class CreateWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  CreateWorkflowDefinitionRequest() {}

  explicit CreateWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateWorkflowDefinitionRequest() = default;
};
class CreateWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateWorkflowDefinitionResponseBody() {}

  explicit CreateWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateWorkflowDefinitionResponseBody() = default;
};
class CreateWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkflowDefinitionResponseBody> body{};

  CreateWorkflowDefinitionResponse() {}

  explicit CreateWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkflowDefinitionResponse() = default;
};
class DeleteFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteFunctionRequest() {}

  explicit DeleteFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteFunctionRequest() = default;
};
class DeleteFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFunctionResponseBody() {}

  explicit DeleteFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFunctionResponseBody() = default;
};
class DeleteFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFunctionResponseBody> body{};

  DeleteFunctionResponse() {}

  explicit DeleteFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFunctionResponse() = default;
};
class DeleteNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteNodeRequest() {}

  explicit DeleteNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteNodeRequest() = default;
};
class DeleteNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteNodeResponseBody() {}

  explicit DeleteNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNodeResponseBody() = default;
};
class DeleteNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNodeResponseBody> body{};

  DeleteNodeResponse() {}

  explicit DeleteNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNodeResponse() = default;
};
class DeleteResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteResourceRequest() {}

  explicit DeleteResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteResourceRequest() = default;
};
class DeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteResourceResponseBody() {}

  explicit DeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteResourceResponseBody() = default;
};
class DeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceResponseBody> body{};

  DeleteResourceResponse() {}

  explicit DeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceResponse() = default;
};
class DeleteWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteWorkflowDefinitionRequest() {}

  explicit DeleteWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteWorkflowDefinitionRequest() = default;
};
class DeleteWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWorkflowDefinitionResponseBody() {}

  explicit DeleteWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteWorkflowDefinitionResponseBody() = default;
};
class DeleteWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkflowDefinitionResponseBody> body{};

  DeleteWorkflowDefinitionResponse() {}

  explicit DeleteWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkflowDefinitionResponse() = default;
};
class ExecDeploymentStageRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  ExecDeploymentStageRequest() {}

  explicit ExecDeploymentStageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ExecDeploymentStageRequest() = default;
};
class ExecDeploymentStageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecDeploymentStageResponseBody() {}

  explicit ExecDeploymentStageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecDeploymentStageResponseBody() = default;
};
class ExecDeploymentStageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecDeploymentStageResponseBody> body{};

  ExecDeploymentStageResponse() {}

  explicit ExecDeploymentStageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecDeploymentStageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecDeploymentStageResponseBody>(model1);
      }
    }
  }


  virtual ~ExecDeploymentStageResponse() = default;
};
class GetDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetDeploymentRequest() {}

  explicit GetDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetDeploymentRequest() = default;
};
class GetDeploymentResponseBodyPipelineStages : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> step{};
  shared_ptr<string> type{};

  GetDeploymentResponseBodyPipelineStages() {}

  explicit GetDeploymentResponseBodyPipelineStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDeploymentResponseBodyPipelineStages() = default;
};
class GetDeploymentResponseBodyPipeline : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<GetDeploymentResponseBodyPipelineStages>> stages{};
  shared_ptr<string> status{};

  GetDeploymentResponseBodyPipeline() {}

  explicit GetDeploymentResponseBodyPipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<GetDeploymentResponseBodyPipelineStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeploymentResponseBodyPipelineStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetDeploymentResponseBodyPipelineStages>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDeploymentResponseBodyPipeline() = default;
};
class GetDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDeploymentResponseBodyPipeline> pipeline{};
  shared_ptr<string> requestId{};

  GetDeploymentResponseBody() {}

  explicit GetDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipeline) {
      res["Pipeline"] = pipeline ? boost::any(pipeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pipeline") != m.end() && !m["Pipeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pipeline"].type()) {
        GetDeploymentResponseBodyPipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pipeline"]));
        pipeline = make_shared<GetDeploymentResponseBodyPipeline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeploymentResponseBody() = default;
};
class GetDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeploymentResponseBody> body{};

  GetDeploymentResponse() {}

  explicit GetDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeploymentResponse() = default;
};
class GetFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetFunctionRequest() {}

  explicit GetFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetFunctionRequest() = default;
};
class GetFunctionResponseBodyFunction : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetFunctionResponseBodyFunction() {}

  explicit GetFunctionResponseBodyFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetFunctionResponseBodyFunction() = default;
};
class GetFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetFunctionResponseBodyFunction> function{};
  shared_ptr<string> requestId{};

  GetFunctionResponseBody() {}

  explicit GetFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      res["Function"] = function ? boost::any(function->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      if (typeid(map<string, boost::any>) == m["Function"].type()) {
        GetFunctionResponseBodyFunction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Function"]));
        function = make_shared<GetFunctionResponseBodyFunction>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFunctionResponseBody() = default;
};
class GetFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionResponseBody> body{};

  GetFunctionResponse() {}

  explicit GetFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionResponse() = default;
};
class GetNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetNodeRequest() {}

  explicit GetNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetNodeRequest() = default;
};
class GetNodeResponseBodyNode : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetNodeResponseBodyNode() {}

  explicit GetNodeResponseBodyNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetNodeResponseBodyNode() = default;
};
class GetNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetNodeResponseBodyNode> node{};
  shared_ptr<string> requestId{};

  GetNodeResponseBody() {}

  explicit GetNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        GetNodeResponseBodyNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<GetNodeResponseBodyNode>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNodeResponseBody() = default;
};
class GetNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeResponseBody> body{};

  GetNodeResponse() {}

  explicit GetNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeResponse() = default;
};
class GetResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetResourceRequest() {}

  explicit GetResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetResourceRequest() = default;
};
class GetResourceResponseBodyResource : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetResourceResponseBodyResource() {}

  explicit GetResourceResponseBodyResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetResourceResponseBodyResource() = default;
};
class GetResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceResponseBodyResource> resource{};

  GetResourceResponseBody() {}

  explicit GetResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resource) {
      res["Resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resource"].type()) {
        GetResourceResponseBodyResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resource"]));
        resource = make_shared<GetResourceResponseBodyResource>(model1);
      }
    }
  }


  virtual ~GetResourceResponseBody() = default;
};
class GetResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceResponseBody> body{};

  GetResourceResponse() {}

  explicit GetResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceResponse() = default;
};
class GetWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetWorkflowDefinitionRequest() {}

  explicit GetWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetWorkflowDefinitionRequest() = default;
};
class GetWorkflowDefinitionResponseBodyWorkflowDefinition : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetWorkflowDefinitionResponseBodyWorkflowDefinition() {}

  explicit GetWorkflowDefinitionResponseBodyWorkflowDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetWorkflowDefinitionResponseBodyWorkflowDefinition() = default;
};
class GetWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetWorkflowDefinitionResponseBodyWorkflowDefinition> workflowDefinition{};

  GetWorkflowDefinitionResponseBody() {}

  explicit GetWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workflowDefinition) {
      res["WorkflowDefinition"] = workflowDefinition ? boost::any(workflowDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkflowDefinition") != m.end() && !m["WorkflowDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkflowDefinition"].type()) {
        GetWorkflowDefinitionResponseBodyWorkflowDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkflowDefinition"]));
        workflowDefinition = make_shared<GetWorkflowDefinitionResponseBodyWorkflowDefinition>(model1);
      }
    }
  }


  virtual ~GetWorkflowDefinitionResponseBody() = default;
};
class GetWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkflowDefinitionResponseBody> body{};

  GetWorkflowDefinitionResponse() {}

  explicit GetWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkflowDefinitionResponse() = default;
};
class ListDeploymentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};

  ListDeploymentsRequest() {}

  explicit ListDeploymentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeploymentsRequest() = default;
};
class ListDeploymentsResponseBodyPagingInfoDeploymentsStages : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> step{};
  shared_ptr<string> type{};

  ListDeploymentsResponseBodyPagingInfoDeploymentsStages() {}

  explicit ListDeploymentsResponseBodyPagingInfoDeploymentsStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDeploymentsResponseBodyPagingInfoDeploymentsStages() = default;
};
class ListDeploymentsResponseBodyPagingInfoDeployments : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<ListDeploymentsResponseBodyPagingInfoDeploymentsStages>> stages{};
  shared_ptr<string> status{};

  ListDeploymentsResponseBodyPagingInfoDeployments() {}

  explicit ListDeploymentsResponseBodyPagingInfoDeployments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<ListDeploymentsResponseBodyPagingInfoDeploymentsStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentsResponseBodyPagingInfoDeploymentsStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<ListDeploymentsResponseBodyPagingInfoDeploymentsStages>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeploymentsResponseBodyPagingInfoDeployments() = default;
};
class ListDeploymentsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeploymentsResponseBodyPagingInfoDeployments>> deployments{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListDeploymentsResponseBodyPagingInfo() {}

  explicit ListDeploymentsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployments) {
      vector<boost::any> temp1;
      for(auto item1:*deployments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Deployments"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deployments") != m.end() && !m["Deployments"].empty()) {
      if (typeid(vector<boost::any>) == m["Deployments"].type()) {
        vector<ListDeploymentsResponseBodyPagingInfoDeployments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Deployments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentsResponseBodyPagingInfoDeployments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployments = make_shared<vector<ListDeploymentsResponseBodyPagingInfoDeployments>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListDeploymentsResponseBodyPagingInfo() = default;
};
class ListDeploymentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDeploymentsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListDeploymentsResponseBody() {}

  explicit ListDeploymentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListDeploymentsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListDeploymentsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeploymentsResponseBody() = default;
};
class ListDeploymentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentsResponseBody> body{};

  ListDeploymentsResponse() {}

  explicit ListDeploymentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentsResponse() = default;
};
class ListFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  ListFunctionsRequest() {}

  explicit ListFunctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFunctionsRequest() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListFunctionsResponseBodyPagingInfoFunctionsDataSource() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsDataSource() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime> runtime{};

  ListFunctionsResponseBodyPagingInfoFunctionsScript() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsScript() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctions : public Darabonba::Model {
public:
  shared_ptr<string> armResource{};
  shared_ptr<string> className{};
  shared_ptr<string> commandDescription{};
  shared_ptr<long> createTime{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsDataSource> dataSource{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> description{};
  shared_ptr<string> embeddedCode{};
  shared_ptr<string> embeddedCodeType{};
  shared_ptr<string> embeddedResourceType{};
  shared_ptr<string> exampleDescription{};
  shared_ptr<string> fileResource{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> projectId{};
  shared_ptr<string> returnValueDescription{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource> runtimeResource{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsScript> script{};
  shared_ptr<string> type{};

  ListFunctionsResponseBodyPagingInfoFunctions() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (armResource) {
      res["ArmResource"] = boost::any(*armResource);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    if (commandDescription) {
      res["CommandDescription"] = boost::any(*commandDescription);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (embeddedCode) {
      res["EmbeddedCode"] = boost::any(*embeddedCode);
    }
    if (embeddedCodeType) {
      res["EmbeddedCodeType"] = boost::any(*embeddedCodeType);
    }
    if (embeddedResourceType) {
      res["EmbeddedResourceType"] = boost::any(*embeddedResourceType);
    }
    if (exampleDescription) {
      res["ExampleDescription"] = boost::any(*exampleDescription);
    }
    if (fileResource) {
      res["FileResource"] = boost::any(*fileResource);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (returnValueDescription) {
      res["ReturnValueDescription"] = boost::any(*returnValueDescription);
    }
    if (runtimeResource) {
      res["RuntimeResource"] = runtimeResource ? boost::any(runtimeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArmResource") != m.end() && !m["ArmResource"].empty()) {
      armResource = make_shared<string>(boost::any_cast<string>(m["ArmResource"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
    if (m.find("CommandDescription") != m.end() && !m["CommandDescription"].empty()) {
      commandDescription = make_shared<string>(boost::any_cast<string>(m["CommandDescription"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsDataSource>(model1);
      }
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmbeddedCode") != m.end() && !m["EmbeddedCode"].empty()) {
      embeddedCode = make_shared<string>(boost::any_cast<string>(m["EmbeddedCode"]));
    }
    if (m.find("EmbeddedCodeType") != m.end() && !m["EmbeddedCodeType"].empty()) {
      embeddedCodeType = make_shared<string>(boost::any_cast<string>(m["EmbeddedCodeType"]));
    }
    if (m.find("EmbeddedResourceType") != m.end() && !m["EmbeddedResourceType"].empty()) {
      embeddedResourceType = make_shared<string>(boost::any_cast<string>(m["EmbeddedResourceType"]));
    }
    if (m.find("ExampleDescription") != m.end() && !m["ExampleDescription"].empty()) {
      exampleDescription = make_shared<string>(boost::any_cast<string>(m["ExampleDescription"]));
    }
    if (m.find("FileResource") != m.end() && !m["FileResource"].empty()) {
      fileResource = make_shared<string>(boost::any_cast<string>(m["FileResource"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ReturnValueDescription") != m.end() && !m["ReturnValueDescription"].empty()) {
      returnValueDescription = make_shared<string>(boost::any_cast<string>(m["ReturnValueDescription"]));
    }
    if (m.find("RuntimeResource") != m.end() && !m["RuntimeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeResource"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeResource"]));
        runtimeResource = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource>(model1);
      }
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsScript>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctions() = default;
};
class ListFunctionsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionsResponseBodyPagingInfoFunctions>> functions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListFunctionsResponseBodyPagingInfo() {}

  explicit ListFunctionsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functions) {
      vector<boost::any> temp1;
      for(auto item1:*functions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Functions"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Functions") != m.end() && !m["Functions"].empty()) {
      if (typeid(vector<boost::any>) == m["Functions"].type()) {
        vector<ListFunctionsResponseBodyPagingInfoFunctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Functions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionsResponseBodyPagingInfoFunctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functions = make_shared<vector<ListFunctionsResponseBodyPagingInfoFunctions>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfo() = default;
};
class ListFunctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFunctionsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListFunctionsResponseBody() {}

  explicit ListFunctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListFunctionsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListFunctionsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFunctionsResponseBody() = default;
};
class ListFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionsResponseBody> body{};

  ListFunctionsResponse() {}

  explicit ListFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponse() = default;
};
class ListNodeDependenciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};

  ListNodeDependenciesRequest() {}

  explicit ListNodeDependenciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListNodeDependenciesRequest() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListNodeDependenciesResponseBodyPagingInfoNodesDataSource() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesDataSource() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>> tables{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>> variables{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>> tables{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>> variables{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime> runtime{};

  ListNodeDependenciesResponseBodyPagingInfoNodesScript() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesScript() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesStrategy : public Darabonba::Model {
public:
  shared_ptr<string> instanceMode{};
  shared_ptr<long> rerunInterval{};
  shared_ptr<string> rerunMode{};
  shared_ptr<long> rerunTimes{};
  shared_ptr<long> timeout{};

  ListNodeDependenciesResponseBodyPagingInfoNodesStrategy() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceMode) {
      res["InstanceMode"] = boost::any(*instanceMode);
    }
    if (rerunInterval) {
      res["RerunInterval"] = boost::any(*rerunInterval);
    }
    if (rerunMode) {
      res["RerunMode"] = boost::any(*rerunMode);
    }
    if (rerunTimes) {
      res["RerunTimes"] = boost::any(*rerunTimes);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceMode") != m.end() && !m["InstanceMode"].empty()) {
      instanceMode = make_shared<string>(boost::any_cast<string>(m["InstanceMode"]));
    }
    if (m.find("RerunInterval") != m.end() && !m["RerunInterval"].empty()) {
      rerunInterval = make_shared<long>(boost::any_cast<long>(m["RerunInterval"]));
    }
    if (m.find("RerunMode") != m.end() && !m["RerunMode"].empty()) {
      rerunMode = make_shared<string>(boost::any_cast<string>(m["RerunMode"]));
    }
    if (m.find("RerunTimes") != m.end() && !m["RerunTimes"].empty()) {
      rerunTimes = make_shared<long>(boost::any_cast<long>(m["RerunTimes"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesStrategy() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListNodeDependenciesResponseBodyPagingInfoNodesTags() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesTags() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesTrigger : public Darabonba::Model {
public:
  shared_ptr<string> cron{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  ListNodeDependenciesResponseBodyPagingInfoNodesTrigger() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesTrigger() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodes : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesDataSource> dataSource{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesInputs> inputs{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesOutputs> outputs{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> recurrence{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource> runtimeResource{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesScript> script{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesStrategy> strategy{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesTags>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesTrigger> trigger{};

  ListNodeDependenciesResponseBodyPagingInfoNodes() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inputs) {
      res["Inputs"] = inputs ? boost::any(inputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputs) {
      res["Outputs"] = outputs ? boost::any(outputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (recurrence) {
      res["Recurrence"] = boost::any(*recurrence);
    }
    if (runtimeResource) {
      res["RuntimeResource"] = runtimeResource ? boost::any(runtimeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (strategy) {
      res["Strategy"] = strategy ? boost::any(strategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (trigger) {
      res["Trigger"] = trigger ? boost::any(trigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesDataSource>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inputs"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesInputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inputs"]));
        inputs = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesInputs>(model1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Outputs"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesOutputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Outputs"]));
        outputs = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesOutputs>(model1);
      }
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Recurrence") != m.end() && !m["Recurrence"].empty()) {
      recurrence = make_shared<string>(boost::any_cast<string>(m["Recurrence"]));
    }
    if (m.find("RuntimeResource") != m.end() && !m["RuntimeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeResource"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeResource"]));
        runtimeResource = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource>(model1);
      }
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesScript>(model1);
      }
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Strategy"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Strategy"]));
        strategy = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesStrategy>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesTags>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trigger"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trigger"]));
        trigger = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesTrigger>(model1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodes() = default;
};
class ListNodeDependenciesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodes>> nodes{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListNodeDependenciesResponseBodyPagingInfo() {}

  explicit ListNodeDependenciesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodes>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfo() = default;
};
class ListNodeDependenciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListNodeDependenciesResponseBody() {}

  explicit ListNodeDependenciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListNodeDependenciesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListNodeDependenciesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBody() = default;
};
class ListNodeDependenciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeDependenciesResponseBody> body{};

  ListNodeDependenciesResponse() {}

  explicit ListNodeDependenciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodeDependenciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeDependenciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> rerunMode{};
  shared_ptr<string> rerurrence{};
  shared_ptr<string> scene{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rerunMode) {
      res["RerunMode"] = boost::any(*rerunMode);
    }
    if (rerurrence) {
      res["Rerurrence"] = boost::any(*rerurrence);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RerunMode") != m.end() && !m["RerunMode"].empty()) {
      rerunMode = make_shared<string>(boost::any_cast<string>(m["RerunMode"]));
    }
    if (m.find("Rerurrence") != m.end() && !m["Rerurrence"].empty()) {
      rerurrence = make_shared<string>(boost::any_cast<string>(m["Rerurrence"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBodyPagingInfoNodesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListNodesResponseBodyPagingInfoNodesDataSource() {}

  explicit ListNodesResponseBodyPagingInfoNodesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesDataSource() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodesResponseBodyPagingInfoNodesInputsTables() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsTables() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodesResponseBodyPagingInfoNodesInputsVariablesNode() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsVariablesNode() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesInputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodesResponseBodyPagingInfoNodesInputsVariables() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodesResponseBodyPagingInfoNodesInputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodesResponseBodyPagingInfoNodesInputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsVariables() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesInputsTables>> tables{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesInputsVariables>> variables{};

  ListNodesResponseBodyPagingInfoNodesInputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesInputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesInputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesInputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesInputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesInputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesInputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodesResponseBodyPagingInfoNodesOutputsTables() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsTables() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodesResponseBodyPagingInfoNodesOutputsVariables() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsVariables() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesOutputsTables>> tables{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesOutputsVariables>> variables{};

  ListNodesResponseBodyPagingInfoNodesOutputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesOutputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesOutputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesOutputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesOutputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesOutputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesOutputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesRuntimeResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  ListNodesResponseBodyPagingInfoNodesRuntimeResource() {}

  explicit ListNodesResponseBodyPagingInfoNodesRuntimeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesRuntimeResource() = default;
};
class ListNodesResponseBodyPagingInfoNodesScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListNodesResponseBodyPagingInfoNodesScriptRuntime() {}

  explicit ListNodesResponseBodyPagingInfoNodesScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesScriptRuntime() = default;
};
class ListNodesResponseBodyPagingInfoNodesScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesScriptRuntime> runtime{};

  ListNodesResponseBodyPagingInfoNodesScript() {}

  explicit ListNodesResponseBodyPagingInfoNodesScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListNodesResponseBodyPagingInfoNodesScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListNodesResponseBodyPagingInfoNodesScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesScript() = default;
};
class ListNodesResponseBodyPagingInfoNodesStrategy : public Darabonba::Model {
public:
  shared_ptr<string> instanceMode{};
  shared_ptr<long> rerunInterval{};
  shared_ptr<string> rerunMode{};
  shared_ptr<long> rerunTimes{};
  shared_ptr<long> timeout{};

  ListNodesResponseBodyPagingInfoNodesStrategy() {}

  explicit ListNodesResponseBodyPagingInfoNodesStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceMode) {
      res["InstanceMode"] = boost::any(*instanceMode);
    }
    if (rerunInterval) {
      res["RerunInterval"] = boost::any(*rerunInterval);
    }
    if (rerunMode) {
      res["RerunMode"] = boost::any(*rerunMode);
    }
    if (rerunTimes) {
      res["RerunTimes"] = boost::any(*rerunTimes);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceMode") != m.end() && !m["InstanceMode"].empty()) {
      instanceMode = make_shared<string>(boost::any_cast<string>(m["InstanceMode"]));
    }
    if (m.find("RerunInterval") != m.end() && !m["RerunInterval"].empty()) {
      rerunInterval = make_shared<long>(boost::any_cast<long>(m["RerunInterval"]));
    }
    if (m.find("RerunMode") != m.end() && !m["RerunMode"].empty()) {
      rerunMode = make_shared<string>(boost::any_cast<string>(m["RerunMode"]));
    }
    if (m.find("RerunTimes") != m.end() && !m["RerunTimes"].empty()) {
      rerunTimes = make_shared<long>(boost::any_cast<long>(m["RerunTimes"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesStrategy() = default;
};
class ListNodesResponseBodyPagingInfoNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListNodesResponseBodyPagingInfoNodesTags() {}

  explicit ListNodesResponseBodyPagingInfoNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListNodesResponseBodyPagingInfoNodesTags() = default;
};
class ListNodesResponseBodyPagingInfoNodesTrigger : public Darabonba::Model {
public:
  shared_ptr<string> cron{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  ListNodesResponseBodyPagingInfoNodesTrigger() {}

  explicit ListNodesResponseBodyPagingInfoNodesTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesTrigger() = default;
};
class ListNodesResponseBodyPagingInfoNodes : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesDataSource> dataSource{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesInputs> inputs{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesOutputs> outputs{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> recurrence{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesRuntimeResource> runtimeResource{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesScript> script{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesStrategy> strategy{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesTags>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesTrigger> trigger{};

  ListNodesResponseBodyPagingInfoNodes() {}

  explicit ListNodesResponseBodyPagingInfoNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inputs) {
      res["Inputs"] = inputs ? boost::any(inputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputs) {
      res["Outputs"] = outputs ? boost::any(outputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (recurrence) {
      res["Recurrence"] = boost::any(*recurrence);
    }
    if (runtimeResource) {
      res["RuntimeResource"] = runtimeResource ? boost::any(runtimeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (strategy) {
      res["Strategy"] = strategy ? boost::any(strategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (trigger) {
      res["Trigger"] = trigger ? boost::any(trigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListNodesResponseBodyPagingInfoNodesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListNodesResponseBodyPagingInfoNodesDataSource>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inputs"].type()) {
        ListNodesResponseBodyPagingInfoNodesInputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inputs"]));
        inputs = make_shared<ListNodesResponseBodyPagingInfoNodesInputs>(model1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Outputs"].type()) {
        ListNodesResponseBodyPagingInfoNodesOutputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Outputs"]));
        outputs = make_shared<ListNodesResponseBodyPagingInfoNodesOutputs>(model1);
      }
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Recurrence") != m.end() && !m["Recurrence"].empty()) {
      recurrence = make_shared<string>(boost::any_cast<string>(m["Recurrence"]));
    }
    if (m.find("RuntimeResource") != m.end() && !m["RuntimeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeResource"].type()) {
        ListNodesResponseBodyPagingInfoNodesRuntimeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeResource"]));
        runtimeResource = make_shared<ListNodesResponseBodyPagingInfoNodesRuntimeResource>(model1);
      }
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListNodesResponseBodyPagingInfoNodesScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListNodesResponseBodyPagingInfoNodesScript>(model1);
      }
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Strategy"].type()) {
        ListNodesResponseBodyPagingInfoNodesStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Strategy"]));
        strategy = make_shared<ListNodesResponseBodyPagingInfoNodesStrategy>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListNodesResponseBodyPagingInfoNodesTags>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trigger"].type()) {
        ListNodesResponseBodyPagingInfoNodesTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trigger"]));
        trigger = make_shared<ListNodesResponseBodyPagingInfoNodesTrigger>(model1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodes() = default;
};
class ListNodesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodes>> nodes{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListNodesResponseBodyPagingInfo() {}

  explicit ListNodesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListNodesResponseBodyPagingInfoNodes>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfo() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListNodesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListNodesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyPagingInfoResourcesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListResourcesResponseBodyPagingInfoResourcesDataSource() {}

  explicit ListResourcesResponseBodyPagingInfoResourcesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResourcesDataSource() = default;
};
class ListResourcesResponseBodyPagingInfoResourcesScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListResourcesResponseBodyPagingInfoResourcesScriptRuntime() {}

  explicit ListResourcesResponseBodyPagingInfoResourcesScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResourcesScriptRuntime() = default;
};
class ListResourcesResponseBodyPagingInfoResourcesScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListResourcesResponseBodyPagingInfoResourcesScriptRuntime> runtime{};

  ListResourcesResponseBodyPagingInfoResourcesScript() {}

  explicit ListResourcesResponseBodyPagingInfoResourcesScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListResourcesResponseBodyPagingInfoResourcesScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListResourcesResponseBodyPagingInfoResourcesScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResourcesScript() = default;
};
class ListResourcesResponseBodyPagingInfoResources : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListResourcesResponseBodyPagingInfoResourcesDataSource> dataSource{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<ListResourcesResponseBodyPagingInfoResourcesScript> script{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> type{};

  ListResourcesResponseBodyPagingInfoResources() {}

  explicit ListResourcesResponseBodyPagingInfoResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourcePath) {
      res["SourcePath"] = boost::any(*sourcePath);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListResourcesResponseBodyPagingInfoResourcesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListResourcesResponseBodyPagingInfoResourcesDataSource>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListResourcesResponseBodyPagingInfoResourcesScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListResourcesResponseBodyPagingInfoResourcesScript>(model1);
      }
    }
    if (m.find("SourcePath") != m.end() && !m["SourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["SourcePath"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResources() = default;
};
class ListResourcesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListResourcesResponseBodyPagingInfoResources>> resources{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBodyPagingInfo() {}

  explicit ListResourcesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListResourcesResponseBodyPagingInfoResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyPagingInfoResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyPagingInfoResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfo() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListResourcesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListResourcesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListWorkflowDefinitionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  ListWorkflowDefinitionsRequest() {}

  explicit ListWorkflowDefinitionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListWorkflowDefinitionsRequest() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime> runtime{};

  ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript> script{};
  shared_ptr<string> type{};

  ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>> workflowDefinitions{};

  ListWorkflowDefinitionsResponseBodyPagingInfo() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workflowDefinitions) {
      vector<boost::any> temp1;
      for(auto item1:*workflowDefinitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkflowDefinitions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WorkflowDefinitions") != m.end() && !m["WorkflowDefinitions"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkflowDefinitions"].type()) {
        vector<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkflowDefinitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowDefinitions = make_shared<vector<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>>(expect1);
      }
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfo() = default;
};
class ListWorkflowDefinitionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListWorkflowDefinitionsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListWorkflowDefinitionsResponseBody() {}

  explicit ListWorkflowDefinitionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListWorkflowDefinitionsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListWorkflowDefinitionsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBody() = default;
};
class ListWorkflowDefinitionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkflowDefinitionsResponseBody> body{};

  ListWorkflowDefinitionsResponse() {}

  explicit ListWorkflowDefinitionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWorkflowDefinitionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkflowDefinitionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkflowDefinitionsResponse() = default;
};
class MoveFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveFunctionRequest() {}

  explicit MoveFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveFunctionRequest() = default;
};
class MoveFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveFunctionResponseBody() {}

  explicit MoveFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveFunctionResponseBody() = default;
};
class MoveFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveFunctionResponseBody> body{};

  MoveFunctionResponse() {}

  explicit MoveFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~MoveFunctionResponse() = default;
};
class MoveNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveNodeRequest() {}

  explicit MoveNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveNodeRequest() = default;
};
class MoveNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveNodeResponseBody() {}

  explicit MoveNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveNodeResponseBody() = default;
};
class MoveNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveNodeResponseBody> body{};

  MoveNodeResponse() {}

  explicit MoveNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveNodeResponseBody>(model1);
      }
    }
  }


  virtual ~MoveNodeResponse() = default;
};
class MoveResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveResourceRequest() {}

  explicit MoveResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveResourceRequest() = default;
};
class MoveResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveResourceResponseBody() {}

  explicit MoveResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveResourceResponseBody() = default;
};
class MoveResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourceResponseBody> body{};

  MoveResourceResponse() {}

  explicit MoveResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceResponse() = default;
};
class MoveWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveWorkflowDefinitionRequest() {}

  explicit MoveWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveWorkflowDefinitionRequest() = default;
};
class MoveWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveWorkflowDefinitionResponseBody() {}

  explicit MoveWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveWorkflowDefinitionResponseBody() = default;
};
class MoveWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveWorkflowDefinitionResponseBody> body{};

  MoveWorkflowDefinitionResponse() {}

  explicit MoveWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~MoveWorkflowDefinitionResponse() = default;
};
class RenameFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameFunctionRequest() {}

  explicit RenameFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameFunctionRequest() = default;
};
class RenameFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  RenameFunctionResponseBody() {}

  explicit RenameFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~RenameFunctionResponseBody() = default;
};
class RenameFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameFunctionResponseBody> body{};

  RenameFunctionResponse() {}

  explicit RenameFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~RenameFunctionResponse() = default;
};
class RenameNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameNodeRequest() {}

  explicit RenameNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameNodeRequest() = default;
};
class RenameNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenameNodeResponseBody() {}

  explicit RenameNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenameNodeResponseBody() = default;
};
class RenameNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameNodeResponseBody> body{};

  RenameNodeResponse() {}

  explicit RenameNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameNodeResponseBody>(model1);
      }
    }
  }


  virtual ~RenameNodeResponse() = default;
};
class RenameResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameResourceRequest() {}

  explicit RenameResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameResourceRequest() = default;
};
class RenameResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenameResourceResponseBody() {}

  explicit RenameResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenameResourceResponseBody() = default;
};
class RenameResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameResourceResponseBody> body{};

  RenameResourceResponse() {}

  explicit RenameResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameResourceResponseBody>(model1);
      }
    }
  }


  virtual ~RenameResourceResponse() = default;
};
class RenameWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameWorkflowDefinitionRequest() {}

  explicit RenameWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameWorkflowDefinitionRequest() = default;
};
class RenameWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenameWorkflowDefinitionResponseBody() {}

  explicit RenameWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenameWorkflowDefinitionResponseBody() = default;
};
class RenameWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameWorkflowDefinitionResponseBody> body{};

  RenameWorkflowDefinitionResponse() {}

  explicit RenameWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~RenameWorkflowDefinitionResponse() = default;
};
class UpdateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateFunctionRequest() {}

  explicit UpdateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateFunctionRequest() = default;
};
class UpdateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFunctionResponseBody() {}

  explicit UpdateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFunctionResponseBody() = default;
};
class UpdateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFunctionResponseBody> body{};

  UpdateFunctionResponse() {}

  explicit UpdateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFunctionResponse() = default;
};
class UpdateNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateNodeRequest() {}

  explicit UpdateNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateNodeRequest() = default;
};
class UpdateNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNodeResponseBody() {}

  explicit UpdateNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNodeResponseBody() = default;
};
class UpdateNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNodeResponseBody> body{};

  UpdateNodeResponse() {}

  explicit UpdateNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNodeResponse() = default;
};
class UpdateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateResourceRequest() {}

  explicit UpdateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateResourceRequest() = default;
};
class UpdateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateResourceResponseBody() {}

  explicit UpdateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateResourceResponseBody() = default;
};
class UpdateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceResponseBody> body{};

  UpdateResourceResponse() {}

  explicit UpdateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceResponse() = default;
};
class UpdateWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateWorkflowDefinitionRequest() {}

  explicit UpdateWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateWorkflowDefinitionRequest() = default;
};
class UpdateWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateWorkflowDefinitionResponseBody() {}

  explicit UpdateWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateWorkflowDefinitionResponseBody() = default;
};
class UpdateWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkflowDefinitionResponseBody> body{};

  UpdateWorkflowDefinitionResponse() {}

  explicit UpdateWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkflowDefinitionResponse() = default;
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
  AbolishDeploymentResponse abolishDeploymentWithOptions(shared_ptr<AbolishDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbolishDeploymentResponse abolishDeployment(shared_ptr<AbolishDeploymentRequest> request);
  CreateDeploymentResponse createDeploymentWithOptions(shared_ptr<CreateDeploymentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeploymentResponse createDeployment(shared_ptr<CreateDeploymentRequest> request);
  CreateFunctionResponse createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionResponse createFunction(shared_ptr<CreateFunctionRequest> request);
  CreateNodeResponse createNodeWithOptions(shared_ptr<CreateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodeResponse createNode(shared_ptr<CreateNodeRequest> request);
  CreateResourceResponse createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<CreateResourceRequest> request);
  CreateWorkflowDefinitionResponse createWorkflowDefinitionWithOptions(shared_ptr<CreateWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkflowDefinitionResponse createWorkflowDefinition(shared_ptr<CreateWorkflowDefinitionRequest> request);
  DeleteFunctionResponse deleteFunctionWithOptions(shared_ptr<DeleteFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionResponse deleteFunction(shared_ptr<DeleteFunctionRequest> request);
  DeleteNodeResponse deleteNodeWithOptions(shared_ptr<DeleteNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodeResponse deleteNode(shared_ptr<DeleteNodeRequest> request);
  DeleteResourceResponse deleteResourceWithOptions(shared_ptr<DeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceResponse deleteResource(shared_ptr<DeleteResourceRequest> request);
  DeleteWorkflowDefinitionResponse deleteWorkflowDefinitionWithOptions(shared_ptr<DeleteWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkflowDefinitionResponse deleteWorkflowDefinition(shared_ptr<DeleteWorkflowDefinitionRequest> request);
  ExecDeploymentStageResponse execDeploymentStageWithOptions(shared_ptr<ExecDeploymentStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecDeploymentStageResponse execDeploymentStage(shared_ptr<ExecDeploymentStageRequest> request);
  GetDeploymentResponse getDeploymentWithOptions(shared_ptr<GetDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeploymentResponse getDeployment(shared_ptr<GetDeploymentRequest> request);
  GetFunctionResponse getFunctionWithOptions(shared_ptr<GetFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionResponse getFunction(shared_ptr<GetFunctionRequest> request);
  GetNodeResponse getNodeWithOptions(shared_ptr<GetNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeResponse getNode(shared_ptr<GetNodeRequest> request);
  GetResourceResponse getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceResponse getResource(shared_ptr<GetResourceRequest> request);
  GetWorkflowDefinitionResponse getWorkflowDefinitionWithOptions(shared_ptr<GetWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkflowDefinitionResponse getWorkflowDefinition(shared_ptr<GetWorkflowDefinitionRequest> request);
  ListDeploymentsResponse listDeploymentsWithOptions(shared_ptr<ListDeploymentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentsResponse listDeployments(shared_ptr<ListDeploymentsRequest> request);
  ListFunctionsResponse listFunctionsWithOptions(shared_ptr<ListFunctionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionsResponse listFunctions(shared_ptr<ListFunctionsRequest> request);
  ListNodeDependenciesResponse listNodeDependenciesWithOptions(shared_ptr<ListNodeDependenciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeDependenciesResponse listNodeDependencies(shared_ptr<ListNodeDependenciesRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListWorkflowDefinitionsResponse listWorkflowDefinitionsWithOptions(shared_ptr<ListWorkflowDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkflowDefinitionsResponse listWorkflowDefinitions(shared_ptr<ListWorkflowDefinitionsRequest> request);
  MoveFunctionResponse moveFunctionWithOptions(shared_ptr<MoveFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveFunctionResponse moveFunction(shared_ptr<MoveFunctionRequest> request);
  MoveNodeResponse moveNodeWithOptions(shared_ptr<MoveNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveNodeResponse moveNode(shared_ptr<MoveNodeRequest> request);
  MoveResourceResponse moveResourceWithOptions(shared_ptr<MoveResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceResponse moveResource(shared_ptr<MoveResourceRequest> request);
  MoveWorkflowDefinitionResponse moveWorkflowDefinitionWithOptions(shared_ptr<MoveWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveWorkflowDefinitionResponse moveWorkflowDefinition(shared_ptr<MoveWorkflowDefinitionRequest> request);
  RenameFunctionResponse renameFunctionWithOptions(shared_ptr<RenameFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameFunctionResponse renameFunction(shared_ptr<RenameFunctionRequest> request);
  RenameNodeResponse renameNodeWithOptions(shared_ptr<RenameNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameNodeResponse renameNode(shared_ptr<RenameNodeRequest> request);
  RenameResourceResponse renameResourceWithOptions(shared_ptr<RenameResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameResourceResponse renameResource(shared_ptr<RenameResourceRequest> request);
  RenameWorkflowDefinitionResponse renameWorkflowDefinitionWithOptions(shared_ptr<RenameWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameWorkflowDefinitionResponse renameWorkflowDefinition(shared_ptr<RenameWorkflowDefinitionRequest> request);
  UpdateFunctionResponse updateFunctionWithOptions(shared_ptr<UpdateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionResponse updateFunction(shared_ptr<UpdateFunctionRequest> request);
  UpdateNodeResponse updateNodeWithOptions(shared_ptr<UpdateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNodeResponse updateNode(shared_ptr<UpdateNodeRequest> request);
  UpdateResourceResponse updateResourceWithOptions(shared_ptr<UpdateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceResponse updateResource(shared_ptr<UpdateResourceRequest> request);
  UpdateWorkflowDefinitionResponse updateWorkflowDefinitionWithOptions(shared_ptr<UpdateWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkflowDefinitionResponse updateWorkflowDefinition(shared_ptr<UpdateWorkflowDefinitionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dataworks-public20240518

#endif
