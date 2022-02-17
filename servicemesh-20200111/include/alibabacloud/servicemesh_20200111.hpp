// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SERVICEMESH20200111_H_
#define ALIBABACLOUD_SERVICEMESH20200111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Servicemesh20200111 {
class AddBuiltinEnvoyFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> istioVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> parameters{};
  shared_ptr<string> serviceMeshId{};

  AddBuiltinEnvoyFilterRequest() {}

  explicit AddBuiltinEnvoyFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~AddBuiltinEnvoyFilterRequest() = default;
};
class AddBuiltinEnvoyFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddBuiltinEnvoyFilterResponseBody() {}

  explicit AddBuiltinEnvoyFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddBuiltinEnvoyFilterResponseBody() = default;
};
class AddBuiltinEnvoyFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddBuiltinEnvoyFilterResponseBody> body{};

  AddBuiltinEnvoyFilterResponse() {}

  explicit AddBuiltinEnvoyFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddBuiltinEnvoyFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBuiltinEnvoyFilterResponseBody>(model1);
      }
    }
  }


  virtual ~AddBuiltinEnvoyFilterResponse() = default;
};
class AddClusterIntoServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> serviceMeshId{};

  AddClusterIntoServiceMeshRequest() {}

  explicit AddClusterIntoServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~AddClusterIntoServiceMeshRequest() = default;
};
class AddClusterIntoServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddClusterIntoServiceMeshResponseBody() {}

  explicit AddClusterIntoServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddClusterIntoServiceMeshResponseBody() = default;
};
class AddClusterIntoServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddClusterIntoServiceMeshResponseBody> body{};

  AddClusterIntoServiceMeshResponse() {}

  explicit AddClusterIntoServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddClusterIntoServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddClusterIntoServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~AddClusterIntoServiceMeshResponse() = default;
};
class AddMeshTagToEcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecsId{};
  shared_ptr<string> serviceMeshId{};

  AddMeshTagToEcsRequest() {}

  explicit AddMeshTagToEcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~AddMeshTagToEcsRequest() = default;
};
class AddMeshTagToEcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddMeshTagToEcsResponseBody() {}

  explicit AddMeshTagToEcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddMeshTagToEcsResponseBody() = default;
};
class AddMeshTagToEcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddMeshTagToEcsResponseBody> body{};

  AddMeshTagToEcsResponse() {}

  explicit AddMeshTagToEcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddMeshTagToEcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddMeshTagToEcsResponseBody>(model1);
      }
    }
  }


  virtual ~AddMeshTagToEcsResponse() = default;
};
class AddVMIntoServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecsId{};
  shared_ptr<string> serviceMeshId{};

  AddVMIntoServiceMeshRequest() {}

  explicit AddVMIntoServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~AddVMIntoServiceMeshRequest() = default;
};
class AddVMIntoServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddVMIntoServiceMeshResponseBody() {}

  explicit AddVMIntoServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddVMIntoServiceMeshResponseBody() = default;
};
class AddVMIntoServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddVMIntoServiceMeshResponseBody> body{};

  AddVMIntoServiceMeshResponse() {}

  explicit AddVMIntoServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddVMIntoServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddVMIntoServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~AddVMIntoServiceMeshResponse() = default;
};
class CreateASMGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> istioGatewayName{};
  shared_ptr<string> serviceMeshId{};

  CreateASMGatewayRequest() {}

  explicit CreateASMGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (istioGatewayName) {
      res["IstioGatewayName"] = boost::any(*istioGatewayName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("IstioGatewayName") != m.end() && !m["IstioGatewayName"].empty()) {
      istioGatewayName = make_shared<string>(boost::any_cast<string>(m["IstioGatewayName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~CreateASMGatewayRequest() = default;
};
class CreateASMGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateASMGatewayResponseBody() {}

  explicit CreateASMGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateASMGatewayResponseBody() = default;
};
class CreateASMGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateASMGatewayResponseBody> body{};

  CreateASMGatewayResponse() {}

  explicit CreateASMGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateASMGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateASMGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~CreateASMGatewayResponse() = default;
};
class CreateExtensionProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> type{};

  CreateExtensionProviderRequest() {}

  explicit CreateExtensionProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateExtensionProviderRequest() = default;
};
class CreateExtensionProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateExtensionProviderResponseBody() {}

  explicit CreateExtensionProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateExtensionProviderResponseBody() = default;
};
class CreateExtensionProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateExtensionProviderResponseBody> body{};

  CreateExtensionProviderResponse() {}

  explicit CreateExtensionProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateExtensionProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExtensionProviderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExtensionProviderResponse() = default;
};
class CreateServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessLogEnabled{};
  shared_ptr<string> accessLogFile{};
  shared_ptr<string> accessLogFormat{};
  shared_ptr<string> accessLogProject{};
  shared_ptr<bool> accessLogServiceEnabled{};
  shared_ptr<string> accessLogServiceHost{};
  shared_ptr<long> accessLogServicePort{};
  shared_ptr<bool> apiServerPublicEip{};
  shared_ptr<string> auditProject{};
  shared_ptr<bool> CRAggregationEnabled{};
  shared_ptr<bool> configSourceEnabled{};
  shared_ptr<string> configSourceNacosID{};
  shared_ptr<bool> controlPlaneLogEnabled{};
  shared_ptr<string> controlPlaneLogProject{};
  shared_ptr<bool> customizedPrometheus{};
  shared_ptr<bool> customizedZipkin{};
  shared_ptr<bool> DNSProxyingEnabled{};
  shared_ptr<bool> dubboFilterEnabled{};
  shared_ptr<string> edition{};
  shared_ptr<bool> enableAudit{};
  shared_ptr<bool> enableCRHistory{};
  shared_ptr<bool> enableSDSServer{};
  shared_ptr<string> excludeIPRanges{};
  shared_ptr<string> excludeInboundPorts{};
  shared_ptr<string> excludeOutboundPorts{};
  shared_ptr<bool> filterGatewayClusterConfig{};
  shared_ptr<bool> gatewayAPIEnabled{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<string> istioVersion{};
  shared_ptr<bool> kialiEnabled{};
  shared_ptr<string> localityLBConf{};
  shared_ptr<bool> localityLoadBalancing{};
  shared_ptr<bool> MSEEnabled{};
  shared_ptr<bool> mysqlFilterEnabled{};
  shared_ptr<string> name{};
  shared_ptr<string> OPALimitCPU{};
  shared_ptr<string> OPALimitMemory{};
  shared_ptr<string> OPALogLevel{};
  shared_ptr<string> OPARequestCPU{};
  shared_ptr<string> OPARequestMemory{};
  shared_ptr<bool> opaEnabled{};
  shared_ptr<bool> openAgentPolicy{};
  shared_ptr<string> prometheusUrl{};
  shared_ptr<string> proxyLimitCPU{};
  shared_ptr<string> proxyLimitMemory{};
  shared_ptr<string> proxyRequestCPU{};
  shared_ptr<string> proxyRequestMemory{};
  shared_ptr<bool> redisFilterEnabled{};
  shared_ptr<string> regionId{};
  shared_ptr<bool> telemetry{};
  shared_ptr<bool> thriftFilterEnabled{};
  shared_ptr<double> traceSampling{};
  shared_ptr<bool> tracing{};
  shared_ptr<string> vSwitches{};
  shared_ptr<string> vpcId{};
  shared_ptr<bool> webAssemblyFilterEnabled{};

  CreateServiceMeshRequest() {}

  explicit CreateServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogEnabled) {
      res["AccessLogEnabled"] = boost::any(*accessLogEnabled);
    }
    if (accessLogFile) {
      res["AccessLogFile"] = boost::any(*accessLogFile);
    }
    if (accessLogFormat) {
      res["AccessLogFormat"] = boost::any(*accessLogFormat);
    }
    if (accessLogProject) {
      res["AccessLogProject"] = boost::any(*accessLogProject);
    }
    if (accessLogServiceEnabled) {
      res["AccessLogServiceEnabled"] = boost::any(*accessLogServiceEnabled);
    }
    if (accessLogServiceHost) {
      res["AccessLogServiceHost"] = boost::any(*accessLogServiceHost);
    }
    if (accessLogServicePort) {
      res["AccessLogServicePort"] = boost::any(*accessLogServicePort);
    }
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    if (auditProject) {
      res["AuditProject"] = boost::any(*auditProject);
    }
    if (CRAggregationEnabled) {
      res["CRAggregationEnabled"] = boost::any(*CRAggregationEnabled);
    }
    if (configSourceEnabled) {
      res["ConfigSourceEnabled"] = boost::any(*configSourceEnabled);
    }
    if (configSourceNacosID) {
      res["ConfigSourceNacosID"] = boost::any(*configSourceNacosID);
    }
    if (controlPlaneLogEnabled) {
      res["ControlPlaneLogEnabled"] = boost::any(*controlPlaneLogEnabled);
    }
    if (controlPlaneLogProject) {
      res["ControlPlaneLogProject"] = boost::any(*controlPlaneLogProject);
    }
    if (customizedPrometheus) {
      res["CustomizedPrometheus"] = boost::any(*customizedPrometheus);
    }
    if (customizedZipkin) {
      res["CustomizedZipkin"] = boost::any(*customizedZipkin);
    }
    if (DNSProxyingEnabled) {
      res["DNSProxyingEnabled"] = boost::any(*DNSProxyingEnabled);
    }
    if (dubboFilterEnabled) {
      res["DubboFilterEnabled"] = boost::any(*dubboFilterEnabled);
    }
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (enableAudit) {
      res["EnableAudit"] = boost::any(*enableAudit);
    }
    if (enableCRHistory) {
      res["EnableCRHistory"] = boost::any(*enableCRHistory);
    }
    if (enableSDSServer) {
      res["EnableSDSServer"] = boost::any(*enableSDSServer);
    }
    if (excludeIPRanges) {
      res["ExcludeIPRanges"] = boost::any(*excludeIPRanges);
    }
    if (excludeInboundPorts) {
      res["ExcludeInboundPorts"] = boost::any(*excludeInboundPorts);
    }
    if (excludeOutboundPorts) {
      res["ExcludeOutboundPorts"] = boost::any(*excludeOutboundPorts);
    }
    if (filterGatewayClusterConfig) {
      res["FilterGatewayClusterConfig"] = boost::any(*filterGatewayClusterConfig);
    }
    if (gatewayAPIEnabled) {
      res["GatewayAPIEnabled"] = boost::any(*gatewayAPIEnabled);
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (kialiEnabled) {
      res["KialiEnabled"] = boost::any(*kialiEnabled);
    }
    if (localityLBConf) {
      res["LocalityLBConf"] = boost::any(*localityLBConf);
    }
    if (localityLoadBalancing) {
      res["LocalityLoadBalancing"] = boost::any(*localityLoadBalancing);
    }
    if (MSEEnabled) {
      res["MSEEnabled"] = boost::any(*MSEEnabled);
    }
    if (mysqlFilterEnabled) {
      res["MysqlFilterEnabled"] = boost::any(*mysqlFilterEnabled);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (OPALimitCPU) {
      res["OPALimitCPU"] = boost::any(*OPALimitCPU);
    }
    if (OPALimitMemory) {
      res["OPALimitMemory"] = boost::any(*OPALimitMemory);
    }
    if (OPALogLevel) {
      res["OPALogLevel"] = boost::any(*OPALogLevel);
    }
    if (OPARequestCPU) {
      res["OPARequestCPU"] = boost::any(*OPARequestCPU);
    }
    if (OPARequestMemory) {
      res["OPARequestMemory"] = boost::any(*OPARequestMemory);
    }
    if (opaEnabled) {
      res["OpaEnabled"] = boost::any(*opaEnabled);
    }
    if (openAgentPolicy) {
      res["OpenAgentPolicy"] = boost::any(*openAgentPolicy);
    }
    if (prometheusUrl) {
      res["PrometheusUrl"] = boost::any(*prometheusUrl);
    }
    if (proxyLimitCPU) {
      res["ProxyLimitCPU"] = boost::any(*proxyLimitCPU);
    }
    if (proxyLimitMemory) {
      res["ProxyLimitMemory"] = boost::any(*proxyLimitMemory);
    }
    if (proxyRequestCPU) {
      res["ProxyRequestCPU"] = boost::any(*proxyRequestCPU);
    }
    if (proxyRequestMemory) {
      res["ProxyRequestMemory"] = boost::any(*proxyRequestMemory);
    }
    if (redisFilterEnabled) {
      res["RedisFilterEnabled"] = boost::any(*redisFilterEnabled);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (thriftFilterEnabled) {
      res["ThriftFilterEnabled"] = boost::any(*thriftFilterEnabled);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (webAssemblyFilterEnabled) {
      res["WebAssemblyFilterEnabled"] = boost::any(*webAssemblyFilterEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogEnabled") != m.end() && !m["AccessLogEnabled"].empty()) {
      accessLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogEnabled"]));
    }
    if (m.find("AccessLogFile") != m.end() && !m["AccessLogFile"].empty()) {
      accessLogFile = make_shared<string>(boost::any_cast<string>(m["AccessLogFile"]));
    }
    if (m.find("AccessLogFormat") != m.end() && !m["AccessLogFormat"].empty()) {
      accessLogFormat = make_shared<string>(boost::any_cast<string>(m["AccessLogFormat"]));
    }
    if (m.find("AccessLogProject") != m.end() && !m["AccessLogProject"].empty()) {
      accessLogProject = make_shared<string>(boost::any_cast<string>(m["AccessLogProject"]));
    }
    if (m.find("AccessLogServiceEnabled") != m.end() && !m["AccessLogServiceEnabled"].empty()) {
      accessLogServiceEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogServiceEnabled"]));
    }
    if (m.find("AccessLogServiceHost") != m.end() && !m["AccessLogServiceHost"].empty()) {
      accessLogServiceHost = make_shared<string>(boost::any_cast<string>(m["AccessLogServiceHost"]));
    }
    if (m.find("AccessLogServicePort") != m.end() && !m["AccessLogServicePort"].empty()) {
      accessLogServicePort = make_shared<long>(boost::any_cast<long>(m["AccessLogServicePort"]));
    }
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("AuditProject") != m.end() && !m["AuditProject"].empty()) {
      auditProject = make_shared<string>(boost::any_cast<string>(m["AuditProject"]));
    }
    if (m.find("CRAggregationEnabled") != m.end() && !m["CRAggregationEnabled"].empty()) {
      CRAggregationEnabled = make_shared<bool>(boost::any_cast<bool>(m["CRAggregationEnabled"]));
    }
    if (m.find("ConfigSourceEnabled") != m.end() && !m["ConfigSourceEnabled"].empty()) {
      configSourceEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigSourceEnabled"]));
    }
    if (m.find("ConfigSourceNacosID") != m.end() && !m["ConfigSourceNacosID"].empty()) {
      configSourceNacosID = make_shared<string>(boost::any_cast<string>(m["ConfigSourceNacosID"]));
    }
    if (m.find("ControlPlaneLogEnabled") != m.end() && !m["ControlPlaneLogEnabled"].empty()) {
      controlPlaneLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["ControlPlaneLogEnabled"]));
    }
    if (m.find("ControlPlaneLogProject") != m.end() && !m["ControlPlaneLogProject"].empty()) {
      controlPlaneLogProject = make_shared<string>(boost::any_cast<string>(m["ControlPlaneLogProject"]));
    }
    if (m.find("CustomizedPrometheus") != m.end() && !m["CustomizedPrometheus"].empty()) {
      customizedPrometheus = make_shared<bool>(boost::any_cast<bool>(m["CustomizedPrometheus"]));
    }
    if (m.find("CustomizedZipkin") != m.end() && !m["CustomizedZipkin"].empty()) {
      customizedZipkin = make_shared<bool>(boost::any_cast<bool>(m["CustomizedZipkin"]));
    }
    if (m.find("DNSProxyingEnabled") != m.end() && !m["DNSProxyingEnabled"].empty()) {
      DNSProxyingEnabled = make_shared<bool>(boost::any_cast<bool>(m["DNSProxyingEnabled"]));
    }
    if (m.find("DubboFilterEnabled") != m.end() && !m["DubboFilterEnabled"].empty()) {
      dubboFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["DubboFilterEnabled"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("EnableAudit") != m.end() && !m["EnableAudit"].empty()) {
      enableAudit = make_shared<bool>(boost::any_cast<bool>(m["EnableAudit"]));
    }
    if (m.find("EnableCRHistory") != m.end() && !m["EnableCRHistory"].empty()) {
      enableCRHistory = make_shared<bool>(boost::any_cast<bool>(m["EnableCRHistory"]));
    }
    if (m.find("EnableSDSServer") != m.end() && !m["EnableSDSServer"].empty()) {
      enableSDSServer = make_shared<bool>(boost::any_cast<bool>(m["EnableSDSServer"]));
    }
    if (m.find("ExcludeIPRanges") != m.end() && !m["ExcludeIPRanges"].empty()) {
      excludeIPRanges = make_shared<string>(boost::any_cast<string>(m["ExcludeIPRanges"]));
    }
    if (m.find("ExcludeInboundPorts") != m.end() && !m["ExcludeInboundPorts"].empty()) {
      excludeInboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeInboundPorts"]));
    }
    if (m.find("ExcludeOutboundPorts") != m.end() && !m["ExcludeOutboundPorts"].empty()) {
      excludeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundPorts"]));
    }
    if (m.find("FilterGatewayClusterConfig") != m.end() && !m["FilterGatewayClusterConfig"].empty()) {
      filterGatewayClusterConfig = make_shared<bool>(boost::any_cast<bool>(m["FilterGatewayClusterConfig"]));
    }
    if (m.find("GatewayAPIEnabled") != m.end() && !m["GatewayAPIEnabled"].empty()) {
      gatewayAPIEnabled = make_shared<bool>(boost::any_cast<bool>(m["GatewayAPIEnabled"]));
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("KialiEnabled") != m.end() && !m["KialiEnabled"].empty()) {
      kialiEnabled = make_shared<bool>(boost::any_cast<bool>(m["KialiEnabled"]));
    }
    if (m.find("LocalityLBConf") != m.end() && !m["LocalityLBConf"].empty()) {
      localityLBConf = make_shared<string>(boost::any_cast<string>(m["LocalityLBConf"]));
    }
    if (m.find("LocalityLoadBalancing") != m.end() && !m["LocalityLoadBalancing"].empty()) {
      localityLoadBalancing = make_shared<bool>(boost::any_cast<bool>(m["LocalityLoadBalancing"]));
    }
    if (m.find("MSEEnabled") != m.end() && !m["MSEEnabled"].empty()) {
      MSEEnabled = make_shared<bool>(boost::any_cast<bool>(m["MSEEnabled"]));
    }
    if (m.find("MysqlFilterEnabled") != m.end() && !m["MysqlFilterEnabled"].empty()) {
      mysqlFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["MysqlFilterEnabled"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OPALimitCPU") != m.end() && !m["OPALimitCPU"].empty()) {
      OPALimitCPU = make_shared<string>(boost::any_cast<string>(m["OPALimitCPU"]));
    }
    if (m.find("OPALimitMemory") != m.end() && !m["OPALimitMemory"].empty()) {
      OPALimitMemory = make_shared<string>(boost::any_cast<string>(m["OPALimitMemory"]));
    }
    if (m.find("OPALogLevel") != m.end() && !m["OPALogLevel"].empty()) {
      OPALogLevel = make_shared<string>(boost::any_cast<string>(m["OPALogLevel"]));
    }
    if (m.find("OPARequestCPU") != m.end() && !m["OPARequestCPU"].empty()) {
      OPARequestCPU = make_shared<string>(boost::any_cast<string>(m["OPARequestCPU"]));
    }
    if (m.find("OPARequestMemory") != m.end() && !m["OPARequestMemory"].empty()) {
      OPARequestMemory = make_shared<string>(boost::any_cast<string>(m["OPARequestMemory"]));
    }
    if (m.find("OpaEnabled") != m.end() && !m["OpaEnabled"].empty()) {
      opaEnabled = make_shared<bool>(boost::any_cast<bool>(m["OpaEnabled"]));
    }
    if (m.find("OpenAgentPolicy") != m.end() && !m["OpenAgentPolicy"].empty()) {
      openAgentPolicy = make_shared<bool>(boost::any_cast<bool>(m["OpenAgentPolicy"]));
    }
    if (m.find("PrometheusUrl") != m.end() && !m["PrometheusUrl"].empty()) {
      prometheusUrl = make_shared<string>(boost::any_cast<string>(m["PrometheusUrl"]));
    }
    if (m.find("ProxyLimitCPU") != m.end() && !m["ProxyLimitCPU"].empty()) {
      proxyLimitCPU = make_shared<string>(boost::any_cast<string>(m["ProxyLimitCPU"]));
    }
    if (m.find("ProxyLimitMemory") != m.end() && !m["ProxyLimitMemory"].empty()) {
      proxyLimitMemory = make_shared<string>(boost::any_cast<string>(m["ProxyLimitMemory"]));
    }
    if (m.find("ProxyRequestCPU") != m.end() && !m["ProxyRequestCPU"].empty()) {
      proxyRequestCPU = make_shared<string>(boost::any_cast<string>(m["ProxyRequestCPU"]));
    }
    if (m.find("ProxyRequestMemory") != m.end() && !m["ProxyRequestMemory"].empty()) {
      proxyRequestMemory = make_shared<string>(boost::any_cast<string>(m["ProxyRequestMemory"]));
    }
    if (m.find("RedisFilterEnabled") != m.end() && !m["RedisFilterEnabled"].empty()) {
      redisFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["RedisFilterEnabled"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("ThriftFilterEnabled") != m.end() && !m["ThriftFilterEnabled"].empty()) {
      thriftFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["ThriftFilterEnabled"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vSwitches = make_shared<string>(boost::any_cast<string>(m["VSwitches"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WebAssemblyFilterEnabled") != m.end() && !m["WebAssemblyFilterEnabled"].empty()) {
      webAssemblyFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["WebAssemblyFilterEnabled"]));
    }
  }


  virtual ~CreateServiceMeshRequest() = default;
};
class CreateServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceMeshId{};

  CreateServiceMeshResponseBody() {}

  explicit CreateServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~CreateServiceMeshResponseBody() = default;
};
class CreateServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateServiceMeshResponseBody> body{};

  CreateServiceMeshResponse() {}

  explicit CreateServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceMeshResponse() = default;
};
class DeleteExtensionProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> type{};

  DeleteExtensionProviderRequest() {}

  explicit DeleteExtensionProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
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
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DeleteExtensionProviderRequest() = default;
};
class DeleteExtensionProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteExtensionProviderResponseBody() {}

  explicit DeleteExtensionProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteExtensionProviderResponseBody() = default;
};
class DeleteExtensionProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteExtensionProviderResponseBody> body{};

  DeleteExtensionProviderResponse() {}

  explicit DeleteExtensionProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteExtensionProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExtensionProviderResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExtensionProviderResponse() = default;
};
class DeleteServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};
  shared_ptr<string> retainResources{};
  shared_ptr<string> serviceMeshId{};

  DeleteServiceMeshRequest() {}

  explicit DeleteServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (retainResources) {
      res["RetainResources"] = boost::any(*retainResources);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("RetainResources") != m.end() && !m["RetainResources"].empty()) {
      retainResources = make_shared<string>(boost::any_cast<string>(m["RetainResources"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DeleteServiceMeshRequest() = default;
};
class DeleteServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteServiceMeshResponseBody() {}

  explicit DeleteServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteServiceMeshResponseBody() = default;
};
class DeleteServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteServiceMeshResponseBody> body{};

  DeleteServiceMeshResponse() {}

  explicit DeleteServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceMeshResponse() = default;
};
class DescribeASMGatewayImportedServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASMGatewayName{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> serviceNamespace{};

  DescribeASMGatewayImportedServicesRequest() {}

  explicit DescribeASMGatewayImportedServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASMGatewayName) {
      res["ASMGatewayName"] = boost::any(*ASMGatewayName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (serviceNamespace) {
      res["ServiceNamespace"] = boost::any(*serviceNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASMGatewayName") != m.end() && !m["ASMGatewayName"].empty()) {
      ASMGatewayName = make_shared<string>(boost::any_cast<string>(m["ASMGatewayName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("ServiceNamespace") != m.end() && !m["ServiceNamespace"].empty()) {
      serviceNamespace = make_shared<string>(boost::any_cast<string>(m["ServiceNamespace"]));
    }
  }


  virtual ~DescribeASMGatewayImportedServicesRequest() = default;
};
class DescribeASMGatewayImportedServicesResponseBodyImportedServices : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceNamespace{};

  DescribeASMGatewayImportedServicesResponseBodyImportedServices() {}

  explicit DescribeASMGatewayImportedServicesResponseBodyImportedServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceNamespace) {
      res["ServiceNamespace"] = boost::any(*serviceNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceNamespace") != m.end() && !m["ServiceNamespace"].empty()) {
      serviceNamespace = make_shared<string>(boost::any_cast<string>(m["ServiceNamespace"]));
    }
  }


  virtual ~DescribeASMGatewayImportedServicesResponseBodyImportedServices() = default;
};
class DescribeASMGatewayImportedServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices>> importedServices{};
  shared_ptr<string> requestId{};

  DescribeASMGatewayImportedServicesResponseBody() {}

  explicit DescribeASMGatewayImportedServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (importedServices) {
      vector<boost::any> temp1;
      for(auto item1:*importedServices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImportedServices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImportedServices") != m.end() && !m["ImportedServices"].empty()) {
      if (typeid(vector<boost::any>) == m["ImportedServices"].type()) {
        vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImportedServices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeASMGatewayImportedServicesResponseBodyImportedServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        importedServices = make_shared<vector<DescribeASMGatewayImportedServicesResponseBodyImportedServices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeASMGatewayImportedServicesResponseBody() = default;
};
class DescribeASMGatewayImportedServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeASMGatewayImportedServicesResponseBody> body{};

  DescribeASMGatewayImportedServicesResponse() {}

  explicit DescribeASMGatewayImportedServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeASMGatewayImportedServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeASMGatewayImportedServicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeASMGatewayImportedServicesResponse() = default;
};
class DescribeAlertActionPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<long> page{};

  DescribeAlertActionPoliciesRequest() {}

  explicit DescribeAlertActionPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
  }


  virtual ~DescribeAlertActionPoliciesRequest() = default;
};
class DescribeAlertActionPoliciesResponseBodyActionPolicyList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  DescribeAlertActionPoliciesResponseBodyActionPolicyList() {}

  explicit DescribeAlertActionPoliciesResponseBodyActionPolicyList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeAlertActionPoliciesResponseBodyActionPolicyList() = default;
};
class DescribeAlertActionPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAlertActionPoliciesResponseBodyActionPolicyList>> actionPolicyList{};
  shared_ptr<long> pageTotal{};
  shared_ptr<string> requestId{};

  DescribeAlertActionPoliciesResponseBody() {}

  explicit DescribeAlertActionPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPolicyList) {
      vector<boost::any> temp1;
      for(auto item1:*actionPolicyList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ActionPolicyList"] = boost::any(temp1);
    }
    if (pageTotal) {
      res["PageTotal"] = boost::any(*pageTotal);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPolicyList") != m.end() && !m["ActionPolicyList"].empty()) {
      if (typeid(vector<boost::any>) == m["ActionPolicyList"].type()) {
        vector<DescribeAlertActionPoliciesResponseBodyActionPolicyList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ActionPolicyList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlertActionPoliciesResponseBodyActionPolicyList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actionPolicyList = make_shared<vector<DescribeAlertActionPoliciesResponseBodyActionPolicyList>>(expect1);
      }
    }
    if (m.find("PageTotal") != m.end() && !m["PageTotal"].empty()) {
      pageTotal = make_shared<long>(boost::any_cast<long>(m["PageTotal"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAlertActionPoliciesResponseBody() = default;
};
class DescribeAlertActionPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAlertActionPoliciesResponseBody> body{};

  DescribeAlertActionPoliciesResponse() {}

  explicit DescribeAlertActionPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAlertActionPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlertActionPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlertActionPoliciesResponse() = default;
};
class DescribeAvailableNacosInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};

  DescribeAvailableNacosInstancesRequest() {}

  explicit DescribeAvailableNacosInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeAvailableNacosInstancesRequest() = default;
};
class DescribeAvailableNacosInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> data{};
  shared_ptr<string> requestId{};

  DescribeAvailableNacosInstancesResponseBody() {}

  explicit DescribeAvailableNacosInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      data = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAvailableNacosInstancesResponseBody() = default;
};
class DescribeAvailableNacosInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAvailableNacosInstancesResponseBody> body{};

  DescribeAvailableNacosInstancesResponse() {}

  explicit DescribeAvailableNacosInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableNacosInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableNacosInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableNacosInstancesResponse() = default;
};
class DescribeCCMVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeCCMVersionRequest() {}

  explicit DescribeCCMVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeCCMVersionRequest() = default;
};
class CCMVersionsValue : public Darabonba::Model {
public:
  shared_ptr<string> queryState{};
  shared_ptr<string> version{};
  shared_ptr<bool> SLBGracefulDrainSupport{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> message{};

  CCMVersionsValue() {}

  explicit CCMVersionsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryState) {
      res["QueryState"] = boost::any(*queryState);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (SLBGracefulDrainSupport) {
      res["SLBGracefulDrainSupport"] = boost::any(*SLBGracefulDrainSupport);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueryState") != m.end() && !m["QueryState"].empty()) {
      queryState = make_shared<string>(boost::any_cast<string>(m["QueryState"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("SLBGracefulDrainSupport") != m.end() && !m["SLBGracefulDrainSupport"].empty()) {
      SLBGracefulDrainSupport = make_shared<bool>(boost::any_cast<bool>(m["SLBGracefulDrainSupport"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~CCMVersionsValue() = default;
};
class DescribeCCMVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, CCMVersionsValue>> CCMVersions{};
  shared_ptr<string> requestId{};

  DescribeCCMVersionResponseBody() {}

  explicit DescribeCCMVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CCMVersions) {
      map<string, boost::any> temp1;
      for(auto item1:*CCMVersions){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["CCMVersions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CCMVersions") != m.end() && !m["CCMVersions"].empty()) {
      if (typeid(map<string, boost::any>) == m["CCMVersions"].type()) {
        map<string, CCMVersionsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["CCMVersions"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            CCMVersionsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        CCMVersions = make_shared<map<string, CCMVersionsValue>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCCMVersionResponseBody() = default;
};
class DescribeCCMVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCCMVersionResponseBody> body{};

  DescribeCCMVersionResponse() {}

  explicit DescribeCCMVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCCMVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCCMVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCCMVersionResponse() = default;
};
class DescribeCensRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeCensRequest() {}

  explicit DescribeCensRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeCensRequest() = default;
};
class DescribeCensResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusters{};
  shared_ptr<string> requestId{};

  DescribeCensResponseBody() {}

  explicit DescribeCensResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["Clusters"] = boost::any(*clusters);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCensResponseBody() = default;
};
class DescribeCensResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCensResponseBody> body{};

  DescribeCensResponse() {}

  explicit DescribeCensResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCensResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCensResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCensResponse() = default;
};
class DescribeClusterGrafanaRequest : public Darabonba::Model {
public:
  shared_ptr<string> k8sClusterId{};
  shared_ptr<string> serviceMeshId{};

  DescribeClusterGrafanaRequest() {}

  explicit DescribeClusterGrafanaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeClusterGrafanaRequest() = default;
};
class DescribeClusterGrafanaResponseBodyDashboards : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  DescribeClusterGrafanaResponseBodyDashboards() {}

  explicit DescribeClusterGrafanaResponseBodyDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeClusterGrafanaResponseBodyDashboards() = default;
};
class DescribeClusterGrafanaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClusterGrafanaResponseBodyDashboards>> dashboards{};
  shared_ptr<string> requestId{};

  DescribeClusterGrafanaResponseBody() {}

  explicit DescribeClusterGrafanaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboards) {
      vector<boost::any> temp1;
      for(auto item1:*dashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dashboards"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dashboards") != m.end() && !m["Dashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Dashboards"].type()) {
        vector<DescribeClusterGrafanaResponseBodyDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClusterGrafanaResponseBodyDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboards = make_shared<vector<DescribeClusterGrafanaResponseBodyDashboards>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterGrafanaResponseBody() = default;
};
class DescribeClusterGrafanaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterGrafanaResponseBody> body{};

  DescribeClusterGrafanaResponse() {}

  explicit DescribeClusterGrafanaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClusterGrafanaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterGrafanaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterGrafanaResponse() = default;
};
class DescribeClusterPrometheusRequest : public Darabonba::Model {
public:
  shared_ptr<string> k8sClusterId{};
  shared_ptr<string> k8sClusterRegionId{};
  shared_ptr<string> serviceMeshId{};

  DescribeClusterPrometheusRequest() {}

  explicit DescribeClusterPrometheusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    if (k8sClusterRegionId) {
      res["K8sClusterRegionId"] = boost::any(*k8sClusterRegionId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
    if (m.find("K8sClusterRegionId") != m.end() && !m["K8sClusterRegionId"].empty()) {
      k8sClusterRegionId = make_shared<string>(boost::any_cast<string>(m["K8sClusterRegionId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeClusterPrometheusRequest() = default;
};
class DescribeClusterPrometheusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> prometheus{};
  shared_ptr<string> requestId{};

  DescribeClusterPrometheusResponseBody() {}

  explicit DescribeClusterPrometheusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (prometheus) {
      res["Prometheus"] = boost::any(*prometheus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Prometheus") != m.end() && !m["Prometheus"].empty()) {
      prometheus = make_shared<string>(boost::any_cast<string>(m["Prometheus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClusterPrometheusResponseBody() = default;
};
class DescribeClusterPrometheusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClusterPrometheusResponseBody> body{};

  DescribeClusterPrometheusResponse() {}

  explicit DescribeClusterPrometheusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClusterPrometheusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClusterPrometheusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClusterPrometheusResponse() = default;
};
class DescribeClustersInServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeClustersInServiceMeshRequest() {}

  explicit DescribeClustersInServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshRequest() = default;
};
class DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards() {}

  explicit DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards() = default;
};
class DescribeClustersInServiceMeshResponseBodyClusters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>> accessLogDashboards{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<string> clusterId{};
  shared_ptr<string> clusterType{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> logtailInstalledState{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sgId{};
  shared_ptr<string> state{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};
  shared_ptr<string> vpcId{};

  DescribeClustersInServiceMeshResponseBodyClusters() {}

  explicit DescribeClustersInServiceMeshResponseBodyClusters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogDashboards) {
      vector<boost::any> temp1;
      for(auto item1:*accessLogDashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccessLogDashboards"] = boost::any(temp1);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (clusterType) {
      res["ClusterType"] = boost::any(*clusterType);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (logtailInstalledState) {
      res["LogtailInstalledState"] = boost::any(*logtailInstalledState);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sgId) {
      res["SgId"] = boost::any(*sgId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogDashboards") != m.end() && !m["AccessLogDashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["AccessLogDashboards"].type()) {
        vector<DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccessLogDashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accessLogDashboards = make_shared<vector<DescribeClustersInServiceMeshResponseBodyClustersAccessLogDashboards>>(expect1);
      }
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ClusterType") != m.end() && !m["ClusterType"].empty()) {
      clusterType = make_shared<string>(boost::any_cast<string>(m["ClusterType"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("LogtailInstalledState") != m.end() && !m["LogtailInstalledState"].empty()) {
      logtailInstalledState = make_shared<string>(boost::any_cast<string>(m["LogtailInstalledState"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SgId") != m.end() && !m["SgId"].empty()) {
      sgId = make_shared<string>(boost::any_cast<string>(m["SgId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshResponseBodyClusters() = default;
};
class DescribeClustersInServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClustersInServiceMeshResponseBodyClusters>> clusters{};
  shared_ptr<string> requestId{};

  DescribeClustersInServiceMeshResponseBody() {}

  explicit DescribeClustersInServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      vector<boost::any> temp1;
      for(auto item1:*clusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clusters"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<DescribeClustersInServiceMeshResponseBodyClusters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClustersInServiceMeshResponseBodyClusters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clusters = make_shared<vector<DescribeClustersInServiceMeshResponseBodyClusters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClustersInServiceMeshResponseBody() = default;
};
class DescribeClustersInServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeClustersInServiceMeshResponseBody> body{};

  DescribeClustersInServiceMeshResponse() {}

  explicit DescribeClustersInServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeClustersInServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClustersInServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClustersInServiceMeshResponse() = default;
};
class DescribeControlPlaneLogAlertRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeControlPlaneLogAlertRulesRequest() {}

  explicit DescribeControlPlaneLogAlertRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeControlPlaneLogAlertRulesRequest() = default;
};
class DescribeControlPlaneLogAlertRulesResponseBodyDataInfo : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> title{};

  DescribeControlPlaneLogAlertRulesResponseBodyDataInfo() {}

  explicit DescribeControlPlaneLogAlertRulesResponseBodyDataInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeControlPlaneLogAlertRulesResponseBodyDataInfo() = default;
};
class DescribeControlPlaneLogAlertRulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> actionPolicyId{};
  shared_ptr<bool> enabled{};
  shared_ptr<DescribeControlPlaneLogAlertRulesResponseBodyDataInfo> info{};
  shared_ptr<string> ruleId{};

  DescribeControlPlaneLogAlertRulesResponseBodyData() {}

  explicit DescribeControlPlaneLogAlertRulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPolicyId) {
      res["ActionPolicyId"] = boost::any(*actionPolicyId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (info) {
      res["Info"] = info ? boost::any(info->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPolicyId") != m.end() && !m["ActionPolicyId"].empty()) {
      actionPolicyId = make_shared<string>(boost::any_cast<string>(m["ActionPolicyId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      if (typeid(map<string, boost::any>) == m["Info"].type()) {
        DescribeControlPlaneLogAlertRulesResponseBodyDataInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Info"]));
        info = make_shared<DescribeControlPlaneLogAlertRulesResponseBodyDataInfo>(model1);
      }
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
  }


  virtual ~DescribeControlPlaneLogAlertRulesResponseBodyData() = default;
};
class DescribeControlPlaneLogAlertRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeControlPlaneLogAlertRulesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  DescribeControlPlaneLogAlertRulesResponseBody() {}

  explicit DescribeControlPlaneLogAlertRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DescribeControlPlaneLogAlertRulesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeControlPlaneLogAlertRulesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DescribeControlPlaneLogAlertRulesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeControlPlaneLogAlertRulesResponseBody() = default;
};
class DescribeControlPlaneLogAlertRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeControlPlaneLogAlertRulesResponseBody> body{};

  DescribeControlPlaneLogAlertRulesResponse() {}

  explicit DescribeControlPlaneLogAlertRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeControlPlaneLogAlertRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeControlPlaneLogAlertRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeControlPlaneLogAlertRulesResponse() = default;
};
class DescribeCrTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> istioVersion{};
  shared_ptr<string> kind{};

  DescribeCrTemplatesRequest() {}

  explicit DescribeCrTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (kind) {
      res["Kind"] = boost::any(*kind);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("Kind") != m.end() && !m["Kind"].empty()) {
      kind = make_shared<string>(boost::any_cast<string>(m["Kind"]));
    }
  }


  virtual ~DescribeCrTemplatesRequest() = default;
};
class DescribeCrTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> chineseName{};
  shared_ptr<string> englishName{};
  shared_ptr<string> yaml{};

  DescribeCrTemplatesResponseBodyTemplates() {}

  explicit DescribeCrTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chineseName) {
      res["ChineseName"] = boost::any(*chineseName);
    }
    if (englishName) {
      res["EnglishName"] = boost::any(*englishName);
    }
    if (yaml) {
      res["Yaml"] = boost::any(*yaml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChineseName") != m.end() && !m["ChineseName"].empty()) {
      chineseName = make_shared<string>(boost::any_cast<string>(m["ChineseName"]));
    }
    if (m.find("EnglishName") != m.end() && !m["EnglishName"].empty()) {
      englishName = make_shared<string>(boost::any_cast<string>(m["EnglishName"]));
    }
    if (m.find("Yaml") != m.end() && !m["Yaml"].empty()) {
      yaml = make_shared<string>(boost::any_cast<string>(m["Yaml"]));
    }
  }


  virtual ~DescribeCrTemplatesResponseBodyTemplates() = default;
};
class DescribeCrTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeCrTemplatesResponseBodyTemplates>> templates{};

  DescribeCrTemplatesResponseBody() {}

  explicit DescribeCrTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<DescribeCrTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCrTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<DescribeCrTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~DescribeCrTemplatesResponseBody() = default;
};
class DescribeCrTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCrTemplatesResponseBody> body{};

  DescribeCrTemplatesResponse() {}

  explicit DescribeCrTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeCrTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCrTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCrTemplatesResponse() = default;
};
class DescribeExtensionProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> type{};

  DescribeExtensionProviderRequest() {}

  explicit DescribeExtensionProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeExtensionProviderRequest() = default;
};
class DescribeExtensionProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> extensionProviders{};
  shared_ptr<string> requestId{};

  DescribeExtensionProviderResponseBody() {}

  explicit DescribeExtensionProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extensionProviders) {
      res["ExtensionProviders"] = boost::any(*extensionProviders);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtensionProviders") != m.end() && !m["ExtensionProviders"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ExtensionProviders"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtensionProviders"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      extensionProviders = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeExtensionProviderResponseBody() = default;
};
class DescribeExtensionProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeExtensionProviderResponseBody> body{};

  DescribeExtensionProviderResponse() {}

  explicit DescribeExtensionProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeExtensionProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExtensionProviderResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExtensionProviderResponse() = default;
};
class DescribeGuestClusterAccessLogDashboardsRequest : public Darabonba::Model {
public:
  shared_ptr<string> k8sClusterId{};

  DescribeGuestClusterAccessLogDashboardsRequest() {}

  explicit DescribeGuestClusterAccessLogDashboardsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsRequest() = default;
};
class DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards : public Darabonba::Model {
public:
  shared_ptr<string> title{};
  shared_ptr<string> url{};

  DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards() {}

  explicit DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards() = default;
};
class DescribeGuestClusterAccessLogDashboardsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>> dashboards{};
  shared_ptr<string> k8sClusterId{};
  shared_ptr<string> requestId{};

  DescribeGuestClusterAccessLogDashboardsResponseBody() {}

  explicit DescribeGuestClusterAccessLogDashboardsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dashboards) {
      vector<boost::any> temp1;
      for(auto item1:*dashboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dashboards"] = boost::any(temp1);
    }
    if (k8sClusterId) {
      res["K8sClusterId"] = boost::any(*k8sClusterId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dashboards") != m.end() && !m["Dashboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Dashboards"].type()) {
        vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dashboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dashboards = make_shared<vector<DescribeGuestClusterAccessLogDashboardsResponseBodyDashboards>>(expect1);
      }
    }
    if (m.find("K8sClusterId") != m.end() && !m["K8sClusterId"].empty()) {
      k8sClusterId = make_shared<string>(boost::any_cast<string>(m["K8sClusterId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsResponseBody() = default;
};
class DescribeGuestClusterAccessLogDashboardsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGuestClusterAccessLogDashboardsResponseBody> body{};

  DescribeGuestClusterAccessLogDashboardsResponse() {}

  explicit DescribeGuestClusterAccessLogDashboardsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGuestClusterAccessLogDashboardsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGuestClusterAccessLogDashboardsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGuestClusterAccessLogDashboardsResponse() = default;
};
class DescribeGuestClusterNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> guestClusterID{};
  shared_ptr<string> serviceMeshId{};

  DescribeGuestClusterNamespacesRequest() {}

  explicit DescribeGuestClusterNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guestClusterID) {
      res["GuestClusterID"] = boost::any(*guestClusterID);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GuestClusterID") != m.end() && !m["GuestClusterID"].empty()) {
      guestClusterID = make_shared<string>(boost::any_cast<string>(m["GuestClusterID"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeGuestClusterNamespacesRequest() = default;
};
class DescribeGuestClusterNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> nsList{};
  shared_ptr<string> requestId{};

  DescribeGuestClusterNamespacesResponseBody() {}

  explicit DescribeGuestClusterNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nsList) {
      res["NsList"] = boost::any(*nsList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NsList") != m.end() && !m["NsList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NsList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NsList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nsList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGuestClusterNamespacesResponseBody() = default;
};
class DescribeGuestClusterNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGuestClusterNamespacesResponseBody> body{};

  DescribeGuestClusterNamespacesResponse() {}

  explicit DescribeGuestClusterNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGuestClusterNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGuestClusterNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGuestClusterNamespacesResponse() = default;
};
class DescribeGuestClusterPodsRequest : public Darabonba::Model {
public:
  shared_ptr<string> guestClusterID{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceMeshId{};

  DescribeGuestClusterPodsRequest() {}

  explicit DescribeGuestClusterPodsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guestClusterID) {
      res["GuestClusterID"] = boost::any(*guestClusterID);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GuestClusterID") != m.end() && !m["GuestClusterID"].empty()) {
      guestClusterID = make_shared<string>(boost::any_cast<string>(m["GuestClusterID"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeGuestClusterPodsRequest() = default;
};
class DescribeGuestClusterPodsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> podList{};
  shared_ptr<string> requestId{};

  DescribeGuestClusterPodsResponseBody() {}

  explicit DescribeGuestClusterPodsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (podList) {
      res["PodList"] = boost::any(*podList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PodList") != m.end() && !m["PodList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PodList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PodList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      podList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGuestClusterPodsResponseBody() = default;
};
class DescribeGuestClusterPodsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeGuestClusterPodsResponseBody> body{};

  DescribeGuestClusterPodsResponse() {}

  explicit DescribeGuestClusterPodsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeGuestClusterPodsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGuestClusterPodsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGuestClusterPodsResponse() = default;
};
class DescribeImportedServicesDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASMGatewayName{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> serviceNamespace{};

  DescribeImportedServicesDetailRequest() {}

  explicit DescribeImportedServicesDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASMGatewayName) {
      res["ASMGatewayName"] = boost::any(*ASMGatewayName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (serviceNamespace) {
      res["ServiceNamespace"] = boost::any(*serviceNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASMGatewayName") != m.end() && !m["ASMGatewayName"].empty()) {
      ASMGatewayName = make_shared<string>(boost::any_cast<string>(m["ASMGatewayName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("ServiceNamespace") != m.end() && !m["ServiceNamespace"].empty()) {
      serviceNamespace = make_shared<string>(boost::any_cast<string>(m["ServiceNamespace"]));
    }
  }


  virtual ~DescribeImportedServicesDetailRequest() = default;
};
class DescribeImportedServicesDetailResponseBodyDetailsPorts : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> nodePort{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<long> targetPort{};

  DescribeImportedServicesDetailResponseBodyDetailsPorts() {}

  explicit DescribeImportedServicesDetailResponseBodyDetailsPorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nodePort) {
      res["NodePort"] = boost::any(*nodePort);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NodePort") != m.end() && !m["NodePort"].empty()) {
      nodePort = make_shared<long>(boost::any_cast<long>(m["NodePort"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
  }


  virtual ~DescribeImportedServicesDetailResponseBodyDetailsPorts() = default;
};
class DescribeImportedServicesDetailResponseBodyDetails : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusterIds{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<string> namespace_{};
  shared_ptr<vector<DescribeImportedServicesDetailResponseBodyDetailsPorts>> ports{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceType{};

  DescribeImportedServicesDetailResponseBodyDetails() {}

  explicit DescribeImportedServicesDetailResponseBodyDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ports"] = boost::any(temp1);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      if (typeid(vector<boost::any>) == m["Ports"].type()) {
        vector<DescribeImportedServicesDetailResponseBodyDetailsPorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImportedServicesDetailResponseBodyDetailsPorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<DescribeImportedServicesDetailResponseBodyDetailsPorts>>(expect1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~DescribeImportedServicesDetailResponseBodyDetails() = default;
};
class DescribeImportedServicesDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImportedServicesDetailResponseBodyDetails>> details{};
  shared_ptr<string> requestId{};

  DescribeImportedServicesDetailResponseBody() {}

  explicit DescribeImportedServicesDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<DescribeImportedServicesDetailResponseBodyDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImportedServicesDetailResponseBodyDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<DescribeImportedServicesDetailResponseBodyDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeImportedServicesDetailResponseBody() = default;
};
class DescribeImportedServicesDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeImportedServicesDetailResponseBody> body{};

  DescribeImportedServicesDetailResponse() {}

  explicit DescribeImportedServicesDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeImportedServicesDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImportedServicesDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImportedServicesDetailResponse() = default;
};
class DescribeIngressGatewaysRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeIngressGatewaysRequest() {}

  explicit DescribeIngressGatewaysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeIngressGatewaysRequest() = default;
};
class DescribeIngressGatewaysResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> ingressGateways{};
  shared_ptr<string> requestId{};

  DescribeIngressGatewaysResponseBody() {}

  explicit DescribeIngressGatewaysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ingressGateways) {
      res["IngressGateways"] = boost::any(*ingressGateways);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IngressGateways") != m.end() && !m["IngressGateways"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["IngressGateways"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IngressGateways"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      ingressGateways = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIngressGatewaysResponseBody() = default;
};
class DescribeIngressGatewaysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeIngressGatewaysResponseBody> body{};

  DescribeIngressGatewaysResponse() {}

  explicit DescribeIngressGatewaysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeIngressGatewaysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIngressGatewaysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIngressGatewaysResponse() = default;
};
class DescribeNamespaceScopeSidecarConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceMeshId{};

  DescribeNamespaceScopeSidecarConfigRequest() {}

  explicit DescribeNamespaceScopeSidecarConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigRequest() = default;
};
class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit : public Darabonba::Model {
public:
  shared_ptr<string> resourceCPULimit{};
  shared_ptr<string> resourceMemoryLimit{};

  DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit() {}

  explicit DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCPULimit) {
      res["ResourceCPULimit"] = boost::any(*resourceCPULimit);
    }
    if (resourceMemoryLimit) {
      res["ResourceMemoryLimit"] = boost::any(*resourceMemoryLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCPULimit") != m.end() && !m["ResourceCPULimit"].empty()) {
      resourceCPULimit = make_shared<string>(boost::any_cast<string>(m["ResourceCPULimit"]));
    }
    if (m.find("ResourceMemoryLimit") != m.end() && !m["ResourceMemoryLimit"].empty()) {
      resourceMemoryLimit = make_shared<string>(boost::any_cast<string>(m["ResourceMemoryLimit"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit() = default;
};
class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceCPURequest{};
  shared_ptr<string> resourceMemoryRequest{};

  DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest() {}

  explicit DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCPURequest) {
      res["ResourceCPURequest"] = boost::any(*resourceCPURequest);
    }
    if (resourceMemoryRequest) {
      res["ResourceMemoryRequest"] = boost::any(*resourceMemoryRequest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCPURequest") != m.end() && !m["ResourceCPURequest"].empty()) {
      resourceCPURequest = make_shared<string>(boost::any_cast<string>(m["ResourceCPURequest"]));
    }
    if (m.find("ResourceMemoryRequest") != m.end() && !m["ResourceMemoryRequest"].empty()) {
      resourceMemoryRequest = make_shared<string>(boost::any_cast<string>(m["ResourceMemoryRequest"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest() = default;
};
class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit : public Darabonba::Model {
public:
  shared_ptr<string> resourceCPULimit{};
  shared_ptr<string> resourceMemoryLimit{};

  DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit() {}

  explicit DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCPULimit) {
      res["ResourceCPULimit"] = boost::any(*resourceCPULimit);
    }
    if (resourceMemoryLimit) {
      res["ResourceMemoryLimit"] = boost::any(*resourceMemoryLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCPULimit") != m.end() && !m["ResourceCPULimit"].empty()) {
      resourceCPULimit = make_shared<string>(boost::any_cast<string>(m["ResourceCPULimit"]));
    }
    if (m.find("ResourceMemoryLimit") != m.end() && !m["ResourceMemoryLimit"].empty()) {
      resourceMemoryLimit = make_shared<string>(boost::any_cast<string>(m["ResourceMemoryLimit"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit() = default;
};
class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceCPURequest{};
  shared_ptr<string> resourceMemoryRequest{};

  DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest() {}

  explicit DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCPURequest) {
      res["ResourceCPURequest"] = boost::any(*resourceCPURequest);
    }
    if (resourceMemoryRequest) {
      res["ResourceMemoryRequest"] = boost::any(*resourceMemoryRequest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCPURequest") != m.end() && !m["ResourceCPURequest"].empty()) {
      resourceCPURequest = make_shared<string>(boost::any_cast<string>(m["ResourceCPURequest"]));
    }
    if (m.find("ResourceMemoryRequest") != m.end() && !m["ResourceMemoryRequest"].empty()) {
      resourceMemoryRequest = make_shared<string>(boost::any_cast<string>(m["ResourceMemoryRequest"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest() = default;
};
class DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches : public Darabonba::Model {
public:
  shared_ptr<string> excludeInboundPorts{};
  shared_ptr<string> excludeOutboundIPRanges{};
  shared_ptr<string> excludeOutboundPorts{};
  shared_ptr<string> includeInboundPorts{};
  shared_ptr<string> includeOutboundIPRanges{};
  shared_ptr<string> includeOutboundPorts{};
  shared_ptr<bool> istioDNSProxyEnabled{};
  shared_ptr<string> lifecycleStr{};
  shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit> sidecarProxyInitResourceLimit{};
  shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest> sidecarProxyInitResourceRequest{};
  shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit> sidecarProxyResourceLimit{};
  shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest> sidecarProxyResourceRequest{};
  shared_ptr<string> terminationDrainDuration{};

  DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches() {}

  explicit DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeInboundPorts) {
      res["ExcludeInboundPorts"] = boost::any(*excludeInboundPorts);
    }
    if (excludeOutboundIPRanges) {
      res["ExcludeOutboundIPRanges"] = boost::any(*excludeOutboundIPRanges);
    }
    if (excludeOutboundPorts) {
      res["ExcludeOutboundPorts"] = boost::any(*excludeOutboundPorts);
    }
    if (includeInboundPorts) {
      res["IncludeInboundPorts"] = boost::any(*includeInboundPorts);
    }
    if (includeOutboundIPRanges) {
      res["IncludeOutboundIPRanges"] = boost::any(*includeOutboundIPRanges);
    }
    if (includeOutboundPorts) {
      res["IncludeOutboundPorts"] = boost::any(*includeOutboundPorts);
    }
    if (istioDNSProxyEnabled) {
      res["IstioDNSProxyEnabled"] = boost::any(*istioDNSProxyEnabled);
    }
    if (lifecycleStr) {
      res["LifecycleStr"] = boost::any(*lifecycleStr);
    }
    if (sidecarProxyInitResourceLimit) {
      res["SidecarProxyInitResourceLimit"] = sidecarProxyInitResourceLimit ? boost::any(sidecarProxyInitResourceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarProxyInitResourceRequest) {
      res["SidecarProxyInitResourceRequest"] = sidecarProxyInitResourceRequest ? boost::any(sidecarProxyInitResourceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarProxyResourceLimit) {
      res["SidecarProxyResourceLimit"] = sidecarProxyResourceLimit ? boost::any(sidecarProxyResourceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarProxyResourceRequest) {
      res["SidecarProxyResourceRequest"] = sidecarProxyResourceRequest ? boost::any(sidecarProxyResourceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terminationDrainDuration) {
      res["TerminationDrainDuration"] = boost::any(*terminationDrainDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeInboundPorts") != m.end() && !m["ExcludeInboundPorts"].empty()) {
      excludeInboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeInboundPorts"]));
    }
    if (m.find("ExcludeOutboundIPRanges") != m.end() && !m["ExcludeOutboundIPRanges"].empty()) {
      excludeOutboundIPRanges = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundIPRanges"]));
    }
    if (m.find("ExcludeOutboundPorts") != m.end() && !m["ExcludeOutboundPorts"].empty()) {
      excludeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundPorts"]));
    }
    if (m.find("IncludeInboundPorts") != m.end() && !m["IncludeInboundPorts"].empty()) {
      includeInboundPorts = make_shared<string>(boost::any_cast<string>(m["IncludeInboundPorts"]));
    }
    if (m.find("IncludeOutboundIPRanges") != m.end() && !m["IncludeOutboundIPRanges"].empty()) {
      includeOutboundIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeOutboundIPRanges"]));
    }
    if (m.find("IncludeOutboundPorts") != m.end() && !m["IncludeOutboundPorts"].empty()) {
      includeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["IncludeOutboundPorts"]));
    }
    if (m.find("IstioDNSProxyEnabled") != m.end() && !m["IstioDNSProxyEnabled"].empty()) {
      istioDNSProxyEnabled = make_shared<bool>(boost::any_cast<bool>(m["IstioDNSProxyEnabled"]));
    }
    if (m.find("LifecycleStr") != m.end() && !m["LifecycleStr"].empty()) {
      lifecycleStr = make_shared<string>(boost::any_cast<string>(m["LifecycleStr"]));
    }
    if (m.find("SidecarProxyInitResourceLimit") != m.end() && !m["SidecarProxyInitResourceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarProxyInitResourceLimit"].type()) {
        DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarProxyInitResourceLimit"]));
        sidecarProxyInitResourceLimit = make_shared<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceLimit>(model1);
      }
    }
    if (m.find("SidecarProxyInitResourceRequest") != m.end() && !m["SidecarProxyInitResourceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarProxyInitResourceRequest"].type()) {
        DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarProxyInitResourceRequest"]));
        sidecarProxyInitResourceRequest = make_shared<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyInitResourceRequest>(model1);
      }
    }
    if (m.find("SidecarProxyResourceLimit") != m.end() && !m["SidecarProxyResourceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarProxyResourceLimit"].type()) {
        DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarProxyResourceLimit"]));
        sidecarProxyResourceLimit = make_shared<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceLimit>(model1);
      }
    }
    if (m.find("SidecarProxyResourceRequest") != m.end() && !m["SidecarProxyResourceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarProxyResourceRequest"].type()) {
        DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarProxyResourceRequest"]));
        sidecarProxyResourceRequest = make_shared<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatchesSidecarProxyResourceRequest>(model1);
      }
    }
    if (m.find("TerminationDrainDuration") != m.end() && !m["TerminationDrainDuration"].empty()) {
      terminationDrainDuration = make_shared<string>(boost::any_cast<string>(m["TerminationDrainDuration"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches() = default;
};
class DescribeNamespaceScopeSidecarConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches> configPatches{};
  shared_ptr<string> requestId{};

  DescribeNamespaceScopeSidecarConfigResponseBody() {}

  explicit DescribeNamespaceScopeSidecarConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configPatches) {
      res["ConfigPatches"] = configPatches ? boost::any(configPatches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigPatches") != m.end() && !m["ConfigPatches"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigPatches"].type()) {
        DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigPatches"]));
        configPatches = make_shared<DescribeNamespaceScopeSidecarConfigResponseBodyConfigPatches>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponseBody() = default;
};
class DescribeNamespaceScopeSidecarConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNamespaceScopeSidecarConfigResponseBody> body{};

  DescribeNamespaceScopeSidecarConfigResponse() {}

  explicit DescribeNamespaceScopeSidecarConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNamespaceScopeSidecarConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNamespaceScopeSidecarConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNamespaceScopeSidecarConfigResponse() = default;
};
class DescribeNodesInstanceTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeNodesInstanceTypeRequest() {}

  explicit DescribeNodesInstanceTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeNodesInstanceTypeRequest() = default;
};
class DescribeNodesInstanceTypeResponseBodyInstanceTypes : public Darabonba::Model {
public:
  shared_ptr<bool> multiBufferEnabled{};
  shared_ptr<string> nodeType{};

  DescribeNodesInstanceTypeResponseBodyInstanceTypes() {}

  explicit DescribeNodesInstanceTypeResponseBodyInstanceTypes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (multiBufferEnabled) {
      res["MultiBufferEnabled"] = boost::any(*multiBufferEnabled);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MultiBufferEnabled") != m.end() && !m["MultiBufferEnabled"].empty()) {
      multiBufferEnabled = make_shared<bool>(boost::any_cast<bool>(m["MultiBufferEnabled"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~DescribeNodesInstanceTypeResponseBodyInstanceTypes() = default;
};
class DescribeNodesInstanceTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes>> instanceTypes{};
  shared_ptr<string> requestId{};

  DescribeNodesInstanceTypeResponseBody() {}

  explicit DescribeNodesInstanceTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceTypes) {
      vector<boost::any> temp1;
      for(auto item1:*instanceTypes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceTypes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceTypes") != m.end() && !m["InstanceTypes"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceTypes"].type()) {
        vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceTypes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeNodesInstanceTypeResponseBodyInstanceTypes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceTypes = make_shared<vector<DescribeNodesInstanceTypeResponseBodyInstanceTypes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeNodesInstanceTypeResponseBody() = default;
};
class DescribeNodesInstanceTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeNodesInstanceTypeResponseBody> body{};

  DescribeNodesInstanceTypeResponse() {}

  explicit DescribeNodesInstanceTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeNodesInstanceTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNodesInstanceTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNodesInstanceTypeResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> businessLocations{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessLocations) {
      res["BusinessLocations"] = boost::any(*businessLocations);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessLocations") != m.end() && !m["BusinessLocations"].empty()) {
      businessLocations = make_shared<string>(boost::any_cast<string>(m["BusinessLocations"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeServiceMeshDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshDetailRequest() {}

  explicit DescribeServiceMeshDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshDetailRequest() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> intranetApiServerEndpoint{};
  shared_ptr<string> intranetPilotEndpoint{};
  shared_ptr<string> publicApiServerEndpoint{};
  shared_ptr<string> publicPilotEndpoint{};

  DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetApiServerEndpoint) {
      res["IntranetApiServerEndpoint"] = boost::any(*intranetApiServerEndpoint);
    }
    if (intranetPilotEndpoint) {
      res["IntranetPilotEndpoint"] = boost::any(*intranetPilotEndpoint);
    }
    if (publicApiServerEndpoint) {
      res["PublicApiServerEndpoint"] = boost::any(*publicApiServerEndpoint);
    }
    if (publicPilotEndpoint) {
      res["PublicPilotEndpoint"] = boost::any(*publicPilotEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetApiServerEndpoint") != m.end() && !m["IntranetApiServerEndpoint"].empty()) {
      intranetApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetApiServerEndpoint"]));
    }
    if (m.find("IntranetPilotEndpoint") != m.end() && !m["IntranetPilotEndpoint"].empty()) {
      intranetPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetPilotEndpoint"]));
    }
    if (m.find("PublicApiServerEndpoint") != m.end() && !m["PublicApiServerEndpoint"].empty()) {
      publicApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicApiServerEndpoint"]));
    }
    if (m.find("PublicPilotEndpoint") != m.end() && !m["PublicPilotEndpoint"].empty()) {
      publicPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicPilotEndpoint"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> state{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};

  DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer : public Darabonba::Model {
public:
  shared_ptr<string> apiServerLoadbalancerId{};
  shared_ptr<bool> apiServerPublicEip{};
  shared_ptr<bool> pilotPublicEip{};
  shared_ptr<string> pilotPublicLoadbalancerId{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerLoadbalancerId) {
      res["ApiServerLoadbalancerId"] = boost::any(*apiServerLoadbalancerId);
    }
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    if (pilotPublicEip) {
      res["PilotPublicEip"] = boost::any(*pilotPublicEip);
    }
    if (pilotPublicLoadbalancerId) {
      res["PilotPublicLoadbalancerId"] = boost::any(*pilotPublicLoadbalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerLoadbalancerId") != m.end() && !m["ApiServerLoadbalancerId"].empty()) {
      apiServerLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["ApiServerLoadbalancerId"]));
    }
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("PilotPublicEip") != m.end() && !m["PilotPublicEip"].empty()) {
      pilotPublicEip = make_shared<bool>(boost::any_cast<bool>(m["PilotPublicEip"]));
    }
    if (m.find("PilotPublicLoadbalancerId") != m.end() && !m["PilotPublicLoadbalancerId"].empty()) {
      pilotPublicLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["PilotPublicLoadbalancerId"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> project{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit : public Darabonba::Model {
public:
  shared_ptr<string> auditProjectStatus{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> project{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditProjectStatus) {
      res["AuditProjectStatus"] = boost::any(*auditProjectStatus);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditProjectStatus") != m.end() && !m["AuditProjectStatus"].empty()) {
      auditProjectStatus = make_shared<string>(boost::any_cast<string>(m["AuditProjectStatus"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> project{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition : public Darabonba::Model {
public:
  shared_ptr<string> istiodImageTag{};
  shared_ptr<string> name{};
  shared_ptr<string> proxyImageTag{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (istiodImageTag) {
      res["IstiodImageTag"] = boost::any(*istiodImageTag);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (proxyImageTag) {
      res["ProxyImageTag"] = boost::any(*proxyImageTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IstiodImageTag") != m.end() && !m["IstiodImageTag"].empty()) {
      istiodImageTag = make_shared<string>(boost::any_cast<string>(m["IstiodImageTag"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProxyImageTag") != m.end() && !m["ProxyImageTag"].empty()) {
      proxyImageTag = make_shared<string>(boost::any_cast<string>(m["ProxyImageTag"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory : public Darabonba::Model {
public:
  shared_ptr<bool> enableHistory{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableHistory) {
      res["EnableHistory"] = boost::any(*enableHistory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableHistory") != m.end() && !m["EnableHistory"].empty()) {
      enableHistory = make_shared<bool>(boost::any_cast<bool>(m["EnableHistory"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders>> HTTPHeaders{};
  shared_ptr<string> host{};
  shared_ptr<string> port{};
  shared_ptr<string> scheme{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (HTTPHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*HTTPHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HTTPHeaders"] = boost::any(temp1);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HTTPHeaders") != m.end() && !m["HTTPHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["HTTPHeaders"].type()) {
        vector<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HTTPHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        HTTPHeaders = make_shared<vector<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGetHTTPHeaders>>(expect1);
      }
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> port{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec> exec{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet> HTTPGet{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket> TCPSocket{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (HTTPGet) {
      res["HTTPGet"] = HTTPGet ? boost::any(HTTPGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (TCPSocket) {
      res["TCPSocket"] = TCPSocket ? boost::any(TCPSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartExec>(model1);
      }
    }
    if (m.find("HTTPGet") != m.end() && !m["HTTPGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HTTPGet"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HTTPGet"]));
        HTTPGet = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartHTTPGet>(model1);
      }
    }
    if (m.find("TCPSocket") != m.end() && !m["TCPSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TCPSocket"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TCPSocket"]));
        TCPSocket = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStartTCPSocket>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec : public Darabonba::Model {
public:
  shared_ptr<vector<string>> command{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Command"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Command"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      command = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders>> HTTPHeaders{};
  shared_ptr<string> host{};
  shared_ptr<string> port{};
  shared_ptr<string> scheme{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (HTTPHeaders) {
      vector<boost::any> temp1;
      for(auto item1:*HTTPHeaders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HTTPHeaders"] = boost::any(temp1);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HTTPHeaders") != m.end() && !m["HTTPHeaders"].empty()) {
      if (typeid(vector<boost::any>) == m["HTTPHeaders"].type()) {
        vector<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HTTPHeaders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        HTTPHeaders = make_shared<vector<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGetHTTPHeaders>>(expect1);
      }
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket : public Darabonba::Model {
public:
  shared_ptr<string> host{};
  shared_ptr<string> port{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<string>(boost::any_cast<string>(m["Port"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec> exec{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet> HTTPGet{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket> TCPSocket{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exec) {
      res["Exec"] = exec ? boost::any(exec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (HTTPGet) {
      res["HTTPGet"] = HTTPGet ? boost::any(HTTPGet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (TCPSocket) {
      res["TCPSocket"] = TCPSocket ? boost::any(TCPSocket->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exec") != m.end() && !m["Exec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Exec"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Exec"]));
        exec = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopExec>(model1);
      }
    }
    if (m.find("HTTPGet") != m.end() && !m["HTTPGet"].empty()) {
      if (typeid(map<string, boost::any>) == m["HTTPGet"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HTTPGet"]));
        HTTPGet = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopHTTPGet>(model1);
      }
    }
    if (m.find("TCPSocket") != m.end() && !m["TCPSocket"].empty()) {
      if (typeid(map<string, boost::any>) == m["TCPSocket"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TCPSocket"]));
        TCPSocket = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStopTCPSocket>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart> postStart{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop> preStop{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (postStart) {
      res["PostStart"] = postStart ? boost::any(postStart->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preStop) {
      res["PreStop"] = preStop ? boost::any(preStop->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PostStart") != m.end() && !m["PostStart"].empty()) {
      if (typeid(map<string, boost::any>) == m["PostStart"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PostStart"]));
        postStart = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePostStart>(model1);
      }
    }
    if (m.find("PreStop") != m.end() && !m["PreStop"].empty()) {
      if (typeid(map<string, boost::any>) == m["PreStop"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PreStop"]));
        preStop = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecyclePreStop>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> pollDelay{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (pollDelay) {
      res["PollDelay"] = boost::any(*pollDelay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("PollDelay") != m.end() && !m["PollDelay"].empty()) {
      pollDelay = make_shared<string>(boost::any_cast<string>(m["PollDelay"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit : public Darabonba::Model {
public:
  shared_ptr<string> resourceCPULimit{};
  shared_ptr<string> resourceMemoryLimit{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCPULimit) {
      res["ResourceCPULimit"] = boost::any(*resourceCPULimit);
    }
    if (resourceMemoryLimit) {
      res["ResourceMemoryLimit"] = boost::any(*resourceMemoryLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCPULimit") != m.end() && !m["ResourceCPULimit"].empty()) {
      resourceCPULimit = make_shared<string>(boost::any_cast<string>(m["ResourceCPULimit"]));
    }
    if (m.find("ResourceMemoryLimit") != m.end() && !m["ResourceMemoryLimit"].empty()) {
      resourceMemoryLimit = make_shared<string>(boost::any_cast<string>(m["ResourceMemoryLimit"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceCPURequest{};
  shared_ptr<string> resourceMemoryRequest{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceCPURequest) {
      res["ResourceCPURequest"] = boost::any(*resourceCPURequest);
    }
    if (resourceMemoryRequest) {
      res["ResourceMemoryRequest"] = boost::any(*resourceMemoryRequest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceCPURequest") != m.end() && !m["ResourceCPURequest"].empty()) {
      resourceCPURequest = make_shared<string>(boost::any_cast<string>(m["ResourceCPURequest"]));
    }
    if (m.find("ResourceMemoryRequest") != m.end() && !m["ResourceMemoryRequest"].empty()) {
      resourceMemoryRequest = make_shared<string>(boost::any_cast<string>(m["ResourceMemoryRequest"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> CRAggregationEnabled{};
  shared_ptr<vector<map<string, boost::any>>> discoverySelectors{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory> istioCRHistory{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle> lifecycle{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer> multiBuffer{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit> sidecarProxyInitResourceLimit{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest> sidecarProxyInitResourceRequest{};
  shared_ptr<string> terminationDrainDuration{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CRAggregationEnabled) {
      res["CRAggregationEnabled"] = boost::any(*CRAggregationEnabled);
    }
    if (discoverySelectors) {
      res["DiscoverySelectors"] = boost::any(*discoverySelectors);
    }
    if (istioCRHistory) {
      res["IstioCRHistory"] = istioCRHistory ? boost::any(istioCRHistory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lifecycle) {
      res["Lifecycle"] = lifecycle ? boost::any(lifecycle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (multiBuffer) {
      res["MultiBuffer"] = multiBuffer ? boost::any(multiBuffer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarProxyInitResourceLimit) {
      res["SidecarProxyInitResourceLimit"] = sidecarProxyInitResourceLimit ? boost::any(sidecarProxyInitResourceLimit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarProxyInitResourceRequest) {
      res["SidecarProxyInitResourceRequest"] = sidecarProxyInitResourceRequest ? boost::any(sidecarProxyInitResourceRequest->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terminationDrainDuration) {
      res["TerminationDrainDuration"] = boost::any(*terminationDrainDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CRAggregationEnabled") != m.end() && !m["CRAggregationEnabled"].empty()) {
      CRAggregationEnabled = make_shared<bool>(boost::any_cast<bool>(m["CRAggregationEnabled"]));
    }
    if (m.find("DiscoverySelectors") != m.end() && !m["DiscoverySelectors"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["DiscoverySelectors"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DiscoverySelectors"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      discoverySelectors = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("IstioCRHistory") != m.end() && !m["IstioCRHistory"].empty()) {
      if (typeid(map<string, boost::any>) == m["IstioCRHistory"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IstioCRHistory"]));
        istioCRHistory = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationIstioCRHistory>(model1);
      }
    }
    if (m.find("Lifecycle") != m.end() && !m["Lifecycle"].empty()) {
      if (typeid(map<string, boost::any>) == m["Lifecycle"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Lifecycle"]));
        lifecycle = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationLifecycle>(model1);
      }
    }
    if (m.find("MultiBuffer") != m.end() && !m["MultiBuffer"].empty()) {
      if (typeid(map<string, boost::any>) == m["MultiBuffer"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MultiBuffer"]));
        multiBuffer = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationMultiBuffer>(model1);
      }
    }
    if (m.find("SidecarProxyInitResourceLimit") != m.end() && !m["SidecarProxyInitResourceLimit"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarProxyInitResourceLimit"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarProxyInitResourceLimit"]));
        sidecarProxyInitResourceLimit = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceLimit>(model1);
      }
    }
    if (m.find("SidecarProxyInitResourceRequest") != m.end() && !m["SidecarProxyInitResourceRequest"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarProxyInitResourceRequest"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarProxyInitResourceRequest"]));
        sidecarProxyInitResourceRequest = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfigurationSidecarProxyInitResourceRequest>(model1);
      }
    }
    if (m.find("TerminationDrainDuration") != m.end() && !m["TerminationDrainDuration"].empty()) {
      terminationDrainDuration = make_shared<string>(boost::any_cast<string>(m["TerminationDrainDuration"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport : public Darabonba::Model {
public:
  shared_ptr<bool> gatewayAPIEnabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayAPIEnabled) {
      res["GatewayAPIEnabled"] = boost::any(*gatewayAPIEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayAPIEnabled") != m.end() && !m["GatewayAPIEnabled"].empty()) {
      gatewayAPIEnabled = make_shared<bool>(boost::any_cast<bool>(m["GatewayAPIEnabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> url{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> distribute{};
  shared_ptr<bool> enabled{};
  shared_ptr<map<string, boost::any>> failover{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (distribute) {
      res["Distribute"] = boost::any(*distribute);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (failover) {
      res["Failover"] = boost::any(*failover);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Distribute") != m.end() && !m["Distribute"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Distribute"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      distribute = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Failover") != m.end() && !m["Failover"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Failover"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      failover = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> limitCPU{};
  shared_ptr<string> limitMemory{};
  shared_ptr<string> logLevel{};
  shared_ptr<string> requestCPU{};
  shared_ptr<string> requestMemory{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (limitCPU) {
      res["LimitCPU"] = boost::any(*limitCPU);
    }
    if (limitMemory) {
      res["LimitMemory"] = boost::any(*limitMemory);
    }
    if (logLevel) {
      res["LogLevel"] = boost::any(*logLevel);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("LimitCPU") != m.end() && !m["LimitCPU"].empty()) {
      limitCPU = make_shared<string>(boost::any_cast<string>(m["LimitCPU"]));
    }
    if (m.find("LimitMemory") != m.end() && !m["LimitMemory"].empty()) {
      limitMemory = make_shared<string>(boost::any_cast<string>(m["LimitMemory"]));
    }
    if (m.find("LogLevel") != m.end() && !m["LogLevel"].empty()) {
      logLevel = make_shared<string>(boost::any_cast<string>(m["LogLevel"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<string>(boost::any_cast<string>(m["RequestCPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> nacosID{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (nacosID) {
      res["NacosID"] = boost::any(*nacosID);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("NacosID") != m.end() && !m["NacosID"].empty()) {
      nacosID = make_shared<string>(boost::any_cast<string>(m["NacosID"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature : public Darabonba::Model {
public:
  shared_ptr<bool> enableSDSServer{};
  shared_ptr<bool> filterGatewayClusterConfig{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSDSServer) {
      res["EnableSDSServer"] = boost::any(*enableSDSServer);
    }
    if (filterGatewayClusterConfig) {
      res["FilterGatewayClusterConfig"] = boost::any(*filterGatewayClusterConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableSDSServer") != m.end() && !m["EnableSDSServer"].empty()) {
      enableSDSServer = make_shared<bool>(boost::any_cast<bool>(m["EnableSDSServer"]));
    }
    if (m.find("FilterGatewayClusterConfig") != m.end() && !m["FilterGatewayClusterConfig"].empty()) {
      filterGatewayClusterConfig = make_shared<bool>(boost::any_cast<bool>(m["FilterGatewayClusterConfig"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource> configSource{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature> feature{};
  shared_ptr<bool> http10Enabled{};
  shared_ptr<double> traceSampling{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configSource) {
      res["ConfigSource"] = configSource ? boost::any(configSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (feature) {
      res["Feature"] = feature ? boost::any(feature->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (http10Enabled) {
      res["Http10Enabled"] = boost::any(*http10Enabled);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigSource") != m.end() && !m["ConfigSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConfigSource"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConfigSource"]));
        configSource = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotConfigSource>(model1);
      }
    }
    if (m.find("Feature") != m.end() && !m["Feature"].empty()) {
      if (typeid(map<string, boost::any>) == m["Feature"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Feature"]));
        feature = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilotFeature>(model1);
      }
    }
    if (m.find("Http10Enabled") != m.end() && !m["Http10Enabled"].empty()) {
      http10Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http10Enabled"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus : public Darabonba::Model {
public:
  shared_ptr<string> externalUrl{};
  shared_ptr<bool> useExternal{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalUrl) {
      res["ExternalUrl"] = boost::any(*externalUrl);
    }
    if (useExternal) {
      res["UseExternal"] = boost::any(*useExternal);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalUrl") != m.end() && !m["ExternalUrl"].empty()) {
      externalUrl = make_shared<string>(boost::any_cast<string>(m["ExternalUrl"]));
    }
    if (m.find("UseExternal") != m.end() && !m["UseExternal"].empty()) {
      useExternal = make_shared<bool>(boost::any_cast<bool>(m["UseExternal"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport : public Darabonba::Model {
public:
  shared_ptr<bool> dubboFilterEnabled{};
  shared_ptr<bool> mysqlFilterEnabled{};
  shared_ptr<bool> redisFilterEnabled{};
  shared_ptr<bool> thriftFilterEnabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dubboFilterEnabled) {
      res["DubboFilterEnabled"] = boost::any(*dubboFilterEnabled);
    }
    if (mysqlFilterEnabled) {
      res["MysqlFilterEnabled"] = boost::any(*mysqlFilterEnabled);
    }
    if (redisFilterEnabled) {
      res["RedisFilterEnabled"] = boost::any(*redisFilterEnabled);
    }
    if (thriftFilterEnabled) {
      res["ThriftFilterEnabled"] = boost::any(*thriftFilterEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DubboFilterEnabled") != m.end() && !m["DubboFilterEnabled"].empty()) {
      dubboFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["DubboFilterEnabled"]));
    }
    if (m.find("MysqlFilterEnabled") != m.end() && !m["MysqlFilterEnabled"].empty()) {
      mysqlFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["MysqlFilterEnabled"]));
    }
    if (m.find("RedisFilterEnabled") != m.end() && !m["RedisFilterEnabled"].empty()) {
      redisFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["RedisFilterEnabled"]));
    }
    if (m.find("ThriftFilterEnabled") != m.end() && !m["ThriftFilterEnabled"].empty()) {
      thriftFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["ThriftFilterEnabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy : public Darabonba::Model {
public:
  shared_ptr<string> accessLogFile{};
  shared_ptr<string> accessLogFormat{};
  shared_ptr<bool> accessLogServiceEnabled{};
  shared_ptr<string> accessLogServiceHost{};
  shared_ptr<long> accessLogServicePort{};
  shared_ptr<string> clusterDomain{};
  shared_ptr<bool> enableDNSProxying{};
  shared_ptr<string> limitCPU{};
  shared_ptr<string> limitMemory{};
  shared_ptr<string> requestCPU{};
  shared_ptr<string> requestMemory{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogFile) {
      res["AccessLogFile"] = boost::any(*accessLogFile);
    }
    if (accessLogFormat) {
      res["AccessLogFormat"] = boost::any(*accessLogFormat);
    }
    if (accessLogServiceEnabled) {
      res["AccessLogServiceEnabled"] = boost::any(*accessLogServiceEnabled);
    }
    if (accessLogServiceHost) {
      res["AccessLogServiceHost"] = boost::any(*accessLogServiceHost);
    }
    if (accessLogServicePort) {
      res["AccessLogServicePort"] = boost::any(*accessLogServicePort);
    }
    if (clusterDomain) {
      res["ClusterDomain"] = boost::any(*clusterDomain);
    }
    if (enableDNSProxying) {
      res["EnableDNSProxying"] = boost::any(*enableDNSProxying);
    }
    if (limitCPU) {
      res["LimitCPU"] = boost::any(*limitCPU);
    }
    if (limitMemory) {
      res["LimitMemory"] = boost::any(*limitMemory);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogFile") != m.end() && !m["AccessLogFile"].empty()) {
      accessLogFile = make_shared<string>(boost::any_cast<string>(m["AccessLogFile"]));
    }
    if (m.find("AccessLogFormat") != m.end() && !m["AccessLogFormat"].empty()) {
      accessLogFormat = make_shared<string>(boost::any_cast<string>(m["AccessLogFormat"]));
    }
    if (m.find("AccessLogServiceEnabled") != m.end() && !m["AccessLogServiceEnabled"].empty()) {
      accessLogServiceEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogServiceEnabled"]));
    }
    if (m.find("AccessLogServiceHost") != m.end() && !m["AccessLogServiceHost"].empty()) {
      accessLogServiceHost = make_shared<string>(boost::any_cast<string>(m["AccessLogServiceHost"]));
    }
    if (m.find("AccessLogServicePort") != m.end() && !m["AccessLogServicePort"].empty()) {
      accessLogServicePort = make_shared<long>(boost::any_cast<long>(m["AccessLogServicePort"]));
    }
    if (m.find("ClusterDomain") != m.end() && !m["ClusterDomain"].empty()) {
      clusterDomain = make_shared<string>(boost::any_cast<string>(m["ClusterDomain"]));
    }
    if (m.find("EnableDNSProxying") != m.end() && !m["EnableDNSProxying"].empty()) {
      enableDNSProxying = make_shared<bool>(boost::any_cast<bool>(m["EnableDNSProxying"]));
    }
    if (m.find("LimitCPU") != m.end() && !m["LimitCPU"].empty()) {
      limitCPU = make_shared<string>(boost::any_cast<string>(m["LimitCPU"]));
    }
    if (m.find("LimitMemory") != m.end() && !m["LimitMemory"].empty()) {
      limitMemory = make_shared<string>(boost::any_cast<string>(m["LimitMemory"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<string>(boost::any_cast<string>(m["RequestCPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> excludeNamespaces{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (excludeNamespaces) {
      res["ExcludeNamespaces"] = boost::any(*excludeNamespaces);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("ExcludeNamespaces") != m.end() && !m["ExcludeNamespaces"].empty()) {
      excludeNamespaces = make_shared<string>(boost::any_cast<string>(m["ExcludeNamespaces"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector : public Darabonba::Model {
public:
  shared_ptr<bool> autoInjectionPolicyEnabled{};
  shared_ptr<bool> enableNamespacesByDefault{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration> initCNIConfiguration{};
  shared_ptr<string> limitCPU{};
  shared_ptr<string> limitMemory{};
  shared_ptr<string> requestCPU{};
  shared_ptr<string> requestMemory{};
  shared_ptr<string> sidecarInjectorWebhookAsYaml{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoInjectionPolicyEnabled) {
      res["AutoInjectionPolicyEnabled"] = boost::any(*autoInjectionPolicyEnabled);
    }
    if (enableNamespacesByDefault) {
      res["EnableNamespacesByDefault"] = boost::any(*enableNamespacesByDefault);
    }
    if (initCNIConfiguration) {
      res["InitCNIConfiguration"] = initCNIConfiguration ? boost::any(initCNIConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limitCPU) {
      res["LimitCPU"] = boost::any(*limitCPU);
    }
    if (limitMemory) {
      res["LimitMemory"] = boost::any(*limitMemory);
    }
    if (requestCPU) {
      res["RequestCPU"] = boost::any(*requestCPU);
    }
    if (requestMemory) {
      res["RequestMemory"] = boost::any(*requestMemory);
    }
    if (sidecarInjectorWebhookAsYaml) {
      res["SidecarInjectorWebhookAsYaml"] = boost::any(*sidecarInjectorWebhookAsYaml);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoInjectionPolicyEnabled") != m.end() && !m["AutoInjectionPolicyEnabled"].empty()) {
      autoInjectionPolicyEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoInjectionPolicyEnabled"]));
    }
    if (m.find("EnableNamespacesByDefault") != m.end() && !m["EnableNamespacesByDefault"].empty()) {
      enableNamespacesByDefault = make_shared<bool>(boost::any_cast<bool>(m["EnableNamespacesByDefault"]));
    }
    if (m.find("InitCNIConfiguration") != m.end() && !m["InitCNIConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["InitCNIConfiguration"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InitCNIConfiguration"]));
        initCNIConfiguration = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjectorInitCNIConfiguration>(model1);
      }
    }
    if (m.find("LimitCPU") != m.end() && !m["LimitCPU"].empty()) {
      limitCPU = make_shared<string>(boost::any_cast<string>(m["LimitCPU"]));
    }
    if (m.find("LimitMemory") != m.end() && !m["LimitMemory"].empty()) {
      limitMemory = make_shared<string>(boost::any_cast<string>(m["LimitMemory"]));
    }
    if (m.find("RequestCPU") != m.end() && !m["RequestCPU"].empty()) {
      requestCPU = make_shared<string>(boost::any_cast<string>(m["RequestCPU"]));
    }
    if (m.find("RequestMemory") != m.end() && !m["RequestMemory"].empty()) {
      requestMemory = make_shared<string>(boost::any_cast<string>(m["RequestMemory"]));
    }
    if (m.find("SidecarInjectorWebhookAsYaml") != m.end() && !m["SidecarInjectorWebhookAsYaml"].empty()) {
      sidecarInjectorWebhookAsYaml = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorWebhookAsYaml"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog> accessLog{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit> audit{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo> controlPlaneLogInfo{};
  shared_ptr<bool> customizedZipkin{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition> edition{};
  shared_ptr<bool> enableLocalityLB{};
  shared_ptr<string> excludeIPRanges{};
  shared_ptr<string> excludeInboundPorts{};
  shared_ptr<string> excludeOutboundPorts{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration> extraConfiguration{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport> k8sNewAPIsSupport{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali> kiali{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB> localityLB{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE> MSE{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA> OPA{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot> pilot{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus> prometheus{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport> protocolSupport{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy> proxy{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector> sidecarInjector{};
  shared_ptr<bool> telemetry{};
  shared_ptr<bool> tracing{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment> webAssemblyFilterDeployment{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLog) {
      res["AccessLog"] = accessLog ? boost::any(accessLog->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audit) {
      res["Audit"] = audit ? boost::any(audit->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (controlPlaneLogInfo) {
      res["ControlPlaneLogInfo"] = controlPlaneLogInfo ? boost::any(controlPlaneLogInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customizedZipkin) {
      res["CustomizedZipkin"] = boost::any(*customizedZipkin);
    }
    if (edition) {
      res["Edition"] = edition ? boost::any(edition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (enableLocalityLB) {
      res["EnableLocalityLB"] = boost::any(*enableLocalityLB);
    }
    if (excludeIPRanges) {
      res["ExcludeIPRanges"] = boost::any(*excludeIPRanges);
    }
    if (excludeInboundPorts) {
      res["ExcludeInboundPorts"] = boost::any(*excludeInboundPorts);
    }
    if (excludeOutboundPorts) {
      res["ExcludeOutboundPorts"] = boost::any(*excludeOutboundPorts);
    }
    if (extraConfiguration) {
      res["ExtraConfiguration"] = extraConfiguration ? boost::any(extraConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (k8sNewAPIsSupport) {
      res["K8sNewAPIsSupport"] = k8sNewAPIsSupport ? boost::any(k8sNewAPIsSupport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kiali) {
      res["Kiali"] = kiali ? boost::any(kiali->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (localityLB) {
      res["LocalityLB"] = localityLB ? boost::any(localityLB->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (MSE) {
      res["MSE"] = MSE ? boost::any(MSE->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OPA) {
      res["OPA"] = OPA ? boost::any(OPA->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (pilot) {
      res["Pilot"] = pilot ? boost::any(pilot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (prometheus) {
      res["Prometheus"] = prometheus ? boost::any(prometheus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (protocolSupport) {
      res["ProtocolSupport"] = protocolSupport ? boost::any(protocolSupport->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (proxy) {
      res["Proxy"] = proxy ? boost::any(proxy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarInjector) {
      res["SidecarInjector"] = sidecarInjector ? boost::any(sidecarInjector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (webAssemblyFilterDeployment) {
      res["WebAssemblyFilterDeployment"] = webAssemblyFilterDeployment ? boost::any(webAssemblyFilterDeployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLog") != m.end() && !m["AccessLog"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessLog"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessLog"]));
        accessLog = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAccessLog>(model1);
      }
    }
    if (m.find("Audit") != m.end() && !m["Audit"].empty()) {
      if (typeid(map<string, boost::any>) == m["Audit"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Audit"]));
        audit = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit>(model1);
      }
    }
    if (m.find("ControlPlaneLogInfo") != m.end() && !m["ControlPlaneLogInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ControlPlaneLogInfo"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ControlPlaneLogInfo"]));
        controlPlaneLogInfo = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigControlPlaneLogInfo>(model1);
      }
    }
    if (m.find("CustomizedZipkin") != m.end() && !m["CustomizedZipkin"].empty()) {
      customizedZipkin = make_shared<bool>(boost::any_cast<bool>(m["CustomizedZipkin"]));
    }
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      if (typeid(map<string, boost::any>) == m["Edition"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Edition"]));
        edition = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigEdition>(model1);
      }
    }
    if (m.find("EnableLocalityLB") != m.end() && !m["EnableLocalityLB"].empty()) {
      enableLocalityLB = make_shared<bool>(boost::any_cast<bool>(m["EnableLocalityLB"]));
    }
    if (m.find("ExcludeIPRanges") != m.end() && !m["ExcludeIPRanges"].empty()) {
      excludeIPRanges = make_shared<string>(boost::any_cast<string>(m["ExcludeIPRanges"]));
    }
    if (m.find("ExcludeInboundPorts") != m.end() && !m["ExcludeInboundPorts"].empty()) {
      excludeInboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeInboundPorts"]));
    }
    if (m.find("ExcludeOutboundPorts") != m.end() && !m["ExcludeOutboundPorts"].empty()) {
      excludeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundPorts"]));
    }
    if (m.find("ExtraConfiguration") != m.end() && !m["ExtraConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtraConfiguration"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtraConfiguration"]));
        extraConfiguration = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigExtraConfiguration>(model1);
      }
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("K8sNewAPIsSupport") != m.end() && !m["K8sNewAPIsSupport"].empty()) {
      if (typeid(map<string, boost::any>) == m["K8sNewAPIsSupport"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["K8sNewAPIsSupport"]));
        k8sNewAPIsSupport = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigK8sNewAPIsSupport>(model1);
      }
    }
    if (m.find("Kiali") != m.end() && !m["Kiali"].empty()) {
      if (typeid(map<string, boost::any>) == m["Kiali"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Kiali"]));
        kiali = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigKiali>(model1);
      }
    }
    if (m.find("LocalityLB") != m.end() && !m["LocalityLB"].empty()) {
      if (typeid(map<string, boost::any>) == m["LocalityLB"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LocalityLB"]));
        localityLB = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigLocalityLB>(model1);
      }
    }
    if (m.find("MSE") != m.end() && !m["MSE"].empty()) {
      if (typeid(map<string, boost::any>) == m["MSE"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MSE"]));
        MSE = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigMSE>(model1);
      }
    }
    if (m.find("OPA") != m.end() && !m["OPA"].empty()) {
      if (typeid(map<string, boost::any>) == m["OPA"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OPA"]));
        OPA = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigOPA>(model1);
      }
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("Pilot") != m.end() && !m["Pilot"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pilot"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pilot"]));
        pilot = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPilot>(model1);
      }
    }
    if (m.find("Prometheus") != m.end() && !m["Prometheus"].empty()) {
      if (typeid(map<string, boost::any>) == m["Prometheus"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Prometheus"]));
        prometheus = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigPrometheus>(model1);
      }
    }
    if (m.find("ProtocolSupport") != m.end() && !m["ProtocolSupport"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProtocolSupport"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProtocolSupport"]));
        protocolSupport = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProtocolSupport>(model1);
      }
    }
    if (m.find("Proxy") != m.end() && !m["Proxy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Proxy"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Proxy"]));
        proxy = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigProxy>(model1);
      }
    }
    if (m.find("SidecarInjector") != m.end() && !m["SidecarInjector"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarInjector"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarInjector"]));
        sidecarInjector = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigSidecarInjector>(model1);
      }
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("WebAssemblyFilterDeployment") != m.end() && !m["WebAssemblyFilterDeployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["WebAssemblyFilterDeployment"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WebAssemblyFilterDeployment"]));
        webAssemblyFilterDeployment = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigWebAssemblyFilterDeployment>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMeshSpec : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer> loadBalancer{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig> meshConfig{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork> network{};

  DescribeServiceMeshDetailResponseBodyServiceMeshSpec() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMeshSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancer) {
      res["LoadBalancer"] = loadBalancer ? boost::any(loadBalancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshConfig) {
      res["MeshConfig"] = meshConfig ? boost::any(meshConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancer"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancer"]));
        loadBalancer = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer>(model1);
      }
    }
    if (m.find("MeshConfig") != m.end() && !m["MeshConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshConfig"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshConfig"]));
        meshConfig = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpec() = default;
};
class DescribeServiceMeshDetailResponseBodyServiceMesh : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusters{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints> endpoints{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo> serviceMeshInfo{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMeshSpec> spec{};

  DescribeServiceMeshDetailResponseBodyServiceMesh() {}

  explicit DescribeServiceMeshDetailResponseBodyServiceMesh(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["Clusters"] = boost::any(*clusters);
    }
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceMeshInfo) {
      res["ServiceMeshInfo"] = serviceMeshInfo ? boost::any(serviceMeshInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshEndpoints>(model1);
      }
    }
    if (m.find("ServiceMeshInfo") != m.end() && !m["ServiceMeshInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceMeshInfo"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceMeshInfo"]));
        serviceMeshInfo = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshServiceMeshInfo>(model1);
      }
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMeshSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<DescribeServiceMeshDetailResponseBodyServiceMeshSpec>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBodyServiceMesh() = default;
};
class DescribeServiceMeshDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeServiceMeshDetailResponseBodyServiceMesh> serviceMesh{};

  DescribeServiceMeshDetailResponseBody() {}

  explicit DescribeServiceMeshDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceMesh) {
      res["ServiceMesh"] = serviceMesh ? boost::any(serviceMesh->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceMesh") != m.end() && !m["ServiceMesh"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceMesh"].type()) {
        DescribeServiceMeshDetailResponseBodyServiceMesh model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceMesh"]));
        serviceMesh = make_shared<DescribeServiceMeshDetailResponseBodyServiceMesh>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponseBody() = default;
};
class DescribeServiceMeshDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshDetailResponseBody> body{};

  DescribeServiceMeshDetailResponse() {}

  explicit DescribeServiceMeshDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshDetailResponse() = default;
};
class DescribeServiceMeshGatewayPodStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayFullName{};
  shared_ptr<string> guestClusterIds{};
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshGatewayPodStatusRequest() {}

  explicit DescribeServiceMeshGatewayPodStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayFullName) {
      res["GatewayFullName"] = boost::any(*gatewayFullName);
    }
    if (guestClusterIds) {
      res["GuestClusterIds"] = boost::any(*guestClusterIds);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayFullName") != m.end() && !m["GatewayFullName"].empty()) {
      gatewayFullName = make_shared<string>(boost::any_cast<string>(m["GatewayFullName"]));
    }
    if (m.find("GuestClusterIds") != m.end() && !m["GuestClusterIds"].empty()) {
      guestClusterIds = make_shared<string>(boost::any_cast<string>(m["GuestClusterIds"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshGatewayPodStatusRequest() = default;
};
class DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails : public Darabonba::Model {
public:
  shared_ptr<string> clusterID{};
  shared_ptr<string> gatewayName{};
  shared_ptr<long> readyPodNum{};
  shared_ptr<long> specPodNum{};

  DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails() {}

  explicit DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterID) {
      res["ClusterID"] = boost::any(*clusterID);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (readyPodNum) {
      res["ReadyPodNum"] = boost::any(*readyPodNum);
    }
    if (specPodNum) {
      res["SpecPodNum"] = boost::any(*specPodNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterID") != m.end() && !m["ClusterID"].empty()) {
      clusterID = make_shared<string>(boost::any_cast<string>(m["ClusterID"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("ReadyPodNum") != m.end() && !m["ReadyPodNum"].empty()) {
      readyPodNum = make_shared<long>(boost::any_cast<long>(m["ReadyPodNum"]));
    }
    if (m.find("SpecPodNum") != m.end() && !m["SpecPodNum"].empty()) {
      specPodNum = make_shared<long>(boost::any_cast<long>(m["SpecPodNum"]));
    }
  }


  virtual ~DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails() = default;
};
class DescribeServiceMeshGatewayPodStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails>> ASMGatewayDetails{};
  shared_ptr<string> requestId{};

  DescribeServiceMeshGatewayPodStatusResponseBody() {}

  explicit DescribeServiceMeshGatewayPodStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASMGatewayDetails) {
      vector<boost::any> temp1;
      for(auto item1:*ASMGatewayDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ASMGatewayDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASMGatewayDetails") != m.end() && !m["ASMGatewayDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ASMGatewayDetails"].type()) {
        vector<DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ASMGatewayDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ASMGatewayDetails = make_shared<vector<DescribeServiceMeshGatewayPodStatusResponseBodyASMGatewayDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceMeshGatewayPodStatusResponseBody() = default;
};
class DescribeServiceMeshGatewayPodStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshGatewayPodStatusResponseBody> body{};

  DescribeServiceMeshGatewayPodStatusResponse() {}

  explicit DescribeServiceMeshGatewayPodStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshGatewayPodStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshGatewayPodStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshGatewayPodStatusResponse() = default;
};
class DescribeServiceMeshGatewaySLBStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayAddresses{};
  shared_ptr<string> gatewayFullName{};
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshGatewaySLBStatusRequest() {}

  explicit DescribeServiceMeshGatewaySLBStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayAddresses) {
      res["GatewayAddresses"] = boost::any(*gatewayAddresses);
    }
    if (gatewayFullName) {
      res["GatewayFullName"] = boost::any(*gatewayFullName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayAddresses") != m.end() && !m["GatewayAddresses"].empty()) {
      gatewayAddresses = make_shared<string>(boost::any_cast<string>(m["GatewayAddresses"]));
    }
    if (m.find("GatewayFullName") != m.end() && !m["GatewayFullName"].empty()) {
      gatewayFullName = make_shared<string>(boost::any_cast<string>(m["GatewayFullName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshGatewaySLBStatusRequest() = default;
};
class GatewaySLBValueBackendServers : public Darabonba::Model {
public:
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverHealthStatus{};
  shared_ptr<string> serverId{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> listenerPort{};
  shared_ptr<string> weight{};
  shared_ptr<string> description{};
  shared_ptr<string> eniHost{};
  shared_ptr<string> type{};

  GatewaySLBValueBackendServers() {}

  explicit GatewaySLBValueBackendServers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverHealthStatus) {
      res["ServerHealthStatus"] = boost::any(*serverHealthStatus);
    }
    if (serverId) {
      res["ServerId"] = boost::any(*serverId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (weight) {
      res["Weight"] = boost::any(*weight);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eniHost) {
      res["EniHost"] = boost::any(*eniHost);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerHealthStatus") != m.end() && !m["ServerHealthStatus"].empty()) {
      serverHealthStatus = make_shared<string>(boost::any_cast<string>(m["ServerHealthStatus"]));
    }
    if (m.find("ServerId") != m.end() && !m["ServerId"].empty()) {
      serverId = make_shared<string>(boost::any_cast<string>(m["ServerId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<long>(boost::any_cast<long>(m["ListenerPort"]));
    }
    if (m.find("Weight") != m.end() && !m["Weight"].empty()) {
      weight = make_shared<string>(boost::any_cast<string>(m["Weight"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EniHost") != m.end() && !m["EniHost"].empty()) {
      eniHost = make_shared<string>(boost::any_cast<string>(m["EniHost"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GatewaySLBValueBackendServers() = default;
};
class GatewaySLBValue : public Darabonba::Model {
public:
  shared_ptr<string> SLBAddress{};
  shared_ptr<string> loadBalancerId{};
  shared_ptr<GatewaySLBValueBackendServers> backendServers{};
  shared_ptr<string> SLBHealthCheckState{};

  GatewaySLBValue() {}

  explicit GatewaySLBValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (SLBAddress) {
      res["SLBAddress"] = boost::any(*SLBAddress);
    }
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (backendServers) {
      res["BackendServers"] = backendServers ? boost::any(backendServers->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (SLBHealthCheckState) {
      res["SLBHealthCheckState"] = boost::any(*SLBHealthCheckState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SLBAddress") != m.end() && !m["SLBAddress"].empty()) {
      SLBAddress = make_shared<string>(boost::any_cast<string>(m["SLBAddress"]));
    }
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("BackendServers") != m.end() && !m["BackendServers"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackendServers"].type()) {
        GatewaySLBValueBackendServers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackendServers"]));
        backendServers = make_shared<GatewaySLBValueBackendServers>(model1);
      }
    }
    if (m.find("SLBHealthCheckState") != m.end() && !m["SLBHealthCheckState"].empty()) {
      SLBHealthCheckState = make_shared<string>(boost::any_cast<string>(m["SLBHealthCheckState"]));
    }
  }


  virtual ~GatewaySLBValue() = default;
};
class DescribeServiceMeshGatewaySLBStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, GatewaySLBValue>> gatewaySLB{};
  shared_ptr<string> requestId{};

  DescribeServiceMeshGatewaySLBStatusResponseBody() {}

  explicit DescribeServiceMeshGatewaySLBStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewaySLB) {
      map<string, boost::any> temp1;
      for(auto item1:*gatewaySLB){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["GatewaySLB"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewaySLB") != m.end() && !m["GatewaySLB"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewaySLB"].type()) {
        map<string, GatewaySLBValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["GatewaySLB"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            GatewaySLBValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        gatewaySLB = make_shared<map<string, GatewaySLBValue>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceMeshGatewaySLBStatusResponseBody() = default;
};
class DescribeServiceMeshGatewaySLBStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshGatewaySLBStatusResponseBody> body{};

  DescribeServiceMeshGatewaySLBStatusResponse() {}

  explicit DescribeServiceMeshGatewaySLBStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshGatewaySLBStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshGatewaySLBStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshGatewaySLBStatusResponse() = default;
};
class DescribeServiceMeshKubeconfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> privateIpAddress{};
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshKubeconfigRequest() {}

  explicit DescribeServiceMeshKubeconfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<bool>(boost::any_cast<bool>(m["PrivateIpAddress"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshKubeconfigRequest() = default;
};
class DescribeServiceMeshKubeconfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> kubeconfig{};
  shared_ptr<string> requestId{};

  DescribeServiceMeshKubeconfigResponseBody() {}

  explicit DescribeServiceMeshKubeconfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kubeconfig) {
      res["Kubeconfig"] = boost::any(*kubeconfig);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Kubeconfig") != m.end() && !m["Kubeconfig"].empty()) {
      kubeconfig = make_shared<string>(boost::any_cast<string>(m["Kubeconfig"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeServiceMeshKubeconfigResponseBody() = default;
};
class DescribeServiceMeshKubeconfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshKubeconfigResponseBody> body{};

  DescribeServiceMeshKubeconfigResponse() {}

  explicit DescribeServiceMeshKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshKubeconfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshKubeconfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshKubeconfigResponse() = default;
};
class DescribeServiceMeshUpgradeStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> allIstioGatewayFullNames{};
  shared_ptr<string> guestClusterIds{};
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshUpgradeStatusRequest() {}

  explicit DescribeServiceMeshUpgradeStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allIstioGatewayFullNames) {
      res["AllIstioGatewayFullNames"] = boost::any(*allIstioGatewayFullNames);
    }
    if (guestClusterIds) {
      res["GuestClusterIds"] = boost::any(*guestClusterIds);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllIstioGatewayFullNames") != m.end() && !m["AllIstioGatewayFullNames"].empty()) {
      allIstioGatewayFullNames = make_shared<string>(boost::any_cast<string>(m["AllIstioGatewayFullNames"]));
    }
    if (m.find("GuestClusterIds") != m.end() && !m["GuestClusterIds"].empty()) {
      guestClusterIds = make_shared<string>(boost::any_cast<string>(m["GuestClusterIds"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshUpgradeStatusRequest() = default;
};
class UpgradeDetailGatewayStatusRecordValue : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> message{};
  shared_ptr<string> version{};

  UpgradeDetailGatewayStatusRecordValue() {}

  explicit UpgradeDetailGatewayStatusRecordValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~UpgradeDetailGatewayStatusRecordValue() = default;
};
class DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail : public Darabonba::Model {
public:
  shared_ptr<long> finishedGatewaysNum{};
  shared_ptr<map<string, UpgradeDetailGatewayStatusRecordValue>> gatewayStatusRecord{};
  shared_ptr<string> meshStatus{};
  shared_ptr<long> totalGatewaysNum{};

  DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail() {}

  explicit DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishedGatewaysNum) {
      res["FinishedGatewaysNum"] = boost::any(*finishedGatewaysNum);
    }
    if (gatewayStatusRecord) {
      map<string, boost::any> temp1;
      for(auto item1:*gatewayStatusRecord){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["GatewayStatusRecord"] = boost::any(temp1);
    }
    if (meshStatus) {
      res["MeshStatus"] = boost::any(*meshStatus);
    }
    if (totalGatewaysNum) {
      res["TotalGatewaysNum"] = boost::any(*totalGatewaysNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishedGatewaysNum") != m.end() && !m["FinishedGatewaysNum"].empty()) {
      finishedGatewaysNum = make_shared<long>(boost::any_cast<long>(m["FinishedGatewaysNum"]));
    }
    if (m.find("GatewayStatusRecord") != m.end() && !m["GatewayStatusRecord"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayStatusRecord"].type()) {
        map<string, UpgradeDetailGatewayStatusRecordValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["GatewayStatusRecord"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            UpgradeDetailGatewayStatusRecordValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        gatewayStatusRecord = make_shared<map<string, UpgradeDetailGatewayStatusRecordValue>>(expect1);
      }
    }
    if (m.find("MeshStatus") != m.end() && !m["MeshStatus"].empty()) {
      meshStatus = make_shared<string>(boost::any_cast<string>(m["MeshStatus"]));
    }
    if (m.find("TotalGatewaysNum") != m.end() && !m["TotalGatewaysNum"].empty()) {
      totalGatewaysNum = make_shared<long>(boost::any_cast<long>(m["TotalGatewaysNum"]));
    }
  }


  virtual ~DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail() = default;
};
class DescribeServiceMeshUpgradeStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail> upgradeDetail{};

  DescribeServiceMeshUpgradeStatusResponseBody() {}

  explicit DescribeServiceMeshUpgradeStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (upgradeDetail) {
      res["UpgradeDetail"] = upgradeDetail ? boost::any(upgradeDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpgradeDetail") != m.end() && !m["UpgradeDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpgradeDetail"].type()) {
        DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpgradeDetail"]));
        upgradeDetail = make_shared<DescribeServiceMeshUpgradeStatusResponseBodyUpgradeDetail>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshUpgradeStatusResponseBody() = default;
};
class DescribeServiceMeshUpgradeStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshUpgradeStatusResponseBody> body{};

  DescribeServiceMeshUpgradeStatusResponse() {}

  explicit DescribeServiceMeshUpgradeStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshUpgradeStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshUpgradeStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshUpgradeStatusResponse() = default;
};
class DescribeServiceMeshVMsRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeServiceMeshVMsRequest() {}

  explicit DescribeServiceMeshVMsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeServiceMeshVMsRequest() = default;
};
class DescribeServiceMeshVMsResponseBodyVMs : public Darabonba::Model {
public:
  shared_ptr<bool> hasTag{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> region{};
  shared_ptr<string> securityGroupIds{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> status{};

  DescribeServiceMeshVMsResponseBodyVMs() {}

  explicit DescribeServiceMeshVMsResponseBodyVMs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasTag) {
      res["HasTag"] = boost::any(*hasTag);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasTag") != m.end() && !m["HasTag"].empty()) {
      hasTag = make_shared<bool>(boost::any_cast<bool>(m["HasTag"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      securityGroupIds = make_shared<string>(boost::any_cast<string>(m["SecurityGroupIds"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeServiceMeshVMsResponseBodyVMs() = default;
};
class DescribeServiceMeshVMsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeServiceMeshVMsResponseBodyVMs>> VMs{};

  DescribeServiceMeshVMsResponseBody() {}

  explicit DescribeServiceMeshVMsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (VMs) {
      vector<boost::any> temp1;
      for(auto item1:*VMs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VMs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VMs") != m.end() && !m["VMs"].empty()) {
      if (typeid(vector<boost::any>) == m["VMs"].type()) {
        vector<DescribeServiceMeshVMsResponseBodyVMs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VMs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceMeshVMsResponseBodyVMs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VMs = make_shared<vector<DescribeServiceMeshVMsResponseBodyVMs>>(expect1);
      }
    }
  }


  virtual ~DescribeServiceMeshVMsResponseBody() = default;
};
class DescribeServiceMeshVMsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshVMsResponseBody> body{};

  DescribeServiceMeshVMsResponse() {}

  explicit DescribeServiceMeshVMsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshVMsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshVMsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshVMsResponse() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> intranetApiServerEndpoint{};
  shared_ptr<string> intranetPilotEndpoint{};
  shared_ptr<string> publicApiServerEndpoint{};
  shared_ptr<string> publicPilotEndpoint{};
  shared_ptr<string> reverseTunnelEndpoint{};

  DescribeServiceMeshesResponseBodyServiceMeshesEndpoints() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intranetApiServerEndpoint) {
      res["IntranetApiServerEndpoint"] = boost::any(*intranetApiServerEndpoint);
    }
    if (intranetPilotEndpoint) {
      res["IntranetPilotEndpoint"] = boost::any(*intranetPilotEndpoint);
    }
    if (publicApiServerEndpoint) {
      res["PublicApiServerEndpoint"] = boost::any(*publicApiServerEndpoint);
    }
    if (publicPilotEndpoint) {
      res["PublicPilotEndpoint"] = boost::any(*publicPilotEndpoint);
    }
    if (reverseTunnelEndpoint) {
      res["ReverseTunnelEndpoint"] = boost::any(*reverseTunnelEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntranetApiServerEndpoint") != m.end() && !m["IntranetApiServerEndpoint"].empty()) {
      intranetApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetApiServerEndpoint"]));
    }
    if (m.find("IntranetPilotEndpoint") != m.end() && !m["IntranetPilotEndpoint"].empty()) {
      intranetPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["IntranetPilotEndpoint"]));
    }
    if (m.find("PublicApiServerEndpoint") != m.end() && !m["PublicApiServerEndpoint"].empty()) {
      publicApiServerEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicApiServerEndpoint"]));
    }
    if (m.find("PublicPilotEndpoint") != m.end() && !m["PublicPilotEndpoint"].empty()) {
      publicPilotEndpoint = make_shared<string>(boost::any_cast<string>(m["PublicPilotEndpoint"]));
    }
    if (m.find("ReverseTunnelEndpoint") != m.end() && !m["ReverseTunnelEndpoint"].empty()) {
      reverseTunnelEndpoint = make_shared<string>(boost::any_cast<string>(m["ReverseTunnelEndpoint"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesEndpoints() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> name{};
  shared_ptr<string> profile{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> state{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> version{};

  DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer : public Darabonba::Model {
public:
  shared_ptr<string> apiServerLoadbalancerId{};
  shared_ptr<bool> apiServerPublicEip{};
  shared_ptr<bool> pilotPublicEip{};
  shared_ptr<string> pilotPublicLoadbalancerId{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiServerLoadbalancerId) {
      res["ApiServerLoadbalancerId"] = boost::any(*apiServerLoadbalancerId);
    }
    if (apiServerPublicEip) {
      res["ApiServerPublicEip"] = boost::any(*apiServerPublicEip);
    }
    if (pilotPublicEip) {
      res["PilotPublicEip"] = boost::any(*pilotPublicEip);
    }
    if (pilotPublicLoadbalancerId) {
      res["PilotPublicLoadbalancerId"] = boost::any(*pilotPublicLoadbalancerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiServerLoadbalancerId") != m.end() && !m["ApiServerLoadbalancerId"].empty()) {
      apiServerLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["ApiServerLoadbalancerId"]));
    }
    if (m.find("ApiServerPublicEip") != m.end() && !m["ApiServerPublicEip"].empty()) {
      apiServerPublicEip = make_shared<bool>(boost::any_cast<bool>(m["ApiServerPublicEip"]));
    }
    if (m.find("PilotPublicEip") != m.end() && !m["PilotPublicEip"].empty()) {
      pilotPublicEip = make_shared<bool>(boost::any_cast<bool>(m["PilotPublicEip"]));
    }
    if (m.find("PilotPublicLoadbalancerId") != m.end() && !m["PilotPublicLoadbalancerId"].empty()) {
      pilotPublicLoadbalancerId = make_shared<string>(boost::any_cast<string>(m["PilotPublicLoadbalancerId"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot : public Darabonba::Model {
public:
  shared_ptr<bool> http10Enabled{};
  shared_ptr<double> traceSampling{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (http10Enabled) {
      res["Http10Enabled"] = boost::any(*http10Enabled);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Http10Enabled") != m.end() && !m["Http10Enabled"].empty()) {
      http10Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http10Enabled"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> excludeNamespaces{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (excludeNamespaces) {
      res["ExcludeNamespaces"] = boost::any(*excludeNamespaces);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("ExcludeNamespaces") != m.end() && !m["ExcludeNamespaces"].empty()) {
      excludeNamespaces = make_shared<string>(boost::any_cast<string>(m["ExcludeNamespaces"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector : public Darabonba::Model {
public:
  shared_ptr<bool> autoInjectionPolicyEnabled{};
  shared_ptr<bool> enableNamespacesByDefault{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration> initCNIConfiguration{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoInjectionPolicyEnabled) {
      res["AutoInjectionPolicyEnabled"] = boost::any(*autoInjectionPolicyEnabled);
    }
    if (enableNamespacesByDefault) {
      res["EnableNamespacesByDefault"] = boost::any(*enableNamespacesByDefault);
    }
    if (initCNIConfiguration) {
      res["InitCNIConfiguration"] = initCNIConfiguration ? boost::any(initCNIConfiguration->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoInjectionPolicyEnabled") != m.end() && !m["AutoInjectionPolicyEnabled"].empty()) {
      autoInjectionPolicyEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoInjectionPolicyEnabled"]));
    }
    if (m.find("EnableNamespacesByDefault") != m.end() && !m["EnableNamespacesByDefault"].empty()) {
      enableNamespacesByDefault = make_shared<bool>(boost::any_cast<bool>(m["EnableNamespacesByDefault"]));
    }
    if (m.find("InitCNIConfiguration") != m.end() && !m["InitCNIConfiguration"].empty()) {
      if (typeid(map<string, boost::any>) == m["InitCNIConfiguration"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InitCNIConfiguration"]));
        initCNIConfiguration = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjectorInitCNIConfiguration>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig : public Darabonba::Model {
public:
  shared_ptr<bool> mtls{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot> pilot{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector> sidecarInjector{};
  shared_ptr<bool> strictMtls{};
  shared_ptr<bool> telemetry{};
  shared_ptr<bool> tracing{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mtls) {
      res["Mtls"] = boost::any(*mtls);
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (pilot) {
      res["Pilot"] = pilot ? boost::any(pilot->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sidecarInjector) {
      res["SidecarInjector"] = sidecarInjector ? boost::any(sidecarInjector->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (strictMtls) {
      res["StrictMtls"] = boost::any(*strictMtls);
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mtls") != m.end() && !m["Mtls"].empty()) {
      mtls = make_shared<bool>(boost::any_cast<bool>(m["Mtls"]));
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("Pilot") != m.end() && !m["Pilot"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pilot"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pilot"]));
        pilot = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigPilot>(model1);
      }
    }
    if (m.find("SidecarInjector") != m.end() && !m["SidecarInjector"].empty()) {
      if (typeid(map<string, boost::any>) == m["SidecarInjector"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SidecarInjector"]));
        sidecarInjector = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfigSidecarInjector>(model1);
      }
    }
    if (m.find("StrictMtls") != m.end() && !m["StrictMtls"].empty()) {
      strictMtls = make_shared<bool>(boost::any_cast<bool>(m["StrictMtls"]));
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork : public Darabonba::Model {
public:
  shared_ptr<string> securityGroupId{};
  shared_ptr<vector<string>> vSwitches{};
  shared_ptr<string> vpcId{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityGroupId) {
      res["SecurityGroupId"] = boost::any(*securityGroupId);
    }
    if (vSwitches) {
      res["VSwitches"] = boost::any(*vSwitches);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityGroupId") != m.end() && !m["SecurityGroupId"].empty()) {
      securityGroupId = make_shared<string>(boost::any_cast<string>(m["SecurityGroupId"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VSwitches"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      vSwitches = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshesSpec : public Darabonba::Model {
public:
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer> loadBalancer{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig> meshConfig{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork> network{};

  DescribeServiceMeshesResponseBodyServiceMeshesSpec() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshesSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancer) {
      res["LoadBalancer"] = loadBalancer ? boost::any(loadBalancer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (meshConfig) {
      res["MeshConfig"] = meshConfig ? boost::any(meshConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (network) {
      res["Network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancer") != m.end() && !m["LoadBalancer"].empty()) {
      if (typeid(map<string, boost::any>) == m["LoadBalancer"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LoadBalancer"]));
        loadBalancer = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer>(model1);
      }
    }
    if (m.find("MeshConfig") != m.end() && !m["MeshConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["MeshConfig"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MeshConfig"]));
        meshConfig = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig>(model1);
      }
    }
    if (m.find("Network") != m.end() && !m["Network"].empty()) {
      if (typeid(map<string, boost::any>) == m["Network"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Network"]));
        network = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpec() = default;
};
class DescribeServiceMeshesResponseBodyServiceMeshes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusters{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesEndpoints> endpoints{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo> serviceMeshInfo{};
  shared_ptr<DescribeServiceMeshesResponseBodyServiceMeshesSpec> spec{};

  DescribeServiceMeshesResponseBodyServiceMeshes() {}

  explicit DescribeServiceMeshesResponseBodyServiceMeshes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["Clusters"] = boost::any(*clusters);
    }
    if (endpoints) {
      res["Endpoints"] = endpoints ? boost::any(endpoints->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceMeshInfo) {
      res["ServiceMeshInfo"] = serviceMeshInfo ? boost::any(serviceMeshInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clusters") != m.end() && !m["Clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Endpoints") != m.end() && !m["Endpoints"].empty()) {
      if (typeid(map<string, boost::any>) == m["Endpoints"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesEndpoints model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Endpoints"]));
        endpoints = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesEndpoints>(model1);
      }
    }
    if (m.find("ServiceMeshInfo") != m.end() && !m["ServiceMeshInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceMeshInfo"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceMeshInfo"]));
        serviceMeshInfo = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesServiceMeshInfo>(model1);
      }
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        DescribeServiceMeshesResponseBodyServiceMeshesSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<DescribeServiceMeshesResponseBodyServiceMeshesSpec>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBodyServiceMeshes() = default;
};
class DescribeServiceMeshesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeServiceMeshesResponseBodyServiceMeshes>> serviceMeshes{};

  DescribeServiceMeshesResponseBody() {}

  explicit DescribeServiceMeshesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceMeshes) {
      vector<boost::any> temp1;
      for(auto item1:*serviceMeshes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceMeshes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceMeshes") != m.end() && !m["ServiceMeshes"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceMeshes"].type()) {
        vector<DescribeServiceMeshesResponseBodyServiceMeshes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceMeshes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeServiceMeshesResponseBodyServiceMeshes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceMeshes = make_shared<vector<DescribeServiceMeshesResponseBodyServiceMeshes>>(expect1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponseBody() = default;
};
class DescribeServiceMeshesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeServiceMeshesResponseBody> body{};

  DescribeServiceMeshesResponse() {}

  explicit DescribeServiceMeshesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeServiceMeshesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceMeshesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceMeshesResponse() = default;
};
class DescribeUpgradeVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeUpgradeVersionRequest() {}

  explicit DescribeUpgradeVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeUpgradeVersionRequest() = default;
};
class DescribeUpgradeVersionResponseBodyVersion : public Darabonba::Model {
public:
  shared_ptr<string> istioOperatorVersion{};
  shared_ptr<string> istioVersion{};
  shared_ptr<string> kubernetesVersion{};

  DescribeUpgradeVersionResponseBodyVersion() {}

  explicit DescribeUpgradeVersionResponseBodyVersion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (istioOperatorVersion) {
      res["IstioOperatorVersion"] = boost::any(*istioOperatorVersion);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (kubernetesVersion) {
      res["KubernetesVersion"] = boost::any(*kubernetesVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IstioOperatorVersion") != m.end() && !m["IstioOperatorVersion"].empty()) {
      istioOperatorVersion = make_shared<string>(boost::any_cast<string>(m["IstioOperatorVersion"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("KubernetesVersion") != m.end() && !m["KubernetesVersion"].empty()) {
      kubernetesVersion = make_shared<string>(boost::any_cast<string>(m["KubernetesVersion"]));
    }
  }


  virtual ~DescribeUpgradeVersionResponseBodyVersion() = default;
};
class DescribeUpgradeVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeUpgradeVersionResponseBodyVersion> version{};

  DescribeUpgradeVersionResponseBody() {}

  explicit DescribeUpgradeVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (version) {
      res["Version"] = version ? boost::any(version->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      if (typeid(map<string, boost::any>) == m["Version"].type()) {
        DescribeUpgradeVersionResponseBodyVersion model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Version"]));
        version = make_shared<DescribeUpgradeVersionResponseBodyVersion>(model1);
      }
    }
  }


  virtual ~DescribeUpgradeVersionResponseBody() = default;
};
class DescribeUpgradeVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUpgradeVersionResponseBody> body{};

  DescribeUpgradeVersionResponse() {}

  explicit DescribeUpgradeVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUpgradeVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUpgradeVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUpgradeVersionResponse() = default;
};
class DescribeUsersWithPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> userType{};

  DescribeUsersWithPermissionsRequest() {}

  explicit DescribeUsersWithPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~DescribeUsersWithPermissionsRequest() = default;
};
class DescribeUsersWithPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> UIDs{};

  DescribeUsersWithPermissionsResponseBody() {}

  explicit DescribeUsersWithPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (UIDs) {
      res["UIDs"] = boost::any(*UIDs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UIDs") != m.end() && !m["UIDs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UIDs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UIDs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      UIDs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeUsersWithPermissionsResponseBody() = default;
};
class DescribeUsersWithPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUsersWithPermissionsResponseBody> body{};

  DescribeUsersWithPermissionsResponse() {}

  explicit DescribeUsersWithPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUsersWithPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsersWithPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsersWithPermissionsResponse() = default;
};
class DescribeVMsInServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  DescribeVMsInServiceMeshRequest() {}

  explicit DescribeVMsInServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DescribeVMsInServiceMeshRequest() = default;
};
class DescribeVMsInServiceMeshResponseBodyVMs : public Darabonba::Model {
public:
  shared_ptr<bool> hasTag{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipAddress{};
  shared_ptr<string> region{};
  shared_ptr<string> securityGroupIds{};
  shared_ptr<string> status{};

  DescribeVMsInServiceMeshResponseBodyVMs() {}

  explicit DescribeVMsInServiceMeshResponseBodyVMs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasTag) {
      res["HasTag"] = boost::any(*hasTag);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasTag") != m.end() && !m["HasTag"].empty()) {
      hasTag = make_shared<bool>(boost::any_cast<bool>(m["HasTag"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      securityGroupIds = make_shared<string>(boost::any_cast<string>(m["SecurityGroupIds"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeVMsInServiceMeshResponseBodyVMs() = default;
};
class DescribeVMsInServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVMsInServiceMeshResponseBodyVMs>> VMs{};

  DescribeVMsInServiceMeshResponseBody() {}

  explicit DescribeVMsInServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (VMs) {
      vector<boost::any> temp1;
      for(auto item1:*VMs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VMs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VMs") != m.end() && !m["VMs"].empty()) {
      if (typeid(vector<boost::any>) == m["VMs"].type()) {
        vector<DescribeVMsInServiceMeshResponseBodyVMs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VMs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVMsInServiceMeshResponseBodyVMs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        VMs = make_shared<vector<DescribeVMsInServiceMeshResponseBodyVMs>>(expect1);
      }
    }
  }


  virtual ~DescribeVMsInServiceMeshResponseBody() = default;
};
class DescribeVMsInServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVMsInServiceMeshResponseBody> body{};

  DescribeVMsInServiceMeshResponse() {}

  explicit DescribeVMsInServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVMsInServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVMsInServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVMsInServiceMeshResponse() = default;
};
class DescribeVSwitchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> vpcId{};

  DescribeVSwitchesRequest() {}

  explicit DescribeVSwitchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeVSwitchesRequest() = default;
};
class DescribeVSwitchesResponseBodyVSwitches : public Darabonba::Model {
public:
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vSwitchName{};
  shared_ptr<string> vpcId{};

  DescribeVSwitchesResponseBodyVSwitches() {}

  explicit DescribeVSwitchesResponseBodyVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vSwitchName) {
      res["VSwitchName"] = boost::any(*vSwitchName);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VSwitchName") != m.end() && !m["VSwitchName"].empty()) {
      vSwitchName = make_shared<string>(boost::any_cast<string>(m["VSwitchName"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeVSwitchesResponseBodyVSwitches() = default;
};
class DescribeVSwitchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVSwitchesResponseBodyVSwitches>> vSwitches{};

  DescribeVSwitchesResponseBody() {}

  explicit DescribeVSwitchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vSwitches) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitches"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitches"].type()) {
        vector<DescribeVSwitchesResponseBodyVSwitches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVSwitchesResponseBodyVSwitches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitches = make_shared<vector<DescribeVSwitchesResponseBodyVSwitches>>(expect1);
      }
    }
  }


  virtual ~DescribeVSwitchesResponseBody() = default;
};
class DescribeVSwitchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVSwitchesResponseBody> body{};

  DescribeVSwitchesResponse() {}

  explicit DescribeVSwitchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVSwitchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVSwitchesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVSwitchesResponse() = default;
};
class DescribeVersionsResponseBodyVersionInfo : public Darabonba::Model {
public:
  shared_ptr<string> edition{};
  shared_ptr<vector<string>> versions{};

  DescribeVersionsResponseBodyVersionInfo() {}

  explicit DescribeVersionsResponseBodyVersionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edition) {
      res["Edition"] = boost::any(*edition);
    }
    if (versions) {
      res["Versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Edition") != m.end() && !m["Edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["Edition"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Versions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      versions = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVersionsResponseBodyVersionInfo() = default;
};
class DescribeVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVersionsResponseBodyVersionInfo>> versionInfo{};

  DescribeVersionsResponseBody() {}

  explicit DescribeVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionInfo) {
      vector<boost::any> temp1;
      for(auto item1:*versionInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VersionInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionInfo") != m.end() && !m["VersionInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["VersionInfo"].type()) {
        vector<DescribeVersionsResponseBodyVersionInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VersionInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVersionsResponseBodyVersionInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versionInfo = make_shared<vector<DescribeVersionsResponseBodyVersionInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeVersionsResponseBody() = default;
};
class DescribeVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVersionsResponseBody> body{};

  DescribeVersionsResponse() {}

  explicit DescribeVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVersionsResponse() = default;
};
class DescribeVpcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeVpcsRequest() {}

  explicit DescribeVpcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeVpcsRequest() = default;
};
class DescribeVpcsResponseBodyVpcs : public Darabonba::Model {
public:
  shared_ptr<bool> isDefault{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> vpcName{};

  DescribeVpcsResponseBodyVpcs() {}

  explicit DescribeVpcsResponseBodyVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeVpcsResponseBodyVpcs() = default;
};
class DescribeVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeVpcsResponseBodyVpcs>> vpcs{};

  DescribeVpcsResponseBody() {}

  explicit DescribeVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (vpcs) {
      vector<boost::any> temp1;
      for(auto item1:*vpcs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpcs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpcs"].type()) {
        vector<DescribeVpcsResponseBodyVpcs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpcs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcsResponseBodyVpcs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpcs = make_shared<vector<DescribeVpcsResponseBodyVpcs>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcsResponseBody() = default;
};
class DescribeVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVpcsResponseBody> body{};

  DescribeVpcsResponse() {}

  explicit DescribeVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcsResponse() = default;
};
class DisableControlPlaneLogAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> ruleId{};
  shared_ptr<string> serviceMeshId{};

  DisableControlPlaneLogAlertRequest() {}

  explicit DisableControlPlaneLogAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~DisableControlPlaneLogAlertRequest() = default;
};
class DisableControlPlaneLogAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableControlPlaneLogAlertResponseBody() {}

  explicit DisableControlPlaneLogAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableControlPlaneLogAlertResponseBody() = default;
};
class DisableControlPlaneLogAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableControlPlaneLogAlertResponseBody> body{};

  DisableControlPlaneLogAlertResponse() {}

  explicit DisableControlPlaneLogAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DisableControlPlaneLogAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableControlPlaneLogAlertResponseBody>(model1);
      }
    }
  }


  virtual ~DisableControlPlaneLogAlertResponse() = default;
};
class EnableControlPlaneLogAlertRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionPolicyId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> serviceMeshId{};

  EnableControlPlaneLogAlertRequest() {}

  explicit EnableControlPlaneLogAlertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPolicyId) {
      res["ActionPolicyId"] = boost::any(*actionPolicyId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPolicyId") != m.end() && !m["ActionPolicyId"].empty()) {
      actionPolicyId = make_shared<string>(boost::any_cast<string>(m["ActionPolicyId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~EnableControlPlaneLogAlertRequest() = default;
};
class EnableControlPlaneLogAlertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableControlPlaneLogAlertResponseBody() {}

  explicit EnableControlPlaneLogAlertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableControlPlaneLogAlertResponseBody() = default;
};
class EnableControlPlaneLogAlertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableControlPlaneLogAlertResponseBody> body{};

  EnableControlPlaneLogAlertResponse() {}

  explicit EnableControlPlaneLogAlertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        EnableControlPlaneLogAlertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableControlPlaneLogAlertResponseBody>(model1);
      }
    }
  }


  virtual ~EnableControlPlaneLogAlertResponse() = default;
};
class GetAutoInjectionLabelSyncStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetAutoInjectionLabelSyncStatusRequest() {}

  explicit GetAutoInjectionLabelSyncStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetAutoInjectionLabelSyncStatusRequest() = default;
};
class GetAutoInjectionLabelSyncStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetAutoInjectionLabelSyncStatusResponseBody() {}

  explicit GetAutoInjectionLabelSyncStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAutoInjectionLabelSyncStatusResponseBody() = default;
};
class GetAutoInjectionLabelSyncStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAutoInjectionLabelSyncStatusResponseBody> body{};

  GetAutoInjectionLabelSyncStatusResponse() {}

  explicit GetAutoInjectionLabelSyncStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAutoInjectionLabelSyncStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAutoInjectionLabelSyncStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetAutoInjectionLabelSyncStatusResponse() = default;
};
class GetBuiltinEnvoyFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> istioVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceMeshId{};

  GetBuiltinEnvoyFilterRequest() {}

  explicit GetBuiltinEnvoyFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetBuiltinEnvoyFilterRequest() = default;
};
class GetBuiltinEnvoyFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> parameters{};
  shared_ptr<string> requestId{};

  GetBuiltinEnvoyFilterResponseBody() {}

  explicit GetBuiltinEnvoyFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBuiltinEnvoyFilterResponseBody() = default;
};
class GetBuiltinEnvoyFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBuiltinEnvoyFilterResponseBody> body{};

  GetBuiltinEnvoyFilterResponse() {}

  explicit GetBuiltinEnvoyFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetBuiltinEnvoyFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBuiltinEnvoyFilterResponseBody>(model1);
      }
    }
  }


  virtual ~GetBuiltinEnvoyFilterResponse() = default;
};
class GetBuiltinEnvoyFilterCatalogRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetBuiltinEnvoyFilterCatalogRequest() {}

  explicit GetBuiltinEnvoyFilterCatalogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetBuiltinEnvoyFilterCatalogRequest() = default;
};
class GetBuiltinEnvoyFilterCatalogResponseBody : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> requestId{};

  GetBuiltinEnvoyFilterCatalogResponseBody() {}

  explicit GetBuiltinEnvoyFilterCatalogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBuiltinEnvoyFilterCatalogResponseBody() = default;
};
class GetBuiltinEnvoyFilterCatalogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBuiltinEnvoyFilterCatalogResponseBody> body{};

  GetBuiltinEnvoyFilterCatalogResponse() {}

  explicit GetBuiltinEnvoyFilterCatalogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetBuiltinEnvoyFilterCatalogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBuiltinEnvoyFilterCatalogResponseBody>(model1);
      }
    }
  }


  virtual ~GetBuiltinEnvoyFilterCatalogResponse() = default;
};
class GetCaCertRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetCaCertRequest() {}

  explicit GetCaCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetCaCertRequest() = default;
};
class GetCaCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> caCert{};
  shared_ptr<string> requestId{};

  GetCaCertResponseBody() {}

  explicit GetCaCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCert) {
      res["CaCert"] = boost::any(*caCert);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaCert") != m.end() && !m["CaCert"].empty()) {
      caCert = make_shared<string>(boost::any_cast<string>(m["CaCert"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCaCertResponseBody() = default;
};
class GetCaCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetCaCertResponseBody> body{};

  GetCaCertResponse() {}

  explicit GetCaCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetCaCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCaCertResponseBody>(model1);
      }
    }
  }


  virtual ~GetCaCertResponse() = default;
};
class GetDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetDiagnosisRequest() {}

  explicit GetDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetDiagnosisRequest() = default;
};
class GetDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<string> runAt{};
  shared_ptr<string> status{};

  GetDiagnosisResponseBody() {}

  explicit GetDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (runAt) {
      res["RunAt"] = boost::any(*runAt);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RunAt") != m.end() && !m["RunAt"].empty()) {
      runAt = make_shared<string>(boost::any_cast<string>(m["RunAt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDiagnosisResponseBody() = default;
};
class GetDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDiagnosisResponseBody> body{};

  GetDiagnosisResponse() {}

  explicit GetDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiagnosisResponse() = default;
};
class GetEcsListRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetEcsListRequest() {}

  explicit GetEcsListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetEcsListRequest() = default;
};
class GetEcsListResponseBodyEcsInstances : public Darabonba::Model {
public:
  shared_ptr<bool> hasTag{};
  shared_ptr<string> hostName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> ipAddress{};
  shared_ptr<vector<string>> securityGroupIds{};
  shared_ptr<string> status{};

  GetEcsListResponseBodyEcsInstances() {}

  explicit GetEcsListResponseBodyEcsInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasTag) {
      res["HasTag"] = boost::any(*hasTag);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (ipAddress) {
      res["IpAddress"] = boost::any(*ipAddress);
    }
    if (securityGroupIds) {
      res["SecurityGroupIds"] = boost::any(*securityGroupIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasTag") != m.end() && !m["HasTag"].empty()) {
      hasTag = make_shared<bool>(boost::any_cast<bool>(m["HasTag"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IpAddress") != m.end() && !m["IpAddress"].empty()) {
      ipAddress = make_shared<string>(boost::any_cast<string>(m["IpAddress"]));
    }
    if (m.find("SecurityGroupIds") != m.end() && !m["SecurityGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SecurityGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SecurityGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      securityGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetEcsListResponseBodyEcsInstances() = default;
};
class GetEcsListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetEcsListResponseBodyEcsInstances>> ecsInstances{};
  shared_ptr<string> requestId{};

  GetEcsListResponseBody() {}

  explicit GetEcsListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsInstances) {
      vector<boost::any> temp1;
      for(auto item1:*ecsInstances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcsInstances"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsInstances") != m.end() && !m["EcsInstances"].empty()) {
      if (typeid(vector<boost::any>) == m["EcsInstances"].type()) {
        vector<GetEcsListResponseBodyEcsInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcsInstances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEcsListResponseBodyEcsInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecsInstances = make_shared<vector<GetEcsListResponseBodyEcsInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEcsListResponseBody() = default;
};
class GetEcsListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetEcsListResponseBody> body{};

  GetEcsListResponse() {}

  explicit GetEcsListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetEcsListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEcsListResponseBody>(model1);
      }
    }
  }


  virtual ~GetEcsListResponse() = default;
};
class GetRegisteredServiceEndpointsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterIds{};
  shared_ptr<string> name{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> serviceType{};

  GetRegisteredServiceEndpointsRequest() {}

  explicit GetRegisteredServiceEndpointsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      clusterIds = make_shared<string>(boost::any_cast<string>(m["ClusterIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsRequest() = default;
};
class GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> hostname{};
  shared_ptr<string> podName{};
  shared_ptr<vector<long>> ports{};
  shared_ptr<string> region{};
  shared_ptr<bool> sidecarInjected{};

  GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails() {}

  explicit GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (podName) {
      res["PodName"] = boost::any(*podName);
    }
    if (ports) {
      res["Ports"] = boost::any(*ports);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (sidecarInjected) {
      res["SidecarInjected"] = boost::any(*sidecarInjected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PodName") != m.end() && !m["PodName"].empty()) {
      podName = make_shared<string>(boost::any_cast<string>(m["PodName"]));
    }
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Ports"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ports"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ports = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SidecarInjected") != m.end() && !m["SidecarInjected"].empty()) {
      sidecarInjected = make_shared<bool>(boost::any_cast<bool>(m["SidecarInjected"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails() = default;
};
class GetRegisteredServiceEndpointsResponseBodyEndPointSlice : public Darabonba::Model {
public:
  shared_ptr<vector<GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails>> endpointsDetails{};
  shared_ptr<string> location{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceName{};

  GetRegisteredServiceEndpointsResponseBodyEndPointSlice() {}

  explicit GetRegisteredServiceEndpointsResponseBodyEndPointSlice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpointsDetails) {
      vector<boost::any> temp1;
      for(auto item1:*endpointsDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EndpointsDetails"] = boost::any(temp1);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndpointsDetails") != m.end() && !m["EndpointsDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["EndpointsDetails"].type()) {
        vector<GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EndpointsDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        endpointsDetails = make_shared<vector<GetRegisteredServiceEndpointsResponseBodyEndPointSliceEndpointsDetails>>(expect1);
      }
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponseBodyEndPointSlice() = default;
};
class GetRegisteredServiceEndpointsResponseBodyServiceEndpoints : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> clusterId{};

  GetRegisteredServiceEndpointsResponseBodyServiceEndpoints() {}

  explicit GetRegisteredServiceEndpointsResponseBodyServiceEndpoints(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponseBodyServiceEndpoints() = default;
};
class GetRegisteredServiceEndpointsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRegisteredServiceEndpointsResponseBodyEndPointSlice> endPointSlice{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>> serviceEndpoints{};

  GetRegisteredServiceEndpointsResponseBody() {}

  explicit GetRegisteredServiceEndpointsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endPointSlice) {
      res["EndPointSlice"] = endPointSlice ? boost::any(endPointSlice->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceEndpoints) {
      vector<boost::any> temp1;
      for(auto item1:*serviceEndpoints){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceEndpoints"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndPointSlice") != m.end() && !m["EndPointSlice"].empty()) {
      if (typeid(map<string, boost::any>) == m["EndPointSlice"].type()) {
        GetRegisteredServiceEndpointsResponseBodyEndPointSlice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EndPointSlice"]));
        endPointSlice = make_shared<GetRegisteredServiceEndpointsResponseBodyEndPointSlice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceEndpoints") != m.end() && !m["ServiceEndpoints"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceEndpoints"].type()) {
        vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceEndpoints"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegisteredServiceEndpointsResponseBodyServiceEndpoints model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceEndpoints = make_shared<vector<GetRegisteredServiceEndpointsResponseBodyServiceEndpoints>>(expect1);
      }
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponseBody() = default;
};
class GetRegisteredServiceEndpointsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRegisteredServiceEndpointsResponseBody> body{};

  GetRegisteredServiceEndpointsResponse() {}

  explicit GetRegisteredServiceEndpointsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRegisteredServiceEndpointsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisteredServiceEndpointsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisteredServiceEndpointsResponse() = default;
};
class GetRegisteredServiceNamespacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetRegisteredServiceNamespacesRequest() {}

  explicit GetRegisteredServiceNamespacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetRegisteredServiceNamespacesRequest() = default;
};
class GetRegisteredServiceNamespacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> namespaces{};
  shared_ptr<string> requestId{};

  GetRegisteredServiceNamespacesResponseBody() {}

  explicit GetRegisteredServiceNamespacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespaces) {
      res["Namespaces"] = boost::any(*namespaces);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespaces") != m.end() && !m["Namespaces"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Namespaces"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Namespaces"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      namespaces = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRegisteredServiceNamespacesResponseBody() = default;
};
class GetRegisteredServiceNamespacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRegisteredServiceNamespacesResponseBody> body{};

  GetRegisteredServiceNamespacesResponse() {}

  explicit GetRegisteredServiceNamespacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRegisteredServiceNamespacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisteredServiceNamespacesResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisteredServiceNamespacesResponse() = default;
};
class GetRegisteredServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> guestClusters{};
  shared_ptr<string> guestLimits{};
  shared_ptr<string> guestMarkers{};
  shared_ptr<long> meshLimit{};
  shared_ptr<string> meshMarker{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceMeshId{};

  GetRegisteredServicesRequest() {}

  explicit GetRegisteredServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guestClusters) {
      res["GuestClusters"] = boost::any(*guestClusters);
    }
    if (guestLimits) {
      res["GuestLimits"] = boost::any(*guestLimits);
    }
    if (guestMarkers) {
      res["GuestMarkers"] = boost::any(*guestMarkers);
    }
    if (meshLimit) {
      res["MeshLimit"] = boost::any(*meshLimit);
    }
    if (meshMarker) {
      res["MeshMarker"] = boost::any(*meshMarker);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GuestClusters") != m.end() && !m["GuestClusters"].empty()) {
      guestClusters = make_shared<string>(boost::any_cast<string>(m["GuestClusters"]));
    }
    if (m.find("GuestLimits") != m.end() && !m["GuestLimits"].empty()) {
      guestLimits = make_shared<string>(boost::any_cast<string>(m["GuestLimits"]));
    }
    if (m.find("GuestMarkers") != m.end() && !m["GuestMarkers"].empty()) {
      guestMarkers = make_shared<string>(boost::any_cast<string>(m["GuestMarkers"]));
    }
    if (m.find("MeshLimit") != m.end() && !m["MeshLimit"].empty()) {
      meshLimit = make_shared<long>(boost::any_cast<long>(m["MeshLimit"]));
    }
    if (m.find("MeshMarker") != m.end() && !m["MeshMarker"].empty()) {
      meshMarker = make_shared<string>(boost::any_cast<string>(m["MeshMarker"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetRegisteredServicesRequest() = default;
};
class GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> marker{};

  GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages() {}

  explicit GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
  }


  virtual ~GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages() = default;
};
class ServiceDirectoryServicesValuePorts : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<long> port{};
  shared_ptr<long> targetPort{};
  shared_ptr<long> nodePort{};

  ServiceDirectoryServicesValuePorts() {}

  explicit ServiceDirectoryServicesValuePorts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    if (nodePort) {
      res["NodePort"] = boost::any(*nodePort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
    if (m.find("NodePort") != m.end() && !m["NodePort"].empty()) {
      nodePort = make_shared<long>(boost::any_cast<long>(m["NodePort"]));
    }
  }


  virtual ~ServiceDirectoryServicesValuePorts() = default;
};
class ServiceDirectoryServicesValue : public Darabonba::Model {
public:
  shared_ptr<vector<ServiceDirectoryServicesValuePorts>> ports{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceType{};
  shared_ptr<map<string, string>> labels{};
  shared_ptr<vector<string>> clusterIds{};

  ServiceDirectoryServicesValue() {}

  explicit ServiceDirectoryServicesValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ports) {
      vector<boost::any> temp1;
      for(auto item1:*ports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Ports"] = boost::any(temp1);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (clusterIds) {
      res["ClusterIds"] = boost::any(*clusterIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ports") != m.end() && !m["Ports"].empty()) {
      if (typeid(vector<boost::any>) == m["Ports"].type()) {
        vector<ServiceDirectoryServicesValuePorts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Ports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ServiceDirectoryServicesValuePorts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ports = make_shared<vector<ServiceDirectoryServicesValuePorts>>(expect1);
      }
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<string>(boost::any_cast<string>(m["ServiceType"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Labels"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      labels = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ClusterIds") != m.end() && !m["ClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusterIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ServiceDirectoryServicesValue() = default;
};
class GetRegisteredServicesResponseBodyServiceDirectory : public Darabonba::Model {
public:
  shared_ptr<vector<GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages>> serviceListStages{};
  shared_ptr<map<string, ServiceDirectoryServicesValue>> services{};

  GetRegisteredServicesResponseBodyServiceDirectory() {}

  explicit GetRegisteredServicesResponseBodyServiceDirectory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceListStages) {
      vector<boost::any> temp1;
      for(auto item1:*serviceListStages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceListStages"] = boost::any(temp1);
    }
    if (services) {
      map<string, boost::any> temp1;
      for(auto item1:*services){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Services"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceListStages") != m.end() && !m["ServiceListStages"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceListStages"].type()) {
        vector<GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceListStages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceListStages = make_shared<vector<GetRegisteredServicesResponseBodyServiceDirectoryServiceListStages>>(expect1);
      }
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      if (typeid(map<string, boost::any>) == m["Services"].type()) {
        map<string, ServiceDirectoryServicesValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Services"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            ServiceDirectoryServicesValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        services = make_shared<map<string, ServiceDirectoryServicesValue>>(expect1);
      }
    }
  }


  virtual ~GetRegisteredServicesResponseBodyServiceDirectory() = default;
};
class GetRegisteredServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetRegisteredServicesResponseBodyServiceDirectory> serviceDirectory{};
  shared_ptr<vector<string>> services{};

  GetRegisteredServicesResponseBody() {}

  explicit GetRegisteredServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceDirectory) {
      res["ServiceDirectory"] = serviceDirectory ? boost::any(serviceDirectory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (services) {
      res["Services"] = boost::any(*services);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceDirectory") != m.end() && !m["ServiceDirectory"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceDirectory"].type()) {
        GetRegisteredServicesResponseBodyServiceDirectory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceDirectory"]));
        serviceDirectory = make_shared<GetRegisteredServicesResponseBodyServiceDirectory>(model1);
      }
    }
    if (m.find("Services") != m.end() && !m["Services"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Services"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Services"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      services = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRegisteredServicesResponseBody() = default;
};
class GetRegisteredServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetRegisteredServicesResponseBody> body{};

  GetRegisteredServicesResponse() {}

  explicit GetRegisteredServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetRegisteredServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisteredServicesResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisteredServicesResponse() = default;
};
class GetSaTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<bool> needRefresh{};
  shared_ptr<string> serviceAccountName{};
  shared_ptr<string> serviceMeshId{};

  GetSaTokenRequest() {}

  explicit GetSaTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (needRefresh) {
      res["NeedRefresh"] = boost::any(*needRefresh);
    }
    if (serviceAccountName) {
      res["ServiceAccountName"] = boost::any(*serviceAccountName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("NeedRefresh") != m.end() && !m["NeedRefresh"].empty()) {
      needRefresh = make_shared<bool>(boost::any_cast<bool>(m["NeedRefresh"]));
    }
    if (m.find("ServiceAccountName") != m.end() && !m["ServiceAccountName"].empty()) {
      serviceAccountName = make_shared<string>(boost::any_cast<string>(m["ServiceAccountName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetSaTokenRequest() = default;
};
class GetSaTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetSaTokenResponseBody() {}

  explicit GetSaTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetSaTokenResponseBody() = default;
};
class GetSaTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSaTokenResponseBody> body{};

  GetSaTokenResponse() {}

  explicit GetSaTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetSaTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSaTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetSaTokenResponse() = default;
};
class GetServiceMeshSlbRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetServiceMeshSlbRequest() {}

  explicit GetServiceMeshSlbRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetServiceMeshSlbRequest() = default;
};
class GetServiceMeshSlbResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> loadBalancerId{};
  shared_ptr<string> serverHealthStatus{};
  shared_ptr<string> status{};

  GetServiceMeshSlbResponseBodyData() {}

  explicit GetServiceMeshSlbResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loadBalancerId) {
      res["LoadBalancerId"] = boost::any(*loadBalancerId);
    }
    if (serverHealthStatus) {
      res["ServerHealthStatus"] = boost::any(*serverHealthStatus);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoadBalancerId") != m.end() && !m["LoadBalancerId"].empty()) {
      loadBalancerId = make_shared<string>(boost::any_cast<string>(m["LoadBalancerId"]));
    }
    if (m.find("ServerHealthStatus") != m.end() && !m["ServerHealthStatus"].empty()) {
      serverHealthStatus = make_shared<string>(boost::any_cast<string>(m["ServerHealthStatus"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetServiceMeshSlbResponseBodyData() = default;
};
class GetServiceMeshSlbResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetServiceMeshSlbResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetServiceMeshSlbResponseBody() {}

  explicit GetServiceMeshSlbResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<GetServiceMeshSlbResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetServiceMeshSlbResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetServiceMeshSlbResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetServiceMeshSlbResponseBody() = default;
};
class GetServiceMeshSlbResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceMeshSlbResponseBody> body{};

  GetServiceMeshSlbResponse() {}

  explicit GetServiceMeshSlbResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceMeshSlbResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceMeshSlbResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceMeshSlbResponse() = default;
};
class GetServiceRegistrySourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetServiceRegistrySourceRequest() {}

  explicit GetServiceRegistrySourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetServiceRegistrySourceRequest() = default;
};
class GetServiceRegistrySourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};

  GetServiceRegistrySourceResponseBody() {}

  explicit GetServiceRegistrySourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetServiceRegistrySourceResponseBody() = default;
};
class GetServiceRegistrySourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetServiceRegistrySourceResponseBody> body{};

  GetServiceRegistrySourceResponse() {}

  explicit GetServiceRegistrySourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetServiceRegistrySourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceRegistrySourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceRegistrySourceResponse() = default;
};
class GetVmAppMeshInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  GetVmAppMeshInfoRequest() {}

  explicit GetVmAppMeshInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~GetVmAppMeshInfoRequest() = default;
};
class GetVmAppMeshInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  GetVmAppMeshInfoResponseBody() {}

  explicit GetVmAppMeshInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetVmAppMeshInfoResponseBody() = default;
};
class GetVmAppMeshInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVmAppMeshInfoResponseBody> body{};

  GetVmAppMeshInfoResponse() {}

  explicit GetVmAppMeshInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVmAppMeshInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVmAppMeshInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetVmAppMeshInfoResponse() = default;
};
class GetVmMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceAccount{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> trustDomain{};

  GetVmMetaRequest() {}

  explicit GetVmMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceAccount) {
      res["ServiceAccount"] = boost::any(*serviceAccount);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (trustDomain) {
      res["TrustDomain"] = boost::any(*trustDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceAccount") != m.end() && !m["ServiceAccount"].empty()) {
      serviceAccount = make_shared<string>(boost::any_cast<string>(m["ServiceAccount"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("TrustDomain") != m.end() && !m["TrustDomain"].empty()) {
      trustDomain = make_shared<string>(boost::any_cast<string>(m["TrustDomain"]));
    }
  }


  virtual ~GetVmMetaRequest() = default;
};
class GetVmMetaResponseBodyVmMetaInfo : public Darabonba::Model {
public:
  shared_ptr<string> envoyEnvContent{};
  shared_ptr<string> hostsContent{};
  shared_ptr<string> tokenContent{};

  GetVmMetaResponseBodyVmMetaInfo() {}

  explicit GetVmMetaResponseBodyVmMetaInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envoyEnvContent) {
      res["EnvoyEnvContent"] = boost::any(*envoyEnvContent);
    }
    if (hostsContent) {
      res["HostsContent"] = boost::any(*hostsContent);
    }
    if (tokenContent) {
      res["TokenContent"] = boost::any(*tokenContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvoyEnvContent") != m.end() && !m["EnvoyEnvContent"].empty()) {
      envoyEnvContent = make_shared<string>(boost::any_cast<string>(m["EnvoyEnvContent"]));
    }
    if (m.find("HostsContent") != m.end() && !m["HostsContent"].empty()) {
      hostsContent = make_shared<string>(boost::any_cast<string>(m["HostsContent"]));
    }
    if (m.find("TokenContent") != m.end() && !m["TokenContent"].empty()) {
      tokenContent = make_shared<string>(boost::any_cast<string>(m["TokenContent"]));
    }
  }


  virtual ~GetVmMetaResponseBodyVmMetaInfo() = default;
};
class GetVmMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetVmMetaResponseBodyVmMetaInfo> vmMetaInfo{};

  GetVmMetaResponseBody() {}

  explicit GetVmMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (vmMetaInfo) {
      res["VmMetaInfo"] = vmMetaInfo ? boost::any(vmMetaInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VmMetaInfo") != m.end() && !m["VmMetaInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["VmMetaInfo"].type()) {
        GetVmMetaResponseBodyVmMetaInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VmMetaInfo"]));
        vmMetaInfo = make_shared<GetVmMetaResponseBodyVmMetaInfo>(model1);
      }
    }
  }


  virtual ~GetVmMetaResponseBody() = default;
};
class GetVmMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVmMetaResponseBody> body{};

  GetVmMetaResponse() {}

  explicit GetVmMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetVmMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVmMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetVmMetaResponse() = default;
};
class InitializeASMRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  InitializeASMRoleResponseBody() {}

  explicit InitializeASMRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InitializeASMRoleResponseBody() = default;
};
class InitializeASMRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitializeASMRoleResponseBody> body{};

  InitializeASMRoleResponse() {}

  explicit InitializeASMRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InitializeASMRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitializeASMRoleResponseBody>(model1);
      }
    }
  }


  virtual ~InitializeASMRoleResponse() = default;
};
class ListBuiltinEnvoyFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> serviceMeshId{};

  ListBuiltinEnvoyFilterRequest() {}

  explicit ListBuiltinEnvoyFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~ListBuiltinEnvoyFilterRequest() = default;
};
class ListBuiltinEnvoyFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ListBuiltinEnvoyFilterResponseBody() {}

  explicit ListBuiltinEnvoyFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBuiltinEnvoyFilterResponseBody() = default;
};
class ListBuiltinEnvoyFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBuiltinEnvoyFilterResponseBody> body{};

  ListBuiltinEnvoyFilterResponse() {}

  explicit ListBuiltinEnvoyFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListBuiltinEnvoyFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBuiltinEnvoyFilterResponseBody>(model1);
      }
    }
  }


  virtual ~ListBuiltinEnvoyFilterResponse() = default;
};
class ModifyBuiltinEnvoyFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> istioVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> parameters{};
  shared_ptr<string> serviceMeshId{};

  ModifyBuiltinEnvoyFilterRequest() {}

  explicit ModifyBuiltinEnvoyFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~ModifyBuiltinEnvoyFilterRequest() = default;
};
class ModifyBuiltinEnvoyFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyBuiltinEnvoyFilterResponseBody() {}

  explicit ModifyBuiltinEnvoyFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyBuiltinEnvoyFilterResponseBody() = default;
};
class ModifyBuiltinEnvoyFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyBuiltinEnvoyFilterResponseBody> body{};

  ModifyBuiltinEnvoyFilterResponse() {}

  explicit ModifyBuiltinEnvoyFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyBuiltinEnvoyFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyBuiltinEnvoyFilterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyBuiltinEnvoyFilterResponse() = default;
};
class ModifyServiceMeshNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> serviceMeshId{};

  ModifyServiceMeshNameRequest() {}

  explicit ModifyServiceMeshNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~ModifyServiceMeshNameRequest() = default;
};
class ModifyServiceMeshNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyServiceMeshNameResponseBody() {}

  explicit ModifyServiceMeshNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyServiceMeshNameResponseBody() = default;
};
class ModifyServiceMeshNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyServiceMeshNameResponseBody> body{};

  ModifyServiceMeshNameResponse() {}

  explicit ModifyServiceMeshNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyServiceMeshNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyServiceMeshNameResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyServiceMeshNameResponse() = default;
};
class ReActivateAuditRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableAudit{};
  shared_ptr<string> serviceMeshId{};

  ReActivateAuditRequest() {}

  explicit ReActivateAuditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAudit) {
      res["EnableAudit"] = boost::any(*enableAudit);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableAudit") != m.end() && !m["EnableAudit"].empty()) {
      enableAudit = make_shared<bool>(boost::any_cast<bool>(m["EnableAudit"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~ReActivateAuditRequest() = default;
};
class ReActivateAuditResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  ReActivateAuditResponseBody() {}

  explicit ReActivateAuditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReActivateAuditResponseBody() = default;
};
class ReActivateAuditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ReActivateAuditResponseBody> body{};

  ReActivateAuditResponse() {}

  explicit ReActivateAuditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReActivateAuditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReActivateAuditResponseBody>(model1);
      }
    }
  }


  virtual ~ReActivateAuditResponse() = default;
};
class RemoveBuiltinEnvoyFilterRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> istioVersion{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceMeshId{};

  RemoveBuiltinEnvoyFilterRequest() {}

  explicit RemoveBuiltinEnvoyFilterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (istioVersion) {
      res["IstioVersion"] = boost::any(*istioVersion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IstioVersion") != m.end() && !m["IstioVersion"].empty()) {
      istioVersion = make_shared<string>(boost::any_cast<string>(m["IstioVersion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~RemoveBuiltinEnvoyFilterRequest() = default;
};
class RemoveBuiltinEnvoyFilterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveBuiltinEnvoyFilterResponseBody() {}

  explicit RemoveBuiltinEnvoyFilterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveBuiltinEnvoyFilterResponseBody() = default;
};
class RemoveBuiltinEnvoyFilterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveBuiltinEnvoyFilterResponseBody> body{};

  RemoveBuiltinEnvoyFilterResponse() {}

  explicit RemoveBuiltinEnvoyFilterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveBuiltinEnvoyFilterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveBuiltinEnvoyFilterResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveBuiltinEnvoyFilterResponse() = default;
};
class RemoveClusterFromServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterId{};
  shared_ptr<string> serviceMeshId{};

  RemoveClusterFromServiceMeshRequest() {}

  explicit RemoveClusterFromServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterId) {
      res["ClusterId"] = boost::any(*clusterId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterId") != m.end() && !m["ClusterId"].empty()) {
      clusterId = make_shared<string>(boost::any_cast<string>(m["ClusterId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~RemoveClusterFromServiceMeshRequest() = default;
};
class RemoveClusterFromServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RemoveClusterFromServiceMeshResponseBody() {}

  explicit RemoveClusterFromServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveClusterFromServiceMeshResponseBody() = default;
};
class RemoveClusterFromServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveClusterFromServiceMeshResponseBody> body{};

  RemoveClusterFromServiceMeshResponse() {}

  explicit RemoveClusterFromServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveClusterFromServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveClusterFromServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveClusterFromServiceMeshResponse() = default;
};
class RemoveVMFromServiceMeshRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecsId{};
  shared_ptr<string> serviceMeshId{};

  RemoveVMFromServiceMeshRequest() {}

  explicit RemoveVMFromServiceMeshRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecsId) {
      res["EcsId"] = boost::any(*ecsId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcsId") != m.end() && !m["EcsId"].empty()) {
      ecsId = make_shared<string>(boost::any_cast<string>(m["EcsId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~RemoveVMFromServiceMeshRequest() = default;
};
class RemoveVMFromServiceMeshResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveVMFromServiceMeshResponseBody() {}

  explicit RemoveVMFromServiceMeshResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveVMFromServiceMeshResponseBody() = default;
};
class RemoveVMFromServiceMeshResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveVMFromServiceMeshResponseBody> body{};

  RemoveVMFromServiceMeshResponse() {}

  explicit RemoveVMFromServiceMeshResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveVMFromServiceMeshResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveVMFromServiceMeshResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveVMFromServiceMeshResponse() = default;
};
class RevokeKubeconfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> privateIpAddress{};
  shared_ptr<string> serviceMeshId{};

  RevokeKubeconfigRequest() {}

  explicit RevokeKubeconfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (privateIpAddress) {
      res["PrivateIpAddress"] = boost::any(*privateIpAddress);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PrivateIpAddress") != m.end() && !m["PrivateIpAddress"].empty()) {
      privateIpAddress = make_shared<bool>(boost::any_cast<bool>(m["PrivateIpAddress"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~RevokeKubeconfigRequest() = default;
};
class RevokeKubeconfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> kubeconfig{};
  shared_ptr<string> requestId{};

  RevokeKubeconfigResponseBody() {}

  explicit RevokeKubeconfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kubeconfig) {
      res["Kubeconfig"] = boost::any(*kubeconfig);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Kubeconfig") != m.end() && !m["Kubeconfig"].empty()) {
      kubeconfig = make_shared<string>(boost::any_cast<string>(m["Kubeconfig"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RevokeKubeconfigResponseBody() = default;
};
class RevokeKubeconfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RevokeKubeconfigResponseBody> body{};

  RevokeKubeconfigResponse() {}

  explicit RevokeKubeconfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RevokeKubeconfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeKubeconfigResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeKubeconfigResponse() = default;
};
class RunDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  RunDiagnosisRequest() {}

  explicit RunDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~RunDiagnosisRequest() = default;
};
class RunDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  RunDiagnosisResponseBody() {}

  explicit RunDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~RunDiagnosisResponseBody() = default;
};
class RunDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RunDiagnosisResponseBody> body{};

  RunDiagnosisResponse() {}

  explicit RunDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RunDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~RunDiagnosisResponse() = default;
};
class SetServiceRegistrySourceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> config{};
  shared_ptr<string> serviceMeshId{};

  SetServiceRegistrySourceRequest() {}

  explicit SetServiceRegistrySourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Config"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~SetServiceRegistrySourceRequest() = default;
};
class SetServiceRegistrySourceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> configShrink{};
  shared_ptr<string> serviceMeshId{};

  SetServiceRegistrySourceShrinkRequest() {}

  explicit SetServiceRegistrySourceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configShrink) {
      res["Config"] = boost::any(*configShrink);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      configShrink = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~SetServiceRegistrySourceShrinkRequest() = default;
};
class SetServiceRegistrySourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  SetServiceRegistrySourceResponseBody() {}

  explicit SetServiceRegistrySourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~SetServiceRegistrySourceResponseBody() = default;
};
class SetServiceRegistrySourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SetServiceRegistrySourceResponseBody> body{};

  SetServiceRegistrySourceResponse() {}

  explicit SetServiceRegistrySourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetServiceRegistrySourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetServiceRegistrySourceResponseBody>(model1);
      }
    }
  }


  virtual ~SetServiceRegistrySourceResponse() = default;
};
class UpdateASMGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> istioGatewayName{};
  shared_ptr<string> serviceMeshId{};

  UpdateASMGatewayRequest() {}

  explicit UpdateASMGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (istioGatewayName) {
      res["IstioGatewayName"] = boost::any(*istioGatewayName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("IstioGatewayName") != m.end() && !m["IstioGatewayName"].empty()) {
      istioGatewayName = make_shared<string>(boost::any_cast<string>(m["IstioGatewayName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~UpdateASMGatewayRequest() = default;
};
class UpdateASMGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateASMGatewayResponseBody() {}

  explicit UpdateASMGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateASMGatewayResponseBody() = default;
};
class UpdateASMGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateASMGatewayResponseBody> body{};

  UpdateASMGatewayResponse() {}

  explicit UpdateASMGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateASMGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateASMGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateASMGatewayResponse() = default;
};
class UpdateASMGatewayImportedServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> ASMGatewayName{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> serviceNames{};
  shared_ptr<string> serviceNamespace{};

  UpdateASMGatewayImportedServicesRequest() {}

  explicit UpdateASMGatewayImportedServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ASMGatewayName) {
      res["ASMGatewayName"] = boost::any(*ASMGatewayName);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (serviceNames) {
      res["ServiceNames"] = boost::any(*serviceNames);
    }
    if (serviceNamespace) {
      res["ServiceNamespace"] = boost::any(*serviceNamespace);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ASMGatewayName") != m.end() && !m["ASMGatewayName"].empty()) {
      ASMGatewayName = make_shared<string>(boost::any_cast<string>(m["ASMGatewayName"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("ServiceNames") != m.end() && !m["ServiceNames"].empty()) {
      serviceNames = make_shared<string>(boost::any_cast<string>(m["ServiceNames"]));
    }
    if (m.find("ServiceNamespace") != m.end() && !m["ServiceNamespace"].empty()) {
      serviceNamespace = make_shared<string>(boost::any_cast<string>(m["ServiceNamespace"]));
    }
  }


  virtual ~UpdateASMGatewayImportedServicesRequest() = default;
};
class UpdateASMGatewayImportedServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateASMGatewayImportedServicesResponseBody() {}

  explicit UpdateASMGatewayImportedServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateASMGatewayImportedServicesResponseBody() = default;
};
class UpdateASMGatewayImportedServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateASMGatewayImportedServicesResponseBody> body{};

  UpdateASMGatewayImportedServicesResponse() {}

  explicit UpdateASMGatewayImportedServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateASMGatewayImportedServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateASMGatewayImportedServicesResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateASMGatewayImportedServicesResponse() = default;
};
class UpdateControlPlaneLogAlertActionPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionPolicyId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> serviceMeshId{};

  UpdateControlPlaneLogAlertActionPolicyRequest() {}

  explicit UpdateControlPlaneLogAlertActionPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPolicyId) {
      res["ActionPolicyId"] = boost::any(*actionPolicyId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPolicyId") != m.end() && !m["ActionPolicyId"].empty()) {
      actionPolicyId = make_shared<string>(boost::any_cast<string>(m["ActionPolicyId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~UpdateControlPlaneLogAlertActionPolicyRequest() = default;
};
class UpdateControlPlaneLogAlertActionPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateControlPlaneLogAlertActionPolicyResponseBody() {}

  explicit UpdateControlPlaneLogAlertActionPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateControlPlaneLogAlertActionPolicyResponseBody() = default;
};
class UpdateControlPlaneLogAlertActionPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateControlPlaneLogAlertActionPolicyResponseBody> body{};

  UpdateControlPlaneLogAlertActionPolicyResponse() {}

  explicit UpdateControlPlaneLogAlertActionPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateControlPlaneLogAlertActionPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateControlPlaneLogAlertActionPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateControlPlaneLogAlertActionPolicyResponse() = default;
};
class UpdateControlPlaneLogConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> project{};
  shared_ptr<string> serviceMeshId{};

  UpdateControlPlaneLogConfigRequest() {}

  explicit UpdateControlPlaneLogConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~UpdateControlPlaneLogConfigRequest() = default;
};
class UpdateControlPlaneLogConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateControlPlaneLogConfigResponseBody() {}

  explicit UpdateControlPlaneLogConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateControlPlaneLogConfigResponseBody() = default;
};
class UpdateControlPlaneLogConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateControlPlaneLogConfigResponseBody> body{};

  UpdateControlPlaneLogConfigResponse() {}

  explicit UpdateControlPlaneLogConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateControlPlaneLogConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateControlPlaneLogConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateControlPlaneLogConfigResponse() = default;
};
class UpdateExtensionProviderRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> type{};

  UpdateExtensionProviderRequest() {}

  explicit UpdateExtensionProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateExtensionProviderRequest() = default;
};
class UpdateExtensionProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateExtensionProviderResponseBody() {}

  explicit UpdateExtensionProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateExtensionProviderResponseBody() = default;
};
class UpdateExtensionProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateExtensionProviderResponseBody> body{};

  UpdateExtensionProviderResponse() {}

  explicit UpdateExtensionProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateExtensionProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExtensionProviderResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExtensionProviderResponse() = default;
};
class UpdateIstioInjectionConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableIstioInjection{};
  shared_ptr<bool> enableSidecarSetInjection{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> serviceMeshId{};

  UpdateIstioInjectionConfigRequest() {}

  explicit UpdateIstioInjectionConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableIstioInjection) {
      res["EnableIstioInjection"] = boost::any(*enableIstioInjection);
    }
    if (enableSidecarSetInjection) {
      res["EnableSidecarSetInjection"] = boost::any(*enableSidecarSetInjection);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableIstioInjection") != m.end() && !m["EnableIstioInjection"].empty()) {
      enableIstioInjection = make_shared<bool>(boost::any_cast<bool>(m["EnableIstioInjection"]));
    }
    if (m.find("EnableSidecarSetInjection") != m.end() && !m["EnableSidecarSetInjection"].empty()) {
      enableSidecarSetInjection = make_shared<bool>(boost::any_cast<bool>(m["EnableSidecarSetInjection"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~UpdateIstioInjectionConfigRequest() = default;
};
class UpdateIstioInjectionConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateIstioInjectionConfigResponseBody() {}

  explicit UpdateIstioInjectionConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateIstioInjectionConfigResponseBody() = default;
};
class UpdateIstioInjectionConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIstioInjectionConfigResponseBody> body{};

  UpdateIstioInjectionConfigResponse() {}

  explicit UpdateIstioInjectionConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateIstioInjectionConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIstioInjectionConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIstioInjectionConfigResponse() = default;
};
class UpdateMeshFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessLogEnabled{};
  shared_ptr<string> accessLogFile{};
  shared_ptr<string> accessLogFormat{};
  shared_ptr<string> accessLogProject{};
  shared_ptr<bool> accessLogServiceEnabled{};
  shared_ptr<string> accessLogServiceHost{};
  shared_ptr<long> accessLogServicePort{};
  shared_ptr<string> auditProject{};
  shared_ptr<bool> autoInjectionPolicyEnabled{};
  shared_ptr<bool> CRAggregationEnabled{};
  shared_ptr<bool> cniEnabled{};
  shared_ptr<string> cniExcludeNamespaces{};
  shared_ptr<bool> configSourceEnabled{};
  shared_ptr<string> configSourceNacosID{};
  shared_ptr<bool> customizedPrometheus{};
  shared_ptr<bool> customizedZipkin{};
  shared_ptr<bool> DNSProxyingEnabled{};
  shared_ptr<string> discoverySelectors{};
  shared_ptr<bool> dubboFilterEnabled{};
  shared_ptr<bool> enableAudit{};
  shared_ptr<bool> enableCRHistory{};
  shared_ptr<bool> enableNamespacesByDefault{};
  shared_ptr<bool> enableSDSServer{};
  shared_ptr<string> excludeIPRanges{};
  shared_ptr<string> excludeInboundPorts{};
  shared_ptr<string> excludeOutboundPorts{};
  shared_ptr<bool> filterGatewayClusterConfig{};
  shared_ptr<bool> gatewayAPIEnabled{};
  shared_ptr<bool> http10Enabled{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<string> includeInboundPorts{};
  shared_ptr<bool> kialiEnabled{};
  shared_ptr<string> lifecycle{};
  shared_ptr<string> localityLBConf{};
  shared_ptr<bool> localityLoadBalancing{};
  shared_ptr<bool> MSEEnabled{};
  shared_ptr<bool> multiBufferEnabled{};
  shared_ptr<string> multiBufferPollDelay{};
  shared_ptr<bool> mysqlFilterEnabled{};
  shared_ptr<string> OPALimitCPU{};
  shared_ptr<string> OPALimitMemory{};
  shared_ptr<string> OPALogLevel{};
  shared_ptr<string> OPARequestCPU{};
  shared_ptr<string> OPARequestMemory{};
  shared_ptr<bool> opaEnabled{};
  shared_ptr<bool> openAgentPolicy{};
  shared_ptr<string> outboundTrafficPolicy{};
  shared_ptr<string> prometheusUrl{};
  shared_ptr<string> proxyInitCPUResourceLimit{};
  shared_ptr<string> proxyInitCPUResourceRequest{};
  shared_ptr<string> proxyInitMemoryResourceLimit{};
  shared_ptr<string> proxyInitMemoryResourceRequest{};
  shared_ptr<string> proxyLimitCPU{};
  shared_ptr<string> proxyLimitMemory{};
  shared_ptr<string> proxyRequestCPU{};
  shared_ptr<string> proxyRequestMemory{};
  shared_ptr<bool> redisFilterEnabled{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> sidecarInjectorLimitCPU{};
  shared_ptr<string> sidecarInjectorLimitMemory{};
  shared_ptr<string> sidecarInjectorRequestCPU{};
  shared_ptr<string> sidecarInjectorRequestMemory{};
  shared_ptr<string> sidecarInjectorWebhookAsYaml{};
  shared_ptr<bool> telemetry{};
  shared_ptr<string> terminationDrainDuration{};
  shared_ptr<bool> thriftFilterEnabled{};
  shared_ptr<double> traceSampling{};
  shared_ptr<bool> tracing{};
  shared_ptr<bool> webAssemblyFilterEnabled{};

  UpdateMeshFeatureRequest() {}

  explicit UpdateMeshFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessLogEnabled) {
      res["AccessLogEnabled"] = boost::any(*accessLogEnabled);
    }
    if (accessLogFile) {
      res["AccessLogFile"] = boost::any(*accessLogFile);
    }
    if (accessLogFormat) {
      res["AccessLogFormat"] = boost::any(*accessLogFormat);
    }
    if (accessLogProject) {
      res["AccessLogProject"] = boost::any(*accessLogProject);
    }
    if (accessLogServiceEnabled) {
      res["AccessLogServiceEnabled"] = boost::any(*accessLogServiceEnabled);
    }
    if (accessLogServiceHost) {
      res["AccessLogServiceHost"] = boost::any(*accessLogServiceHost);
    }
    if (accessLogServicePort) {
      res["AccessLogServicePort"] = boost::any(*accessLogServicePort);
    }
    if (auditProject) {
      res["AuditProject"] = boost::any(*auditProject);
    }
    if (autoInjectionPolicyEnabled) {
      res["AutoInjectionPolicyEnabled"] = boost::any(*autoInjectionPolicyEnabled);
    }
    if (CRAggregationEnabled) {
      res["CRAggregationEnabled"] = boost::any(*CRAggregationEnabled);
    }
    if (cniEnabled) {
      res["CniEnabled"] = boost::any(*cniEnabled);
    }
    if (cniExcludeNamespaces) {
      res["CniExcludeNamespaces"] = boost::any(*cniExcludeNamespaces);
    }
    if (configSourceEnabled) {
      res["ConfigSourceEnabled"] = boost::any(*configSourceEnabled);
    }
    if (configSourceNacosID) {
      res["ConfigSourceNacosID"] = boost::any(*configSourceNacosID);
    }
    if (customizedPrometheus) {
      res["CustomizedPrometheus"] = boost::any(*customizedPrometheus);
    }
    if (customizedZipkin) {
      res["CustomizedZipkin"] = boost::any(*customizedZipkin);
    }
    if (DNSProxyingEnabled) {
      res["DNSProxyingEnabled"] = boost::any(*DNSProxyingEnabled);
    }
    if (discoverySelectors) {
      res["DiscoverySelectors"] = boost::any(*discoverySelectors);
    }
    if (dubboFilterEnabled) {
      res["DubboFilterEnabled"] = boost::any(*dubboFilterEnabled);
    }
    if (enableAudit) {
      res["EnableAudit"] = boost::any(*enableAudit);
    }
    if (enableCRHistory) {
      res["EnableCRHistory"] = boost::any(*enableCRHistory);
    }
    if (enableNamespacesByDefault) {
      res["EnableNamespacesByDefault"] = boost::any(*enableNamespacesByDefault);
    }
    if (enableSDSServer) {
      res["EnableSDSServer"] = boost::any(*enableSDSServer);
    }
    if (excludeIPRanges) {
      res["ExcludeIPRanges"] = boost::any(*excludeIPRanges);
    }
    if (excludeInboundPorts) {
      res["ExcludeInboundPorts"] = boost::any(*excludeInboundPorts);
    }
    if (excludeOutboundPorts) {
      res["ExcludeOutboundPorts"] = boost::any(*excludeOutboundPorts);
    }
    if (filterGatewayClusterConfig) {
      res["FilterGatewayClusterConfig"] = boost::any(*filterGatewayClusterConfig);
    }
    if (gatewayAPIEnabled) {
      res["GatewayAPIEnabled"] = boost::any(*gatewayAPIEnabled);
    }
    if (http10Enabled) {
      res["Http10Enabled"] = boost::any(*http10Enabled);
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (includeInboundPorts) {
      res["IncludeInboundPorts"] = boost::any(*includeInboundPorts);
    }
    if (kialiEnabled) {
      res["KialiEnabled"] = boost::any(*kialiEnabled);
    }
    if (lifecycle) {
      res["Lifecycle"] = boost::any(*lifecycle);
    }
    if (localityLBConf) {
      res["LocalityLBConf"] = boost::any(*localityLBConf);
    }
    if (localityLoadBalancing) {
      res["LocalityLoadBalancing"] = boost::any(*localityLoadBalancing);
    }
    if (MSEEnabled) {
      res["MSEEnabled"] = boost::any(*MSEEnabled);
    }
    if (multiBufferEnabled) {
      res["MultiBufferEnabled"] = boost::any(*multiBufferEnabled);
    }
    if (multiBufferPollDelay) {
      res["MultiBufferPollDelay"] = boost::any(*multiBufferPollDelay);
    }
    if (mysqlFilterEnabled) {
      res["MysqlFilterEnabled"] = boost::any(*mysqlFilterEnabled);
    }
    if (OPALimitCPU) {
      res["OPALimitCPU"] = boost::any(*OPALimitCPU);
    }
    if (OPALimitMemory) {
      res["OPALimitMemory"] = boost::any(*OPALimitMemory);
    }
    if (OPALogLevel) {
      res["OPALogLevel"] = boost::any(*OPALogLevel);
    }
    if (OPARequestCPU) {
      res["OPARequestCPU"] = boost::any(*OPARequestCPU);
    }
    if (OPARequestMemory) {
      res["OPARequestMemory"] = boost::any(*OPARequestMemory);
    }
    if (opaEnabled) {
      res["OpaEnabled"] = boost::any(*opaEnabled);
    }
    if (openAgentPolicy) {
      res["OpenAgentPolicy"] = boost::any(*openAgentPolicy);
    }
    if (outboundTrafficPolicy) {
      res["OutboundTrafficPolicy"] = boost::any(*outboundTrafficPolicy);
    }
    if (prometheusUrl) {
      res["PrometheusUrl"] = boost::any(*prometheusUrl);
    }
    if (proxyInitCPUResourceLimit) {
      res["ProxyInitCPUResourceLimit"] = boost::any(*proxyInitCPUResourceLimit);
    }
    if (proxyInitCPUResourceRequest) {
      res["ProxyInitCPUResourceRequest"] = boost::any(*proxyInitCPUResourceRequest);
    }
    if (proxyInitMemoryResourceLimit) {
      res["ProxyInitMemoryResourceLimit"] = boost::any(*proxyInitMemoryResourceLimit);
    }
    if (proxyInitMemoryResourceRequest) {
      res["ProxyInitMemoryResourceRequest"] = boost::any(*proxyInitMemoryResourceRequest);
    }
    if (proxyLimitCPU) {
      res["ProxyLimitCPU"] = boost::any(*proxyLimitCPU);
    }
    if (proxyLimitMemory) {
      res["ProxyLimitMemory"] = boost::any(*proxyLimitMemory);
    }
    if (proxyRequestCPU) {
      res["ProxyRequestCPU"] = boost::any(*proxyRequestCPU);
    }
    if (proxyRequestMemory) {
      res["ProxyRequestMemory"] = boost::any(*proxyRequestMemory);
    }
    if (redisFilterEnabled) {
      res["RedisFilterEnabled"] = boost::any(*redisFilterEnabled);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (sidecarInjectorLimitCPU) {
      res["SidecarInjectorLimitCPU"] = boost::any(*sidecarInjectorLimitCPU);
    }
    if (sidecarInjectorLimitMemory) {
      res["SidecarInjectorLimitMemory"] = boost::any(*sidecarInjectorLimitMemory);
    }
    if (sidecarInjectorRequestCPU) {
      res["SidecarInjectorRequestCPU"] = boost::any(*sidecarInjectorRequestCPU);
    }
    if (sidecarInjectorRequestMemory) {
      res["SidecarInjectorRequestMemory"] = boost::any(*sidecarInjectorRequestMemory);
    }
    if (sidecarInjectorWebhookAsYaml) {
      res["SidecarInjectorWebhookAsYaml"] = boost::any(*sidecarInjectorWebhookAsYaml);
    }
    if (telemetry) {
      res["Telemetry"] = boost::any(*telemetry);
    }
    if (terminationDrainDuration) {
      res["TerminationDrainDuration"] = boost::any(*terminationDrainDuration);
    }
    if (thriftFilterEnabled) {
      res["ThriftFilterEnabled"] = boost::any(*thriftFilterEnabled);
    }
    if (traceSampling) {
      res["TraceSampling"] = boost::any(*traceSampling);
    }
    if (tracing) {
      res["Tracing"] = boost::any(*tracing);
    }
    if (webAssemblyFilterEnabled) {
      res["WebAssemblyFilterEnabled"] = boost::any(*webAssemblyFilterEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessLogEnabled") != m.end() && !m["AccessLogEnabled"].empty()) {
      accessLogEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogEnabled"]));
    }
    if (m.find("AccessLogFile") != m.end() && !m["AccessLogFile"].empty()) {
      accessLogFile = make_shared<string>(boost::any_cast<string>(m["AccessLogFile"]));
    }
    if (m.find("AccessLogFormat") != m.end() && !m["AccessLogFormat"].empty()) {
      accessLogFormat = make_shared<string>(boost::any_cast<string>(m["AccessLogFormat"]));
    }
    if (m.find("AccessLogProject") != m.end() && !m["AccessLogProject"].empty()) {
      accessLogProject = make_shared<string>(boost::any_cast<string>(m["AccessLogProject"]));
    }
    if (m.find("AccessLogServiceEnabled") != m.end() && !m["AccessLogServiceEnabled"].empty()) {
      accessLogServiceEnabled = make_shared<bool>(boost::any_cast<bool>(m["AccessLogServiceEnabled"]));
    }
    if (m.find("AccessLogServiceHost") != m.end() && !m["AccessLogServiceHost"].empty()) {
      accessLogServiceHost = make_shared<string>(boost::any_cast<string>(m["AccessLogServiceHost"]));
    }
    if (m.find("AccessLogServicePort") != m.end() && !m["AccessLogServicePort"].empty()) {
      accessLogServicePort = make_shared<long>(boost::any_cast<long>(m["AccessLogServicePort"]));
    }
    if (m.find("AuditProject") != m.end() && !m["AuditProject"].empty()) {
      auditProject = make_shared<string>(boost::any_cast<string>(m["AuditProject"]));
    }
    if (m.find("AutoInjectionPolicyEnabled") != m.end() && !m["AutoInjectionPolicyEnabled"].empty()) {
      autoInjectionPolicyEnabled = make_shared<bool>(boost::any_cast<bool>(m["AutoInjectionPolicyEnabled"]));
    }
    if (m.find("CRAggregationEnabled") != m.end() && !m["CRAggregationEnabled"].empty()) {
      CRAggregationEnabled = make_shared<bool>(boost::any_cast<bool>(m["CRAggregationEnabled"]));
    }
    if (m.find("CniEnabled") != m.end() && !m["CniEnabled"].empty()) {
      cniEnabled = make_shared<bool>(boost::any_cast<bool>(m["CniEnabled"]));
    }
    if (m.find("CniExcludeNamespaces") != m.end() && !m["CniExcludeNamespaces"].empty()) {
      cniExcludeNamespaces = make_shared<string>(boost::any_cast<string>(m["CniExcludeNamespaces"]));
    }
    if (m.find("ConfigSourceEnabled") != m.end() && !m["ConfigSourceEnabled"].empty()) {
      configSourceEnabled = make_shared<bool>(boost::any_cast<bool>(m["ConfigSourceEnabled"]));
    }
    if (m.find("ConfigSourceNacosID") != m.end() && !m["ConfigSourceNacosID"].empty()) {
      configSourceNacosID = make_shared<string>(boost::any_cast<string>(m["ConfigSourceNacosID"]));
    }
    if (m.find("CustomizedPrometheus") != m.end() && !m["CustomizedPrometheus"].empty()) {
      customizedPrometheus = make_shared<bool>(boost::any_cast<bool>(m["CustomizedPrometheus"]));
    }
    if (m.find("CustomizedZipkin") != m.end() && !m["CustomizedZipkin"].empty()) {
      customizedZipkin = make_shared<bool>(boost::any_cast<bool>(m["CustomizedZipkin"]));
    }
    if (m.find("DNSProxyingEnabled") != m.end() && !m["DNSProxyingEnabled"].empty()) {
      DNSProxyingEnabled = make_shared<bool>(boost::any_cast<bool>(m["DNSProxyingEnabled"]));
    }
    if (m.find("DiscoverySelectors") != m.end() && !m["DiscoverySelectors"].empty()) {
      discoverySelectors = make_shared<string>(boost::any_cast<string>(m["DiscoverySelectors"]));
    }
    if (m.find("DubboFilterEnabled") != m.end() && !m["DubboFilterEnabled"].empty()) {
      dubboFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["DubboFilterEnabled"]));
    }
    if (m.find("EnableAudit") != m.end() && !m["EnableAudit"].empty()) {
      enableAudit = make_shared<bool>(boost::any_cast<bool>(m["EnableAudit"]));
    }
    if (m.find("EnableCRHistory") != m.end() && !m["EnableCRHistory"].empty()) {
      enableCRHistory = make_shared<bool>(boost::any_cast<bool>(m["EnableCRHistory"]));
    }
    if (m.find("EnableNamespacesByDefault") != m.end() && !m["EnableNamespacesByDefault"].empty()) {
      enableNamespacesByDefault = make_shared<bool>(boost::any_cast<bool>(m["EnableNamespacesByDefault"]));
    }
    if (m.find("EnableSDSServer") != m.end() && !m["EnableSDSServer"].empty()) {
      enableSDSServer = make_shared<bool>(boost::any_cast<bool>(m["EnableSDSServer"]));
    }
    if (m.find("ExcludeIPRanges") != m.end() && !m["ExcludeIPRanges"].empty()) {
      excludeIPRanges = make_shared<string>(boost::any_cast<string>(m["ExcludeIPRanges"]));
    }
    if (m.find("ExcludeInboundPorts") != m.end() && !m["ExcludeInboundPorts"].empty()) {
      excludeInboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeInboundPorts"]));
    }
    if (m.find("ExcludeOutboundPorts") != m.end() && !m["ExcludeOutboundPorts"].empty()) {
      excludeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundPorts"]));
    }
    if (m.find("FilterGatewayClusterConfig") != m.end() && !m["FilterGatewayClusterConfig"].empty()) {
      filterGatewayClusterConfig = make_shared<bool>(boost::any_cast<bool>(m["FilterGatewayClusterConfig"]));
    }
    if (m.find("GatewayAPIEnabled") != m.end() && !m["GatewayAPIEnabled"].empty()) {
      gatewayAPIEnabled = make_shared<bool>(boost::any_cast<bool>(m["GatewayAPIEnabled"]));
    }
    if (m.find("Http10Enabled") != m.end() && !m["Http10Enabled"].empty()) {
      http10Enabled = make_shared<bool>(boost::any_cast<bool>(m["Http10Enabled"]));
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("IncludeInboundPorts") != m.end() && !m["IncludeInboundPorts"].empty()) {
      includeInboundPorts = make_shared<string>(boost::any_cast<string>(m["IncludeInboundPorts"]));
    }
    if (m.find("KialiEnabled") != m.end() && !m["KialiEnabled"].empty()) {
      kialiEnabled = make_shared<bool>(boost::any_cast<bool>(m["KialiEnabled"]));
    }
    if (m.find("Lifecycle") != m.end() && !m["Lifecycle"].empty()) {
      lifecycle = make_shared<string>(boost::any_cast<string>(m["Lifecycle"]));
    }
    if (m.find("LocalityLBConf") != m.end() && !m["LocalityLBConf"].empty()) {
      localityLBConf = make_shared<string>(boost::any_cast<string>(m["LocalityLBConf"]));
    }
    if (m.find("LocalityLoadBalancing") != m.end() && !m["LocalityLoadBalancing"].empty()) {
      localityLoadBalancing = make_shared<bool>(boost::any_cast<bool>(m["LocalityLoadBalancing"]));
    }
    if (m.find("MSEEnabled") != m.end() && !m["MSEEnabled"].empty()) {
      MSEEnabled = make_shared<bool>(boost::any_cast<bool>(m["MSEEnabled"]));
    }
    if (m.find("MultiBufferEnabled") != m.end() && !m["MultiBufferEnabled"].empty()) {
      multiBufferEnabled = make_shared<bool>(boost::any_cast<bool>(m["MultiBufferEnabled"]));
    }
    if (m.find("MultiBufferPollDelay") != m.end() && !m["MultiBufferPollDelay"].empty()) {
      multiBufferPollDelay = make_shared<string>(boost::any_cast<string>(m["MultiBufferPollDelay"]));
    }
    if (m.find("MysqlFilterEnabled") != m.end() && !m["MysqlFilterEnabled"].empty()) {
      mysqlFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["MysqlFilterEnabled"]));
    }
    if (m.find("OPALimitCPU") != m.end() && !m["OPALimitCPU"].empty()) {
      OPALimitCPU = make_shared<string>(boost::any_cast<string>(m["OPALimitCPU"]));
    }
    if (m.find("OPALimitMemory") != m.end() && !m["OPALimitMemory"].empty()) {
      OPALimitMemory = make_shared<string>(boost::any_cast<string>(m["OPALimitMemory"]));
    }
    if (m.find("OPALogLevel") != m.end() && !m["OPALogLevel"].empty()) {
      OPALogLevel = make_shared<string>(boost::any_cast<string>(m["OPALogLevel"]));
    }
    if (m.find("OPARequestCPU") != m.end() && !m["OPARequestCPU"].empty()) {
      OPARequestCPU = make_shared<string>(boost::any_cast<string>(m["OPARequestCPU"]));
    }
    if (m.find("OPARequestMemory") != m.end() && !m["OPARequestMemory"].empty()) {
      OPARequestMemory = make_shared<string>(boost::any_cast<string>(m["OPARequestMemory"]));
    }
    if (m.find("OpaEnabled") != m.end() && !m["OpaEnabled"].empty()) {
      opaEnabled = make_shared<bool>(boost::any_cast<bool>(m["OpaEnabled"]));
    }
    if (m.find("OpenAgentPolicy") != m.end() && !m["OpenAgentPolicy"].empty()) {
      openAgentPolicy = make_shared<bool>(boost::any_cast<bool>(m["OpenAgentPolicy"]));
    }
    if (m.find("OutboundTrafficPolicy") != m.end() && !m["OutboundTrafficPolicy"].empty()) {
      outboundTrafficPolicy = make_shared<string>(boost::any_cast<string>(m["OutboundTrafficPolicy"]));
    }
    if (m.find("PrometheusUrl") != m.end() && !m["PrometheusUrl"].empty()) {
      prometheusUrl = make_shared<string>(boost::any_cast<string>(m["PrometheusUrl"]));
    }
    if (m.find("ProxyInitCPUResourceLimit") != m.end() && !m["ProxyInitCPUResourceLimit"].empty()) {
      proxyInitCPUResourceLimit = make_shared<string>(boost::any_cast<string>(m["ProxyInitCPUResourceLimit"]));
    }
    if (m.find("ProxyInitCPUResourceRequest") != m.end() && !m["ProxyInitCPUResourceRequest"].empty()) {
      proxyInitCPUResourceRequest = make_shared<string>(boost::any_cast<string>(m["ProxyInitCPUResourceRequest"]));
    }
    if (m.find("ProxyInitMemoryResourceLimit") != m.end() && !m["ProxyInitMemoryResourceLimit"].empty()) {
      proxyInitMemoryResourceLimit = make_shared<string>(boost::any_cast<string>(m["ProxyInitMemoryResourceLimit"]));
    }
    if (m.find("ProxyInitMemoryResourceRequest") != m.end() && !m["ProxyInitMemoryResourceRequest"].empty()) {
      proxyInitMemoryResourceRequest = make_shared<string>(boost::any_cast<string>(m["ProxyInitMemoryResourceRequest"]));
    }
    if (m.find("ProxyLimitCPU") != m.end() && !m["ProxyLimitCPU"].empty()) {
      proxyLimitCPU = make_shared<string>(boost::any_cast<string>(m["ProxyLimitCPU"]));
    }
    if (m.find("ProxyLimitMemory") != m.end() && !m["ProxyLimitMemory"].empty()) {
      proxyLimitMemory = make_shared<string>(boost::any_cast<string>(m["ProxyLimitMemory"]));
    }
    if (m.find("ProxyRequestCPU") != m.end() && !m["ProxyRequestCPU"].empty()) {
      proxyRequestCPU = make_shared<string>(boost::any_cast<string>(m["ProxyRequestCPU"]));
    }
    if (m.find("ProxyRequestMemory") != m.end() && !m["ProxyRequestMemory"].empty()) {
      proxyRequestMemory = make_shared<string>(boost::any_cast<string>(m["ProxyRequestMemory"]));
    }
    if (m.find("RedisFilterEnabled") != m.end() && !m["RedisFilterEnabled"].empty()) {
      redisFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["RedisFilterEnabled"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("SidecarInjectorLimitCPU") != m.end() && !m["SidecarInjectorLimitCPU"].empty()) {
      sidecarInjectorLimitCPU = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorLimitCPU"]));
    }
    if (m.find("SidecarInjectorLimitMemory") != m.end() && !m["SidecarInjectorLimitMemory"].empty()) {
      sidecarInjectorLimitMemory = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorLimitMemory"]));
    }
    if (m.find("SidecarInjectorRequestCPU") != m.end() && !m["SidecarInjectorRequestCPU"].empty()) {
      sidecarInjectorRequestCPU = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorRequestCPU"]));
    }
    if (m.find("SidecarInjectorRequestMemory") != m.end() && !m["SidecarInjectorRequestMemory"].empty()) {
      sidecarInjectorRequestMemory = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorRequestMemory"]));
    }
    if (m.find("SidecarInjectorWebhookAsYaml") != m.end() && !m["SidecarInjectorWebhookAsYaml"].empty()) {
      sidecarInjectorWebhookAsYaml = make_shared<string>(boost::any_cast<string>(m["SidecarInjectorWebhookAsYaml"]));
    }
    if (m.find("Telemetry") != m.end() && !m["Telemetry"].empty()) {
      telemetry = make_shared<bool>(boost::any_cast<bool>(m["Telemetry"]));
    }
    if (m.find("TerminationDrainDuration") != m.end() && !m["TerminationDrainDuration"].empty()) {
      terminationDrainDuration = make_shared<string>(boost::any_cast<string>(m["TerminationDrainDuration"]));
    }
    if (m.find("ThriftFilterEnabled") != m.end() && !m["ThriftFilterEnabled"].empty()) {
      thriftFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["ThriftFilterEnabled"]));
    }
    if (m.find("TraceSampling") != m.end() && !m["TraceSampling"].empty()) {
      traceSampling = make_shared<double>(boost::any_cast<double>(m["TraceSampling"]));
    }
    if (m.find("Tracing") != m.end() && !m["Tracing"].empty()) {
      tracing = make_shared<bool>(boost::any_cast<bool>(m["Tracing"]));
    }
    if (m.find("WebAssemblyFilterEnabled") != m.end() && !m["WebAssemblyFilterEnabled"].empty()) {
      webAssemblyFilterEnabled = make_shared<bool>(boost::any_cast<bool>(m["WebAssemblyFilterEnabled"]));
    }
  }


  virtual ~UpdateMeshFeatureRequest() = default;
};
class UpdateMeshFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMeshFeatureResponseBody() {}

  explicit UpdateMeshFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateMeshFeatureResponseBody() = default;
};
class UpdateMeshFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateMeshFeatureResponseBody> body{};

  UpdateMeshFeatureResponse() {}

  explicit UpdateMeshFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateMeshFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMeshFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMeshFeatureResponse() = default;
};
class UpdateNamespaceScopeSidecarConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> excludeIPRanges{};
  shared_ptr<string> excludeInboundPorts{};
  shared_ptr<string> excludeOutboundPorts{};
  shared_ptr<string> includeIPRanges{};
  shared_ptr<string> includeInboundPorts{};
  shared_ptr<string> includeOutboundPorts{};
  shared_ptr<bool> istioDNSProxyEnabled{};
  shared_ptr<string> lifecycle{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> proxyInitCPUResourceLimit{};
  shared_ptr<string> proxyInitCPUResourceRequest{};
  shared_ptr<string> proxyInitMemoryResourceLimit{};
  shared_ptr<string> proxyInitMemoryResourceRequest{};
  shared_ptr<string> serviceMeshId{};
  shared_ptr<string> sidecarProxyCPUResourceLimit{};
  shared_ptr<string> sidecarProxyCPUResourceRequest{};
  shared_ptr<string> sidecarProxyMemoryResourceLimit{};
  shared_ptr<string> sidecarProxyMemoryResourceRequest{};
  shared_ptr<string> terminationDrainDuration{};

  UpdateNamespaceScopeSidecarConfigRequest() {}

  explicit UpdateNamespaceScopeSidecarConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (excludeIPRanges) {
      res["ExcludeIPRanges"] = boost::any(*excludeIPRanges);
    }
    if (excludeInboundPorts) {
      res["ExcludeInboundPorts"] = boost::any(*excludeInboundPorts);
    }
    if (excludeOutboundPorts) {
      res["ExcludeOutboundPorts"] = boost::any(*excludeOutboundPorts);
    }
    if (includeIPRanges) {
      res["IncludeIPRanges"] = boost::any(*includeIPRanges);
    }
    if (includeInboundPorts) {
      res["IncludeInboundPorts"] = boost::any(*includeInboundPorts);
    }
    if (includeOutboundPorts) {
      res["IncludeOutboundPorts"] = boost::any(*includeOutboundPorts);
    }
    if (istioDNSProxyEnabled) {
      res["IstioDNSProxyEnabled"] = boost::any(*istioDNSProxyEnabled);
    }
    if (lifecycle) {
      res["Lifecycle"] = boost::any(*lifecycle);
    }
    if (namespace_) {
      res["Namespace"] = boost::any(*namespace_);
    }
    if (proxyInitCPUResourceLimit) {
      res["ProxyInitCPUResourceLimit"] = boost::any(*proxyInitCPUResourceLimit);
    }
    if (proxyInitCPUResourceRequest) {
      res["ProxyInitCPUResourceRequest"] = boost::any(*proxyInitCPUResourceRequest);
    }
    if (proxyInitMemoryResourceLimit) {
      res["ProxyInitMemoryResourceLimit"] = boost::any(*proxyInitMemoryResourceLimit);
    }
    if (proxyInitMemoryResourceRequest) {
      res["ProxyInitMemoryResourceRequest"] = boost::any(*proxyInitMemoryResourceRequest);
    }
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    if (sidecarProxyCPUResourceLimit) {
      res["SidecarProxyCPUResourceLimit"] = boost::any(*sidecarProxyCPUResourceLimit);
    }
    if (sidecarProxyCPUResourceRequest) {
      res["SidecarProxyCPUResourceRequest"] = boost::any(*sidecarProxyCPUResourceRequest);
    }
    if (sidecarProxyMemoryResourceLimit) {
      res["SidecarProxyMemoryResourceLimit"] = boost::any(*sidecarProxyMemoryResourceLimit);
    }
    if (sidecarProxyMemoryResourceRequest) {
      res["SidecarProxyMemoryResourceRequest"] = boost::any(*sidecarProxyMemoryResourceRequest);
    }
    if (terminationDrainDuration) {
      res["TerminationDrainDuration"] = boost::any(*terminationDrainDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExcludeIPRanges") != m.end() && !m["ExcludeIPRanges"].empty()) {
      excludeIPRanges = make_shared<string>(boost::any_cast<string>(m["ExcludeIPRanges"]));
    }
    if (m.find("ExcludeInboundPorts") != m.end() && !m["ExcludeInboundPorts"].empty()) {
      excludeInboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeInboundPorts"]));
    }
    if (m.find("ExcludeOutboundPorts") != m.end() && !m["ExcludeOutboundPorts"].empty()) {
      excludeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["ExcludeOutboundPorts"]));
    }
    if (m.find("IncludeIPRanges") != m.end() && !m["IncludeIPRanges"].empty()) {
      includeIPRanges = make_shared<string>(boost::any_cast<string>(m["IncludeIPRanges"]));
    }
    if (m.find("IncludeInboundPorts") != m.end() && !m["IncludeInboundPorts"].empty()) {
      includeInboundPorts = make_shared<string>(boost::any_cast<string>(m["IncludeInboundPorts"]));
    }
    if (m.find("IncludeOutboundPorts") != m.end() && !m["IncludeOutboundPorts"].empty()) {
      includeOutboundPorts = make_shared<string>(boost::any_cast<string>(m["IncludeOutboundPorts"]));
    }
    if (m.find("IstioDNSProxyEnabled") != m.end() && !m["IstioDNSProxyEnabled"].empty()) {
      istioDNSProxyEnabled = make_shared<bool>(boost::any_cast<bool>(m["IstioDNSProxyEnabled"]));
    }
    if (m.find("Lifecycle") != m.end() && !m["Lifecycle"].empty()) {
      lifecycle = make_shared<string>(boost::any_cast<string>(m["Lifecycle"]));
    }
    if (m.find("Namespace") != m.end() && !m["Namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["Namespace"]));
    }
    if (m.find("ProxyInitCPUResourceLimit") != m.end() && !m["ProxyInitCPUResourceLimit"].empty()) {
      proxyInitCPUResourceLimit = make_shared<string>(boost::any_cast<string>(m["ProxyInitCPUResourceLimit"]));
    }
    if (m.find("ProxyInitCPUResourceRequest") != m.end() && !m["ProxyInitCPUResourceRequest"].empty()) {
      proxyInitCPUResourceRequest = make_shared<string>(boost::any_cast<string>(m["ProxyInitCPUResourceRequest"]));
    }
    if (m.find("ProxyInitMemoryResourceLimit") != m.end() && !m["ProxyInitMemoryResourceLimit"].empty()) {
      proxyInitMemoryResourceLimit = make_shared<string>(boost::any_cast<string>(m["ProxyInitMemoryResourceLimit"]));
    }
    if (m.find("ProxyInitMemoryResourceRequest") != m.end() && !m["ProxyInitMemoryResourceRequest"].empty()) {
      proxyInitMemoryResourceRequest = make_shared<string>(boost::any_cast<string>(m["ProxyInitMemoryResourceRequest"]));
    }
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
    if (m.find("SidecarProxyCPUResourceLimit") != m.end() && !m["SidecarProxyCPUResourceLimit"].empty()) {
      sidecarProxyCPUResourceLimit = make_shared<string>(boost::any_cast<string>(m["SidecarProxyCPUResourceLimit"]));
    }
    if (m.find("SidecarProxyCPUResourceRequest") != m.end() && !m["SidecarProxyCPUResourceRequest"].empty()) {
      sidecarProxyCPUResourceRequest = make_shared<string>(boost::any_cast<string>(m["SidecarProxyCPUResourceRequest"]));
    }
    if (m.find("SidecarProxyMemoryResourceLimit") != m.end() && !m["SidecarProxyMemoryResourceLimit"].empty()) {
      sidecarProxyMemoryResourceLimit = make_shared<string>(boost::any_cast<string>(m["SidecarProxyMemoryResourceLimit"]));
    }
    if (m.find("SidecarProxyMemoryResourceRequest") != m.end() && !m["SidecarProxyMemoryResourceRequest"].empty()) {
      sidecarProxyMemoryResourceRequest = make_shared<string>(boost::any_cast<string>(m["SidecarProxyMemoryResourceRequest"]));
    }
    if (m.find("TerminationDrainDuration") != m.end() && !m["TerminationDrainDuration"].empty()) {
      terminationDrainDuration = make_shared<string>(boost::any_cast<string>(m["TerminationDrainDuration"]));
    }
  }


  virtual ~UpdateNamespaceScopeSidecarConfigRequest() = default;
};
class UpdateNamespaceScopeSidecarConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateNamespaceScopeSidecarConfigResponseBody() {}

  explicit UpdateNamespaceScopeSidecarConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateNamespaceScopeSidecarConfigResponseBody() = default;
};
class UpdateNamespaceScopeSidecarConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateNamespaceScopeSidecarConfigResponseBody> body{};

  UpdateNamespaceScopeSidecarConfigResponse() {}

  explicit UpdateNamespaceScopeSidecarConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateNamespaceScopeSidecarConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNamespaceScopeSidecarConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNamespaceScopeSidecarConfigResponse() = default;
};
class UpgradeMeshVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceMeshId{};

  UpgradeMeshVersionRequest() {}

  explicit UpgradeMeshVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceMeshId) {
      res["ServiceMeshId"] = boost::any(*serviceMeshId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceMeshId") != m.end() && !m["ServiceMeshId"].empty()) {
      serviceMeshId = make_shared<string>(boost::any_cast<string>(m["ServiceMeshId"]));
    }
  }


  virtual ~UpgradeMeshVersionRequest() = default;
};
class UpgradeMeshVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpgradeMeshVersionResponseBody() {}

  explicit UpgradeMeshVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeMeshVersionResponseBody() = default;
};
class UpgradeMeshVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpgradeMeshVersionResponseBody> body{};

  UpgradeMeshVersionResponse() {}

  explicit UpgradeMeshVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpgradeMeshVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeMeshVersionResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeMeshVersionResponse() = default;
};
class ServiceDirectoryServicesValueValue : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> protocol{};
  shared_ptr<long> port{};
  shared_ptr<long> targetPort{};
  shared_ptr<long> nodePort{};

  ServiceDirectoryServicesValueValue() {}

  explicit ServiceDirectoryServicesValueValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (targetPort) {
      res["TargetPort"] = boost::any(*targetPort);
    }
    if (nodePort) {
      res["NodePort"] = boost::any(*nodePort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("TargetPort") != m.end() && !m["TargetPort"].empty()) {
      targetPort = make_shared<long>(boost::any_cast<long>(m["TargetPort"]));
    }
    if (m.find("NodePort") != m.end() && !m["NodePort"].empty()) {
      nodePort = make_shared<long>(boost::any_cast<long>(m["NodePort"]));
    }
  }


  virtual ~ServiceDirectoryServicesValueValue() = default;
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
  AddBuiltinEnvoyFilterResponse addBuiltinEnvoyFilterWithOptions(shared_ptr<AddBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBuiltinEnvoyFilterResponse addBuiltinEnvoyFilter(shared_ptr<AddBuiltinEnvoyFilterRequest> request);
  AddClusterIntoServiceMeshResponse addClusterIntoServiceMeshWithOptions(shared_ptr<AddClusterIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddClusterIntoServiceMeshResponse addClusterIntoServiceMesh(shared_ptr<AddClusterIntoServiceMeshRequest> request);
  AddMeshTagToEcsResponse addMeshTagToEcsWithOptions(shared_ptr<AddMeshTagToEcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddMeshTagToEcsResponse addMeshTagToEcs(shared_ptr<AddMeshTagToEcsRequest> request);
  AddVMIntoServiceMeshResponse addVMIntoServiceMeshWithOptions(shared_ptr<AddVMIntoServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddVMIntoServiceMeshResponse addVMIntoServiceMesh(shared_ptr<AddVMIntoServiceMeshRequest> request);
  CreateASMGatewayResponse createASMGatewayWithOptions(shared_ptr<CreateASMGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateASMGatewayResponse createASMGateway(shared_ptr<CreateASMGatewayRequest> request);
  CreateExtensionProviderResponse createExtensionProviderWithOptions(shared_ptr<CreateExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExtensionProviderResponse createExtensionProvider(shared_ptr<CreateExtensionProviderRequest> request);
  CreateServiceMeshResponse createServiceMeshWithOptions(shared_ptr<CreateServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceMeshResponse createServiceMesh(shared_ptr<CreateServiceMeshRequest> request);
  DeleteExtensionProviderResponse deleteExtensionProviderWithOptions(shared_ptr<DeleteExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExtensionProviderResponse deleteExtensionProvider(shared_ptr<DeleteExtensionProviderRequest> request);
  DeleteServiceMeshResponse deleteServiceMeshWithOptions(shared_ptr<DeleteServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceMeshResponse deleteServiceMesh(shared_ptr<DeleteServiceMeshRequest> request);
  DescribeASMGatewayImportedServicesResponse describeASMGatewayImportedServicesWithOptions(shared_ptr<DescribeASMGatewayImportedServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeASMGatewayImportedServicesResponse describeASMGatewayImportedServices(shared_ptr<DescribeASMGatewayImportedServicesRequest> request);
  DescribeAlertActionPoliciesResponse describeAlertActionPoliciesWithOptions(shared_ptr<DescribeAlertActionPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlertActionPoliciesResponse describeAlertActionPolicies(shared_ptr<DescribeAlertActionPoliciesRequest> request);
  DescribeAvailableNacosInstancesResponse describeAvailableNacosInstancesWithOptions(shared_ptr<DescribeAvailableNacosInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableNacosInstancesResponse describeAvailableNacosInstances(shared_ptr<DescribeAvailableNacosInstancesRequest> request);
  DescribeCCMVersionResponse describeCCMVersionWithOptions(shared_ptr<DescribeCCMVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCCMVersionResponse describeCCMVersion(shared_ptr<DescribeCCMVersionRequest> request);
  DescribeCensResponse describeCensWithOptions(shared_ptr<DescribeCensRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCensResponse describeCens(shared_ptr<DescribeCensRequest> request);
  DescribeClusterGrafanaResponse describeClusterGrafanaWithOptions(shared_ptr<DescribeClusterGrafanaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterGrafanaResponse describeClusterGrafana(shared_ptr<DescribeClusterGrafanaRequest> request);
  DescribeClusterPrometheusResponse describeClusterPrometheusWithOptions(shared_ptr<DescribeClusterPrometheusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClusterPrometheusResponse describeClusterPrometheus(shared_ptr<DescribeClusterPrometheusRequest> request);
  DescribeClustersInServiceMeshResponse describeClustersInServiceMeshWithOptions(shared_ptr<DescribeClustersInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClustersInServiceMeshResponse describeClustersInServiceMesh(shared_ptr<DescribeClustersInServiceMeshRequest> request);
  DescribeControlPlaneLogAlertRulesResponse describeControlPlaneLogAlertRulesWithOptions(shared_ptr<DescribeControlPlaneLogAlertRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeControlPlaneLogAlertRulesResponse describeControlPlaneLogAlertRules(shared_ptr<DescribeControlPlaneLogAlertRulesRequest> request);
  DescribeCrTemplatesResponse describeCrTemplatesWithOptions(shared_ptr<DescribeCrTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCrTemplatesResponse describeCrTemplates(shared_ptr<DescribeCrTemplatesRequest> request);
  DescribeExtensionProviderResponse describeExtensionProviderWithOptions(shared_ptr<DescribeExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExtensionProviderResponse describeExtensionProvider(shared_ptr<DescribeExtensionProviderRequest> request);
  DescribeGuestClusterAccessLogDashboardsResponse describeGuestClusterAccessLogDashboardsWithOptions(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGuestClusterAccessLogDashboardsResponse describeGuestClusterAccessLogDashboards(shared_ptr<DescribeGuestClusterAccessLogDashboardsRequest> request);
  DescribeGuestClusterNamespacesResponse describeGuestClusterNamespacesWithOptions(shared_ptr<DescribeGuestClusterNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGuestClusterNamespacesResponse describeGuestClusterNamespaces(shared_ptr<DescribeGuestClusterNamespacesRequest> request);
  DescribeGuestClusterPodsResponse describeGuestClusterPodsWithOptions(shared_ptr<DescribeGuestClusterPodsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGuestClusterPodsResponse describeGuestClusterPods(shared_ptr<DescribeGuestClusterPodsRequest> request);
  DescribeImportedServicesDetailResponse describeImportedServicesDetailWithOptions(shared_ptr<DescribeImportedServicesDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImportedServicesDetailResponse describeImportedServicesDetail(shared_ptr<DescribeImportedServicesDetailRequest> request);
  DescribeIngressGatewaysResponse describeIngressGatewaysWithOptions(shared_ptr<DescribeIngressGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIngressGatewaysResponse describeIngressGateways(shared_ptr<DescribeIngressGatewaysRequest> request);
  DescribeNamespaceScopeSidecarConfigResponse describeNamespaceScopeSidecarConfigWithOptions(shared_ptr<DescribeNamespaceScopeSidecarConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNamespaceScopeSidecarConfigResponse describeNamespaceScopeSidecarConfig(shared_ptr<DescribeNamespaceScopeSidecarConfigRequest> request);
  DescribeNodesInstanceTypeResponse describeNodesInstanceTypeWithOptions(shared_ptr<DescribeNodesInstanceTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNodesInstanceTypeResponse describeNodesInstanceType(shared_ptr<DescribeNodesInstanceTypeRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeServiceMeshDetailResponse describeServiceMeshDetailWithOptions(shared_ptr<DescribeServiceMeshDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshDetailResponse describeServiceMeshDetail(shared_ptr<DescribeServiceMeshDetailRequest> request);
  DescribeServiceMeshGatewayPodStatusResponse describeServiceMeshGatewayPodStatusWithOptions(shared_ptr<DescribeServiceMeshGatewayPodStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshGatewayPodStatusResponse describeServiceMeshGatewayPodStatus(shared_ptr<DescribeServiceMeshGatewayPodStatusRequest> request);
  DescribeServiceMeshGatewaySLBStatusResponse describeServiceMeshGatewaySLBStatusWithOptions(shared_ptr<DescribeServiceMeshGatewaySLBStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshGatewaySLBStatusResponse describeServiceMeshGatewaySLBStatus(shared_ptr<DescribeServiceMeshGatewaySLBStatusRequest> request);
  DescribeServiceMeshKubeconfigResponse describeServiceMeshKubeconfigWithOptions(shared_ptr<DescribeServiceMeshKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshKubeconfigResponse describeServiceMeshKubeconfig(shared_ptr<DescribeServiceMeshKubeconfigRequest> request);
  DescribeServiceMeshUpgradeStatusResponse describeServiceMeshUpgradeStatusWithOptions(shared_ptr<DescribeServiceMeshUpgradeStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshUpgradeStatusResponse describeServiceMeshUpgradeStatus(shared_ptr<DescribeServiceMeshUpgradeStatusRequest> request);
  DescribeServiceMeshVMsResponse describeServiceMeshVMsWithOptions(shared_ptr<DescribeServiceMeshVMsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshVMsResponse describeServiceMeshVMs(shared_ptr<DescribeServiceMeshVMsRequest> request);
  DescribeServiceMeshesResponse describeServiceMeshesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceMeshesResponse describeServiceMeshes();
  DescribeUpgradeVersionResponse describeUpgradeVersionWithOptions(shared_ptr<DescribeUpgradeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUpgradeVersionResponse describeUpgradeVersion(shared_ptr<DescribeUpgradeVersionRequest> request);
  DescribeUsersWithPermissionsResponse describeUsersWithPermissionsWithOptions(shared_ptr<DescribeUsersWithPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsersWithPermissionsResponse describeUsersWithPermissions(shared_ptr<DescribeUsersWithPermissionsRequest> request);
  DescribeVMsInServiceMeshResponse describeVMsInServiceMeshWithOptions(shared_ptr<DescribeVMsInServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVMsInServiceMeshResponse describeVMsInServiceMesh(shared_ptr<DescribeVMsInServiceMeshRequest> request);
  DescribeVSwitchesResponse describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVSwitchesResponse describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request);
  DescribeVersionsResponse describeVersionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVersionsResponse describeVersions();
  DescribeVpcsResponse describeVpcsWithOptions(shared_ptr<DescribeVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcsResponse describeVpcs(shared_ptr<DescribeVpcsRequest> request);
  DisableControlPlaneLogAlertResponse disableControlPlaneLogAlertWithOptions(shared_ptr<DisableControlPlaneLogAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableControlPlaneLogAlertResponse disableControlPlaneLogAlert(shared_ptr<DisableControlPlaneLogAlertRequest> request);
  EnableControlPlaneLogAlertResponse enableControlPlaneLogAlertWithOptions(shared_ptr<EnableControlPlaneLogAlertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableControlPlaneLogAlertResponse enableControlPlaneLogAlert(shared_ptr<EnableControlPlaneLogAlertRequest> request);
  GetAutoInjectionLabelSyncStatusResponse getAutoInjectionLabelSyncStatusWithOptions(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAutoInjectionLabelSyncStatusResponse getAutoInjectionLabelSyncStatus(shared_ptr<GetAutoInjectionLabelSyncStatusRequest> request);
  GetBuiltinEnvoyFilterResponse getBuiltinEnvoyFilterWithOptions(shared_ptr<GetBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBuiltinEnvoyFilterResponse getBuiltinEnvoyFilter(shared_ptr<GetBuiltinEnvoyFilterRequest> request);
  GetBuiltinEnvoyFilterCatalogResponse getBuiltinEnvoyFilterCatalogWithOptions(shared_ptr<GetBuiltinEnvoyFilterCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBuiltinEnvoyFilterCatalogResponse getBuiltinEnvoyFilterCatalog(shared_ptr<GetBuiltinEnvoyFilterCatalogRequest> request);
  GetCaCertResponse getCaCertWithOptions(shared_ptr<GetCaCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCaCertResponse getCaCert(shared_ptr<GetCaCertRequest> request);
  GetDiagnosisResponse getDiagnosisWithOptions(shared_ptr<GetDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiagnosisResponse getDiagnosis(shared_ptr<GetDiagnosisRequest> request);
  GetEcsListResponse getEcsListWithOptions(shared_ptr<GetEcsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEcsListResponse getEcsList(shared_ptr<GetEcsListRequest> request);
  GetRegisteredServiceEndpointsResponse getRegisteredServiceEndpointsWithOptions(shared_ptr<GetRegisteredServiceEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisteredServiceEndpointsResponse getRegisteredServiceEndpoints(shared_ptr<GetRegisteredServiceEndpointsRequest> request);
  GetRegisteredServiceNamespacesResponse getRegisteredServiceNamespacesWithOptions(shared_ptr<GetRegisteredServiceNamespacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisteredServiceNamespacesResponse getRegisteredServiceNamespaces(shared_ptr<GetRegisteredServiceNamespacesRequest> request);
  GetRegisteredServicesResponse getRegisteredServicesWithOptions(shared_ptr<GetRegisteredServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisteredServicesResponse getRegisteredServices(shared_ptr<GetRegisteredServicesRequest> request);
  GetSaTokenResponse getSaTokenWithOptions(shared_ptr<GetSaTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSaTokenResponse getSaToken(shared_ptr<GetSaTokenRequest> request);
  GetServiceMeshSlbResponse getServiceMeshSlbWithOptions(shared_ptr<GetServiceMeshSlbRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceMeshSlbResponse getServiceMeshSlb(shared_ptr<GetServiceMeshSlbRequest> request);
  GetServiceRegistrySourceResponse getServiceRegistrySourceWithOptions(shared_ptr<GetServiceRegistrySourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceRegistrySourceResponse getServiceRegistrySource(shared_ptr<GetServiceRegistrySourceRequest> request);
  GetVmAppMeshInfoResponse getVmAppMeshInfoWithOptions(shared_ptr<GetVmAppMeshInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVmAppMeshInfoResponse getVmAppMeshInfo(shared_ptr<GetVmAppMeshInfoRequest> request);
  GetVmMetaResponse getVmMetaWithOptions(shared_ptr<GetVmMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVmMetaResponse getVmMeta(shared_ptr<GetVmMetaRequest> request);
  InitializeASMRoleResponse initializeASMRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitializeASMRoleResponse initializeASMRole();
  ListBuiltinEnvoyFilterResponse listBuiltinEnvoyFilterWithOptions(shared_ptr<ListBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBuiltinEnvoyFilterResponse listBuiltinEnvoyFilter(shared_ptr<ListBuiltinEnvoyFilterRequest> request);
  ModifyBuiltinEnvoyFilterResponse modifyBuiltinEnvoyFilterWithOptions(shared_ptr<ModifyBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyBuiltinEnvoyFilterResponse modifyBuiltinEnvoyFilter(shared_ptr<ModifyBuiltinEnvoyFilterRequest> request);
  ModifyServiceMeshNameResponse modifyServiceMeshNameWithOptions(shared_ptr<ModifyServiceMeshNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyServiceMeshNameResponse modifyServiceMeshName(shared_ptr<ModifyServiceMeshNameRequest> request);
  ReActivateAuditResponse reActivateAuditWithOptions(shared_ptr<ReActivateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReActivateAuditResponse reActivateAudit(shared_ptr<ReActivateAuditRequest> request);
  RemoveBuiltinEnvoyFilterResponse removeBuiltinEnvoyFilterWithOptions(shared_ptr<RemoveBuiltinEnvoyFilterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveBuiltinEnvoyFilterResponse removeBuiltinEnvoyFilter(shared_ptr<RemoveBuiltinEnvoyFilterRequest> request);
  RemoveClusterFromServiceMeshResponse removeClusterFromServiceMeshWithOptions(shared_ptr<RemoveClusterFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveClusterFromServiceMeshResponse removeClusterFromServiceMesh(shared_ptr<RemoveClusterFromServiceMeshRequest> request);
  RemoveVMFromServiceMeshResponse removeVMFromServiceMeshWithOptions(shared_ptr<RemoveVMFromServiceMeshRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveVMFromServiceMeshResponse removeVMFromServiceMesh(shared_ptr<RemoveVMFromServiceMeshRequest> request);
  RevokeKubeconfigResponse revokeKubeconfigWithOptions(shared_ptr<RevokeKubeconfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeKubeconfigResponse revokeKubeconfig(shared_ptr<RevokeKubeconfigRequest> request);
  RunDiagnosisResponse runDiagnosisWithOptions(shared_ptr<RunDiagnosisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDiagnosisResponse runDiagnosis(shared_ptr<RunDiagnosisRequest> request);
  SetServiceRegistrySourceResponse setServiceRegistrySourceWithOptions(shared_ptr<SetServiceRegistrySourceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetServiceRegistrySourceResponse setServiceRegistrySource(shared_ptr<SetServiceRegistrySourceRequest> request);
  UpdateASMGatewayResponse updateASMGatewayWithOptions(shared_ptr<UpdateASMGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateASMGatewayResponse updateASMGateway(shared_ptr<UpdateASMGatewayRequest> request);
  UpdateASMGatewayImportedServicesResponse updateASMGatewayImportedServicesWithOptions(shared_ptr<UpdateASMGatewayImportedServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateASMGatewayImportedServicesResponse updateASMGatewayImportedServices(shared_ptr<UpdateASMGatewayImportedServicesRequest> request);
  UpdateControlPlaneLogAlertActionPolicyResponse updateControlPlaneLogAlertActionPolicyWithOptions(shared_ptr<UpdateControlPlaneLogAlertActionPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateControlPlaneLogAlertActionPolicyResponse updateControlPlaneLogAlertActionPolicy(shared_ptr<UpdateControlPlaneLogAlertActionPolicyRequest> request);
  UpdateControlPlaneLogConfigResponse updateControlPlaneLogConfigWithOptions(shared_ptr<UpdateControlPlaneLogConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateControlPlaneLogConfigResponse updateControlPlaneLogConfig(shared_ptr<UpdateControlPlaneLogConfigRequest> request);
  UpdateExtensionProviderResponse updateExtensionProviderWithOptions(shared_ptr<UpdateExtensionProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExtensionProviderResponse updateExtensionProvider(shared_ptr<UpdateExtensionProviderRequest> request);
  UpdateIstioInjectionConfigResponse updateIstioInjectionConfigWithOptions(shared_ptr<UpdateIstioInjectionConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIstioInjectionConfigResponse updateIstioInjectionConfig(shared_ptr<UpdateIstioInjectionConfigRequest> request);
  UpdateMeshFeatureResponse updateMeshFeatureWithOptions(shared_ptr<UpdateMeshFeatureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMeshFeatureResponse updateMeshFeature(shared_ptr<UpdateMeshFeatureRequest> request);
  UpdateNamespaceScopeSidecarConfigResponse updateNamespaceScopeSidecarConfigWithOptions(shared_ptr<UpdateNamespaceScopeSidecarConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNamespaceScopeSidecarConfigResponse updateNamespaceScopeSidecarConfig(shared_ptr<UpdateNamespaceScopeSidecarConfigRequest> request);
  UpgradeMeshVersionResponse upgradeMeshVersionWithOptions(shared_ptr<UpgradeMeshVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeMeshVersionResponse upgradeMeshVersion(shared_ptr<UpgradeMeshVersionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Servicemesh20200111

#endif
