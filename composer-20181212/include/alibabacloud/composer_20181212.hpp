// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_COMPOSER20181212_H_
#define ALIBABACLOUD_COMPOSER20181212_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Composer20181212 {
class CloneFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};
  shared_ptr<string> versionId{};

  CloneFlowRequest() {}

  explicit CloneFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~CloneFlowRequest() = default;
};
class CloneFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};
  shared_ptr<string> requestId{};

  CloneFlowResponseBody() {}

  explicit CloneFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneFlowResponseBody() = default;
};
class CloneFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloneFlowResponseBody> body{};

  CloneFlowResponse() {}

  explicit CloneFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneFlowResponseBody>(model1);
      }
    }
  }


  virtual ~CloneFlowResponse() = default;
};
class CreateFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> flowDescription{};
  shared_ptr<string> flowName{};
  shared_ptr<string> flowSource{};
  shared_ptr<string> templateId{};

  CreateFlowRequest() {}

  explicit CreateFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (flowDescription) {
      res["FlowDescription"] = boost::any(*flowDescription);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (flowSource) {
      res["FlowSource"] = boost::any(*flowSource);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("FlowDescription") != m.end() && !m["FlowDescription"].empty()) {
      flowDescription = make_shared<string>(boost::any_cast<string>(m["FlowDescription"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("FlowSource") != m.end() && !m["FlowSource"].empty()) {
      flowSource = make_shared<string>(boost::any_cast<string>(m["FlowSource"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateFlowRequest() = default;
};
class CreateFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};
  shared_ptr<string> requestId{};

  CreateFlowResponseBody() {}

  explicit CreateFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFlowResponseBody() = default;
};
class CreateFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFlowResponseBody> body{};

  CreateFlowResponse() {}

  explicit CreateFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFlowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFlowResponse() = default;
};
class DeleteFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};

  DeleteFlowRequest() {}

  explicit DeleteFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~DeleteFlowRequest() = default;
};
class DeleteFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFlowResponseBody() {}

  explicit DeleteFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFlowResponseBody() = default;
};
class DeleteFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFlowResponseBody> body{};

  DeleteFlowResponse() {}

  explicit DeleteFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFlowResponse() = default;
};
class DisableFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};

  DisableFlowRequest() {}

  explicit DisableFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~DisableFlowRequest() = default;
};
class DisableFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableFlowResponseBody() {}

  explicit DisableFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
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
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<string>(boost::any_cast<string>(m["FlowStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DisableFlowResponseBody() = default;
};
class DisableFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableFlowResponseBody> body{};

  DisableFlowResponse() {}

  explicit DisableFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DisableFlowResponse() = default;
};
class EnableFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};

  EnableFlowRequest() {}

  explicit EnableFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~EnableFlowRequest() = default;
};
class EnableFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> flowStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableFlowResponseBody() {}

  explicit EnableFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
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
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<string>(boost::any_cast<string>(m["FlowStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnableFlowResponseBody() = default;
};
class EnableFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnableFlowResponseBody> body{};

  EnableFlowResponse() {}

  explicit EnableFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableFlowResponseBody>(model1);
      }
    }
  }


  virtual ~EnableFlowResponse() = default;
};
class GetFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};

  GetFlowRequest() {}

  explicit GetFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
  }


  virtual ~GetFlowRequest() = default;
};
class GetFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> currentVersionId{};
  shared_ptr<string> definition{};
  shared_ptr<string> flowDescription{};
  shared_ptr<string> flowEditMode{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};
  shared_ptr<string> flowSource{};
  shared_ptr<string> flowStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> updateTime{};

  GetFlowResponseBody() {}

  explicit GetFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentVersionId) {
      res["CurrentVersionId"] = boost::any(*currentVersionId);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (flowDescription) {
      res["FlowDescription"] = boost::any(*flowDescription);
    }
    if (flowEditMode) {
      res["FlowEditMode"] = boost::any(*flowEditMode);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (flowSource) {
      res["FlowSource"] = boost::any(*flowSource);
    }
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentVersionId") != m.end() && !m["CurrentVersionId"].empty()) {
      currentVersionId = make_shared<long>(boost::any_cast<long>(m["CurrentVersionId"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("FlowDescription") != m.end() && !m["FlowDescription"].empty()) {
      flowDescription = make_shared<string>(boost::any_cast<string>(m["FlowDescription"]));
    }
    if (m.find("FlowEditMode") != m.end() && !m["FlowEditMode"].empty()) {
      flowEditMode = make_shared<string>(boost::any_cast<string>(m["FlowEditMode"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("FlowSource") != m.end() && !m["FlowSource"].empty()) {
      flowSource = make_shared<string>(boost::any_cast<string>(m["FlowSource"]));
    }
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<string>(boost::any_cast<string>(m["FlowStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetFlowResponseBody() = default;
};
class GetFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFlowResponseBody> body{};

  GetFlowResponse() {}

  explicit GetFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowResponse() = default;
};
class GetTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  GetTemplateRequest() {}

  explicit GetTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~GetTemplateRequest() = default;
};
class GetTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> definition{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateConnector{};
  shared_ptr<string> templateCreator{};
  shared_ptr<string> templateDescription{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateLocale{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateOverview{};
  shared_ptr<string> templateSummary{};
  shared_ptr<string> templateSummaryEn{};
  shared_ptr<string> templateTag{};
  shared_ptr<long> templateVersion{};
  shared_ptr<string> updateTime{};

  GetTemplateResponseBody() {}

  explicit GetTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateConnector) {
      res["TemplateConnector"] = boost::any(*templateConnector);
    }
    if (templateCreator) {
      res["TemplateCreator"] = boost::any(*templateCreator);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateLocale) {
      res["TemplateLocale"] = boost::any(*templateLocale);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateOverview) {
      res["TemplateOverview"] = boost::any(*templateOverview);
    }
    if (templateSummary) {
      res["TemplateSummary"] = boost::any(*templateSummary);
    }
    if (templateSummaryEn) {
      res["TemplateSummaryEn"] = boost::any(*templateSummaryEn);
    }
    if (templateTag) {
      res["TemplateTag"] = boost::any(*templateTag);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateConnector") != m.end() && !m["TemplateConnector"].empty()) {
      templateConnector = make_shared<string>(boost::any_cast<string>(m["TemplateConnector"]));
    }
    if (m.find("TemplateCreator") != m.end() && !m["TemplateCreator"].empty()) {
      templateCreator = make_shared<string>(boost::any_cast<string>(m["TemplateCreator"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateLocale") != m.end() && !m["TemplateLocale"].empty()) {
      templateLocale = make_shared<string>(boost::any_cast<string>(m["TemplateLocale"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateOverview") != m.end() && !m["TemplateOverview"].empty()) {
      templateOverview = make_shared<string>(boost::any_cast<string>(m["TemplateOverview"]));
    }
    if (m.find("TemplateSummary") != m.end() && !m["TemplateSummary"].empty()) {
      templateSummary = make_shared<string>(boost::any_cast<string>(m["TemplateSummary"]));
    }
    if (m.find("TemplateSummaryEn") != m.end() && !m["TemplateSummaryEn"].empty()) {
      templateSummaryEn = make_shared<string>(boost::any_cast<string>(m["TemplateSummaryEn"]));
    }
    if (m.find("TemplateTag") != m.end() && !m["TemplateTag"].empty()) {
      templateTag = make_shared<string>(boost::any_cast<string>(m["TemplateTag"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<long>(boost::any_cast<long>(m["TemplateVersion"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~GetTemplateResponseBody() = default;
};
class GetTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTemplateResponseBody> body{};

  GetTemplateResponse() {}

  explicit GetTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetTemplateResponse() = default;
};
class GetVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};
  shared_ptr<string> versionId{};

  GetVersionRequest() {}

  explicit GetVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetVersionRequest() = default;
};
class GetVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> definition{};
  shared_ptr<string> flowId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> versionDescription{};
  shared_ptr<string> versionId{};
  shared_ptr<string> versionName{};
  shared_ptr<string> versionStatus{};

  GetVersionResponseBody() {}

  explicit GetVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionDescription) {
      res["VersionDescription"] = boost::any(*versionDescription);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (versionStatus) {
      res["VersionStatus"] = boost::any(*versionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionDescription") != m.end() && !m["VersionDescription"].empty()) {
      versionDescription = make_shared<string>(boost::any_cast<string>(m["VersionDescription"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VersionStatus") != m.end() && !m["VersionStatus"].empty()) {
      versionStatus = make_shared<string>(boost::any_cast<string>(m["VersionStatus"]));
    }
  }


  virtual ~GetVersionResponseBody() = default;
};
class GetVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVersionResponseBody> body{};

  GetVersionResponse() {}

  explicit GetVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetVersionResponse() = default;
};
class GroupInvokeFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> data{};
  shared_ptr<string> flowId{};
  shared_ptr<string> groupKey{};
  shared_ptr<string> tags{};
  shared_ptr<long> totalCount{};

  GroupInvokeFlowRequest() {}

  explicit GroupInvokeFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (groupKey) {
      res["GroupKey"] = boost::any(*groupKey);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("GroupKey") != m.end() && !m["GroupKey"].empty()) {
      groupKey = make_shared<string>(boost::any_cast<string>(m["GroupKey"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GroupInvokeFlowRequest() = default;
};
class GroupInvokeFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentCount{};
  shared_ptr<string> groupInvocationId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GroupInvokeFlowResponseBody() {}

  explicit GroupInvokeFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentCount) {
      res["CurrentCount"] = boost::any(*currentCount);
    }
    if (groupInvocationId) {
      res["GroupInvocationId"] = boost::any(*groupInvocationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentCount") != m.end() && !m["CurrentCount"].empty()) {
      currentCount = make_shared<long>(boost::any_cast<long>(m["CurrentCount"]));
    }
    if (m.find("GroupInvocationId") != m.end() && !m["GroupInvocationId"].empty()) {
      groupInvocationId = make_shared<string>(boost::any_cast<string>(m["GroupInvocationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GroupInvokeFlowResponseBody() = default;
};
class GroupInvokeFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GroupInvokeFlowResponseBody> body{};

  GroupInvokeFlowResponse() {}

  explicit GroupInvokeFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GroupInvokeFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GroupInvokeFlowResponseBody>(model1);
      }
    }
  }


  virtual ~GroupInvokeFlowResponse() = default;
};
class InvokeFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> data{};
  shared_ptr<string> flowId{};
  shared_ptr<string> parameters{};

  InvokeFlowRequest() {}

  explicit InvokeFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
  }


  virtual ~InvokeFlowRequest() = default;
};
class InvokeFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> invocationId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InvokeFlowResponseBody() {}

  explicit InvokeFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invocationId) {
      res["InvocationId"] = boost::any(*invocationId);
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
    if (m.find("InvocationId") != m.end() && !m["InvocationId"].empty()) {
      invocationId = make_shared<string>(boost::any_cast<string>(m["InvocationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InvokeFlowResponseBody() = default;
};
class InvokeFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InvokeFlowResponseBody> body{};

  InvokeFlowResponse() {}

  explicit InvokeFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvokeFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvokeFlowResponseBody>(model1);
      }
    }
  }


  virtual ~InvokeFlowResponse() = default;
};
class ListFlowsRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> flowName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListFlowsRequest() {}

  explicit ListFlowsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
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
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListFlowsRequest() = default;
};
class ListFlowsResponseBodyFlows : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> flowDescription{};
  shared_ptr<string> flowEditMode{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};
  shared_ptr<string> flowSource{};
  shared_ptr<string> flowStatus{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> versionId{};

  ListFlowsResponseBodyFlows() {}

  explicit ListFlowsResponseBodyFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (flowDescription) {
      res["FlowDescription"] = boost::any(*flowDescription);
    }
    if (flowEditMode) {
      res["FlowEditMode"] = boost::any(*flowEditMode);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    if (flowSource) {
      res["FlowSource"] = boost::any(*flowSource);
    }
    if (flowStatus) {
      res["FlowStatus"] = boost::any(*flowStatus);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FlowDescription") != m.end() && !m["FlowDescription"].empty()) {
      flowDescription = make_shared<string>(boost::any_cast<string>(m["FlowDescription"]));
    }
    if (m.find("FlowEditMode") != m.end() && !m["FlowEditMode"].empty()) {
      flowEditMode = make_shared<string>(boost::any_cast<string>(m["FlowEditMode"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
    if (m.find("FlowSource") != m.end() && !m["FlowSource"].empty()) {
      flowSource = make_shared<string>(boost::any_cast<string>(m["FlowSource"]));
    }
    if (m.find("FlowStatus") != m.end() && !m["FlowStatus"].empty()) {
      flowStatus = make_shared<string>(boost::any_cast<string>(m["FlowStatus"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["VersionId"]));
    }
  }


  virtual ~ListFlowsResponseBodyFlows() = default;
};
class ListFlowsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFlowsResponseBodyFlows>> flows{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFlowsResponseBody() {}

  explicit ListFlowsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flows) {
      vector<boost::any> temp1;
      for(auto item1:*flows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Flows"] = boost::any(temp1);
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
    if (m.find("Flows") != m.end() && !m["Flows"].empty()) {
      if (typeid(vector<boost::any>) == m["Flows"].type()) {
        vector<ListFlowsResponseBodyFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Flows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFlowsResponseBodyFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        flows = make_shared<vector<ListFlowsResponseBodyFlows>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFlowsResponseBody() = default;
};
class ListFlowsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListFlowsResponseBody> body{};

  ListFlowsResponse() {}

  explicit ListFlowsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFlowsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFlowsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFlowsResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
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
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTagResourcesResponseBodyTagResources>> tagResources{};
  shared_ptr<long> totalCount{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      vector<boost::any> temp1;
      for(auto item1:*tagResources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResources"].type()) {
        vector<ListTagResourcesResponseBodyTagResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResources = make_shared<vector<ListTagResourcesResponseBodyTagResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ListTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tag{};

  ListTemplatesRequest() {}

  explicit ListTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~ListTemplatesRequest() = default;
};
class ListTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> templateConnector{};
  shared_ptr<string> templateCreator{};
  shared_ptr<string> templateDescription{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateLocale{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateOverview{};
  shared_ptr<string> templateSummary{};
  shared_ptr<string> templateSummaryEn{};
  shared_ptr<string> templateTag{};
  shared_ptr<long> templateVersion{};
  shared_ptr<string> updateTime{};

  ListTemplatesResponseBodyTemplates() {}

  explicit ListTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (templateConnector) {
      res["TemplateConnector"] = boost::any(*templateConnector);
    }
    if (templateCreator) {
      res["TemplateCreator"] = boost::any(*templateCreator);
    }
    if (templateDescription) {
      res["TemplateDescription"] = boost::any(*templateDescription);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateLocale) {
      res["TemplateLocale"] = boost::any(*templateLocale);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateOverview) {
      res["TemplateOverview"] = boost::any(*templateOverview);
    }
    if (templateSummary) {
      res["TemplateSummary"] = boost::any(*templateSummary);
    }
    if (templateSummaryEn) {
      res["TemplateSummaryEn"] = boost::any(*templateSummaryEn);
    }
    if (templateTag) {
      res["TemplateTag"] = boost::any(*templateTag);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TemplateConnector") != m.end() && !m["TemplateConnector"].empty()) {
      templateConnector = make_shared<string>(boost::any_cast<string>(m["TemplateConnector"]));
    }
    if (m.find("TemplateCreator") != m.end() && !m["TemplateCreator"].empty()) {
      templateCreator = make_shared<string>(boost::any_cast<string>(m["TemplateCreator"]));
    }
    if (m.find("TemplateDescription") != m.end() && !m["TemplateDescription"].empty()) {
      templateDescription = make_shared<string>(boost::any_cast<string>(m["TemplateDescription"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateLocale") != m.end() && !m["TemplateLocale"].empty()) {
      templateLocale = make_shared<string>(boost::any_cast<string>(m["TemplateLocale"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateOverview") != m.end() && !m["TemplateOverview"].empty()) {
      templateOverview = make_shared<string>(boost::any_cast<string>(m["TemplateOverview"]));
    }
    if (m.find("TemplateSummary") != m.end() && !m["TemplateSummary"].empty()) {
      templateSummary = make_shared<string>(boost::any_cast<string>(m["TemplateSummary"]));
    }
    if (m.find("TemplateSummaryEn") != m.end() && !m["TemplateSummaryEn"].empty()) {
      templateSummaryEn = make_shared<string>(boost::any_cast<string>(m["TemplateSummaryEn"]));
    }
    if (m.find("TemplateTag") != m.end() && !m["TemplateTag"].empty()) {
      templateTag = make_shared<string>(boost::any_cast<string>(m["TemplateTag"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<long>(boost::any_cast<long>(m["TemplateVersion"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListTemplatesResponseBodyTemplates() = default;
};
class ListTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTemplatesResponseBodyTemplates>> templates{};
  shared_ptr<long> totalCount{};

  ListTemplatesResponseBody() {}

  explicit ListTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListTemplatesResponseBodyTemplates>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTemplatesResponseBody() = default;
};
class ListTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTemplatesResponseBody> body{};

  ListTemplatesResponse() {}

  explicit ListTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTemplatesResponse() = default;
};
class ListVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> flowId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListVersionsRequest() {}

  explicit ListVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
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
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListVersionsRequest() = default;
};
class ListVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> flowId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> versionId{};
  shared_ptr<long> versionName{};
  shared_ptr<long> versionStatus{};

  ListVersionsResponseBodyVersions() {}

  explicit ListVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (versionStatus) {
      res["VersionStatus"] = boost::any(*versionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<long>(boost::any_cast<long>(m["VersionName"]));
    }
    if (m.find("VersionStatus") != m.end() && !m["VersionStatus"].empty()) {
      versionStatus = make_shared<long>(boost::any_cast<long>(m["VersionStatus"]));
    }
  }


  virtual ~ListVersionsResponseBodyVersions() = default;
};
class ListVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListVersionsResponseBodyVersions>> versions{};

  ListVersionsResponseBody() {}

  explicit ListVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<ListVersionsResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVersionsResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListVersionsResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~ListVersionsResponseBody() = default;
};
class ListVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVersionsResponseBody> body{};

  ListVersionsResponse() {}

  explicit ListVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListVersionsResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateFlowRequest : public Darabonba::Model {
public:
  shared_ptr<string> definition{};
  shared_ptr<string> flowDescription{};
  shared_ptr<string> flowId{};
  shared_ptr<string> flowName{};

  UpdateFlowRequest() {}

  explicit UpdateFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (definition) {
      res["Definition"] = boost::any(*definition);
    }
    if (flowDescription) {
      res["FlowDescription"] = boost::any(*flowDescription);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (flowName) {
      res["FlowName"] = boost::any(*flowName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Definition") != m.end() && !m["Definition"].empty()) {
      definition = make_shared<string>(boost::any_cast<string>(m["Definition"]));
    }
    if (m.find("FlowDescription") != m.end() && !m["FlowDescription"].empty()) {
      flowDescription = make_shared<string>(boost::any_cast<string>(m["FlowDescription"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<string>(boost::any_cast<string>(m["FlowId"]));
    }
    if (m.find("FlowName") != m.end() && !m["FlowName"].empty()) {
      flowName = make_shared<string>(boost::any_cast<string>(m["FlowName"]));
    }
  }


  virtual ~UpdateFlowRequest() = default;
};
class UpdateFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentVersionId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFlowResponseBody() {}

  explicit UpdateFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentVersionId) {
      res["CurrentVersionId"] = boost::any(*currentVersionId);
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
    if (m.find("CurrentVersionId") != m.end() && !m["CurrentVersionId"].empty()) {
      currentVersionId = make_shared<long>(boost::any_cast<long>(m["CurrentVersionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFlowResponseBody() = default;
};
class UpdateFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFlowResponseBody> body{};

  UpdateFlowResponse() {}

  explicit UpdateFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFlowResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFlowResponse() = default;
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
  CloneFlowResponse cloneFlowWithOptions(shared_ptr<CloneFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneFlowResponse cloneFlow(shared_ptr<CloneFlowRequest> request);
  CreateFlowResponse createFlowWithOptions(shared_ptr<CreateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFlowResponse createFlow(shared_ptr<CreateFlowRequest> request);
  DeleteFlowResponse deleteFlowWithOptions(shared_ptr<DeleteFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFlowResponse deleteFlow(shared_ptr<DeleteFlowRequest> request);
  DisableFlowResponse disableFlowWithOptions(shared_ptr<DisableFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableFlowResponse disableFlow(shared_ptr<DisableFlowRequest> request);
  EnableFlowResponse enableFlowWithOptions(shared_ptr<EnableFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableFlowResponse enableFlow(shared_ptr<EnableFlowRequest> request);
  GetFlowResponse getFlowWithOptions(shared_ptr<GetFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowResponse getFlow(shared_ptr<GetFlowRequest> request);
  GetTemplateResponse getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTemplateResponse getTemplate(shared_ptr<GetTemplateRequest> request);
  GetVersionResponse getVersionWithOptions(shared_ptr<GetVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVersionResponse getVersion(shared_ptr<GetVersionRequest> request);
  GroupInvokeFlowResponse groupInvokeFlowWithOptions(shared_ptr<GroupInvokeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GroupInvokeFlowResponse groupInvokeFlow(shared_ptr<GroupInvokeFlowRequest> request);
  InvokeFlowResponse invokeFlowWithOptions(shared_ptr<InvokeFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeFlowResponse invokeFlow(shared_ptr<InvokeFlowRequest> request);
  ListFlowsResponse listFlowsWithOptions(shared_ptr<ListFlowsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFlowsResponse listFlows(shared_ptr<ListFlowsRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ListTemplatesResponse listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTemplatesResponse listTemplates(shared_ptr<ListTemplatesRequest> request);
  ListVersionsResponse listVersionsWithOptions(shared_ptr<ListVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVersionsResponse listVersions(shared_ptr<ListVersionsRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateFlowResponse updateFlowWithOptions(shared_ptr<UpdateFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFlowResponse updateFlow(shared_ptr<UpdateFlowRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Composer20181212

#endif
