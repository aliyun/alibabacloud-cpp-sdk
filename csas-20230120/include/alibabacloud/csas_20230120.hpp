// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CSAS20230120_H_
#define ALIBABACLOUD_CSAS20230120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Csas20230120 {
class AttachApplication2ConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> connectorId{};

  AttachApplication2ConnectorRequest() {}

  explicit AttachApplication2ConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (connectorId) {
      res["ConnectorId"] = boost::any(*connectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectorId") != m.end() && !m["ConnectorId"].empty()) {
      connectorId = make_shared<string>(boost::any_cast<string>(m["ConnectorId"]));
    }
  }


  virtual ~AttachApplication2ConnectorRequest() = default;
};
class AttachApplication2ConnectorShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationIdsShrink{};
  shared_ptr<string> connectorId{};

  AttachApplication2ConnectorShrinkRequest() {}

  explicit AttachApplication2ConnectorShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIdsShrink) {
      res["ApplicationIds"] = boost::any(*applicationIdsShrink);
    }
    if (connectorId) {
      res["ConnectorId"] = boost::any(*connectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      applicationIdsShrink = make_shared<string>(boost::any_cast<string>(m["ApplicationIds"]));
    }
    if (m.find("ConnectorId") != m.end() && !m["ConnectorId"].empty()) {
      connectorId = make_shared<string>(boost::any_cast<string>(m["ConnectorId"]));
    }
  }


  virtual ~AttachApplication2ConnectorShrinkRequest() = default;
};
class AttachApplication2ConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachApplication2ConnectorResponseBody() {}

  explicit AttachApplication2ConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachApplication2ConnectorResponseBody() = default;
};
class AttachApplication2ConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachApplication2ConnectorResponseBody> body{};

  AttachApplication2ConnectorResponse() {}

  explicit AttachApplication2ConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachApplication2ConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachApplication2ConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~AttachApplication2ConnectorResponse() = default;
};
class CreateDynamicRouteRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> description{};
  shared_ptr<string> dynamicRouteType{};
  shared_ptr<string> name{};
  shared_ptr<string> nextHop{};
  shared_ptr<long> priority{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  CreateDynamicRouteRequest() {}

  explicit CreateDynamicRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dynamicRouteType) {
      res["DynamicRouteType"] = boost::any(*dynamicRouteType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextHop) {
      res["NextHop"] = boost::any(*nextHop);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DynamicRouteType") != m.end() && !m["DynamicRouteType"].empty()) {
      dynamicRouteType = make_shared<string>(boost::any_cast<string>(m["DynamicRouteType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextHop") != m.end() && !m["NextHop"].empty()) {
      nextHop = make_shared<string>(boost::any_cast<string>(m["NextHop"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDynamicRouteRequest() = default;
};
class CreateDynamicRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> dynamicRouteId{};
  shared_ptr<string> requestId{};

  CreateDynamicRouteResponseBody() {}

  explicit CreateDynamicRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDynamicRouteResponseBody() = default;
};
class CreateDynamicRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDynamicRouteResponseBody> body{};

  CreateDynamicRouteResponse() {}

  explicit CreateDynamicRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDynamicRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDynamicRouteResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDynamicRouteResponse() = default;
};
class CreatePrivateAccessApplicationRequestPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  CreatePrivateAccessApplicationRequestPortRanges() {}

  explicit CreatePrivateAccessApplicationRequestPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~CreatePrivateAccessApplicationRequestPortRanges() = default;
};
class CreatePrivateAccessApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreatePrivateAccessApplicationRequestPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  CreatePrivateAccessApplicationRequest() {}

  explicit CreatePrivateAccessApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<CreatePrivateAccessApplicationRequestPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrivateAccessApplicationRequestPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<CreatePrivateAccessApplicationRequestPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreatePrivateAccessApplicationRequest() = default;
};
class CreatePrivateAccessApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> requestId{};

  CreatePrivateAccessApplicationResponseBody() {}

  explicit CreatePrivateAccessApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePrivateAccessApplicationResponseBody() = default;
};
class CreatePrivateAccessApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrivateAccessApplicationResponseBody> body{};

  CreatePrivateAccessApplicationResponse() {}

  explicit CreatePrivateAccessApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrivateAccessApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrivateAccessApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrivateAccessApplicationResponse() = default;
};
class CreatePrivateAccessPolicyRequestCustomUserAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  CreatePrivateAccessPolicyRequestCustomUserAttributes() {}

  explicit CreatePrivateAccessPolicyRequestCustomUserAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreatePrivateAccessPolicyRequestCustomUserAttributes() = default;
};
class CreatePrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>> customUserAttributes{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyAction{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<string> userGroupMode{};

  CreatePrivateAccessPolicyRequest() {}

  explicit CreatePrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (customUserAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customUserAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomUserAttributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userGroupMode) {
      res["UserGroupMode"] = boost::any(*userGroupMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomUserAttributes"].type()) {
        vector<CreatePrivateAccessPolicyRequestCustomUserAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomUserAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreatePrivateAccessPolicyRequestCustomUserAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customUserAttributes = make_shared<vector<CreatePrivateAccessPolicyRequestCustomUserAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupMode") != m.end() && !m["UserGroupMode"].empty()) {
      userGroupMode = make_shared<string>(boost::any_cast<string>(m["UserGroupMode"]));
    }
  }


  virtual ~CreatePrivateAccessPolicyRequest() = default;
};
class CreatePrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<string> requestId{};

  CreatePrivateAccessPolicyResponseBody() {}

  explicit CreatePrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePrivateAccessPolicyResponseBody() = default;
};
class CreatePrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrivateAccessPolicyResponseBody> body{};

  CreatePrivateAccessPolicyResponse() {}

  explicit CreatePrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrivateAccessPolicyResponse() = default;
};
class CreatePrivateAccessTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreatePrivateAccessTagRequest() {}

  explicit CreatePrivateAccessTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreatePrivateAccessTagRequest() = default;
};
class CreatePrivateAccessTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tagId{};

  CreatePrivateAccessTagResponseBody() {}

  explicit CreatePrivateAccessTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~CreatePrivateAccessTagResponseBody() = default;
};
class CreatePrivateAccessTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePrivateAccessTagResponseBody> body{};

  CreatePrivateAccessTagResponse() {}

  explicit CreatePrivateAccessTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePrivateAccessTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePrivateAccessTagResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePrivateAccessTagResponse() = default;
};
class CreateRegistrationPolicyRequestCompanyLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  CreateRegistrationPolicyRequestCompanyLimitCount() {}

  explicit CreateRegistrationPolicyRequestCompanyLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~CreateRegistrationPolicyRequestCompanyLimitCount() = default;
};
class CreateRegistrationPolicyRequestPersonalLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  CreateRegistrationPolicyRequestPersonalLimitCount() {}

  explicit CreateRegistrationPolicyRequestPersonalLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~CreateRegistrationPolicyRequestPersonalLimitCount() = default;
};
class CreateRegistrationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<CreateRegistrationPolicyRequestCompanyLimitCount> companyLimitCount{};
  shared_ptr<string> companyLimitType{};
  shared_ptr<string> description{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<CreateRegistrationPolicyRequestPersonalLimitCount> personalLimitCount{};
  shared_ptr<string> personalLimitType{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  CreateRegistrationPolicyRequest() {}

  explicit CreateRegistrationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyLimitCount) {
      res["CompanyLimitCount"] = companyLimitCount ? boost::any(companyLimitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (companyLimitType) {
      res["CompanyLimitType"] = boost::any(*companyLimitType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (personalLimitCount) {
      res["PersonalLimitCount"] = personalLimitCount ? boost::any(personalLimitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (personalLimitType) {
      res["PersonalLimitType"] = boost::any(*personalLimitType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyLimitCount") != m.end() && !m["CompanyLimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompanyLimitCount"].type()) {
        CreateRegistrationPolicyRequestCompanyLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompanyLimitCount"]));
        companyLimitCount = make_shared<CreateRegistrationPolicyRequestCompanyLimitCount>(model1);
      }
    }
    if (m.find("CompanyLimitType") != m.end() && !m["CompanyLimitType"].empty()) {
      companyLimitType = make_shared<string>(boost::any_cast<string>(m["CompanyLimitType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PersonalLimitCount") != m.end() && !m["PersonalLimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["PersonalLimitCount"].type()) {
        CreateRegistrationPolicyRequestPersonalLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PersonalLimitCount"]));
        personalLimitCount = make_shared<CreateRegistrationPolicyRequestPersonalLimitCount>(model1);
      }
    }
    if (m.find("PersonalLimitType") != m.end() && !m["PersonalLimitType"].empty()) {
      personalLimitType = make_shared<string>(boost::any_cast<string>(m["PersonalLimitType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRegistrationPolicyRequest() = default;
};
class CreateRegistrationPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyLimitCountShrink{};
  shared_ptr<string> companyLimitType{};
  shared_ptr<string> description{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> personalLimitCountShrink{};
  shared_ptr<string> personalLimitType{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  CreateRegistrationPolicyShrinkRequest() {}

  explicit CreateRegistrationPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyLimitCountShrink) {
      res["CompanyLimitCount"] = boost::any(*companyLimitCountShrink);
    }
    if (companyLimitType) {
      res["CompanyLimitType"] = boost::any(*companyLimitType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (personalLimitCountShrink) {
      res["PersonalLimitCount"] = boost::any(*personalLimitCountShrink);
    }
    if (personalLimitType) {
      res["PersonalLimitType"] = boost::any(*personalLimitType);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyLimitCount") != m.end() && !m["CompanyLimitCount"].empty()) {
      companyLimitCountShrink = make_shared<string>(boost::any_cast<string>(m["CompanyLimitCount"]));
    }
    if (m.find("CompanyLimitType") != m.end() && !m["CompanyLimitType"].empty()) {
      companyLimitType = make_shared<string>(boost::any_cast<string>(m["CompanyLimitType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PersonalLimitCount") != m.end() && !m["PersonalLimitCount"].empty()) {
      personalLimitCountShrink = make_shared<string>(boost::any_cast<string>(m["PersonalLimitCount"]));
    }
    if (m.find("PersonalLimitType") != m.end() && !m["PersonalLimitType"].empty()) {
      personalLimitType = make_shared<string>(boost::any_cast<string>(m["PersonalLimitType"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRegistrationPolicyShrinkRequest() = default;
};
class CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount() {}

  explicit CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount() = default;
};
class CreateRegistrationPolicyResponseBodyPolicyLimitDetail : public Darabonba::Model {
public:
  shared_ptr<string> deviceBelong{};
  shared_ptr<CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount> limitCount{};
  shared_ptr<string> limitType{};

  CreateRegistrationPolicyResponseBodyPolicyLimitDetail() {}

  explicit CreateRegistrationPolicyResponseBodyPolicyLimitDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (limitCount) {
      res["LimitCount"] = limitCount ? boost::any(limitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limitType) {
      res["LimitType"] = boost::any(*limitType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("LimitCount") != m.end() && !m["LimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["LimitCount"].type()) {
        CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LimitCount"]));
        limitCount = make_shared<CreateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount>(model1);
      }
    }
    if (m.find("LimitType") != m.end() && !m["LimitType"].empty()) {
      limitType = make_shared<string>(boost::any_cast<string>(m["LimitType"]));
    }
  }


  virtual ~CreateRegistrationPolicyResponseBodyPolicyLimitDetail() = default;
};
class CreateRegistrationPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<CreateRegistrationPolicyResponseBodyPolicyLimitDetail>> limitDetail{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  CreateRegistrationPolicyResponseBodyPolicy() {}

  explicit CreateRegistrationPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (limitDetail) {
      vector<boost::any> temp1;
      for(auto item1:*limitDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LimitDetail"] = boost::any(temp1);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LimitDetail") != m.end() && !m["LimitDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LimitDetail"].type()) {
        vector<CreateRegistrationPolicyResponseBodyPolicyLimitDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LimitDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRegistrationPolicyResponseBodyPolicyLimitDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitDetail = make_shared<vector<CreateRegistrationPolicyResponseBodyPolicyLimitDetail>>(expect1);
      }
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateRegistrationPolicyResponseBodyPolicy() = default;
};
class CreateRegistrationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateRegistrationPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  CreateRegistrationPolicyResponseBody() {}

  explicit CreateRegistrationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        CreateRegistrationPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<CreateRegistrationPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRegistrationPolicyResponseBody() = default;
};
class CreateRegistrationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRegistrationPolicyResponseBody> body{};

  CreateRegistrationPolicyResponse() {}

  explicit CreateRegistrationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRegistrationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRegistrationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRegistrationPolicyResponse() = default;
};
class CreateUserGroupRequestAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  CreateUserGroupRequestAttributes() {}

  explicit CreateUserGroupRequestAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateUserGroupRequestAttributes() = default;
};
class CreateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateUserGroupRequestAttributes>> attributes{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreateUserGroupRequest() {}

  explicit CreateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<CreateUserGroupRequestAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserGroupRequestAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<CreateUserGroupRequestAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateUserGroupRequest() = default;
};
class CreateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userGroupId{};

  CreateUserGroupResponseBody() {}

  explicit CreateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~CreateUserGroupResponseBody() = default;
};
class CreateUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserGroupResponseBody> body{};

  CreateUserGroupResponse() {}

  explicit CreateUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserGroupResponse() = default;
};
class DeleteDynamicRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> dynamicRouteId{};

  DeleteDynamicRouteRequest() {}

  explicit DeleteDynamicRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
  }


  virtual ~DeleteDynamicRouteRequest() = default;
};
class DeleteDynamicRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDynamicRouteResponseBody() {}

  explicit DeleteDynamicRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDynamicRouteResponseBody() = default;
};
class DeleteDynamicRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDynamicRouteResponseBody> body{};

  DeleteDynamicRouteResponse() {}

  explicit DeleteDynamicRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDynamicRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDynamicRouteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDynamicRouteResponse() = default;
};
class DeletePrivateAccessApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};

  DeletePrivateAccessApplicationRequest() {}

  explicit DeletePrivateAccessApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
  }


  virtual ~DeletePrivateAccessApplicationRequest() = default;
};
class DeletePrivateAccessApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePrivateAccessApplicationResponseBody() {}

  explicit DeletePrivateAccessApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePrivateAccessApplicationResponseBody() = default;
};
class DeletePrivateAccessApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePrivateAccessApplicationResponseBody> body{};

  DeletePrivateAccessApplicationResponse() {}

  explicit DeletePrivateAccessApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePrivateAccessApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePrivateAccessApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePrivateAccessApplicationResponse() = default;
};
class DeletePrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  DeletePrivateAccessPolicyRequest() {}

  explicit DeletePrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~DeletePrivateAccessPolicyRequest() = default;
};
class DeletePrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePrivateAccessPolicyResponseBody() {}

  explicit DeletePrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePrivateAccessPolicyResponseBody() = default;
};
class DeletePrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePrivateAccessPolicyResponseBody> body{};

  DeletePrivateAccessPolicyResponse() {}

  explicit DeletePrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePrivateAccessPolicyResponse() = default;
};
class DeletePrivateAccessTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagId{};

  DeletePrivateAccessTagRequest() {}

  explicit DeletePrivateAccessTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~DeletePrivateAccessTagRequest() = default;
};
class DeletePrivateAccessTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePrivateAccessTagResponseBody() {}

  explicit DeletePrivateAccessTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePrivateAccessTagResponseBody() = default;
};
class DeletePrivateAccessTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePrivateAccessTagResponseBody> body{};

  DeletePrivateAccessTagResponse() {}

  explicit DeletePrivateAccessTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePrivateAccessTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePrivateAccessTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePrivateAccessTagResponse() = default;
};
class DeleteRegistrationPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> policyIds{};

  DeleteRegistrationPoliciesRequest() {}

  explicit DeleteRegistrationPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteRegistrationPoliciesRequest() = default;
};
class DeleteRegistrationPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteRegistrationPoliciesResponseBody() {}

  explicit DeleteRegistrationPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteRegistrationPoliciesResponseBody() = default;
};
class DeleteRegistrationPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRegistrationPoliciesResponseBody> body{};

  DeleteRegistrationPoliciesResponse() {}

  explicit DeleteRegistrationPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteRegistrationPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRegistrationPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRegistrationPoliciesResponse() = default;
};
class DeleteUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};

  DeleteUserGroupRequest() {}

  explicit DeleteUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~DeleteUserGroupRequest() = default;
};
class DeleteUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserGroupResponseBody() {}

  explicit DeleteUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserGroupResponseBody() = default;
};
class DeleteUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserGroupResponseBody> body{};

  DeleteUserGroupResponse() {}

  explicit DeleteUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserGroupResponse() = default;
};
class DetachApplication2ConnectorRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> connectorId{};

  DetachApplication2ConnectorRequest() {}

  explicit DetachApplication2ConnectorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (connectorId) {
      res["ConnectorId"] = boost::any(*connectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectorId") != m.end() && !m["ConnectorId"].empty()) {
      connectorId = make_shared<string>(boost::any_cast<string>(m["ConnectorId"]));
    }
  }


  virtual ~DetachApplication2ConnectorRequest() = default;
};
class DetachApplication2ConnectorShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationIdsShrink{};
  shared_ptr<string> connectorId{};

  DetachApplication2ConnectorShrinkRequest() {}

  explicit DetachApplication2ConnectorShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIdsShrink) {
      res["ApplicationIds"] = boost::any(*applicationIdsShrink);
    }
    if (connectorId) {
      res["ConnectorId"] = boost::any(*connectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      applicationIdsShrink = make_shared<string>(boost::any_cast<string>(m["ApplicationIds"]));
    }
    if (m.find("ConnectorId") != m.end() && !m["ConnectorId"].empty()) {
      connectorId = make_shared<string>(boost::any_cast<string>(m["ConnectorId"]));
    }
  }


  virtual ~DetachApplication2ConnectorShrinkRequest() = default;
};
class DetachApplication2ConnectorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachApplication2ConnectorResponseBody() {}

  explicit DetachApplication2ConnectorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachApplication2ConnectorResponseBody() = default;
};
class DetachApplication2ConnectorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachApplication2ConnectorResponseBody> body{};

  DetachApplication2ConnectorResponse() {}

  explicit DetachApplication2ConnectorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachApplication2ConnectorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachApplication2ConnectorResponseBody>(model1);
      }
    }
  }


  virtual ~DetachApplication2ConnectorResponse() = default;
};
class GetDynamicRouteRequest : public Darabonba::Model {
public:
  shared_ptr<string> dynamicRouteId{};

  GetDynamicRouteRequest() {}

  explicit GetDynamicRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
  }


  virtual ~GetDynamicRouteRequest() = default;
};
class GetDynamicRouteResponseBodyDynamicRoute : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> dynamicRouteId{};
  shared_ptr<string> dynamicRouteType{};
  shared_ptr<string> name{};
  shared_ptr<string> nextHop{};
  shared_ptr<long> priority{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  GetDynamicRouteResponseBodyDynamicRoute() {}

  explicit GetDynamicRouteResponseBodyDynamicRoute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    if (dynamicRouteType) {
      res["DynamicRouteType"] = boost::any(*dynamicRouteType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextHop) {
      res["NextHop"] = boost::any(*nextHop);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
    if (m.find("DynamicRouteType") != m.end() && !m["DynamicRouteType"].empty()) {
      dynamicRouteType = make_shared<string>(boost::any_cast<string>(m["DynamicRouteType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextHop") != m.end() && !m["NextHop"].empty()) {
      nextHop = make_shared<string>(boost::any_cast<string>(m["NextHop"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetDynamicRouteResponseBodyDynamicRoute() = default;
};
class GetDynamicRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDynamicRouteResponseBodyDynamicRoute> dynamicRoute{};
  shared_ptr<string> requestId{};

  GetDynamicRouteResponseBody() {}

  explicit GetDynamicRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRoute) {
      res["DynamicRoute"] = dynamicRoute ? boost::any(dynamicRoute->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRoute") != m.end() && !m["DynamicRoute"].empty()) {
      if (typeid(map<string, boost::any>) == m["DynamicRoute"].type()) {
        GetDynamicRouteResponseBodyDynamicRoute model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DynamicRoute"]));
        dynamicRoute = make_shared<GetDynamicRouteResponseBodyDynamicRoute>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDynamicRouteResponseBody() = default;
};
class GetDynamicRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDynamicRouteResponseBody> body{};

  GetDynamicRouteResponse() {}

  explicit GetDynamicRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDynamicRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDynamicRouteResponseBody>(model1);
      }
    }
  }


  virtual ~GetDynamicRouteResponse() = default;
};
class GetPrivateAccessApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};

  GetPrivateAccessApplicationRequest() {}

  explicit GetPrivateAccessApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
  }


  virtual ~GetPrivateAccessApplicationRequest() = default;
};
class GetPrivateAccessApplicationResponseBodyApplicationPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  GetPrivateAccessApplicationResponseBodyApplicationPortRanges() {}

  explicit GetPrivateAccessApplicationResponseBodyApplicationPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~GetPrivateAccessApplicationResponseBodyApplicationPortRanges() = default;
};
class GetPrivateAccessApplicationResponseBodyApplication : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> connectorIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<vector<GetPrivateAccessApplicationResponseBodyApplicationPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  GetPrivateAccessApplicationResponseBodyApplication() {}

  explicit GetPrivateAccessApplicationResponseBodyApplication(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (connectorIds) {
      res["ConnectorIds"] = boost::any(*connectorIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ConnectorIds") != m.end() && !m["ConnectorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<GetPrivateAccessApplicationResponseBodyApplicationPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPrivateAccessApplicationResponseBodyApplicationPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<GetPrivateAccessApplicationResponseBodyApplicationPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetPrivateAccessApplicationResponseBodyApplication() = default;
};
class GetPrivateAccessApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPrivateAccessApplicationResponseBodyApplication> application{};
  shared_ptr<string> requestId{};

  GetPrivateAccessApplicationResponseBody() {}

  explicit GetPrivateAccessApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (application) {
      res["Application"] = application ? boost::any(application->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Application") != m.end() && !m["Application"].empty()) {
      if (typeid(map<string, boost::any>) == m["Application"].type()) {
        GetPrivateAccessApplicationResponseBodyApplication model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Application"]));
        application = make_shared<GetPrivateAccessApplicationResponseBodyApplication>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPrivateAccessApplicationResponseBody() = default;
};
class GetPrivateAccessApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPrivateAccessApplicationResponseBody> body{};

  GetPrivateAccessApplicationResponse() {}

  explicit GetPrivateAccessApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPrivateAccessApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPrivateAccessApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~GetPrivateAccessApplicationResponse() = default;
};
class GetPrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  GetPrivateAccessPolicyRequest() {}

  explicit GetPrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~GetPrivateAccessPolicyRequest() = default;
};
class GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes() {}

  explicit GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes() = default;
};
class GetPrivateAccessPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes>> customUserAttributes{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<string> userGroupMode{};

  GetPrivateAccessPolicyResponseBodyPolicy() {}

  explicit GetPrivateAccessPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customUserAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customUserAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomUserAttributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userGroupMode) {
      res["UserGroupMode"] = boost::any(*userGroupMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomUserAttributes"].type()) {
        vector<GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomUserAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customUserAttributes = make_shared<vector<GetPrivateAccessPolicyResponseBodyPolicyCustomUserAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupMode") != m.end() && !m["UserGroupMode"].empty()) {
      userGroupMode = make_shared<string>(boost::any_cast<string>(m["UserGroupMode"]));
    }
  }


  virtual ~GetPrivateAccessPolicyResponseBodyPolicy() = default;
};
class GetPrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPrivateAccessPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  GetPrivateAccessPolicyResponseBody() {}

  explicit GetPrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        GetPrivateAccessPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<GetPrivateAccessPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPrivateAccessPolicyResponseBody() = default;
};
class GetPrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPrivateAccessPolicyResponseBody> body{};

  GetPrivateAccessPolicyResponse() {}

  explicit GetPrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetPrivateAccessPolicyResponse() = default;
};
class GetRegistrationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};

  GetRegistrationPolicyRequest() {}

  explicit GetRegistrationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~GetRegistrationPolicyRequest() = default;
};
class GetRegistrationPolicyResponseBodyLimitDetailLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  GetRegistrationPolicyResponseBodyLimitDetailLimitCount() {}

  explicit GetRegistrationPolicyResponseBodyLimitDetailLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~GetRegistrationPolicyResponseBodyLimitDetailLimitCount() = default;
};
class GetRegistrationPolicyResponseBodyLimitDetail : public Darabonba::Model {
public:
  shared_ptr<string> deviceBelong{};
  shared_ptr<GetRegistrationPolicyResponseBodyLimitDetailLimitCount> limitCount{};
  shared_ptr<string> limitType{};

  GetRegistrationPolicyResponseBodyLimitDetail() {}

  explicit GetRegistrationPolicyResponseBodyLimitDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (limitCount) {
      res["LimitCount"] = limitCount ? boost::any(limitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limitType) {
      res["LimitType"] = boost::any(*limitType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("LimitCount") != m.end() && !m["LimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["LimitCount"].type()) {
        GetRegistrationPolicyResponseBodyLimitDetailLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LimitCount"]));
        limitCount = make_shared<GetRegistrationPolicyResponseBodyLimitDetailLimitCount>(model1);
      }
    }
    if (m.find("LimitType") != m.end() && !m["LimitType"].empty()) {
      limitType = make_shared<string>(boost::any_cast<string>(m["LimitType"]));
    }
  }


  virtual ~GetRegistrationPolicyResponseBodyLimitDetail() = default;
};
class GetRegistrationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetRegistrationPolicyResponseBodyLimitDetail>> limitDetail{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  GetRegistrationPolicyResponseBody() {}

  explicit GetRegistrationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (limitDetail) {
      vector<boost::any> temp1;
      for(auto item1:*limitDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LimitDetail"] = boost::any(temp1);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LimitDetail") != m.end() && !m["LimitDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LimitDetail"].type()) {
        vector<GetRegistrationPolicyResponseBodyLimitDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LimitDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRegistrationPolicyResponseBodyLimitDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitDetail = make_shared<vector<GetRegistrationPolicyResponseBodyLimitDetail>>(expect1);
      }
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetRegistrationPolicyResponseBody() = default;
};
class GetRegistrationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRegistrationPolicyResponseBody> body{};

  GetRegistrationPolicyResponse() {}

  explicit GetRegistrationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegistrationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegistrationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegistrationPolicyResponse() = default;
};
class GetUserDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceTag{};

  GetUserDeviceRequest() {}

  explicit GetUserDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
  }


  virtual ~GetUserDeviceRequest() = default;
};
class GetUserDeviceResponseBodyDeviceHistoryUsers : public Darabonba::Model {
public:
  shared_ptr<string> saseUserId{};
  shared_ptr<string> username{};

  GetUserDeviceResponseBodyDeviceHistoryUsers() {}

  explicit GetUserDeviceResponseBodyDeviceHistoryUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetUserDeviceResponseBodyDeviceHistoryUsers() = default;
};
class GetUserDeviceResponseBodyDevice : public Darabonba::Model {
public:
  shared_ptr<string> appStatus{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> CPU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> department{};
  shared_ptr<string> deviceBelong{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> deviceVersion{};
  shared_ptr<string> disk{};
  shared_ptr<string> dlpStatus{};
  shared_ptr<vector<GetUserDeviceResponseBodyDeviceHistoryUsers>> historyUsers{};
  shared_ptr<string> hostname{};
  shared_ptr<string> iaStatus{};
  shared_ptr<string> innerIP{};
  shared_ptr<string> mac{};
  shared_ptr<string> memory{};
  shared_ptr<string> nacStatus{};
  shared_ptr<string> paStatus{};
  shared_ptr<string> saseUserId{};
  shared_ptr<bool> sharingStatus{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> username{};

  GetUserDeviceResponseBodyDevice() {}

  explicit GetUserDeviceResponseBodyDevice(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (deviceModel) {
      res["DeviceModel"] = boost::any(*deviceModel);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (deviceVersion) {
      res["DeviceVersion"] = boost::any(*deviceVersion);
    }
    if (disk) {
      res["Disk"] = boost::any(*disk);
    }
    if (dlpStatus) {
      res["DlpStatus"] = boost::any(*dlpStatus);
    }
    if (historyUsers) {
      vector<boost::any> temp1;
      for(auto item1:*historyUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HistoryUsers"] = boost::any(temp1);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (iaStatus) {
      res["IaStatus"] = boost::any(*iaStatus);
    }
    if (innerIP) {
      res["InnerIP"] = boost::any(*innerIP);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nacStatus) {
      res["NacStatus"] = boost::any(*nacStatus);
    }
    if (paStatus) {
      res["PaStatus"] = boost::any(*paStatus);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (sharingStatus) {
      res["SharingStatus"] = boost::any(*sharingStatus);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("DeviceModel") != m.end() && !m["DeviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["DeviceModel"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("DeviceVersion") != m.end() && !m["DeviceVersion"].empty()) {
      deviceVersion = make_shared<string>(boost::any_cast<string>(m["DeviceVersion"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      disk = make_shared<string>(boost::any_cast<string>(m["Disk"]));
    }
    if (m.find("DlpStatus") != m.end() && !m["DlpStatus"].empty()) {
      dlpStatus = make_shared<string>(boost::any_cast<string>(m["DlpStatus"]));
    }
    if (m.find("HistoryUsers") != m.end() && !m["HistoryUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["HistoryUsers"].type()) {
        vector<GetUserDeviceResponseBodyDeviceHistoryUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HistoryUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserDeviceResponseBodyDeviceHistoryUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        historyUsers = make_shared<vector<GetUserDeviceResponseBodyDeviceHistoryUsers>>(expect1);
      }
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IaStatus") != m.end() && !m["IaStatus"].empty()) {
      iaStatus = make_shared<string>(boost::any_cast<string>(m["IaStatus"]));
    }
    if (m.find("InnerIP") != m.end() && !m["InnerIP"].empty()) {
      innerIP = make_shared<string>(boost::any_cast<string>(m["InnerIP"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("NacStatus") != m.end() && !m["NacStatus"].empty()) {
      nacStatus = make_shared<string>(boost::any_cast<string>(m["NacStatus"]));
    }
    if (m.find("PaStatus") != m.end() && !m["PaStatus"].empty()) {
      paStatus = make_shared<string>(boost::any_cast<string>(m["PaStatus"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("SharingStatus") != m.end() && !m["SharingStatus"].empty()) {
      sharingStatus = make_shared<bool>(boost::any_cast<bool>(m["SharingStatus"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~GetUserDeviceResponseBodyDevice() = default;
};
class GetUserDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserDeviceResponseBodyDevice> device{};
  shared_ptr<string> requestId{};

  GetUserDeviceResponseBody() {}

  explicit GetUserDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (device) {
      res["Device"] = device ? boost::any(device->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Device") != m.end() && !m["Device"].empty()) {
      if (typeid(map<string, boost::any>) == m["Device"].type()) {
        GetUserDeviceResponseBodyDevice model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Device"]));
        device = make_shared<GetUserDeviceResponseBodyDevice>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserDeviceResponseBody() = default;
};
class GetUserDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserDeviceResponseBody> body{};

  GetUserDeviceResponse() {}

  explicit GetUserDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserDeviceResponse() = default;
};
class GetUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> userGroupId{};

  GetUserGroupRequest() {}

  explicit GetUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~GetUserGroupRequest() = default;
};
class GetUserGroupResponseBodyUserGroupAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  GetUserGroupResponseBodyUserGroupAttributes() {}

  explicit GetUserGroupResponseBodyUserGroupAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetUserGroupResponseBodyUserGroupAttributes() = default;
};
class GetUserGroupResponseBodyUserGroup : public Darabonba::Model {
public:
  shared_ptr<vector<GetUserGroupResponseBodyUserGroupAttributes>> attributes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> userGroupId{};

  GetUserGroupResponseBodyUserGroup() {}

  explicit GetUserGroupResponseBodyUserGroup(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<GetUserGroupResponseBodyUserGroupAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserGroupResponseBodyUserGroupAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<GetUserGroupResponseBodyUserGroupAttributes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~GetUserGroupResponseBodyUserGroup() = default;
};
class GetUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetUserGroupResponseBodyUserGroup> userGroup{};

  GetUserGroupResponseBody() {}

  explicit GetUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroup) {
      res["UserGroup"] = userGroup ? boost::any(userGroup->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroup") != m.end() && !m["UserGroup"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserGroup"].type()) {
        GetUserGroupResponseBodyUserGroup model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserGroup"]));
        userGroup = make_shared<GetUserGroupResponseBodyUserGroup>(model1);
      }
    }
  }


  virtual ~GetUserGroupResponseBody() = default;
};
class GetUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserGroupResponseBody> body{};

  GetUserGroupResponse() {}

  explicit GetUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserGroupResponse() = default;
};
class ListApplicationsForPrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> policyIds{};

  ListApplicationsForPrivateAccessPolicyRequest() {}

  explicit ListApplicationsForPrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListApplicationsForPrivateAccessPolicyRequest() = default;
};
class ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges() {}

  explicit ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges() = default;
};
class ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};

  ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications() {}

  explicit ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplicationsPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications() = default;
};
class ListApplicationsForPrivateAccessPolicyResponseBodyPolices : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications>> applications{};
  shared_ptr<string> policyId{};

  ListApplicationsForPrivateAccessPolicyResponseBodyPolices() {}

  explicit ListApplicationsForPrivateAccessPolicyResponseBodyPolices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolicesApplications>>(expect1);
      }
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessPolicyResponseBodyPolices() = default;
};
class ListApplicationsForPrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolices>> polices{};
  shared_ptr<string> requestId{};

  ListApplicationsForPrivateAccessPolicyResponseBody() {}

  explicit ListApplicationsForPrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polices) {
      vector<boost::any> temp1;
      for(auto item1:*polices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Polices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Polices") != m.end() && !m["Polices"].empty()) {
      if (typeid(vector<boost::any>) == m["Polices"].type()) {
        vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Polices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForPrivateAccessPolicyResponseBodyPolices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polices = make_shared<vector<ListApplicationsForPrivateAccessPolicyResponseBodyPolices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessPolicyResponseBody() = default;
};
class ListApplicationsForPrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsForPrivateAccessPolicyResponseBody> body{};

  ListApplicationsForPrivateAccessPolicyResponse() {}

  explicit ListApplicationsForPrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsForPrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsForPrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsForPrivateAccessPolicyResponse() = default;
};
class ListApplicationsForPrivateAccessTagRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tagIds{};

  ListApplicationsForPrivateAccessTagRequest() {}

  explicit ListApplicationsForPrivateAccessTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListApplicationsForPrivateAccessTagRequest() = default;
};
class ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges() {}

  explicit ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges() = default;
};
class ListApplicationsForPrivateAccessTagResponseBodyTagsApplications : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};

  ListApplicationsForPrivateAccessTagResponseBodyTagsApplications() {}

  explicit ListApplicationsForPrivateAccessTagResponseBodyTagsApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<ListApplicationsForPrivateAccessTagResponseBodyTagsApplicationsPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessTagResponseBodyTagsApplications() = default;
};
class ListApplicationsForPrivateAccessTagResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListApplicationsForPrivateAccessTagResponseBodyTagsApplications>> applications{};
  shared_ptr<string> tagId{};

  ListApplicationsForPrivateAccessTagResponseBodyTags() {}

  explicit ListApplicationsForPrivateAccessTagResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListApplicationsForPrivateAccessTagResponseBodyTagsApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForPrivateAccessTagResponseBodyTagsApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListApplicationsForPrivateAccessTagResponseBodyTagsApplications>>(expect1);
      }
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~ListApplicationsForPrivateAccessTagResponseBodyTags() = default;
};
class ListApplicationsForPrivateAccessTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListApplicationsForPrivateAccessTagResponseBodyTags>> tags{};

  ListApplicationsForPrivateAccessTagResponseBody() {}

  explicit ListApplicationsForPrivateAccessTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListApplicationsForPrivateAccessTagResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListApplicationsForPrivateAccessTagResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListApplicationsForPrivateAccessTagResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~ListApplicationsForPrivateAccessTagResponseBody() = default;
};
class ListApplicationsForPrivateAccessTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListApplicationsForPrivateAccessTagResponseBody> body{};

  ListApplicationsForPrivateAccessTagResponse() {}

  explicit ListApplicationsForPrivateAccessTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListApplicationsForPrivateAccessTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListApplicationsForPrivateAccessTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListApplicationsForPrivateAccessTagResponse() = default;
};
class ListConnectorsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> connectorIds{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> switchStatus{};

  ListConnectorsRequest() {}

  explicit ListConnectorsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectorIds) {
      res["ConnectorIds"] = boost::any(*connectorIds);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (switchStatus) {
      res["SwitchStatus"] = boost::any(*switchStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectorIds") != m.end() && !m["ConnectorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SwitchStatus") != m.end() && !m["SwitchStatus"].empty()) {
      switchStatus = make_shared<string>(boost::any_cast<string>(m["SwitchStatus"]));
    }
  }


  virtual ~ListConnectorsRequest() = default;
};
class ListConnectorsResponseBodyConnectorsApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> applicationName{};

  ListConnectorsResponseBodyConnectorsApplications() {}

  explicit ListConnectorsResponseBodyConnectorsApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (applicationName) {
      res["ApplicationName"] = boost::any(*applicationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ApplicationName") != m.end() && !m["ApplicationName"].empty()) {
      applicationName = make_shared<string>(boost::any_cast<string>(m["ApplicationName"]));
    }
  }


  virtual ~ListConnectorsResponseBodyConnectorsApplications() = default;
};
class ListConnectorsResponseBodyConnectorsConnectorClients : public Darabonba::Model {
public:
  shared_ptr<string> connectionStatus{};
  shared_ptr<string> devTag{};
  shared_ptr<string> hostname{};
  shared_ptr<string> publicIp{};

  ListConnectorsResponseBodyConnectorsConnectorClients() {}

  explicit ListConnectorsResponseBodyConnectorsConnectorClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (devTag) {
      res["DevTag"] = boost::any(*devTag);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("DevTag") != m.end() && !m["DevTag"].empty()) {
      devTag = make_shared<string>(boost::any_cast<string>(m["DevTag"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
  }


  virtual ~ListConnectorsResponseBodyConnectorsConnectorClients() = default;
};
class ListConnectorsResponseBodyConnectorsUpgradeTime : public Darabonba::Model {
public:
  shared_ptr<string> end{};
  shared_ptr<string> start{};

  ListConnectorsResponseBodyConnectorsUpgradeTime() {}

  explicit ListConnectorsResponseBodyConnectorsUpgradeTime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<string>(boost::any_cast<string>(m["End"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["Start"]));
    }
  }


  virtual ~ListConnectorsResponseBodyConnectorsUpgradeTime() = default;
};
class ListConnectorsResponseBodyConnectors : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectorsResponseBodyConnectorsApplications>> applications{};
  shared_ptr<vector<ListConnectorsResponseBodyConnectorsConnectorClients>> connectorClients{};
  shared_ptr<string> connectorId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> switchStatus{};
  shared_ptr<ListConnectorsResponseBodyConnectorsUpgradeTime> upgradeTime{};

  ListConnectorsResponseBodyConnectors() {}

  explicit ListConnectorsResponseBodyConnectors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (connectorClients) {
      vector<boost::any> temp1;
      for(auto item1:*connectorClients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConnectorClients"] = boost::any(temp1);
    }
    if (connectorId) {
      res["ConnectorId"] = boost::any(*connectorId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (switchStatus) {
      res["SwitchStatus"] = boost::any(*switchStatus);
    }
    if (upgradeTime) {
      res["UpgradeTime"] = upgradeTime ? boost::any(upgradeTime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListConnectorsResponseBodyConnectorsApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectorsResponseBodyConnectorsApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListConnectorsResponseBodyConnectorsApplications>>(expect1);
      }
    }
    if (m.find("ConnectorClients") != m.end() && !m["ConnectorClients"].empty()) {
      if (typeid(vector<boost::any>) == m["ConnectorClients"].type()) {
        vector<ListConnectorsResponseBodyConnectorsConnectorClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConnectorClients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectorsResponseBodyConnectorsConnectorClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectorClients = make_shared<vector<ListConnectorsResponseBodyConnectorsConnectorClients>>(expect1);
      }
    }
    if (m.find("ConnectorId") != m.end() && !m["ConnectorId"].empty()) {
      connectorId = make_shared<string>(boost::any_cast<string>(m["ConnectorId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SwitchStatus") != m.end() && !m["SwitchStatus"].empty()) {
      switchStatus = make_shared<string>(boost::any_cast<string>(m["SwitchStatus"]));
    }
    if (m.find("UpgradeTime") != m.end() && !m["UpgradeTime"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpgradeTime"].type()) {
        ListConnectorsResponseBodyConnectorsUpgradeTime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpgradeTime"]));
        upgradeTime = make_shared<ListConnectorsResponseBodyConnectorsUpgradeTime>(model1);
      }
    }
  }


  virtual ~ListConnectorsResponseBodyConnectors() = default;
};
class ListConnectorsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnectorsResponseBodyConnectors>> connectors{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListConnectorsResponseBody() {}

  explicit ListConnectorsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectors) {
      vector<boost::any> temp1;
      for(auto item1:*connectors){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Connectors"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Connectors") != m.end() && !m["Connectors"].empty()) {
      if (typeid(vector<boost::any>) == m["Connectors"].type()) {
        vector<ListConnectorsResponseBodyConnectors> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Connectors"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnectorsResponseBodyConnectors model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        connectors = make_shared<vector<ListConnectorsResponseBodyConnectors>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListConnectorsResponseBody() = default;
};
class ListConnectorsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConnectorsResponseBody> body{};

  ListConnectorsResponse() {}

  explicit ListConnectorsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConnectorsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnectorsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnectorsResponse() = default;
};
class ListDynamicRouteRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListDynamicRouteRegionsResponseBody() {}

  explicit ListDynamicRouteRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = boost::any(*regions);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Regions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListDynamicRouteRegionsResponseBody() = default;
};
class ListDynamicRouteRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDynamicRouteRegionsResponseBody> body{};

  ListDynamicRouteRegionsResponse() {}

  explicit ListDynamicRouteRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDynamicRouteRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDynamicRouteRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDynamicRouteRegionsResponse() = default;
};
class ListDynamicRoutesRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<string>> dynamicRouteIds{};
  shared_ptr<string> name{};
  shared_ptr<string> nextHop{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> status{};
  shared_ptr<string> tagId{};

  ListDynamicRoutesRequest() {}

  explicit ListDynamicRoutesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dynamicRouteIds) {
      res["DynamicRouteIds"] = boost::any(*dynamicRouteIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextHop) {
      res["NextHop"] = boost::any(*nextHop);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DynamicRouteIds") != m.end() && !m["DynamicRouteIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DynamicRouteIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DynamicRouteIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dynamicRouteIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextHop") != m.end() && !m["NextHop"].empty()) {
      nextHop = make_shared<string>(boost::any_cast<string>(m["NextHop"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~ListDynamicRoutesRequest() = default;
};
class ListDynamicRoutesResponseBodyDynamicRoutes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> dynamicRouteId{};
  shared_ptr<string> dynamicRouteType{};
  shared_ptr<string> name{};
  shared_ptr<string> nextHop{};
  shared_ptr<long> priority{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  ListDynamicRoutesResponseBodyDynamicRoutes() {}

  explicit ListDynamicRoutesResponseBodyDynamicRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    if (dynamicRouteType) {
      res["DynamicRouteType"] = boost::any(*dynamicRouteType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextHop) {
      res["NextHop"] = boost::any(*nextHop);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
    if (m.find("DynamicRouteType") != m.end() && !m["DynamicRouteType"].empty()) {
      dynamicRouteType = make_shared<string>(boost::any_cast<string>(m["DynamicRouteType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextHop") != m.end() && !m["NextHop"].empty()) {
      nextHop = make_shared<string>(boost::any_cast<string>(m["NextHop"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDynamicRoutesResponseBodyDynamicRoutes() = default;
};
class ListDynamicRoutesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDynamicRoutesResponseBodyDynamicRoutes>> dynamicRoutes{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListDynamicRoutesResponseBody() {}

  explicit ListDynamicRoutesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRoutes) {
      vector<boost::any> temp1;
      for(auto item1:*dynamicRoutes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DynamicRoutes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRoutes") != m.end() && !m["DynamicRoutes"].empty()) {
      if (typeid(vector<boost::any>) == m["DynamicRoutes"].type()) {
        vector<ListDynamicRoutesResponseBodyDynamicRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DynamicRoutes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDynamicRoutesResponseBodyDynamicRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dynamicRoutes = make_shared<vector<ListDynamicRoutesResponseBodyDynamicRoutes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListDynamicRoutesResponseBody() = default;
};
class ListDynamicRoutesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDynamicRoutesResponseBody> body{};

  ListDynamicRoutesResponse() {}

  explicit ListDynamicRoutesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDynamicRoutesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDynamicRoutesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDynamicRoutesResponse() = default;
};
class ListExcessiveDeviceRegistrationApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> department{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> hostname{};
  shared_ptr<string> mac{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> saseUserId{};
  shared_ptr<vector<string>> statuses{};
  shared_ptr<string> username{};

  ListExcessiveDeviceRegistrationApplicationsRequest() {}

  explicit ListExcessiveDeviceRegistrationApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (statuses) {
      res["Statuses"] = boost::any(*statuses);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("Statuses") != m.end() && !m["Statuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Statuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Statuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      statuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListExcessiveDeviceRegistrationApplicationsRequest() = default;
};
class ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> department{};
  shared_ptr<string> description{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> hostname{};
  shared_ptr<bool> isUsed{};
  shared_ptr<string> mac{};
  shared_ptr<string> saseUserId{};
  shared_ptr<string> status{};
  shared_ptr<string> username{};

  ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications() {}

  explicit ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (isUsed) {
      res["IsUsed"] = boost::any(*isUsed);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IsUsed") != m.end() && !m["IsUsed"].empty()) {
      isUsed = make_shared<bool>(boost::any_cast<bool>(m["IsUsed"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications() = default;
};
class ListExcessiveDeviceRegistrationApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListExcessiveDeviceRegistrationApplicationsResponseBody() {}

  explicit ListExcessiveDeviceRegistrationApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListExcessiveDeviceRegistrationApplicationsResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListExcessiveDeviceRegistrationApplicationsResponseBody() = default;
};
class ListExcessiveDeviceRegistrationApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExcessiveDeviceRegistrationApplicationsResponseBody> body{};

  ListExcessiveDeviceRegistrationApplicationsResponse() {}

  explicit ListExcessiveDeviceRegistrationApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExcessiveDeviceRegistrationApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExcessiveDeviceRegistrationApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExcessiveDeviceRegistrationApplicationsResponse() = default;
};
class ListPolicesForPrivateAccessApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};

  ListPolicesForPrivateAccessApplicationRequest() {}

  explicit ListPolicesForPrivateAccessApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPolicesForPrivateAccessApplicationRequest() = default;
};
class ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes() {}

  explicit ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes() = default;
};
class ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies : public Darabonba::Model {
public:
  shared_ptr<string> applicationType{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes>> customUserAttributes{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<string> userGroupType{};

  ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies() {}

  explicit ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customUserAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customUserAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomUserAttributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomUserAttributes"].type()) {
        vector<ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomUserAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customUserAttributes = make_shared<vector<ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPoliciesCustomUserAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
  }


  virtual ~ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies() = default;
};
class ListPolicesForPrivateAccessApplicationResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies>> policies{};

  ListPolicesForPrivateAccessApplicationResponseBodyApplications() {}

  explicit ListPolicesForPrivateAccessApplicationResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<ListPolicesForPrivateAccessApplicationResponseBodyApplicationsPolicies>>(expect1);
      }
    }
  }


  virtual ~ListPolicesForPrivateAccessApplicationResponseBodyApplications() = default;
};
class ListPolicesForPrivateAccessApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicesForPrivateAccessApplicationResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};

  ListPolicesForPrivateAccessApplicationResponseBody() {}

  explicit ListPolicesForPrivateAccessApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListPolicesForPrivateAccessApplicationResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForPrivateAccessApplicationResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListPolicesForPrivateAccessApplicationResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPolicesForPrivateAccessApplicationResponseBody() = default;
};
class ListPolicesForPrivateAccessApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicesForPrivateAccessApplicationResponseBody> body{};

  ListPolicesForPrivateAccessApplicationResponse() {}

  explicit ListPolicesForPrivateAccessApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicesForPrivateAccessApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicesForPrivateAccessApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicesForPrivateAccessApplicationResponse() = default;
};
class ListPolicesForPrivateAccessTagRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tagIds{};

  ListPolicesForPrivateAccessTagRequest() {}

  explicit ListPolicesForPrivateAccessTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPolicesForPrivateAccessTagRequest() = default;
};
class ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes() {}

  explicit ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes() = default;
};
class ListPolicesForPrivateAccessTagResponseBodyTagsPolices : public Darabonba::Model {
public:
  shared_ptr<string> applicationType{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes>> customUserAttributes{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<string> userGroupType{};

  ListPolicesForPrivateAccessTagResponseBodyTagsPolices() {}

  explicit ListPolicesForPrivateAccessTagResponseBodyTagsPolices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customUserAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customUserAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomUserAttributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomUserAttributes"].type()) {
        vector<ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomUserAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customUserAttributes = make_shared<vector<ListPolicesForPrivateAccessTagResponseBodyTagsPolicesCustomUserAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
  }


  virtual ~ListPolicesForPrivateAccessTagResponseBodyTagsPolices() = default;
};
class ListPolicesForPrivateAccessTagResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicesForPrivateAccessTagResponseBodyTagsPolices>> polices{};
  shared_ptr<string> tagId{};

  ListPolicesForPrivateAccessTagResponseBodyTags() {}

  explicit ListPolicesForPrivateAccessTagResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polices) {
      vector<boost::any> temp1;
      for(auto item1:*polices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Polices"] = boost::any(temp1);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Polices") != m.end() && !m["Polices"].empty()) {
      if (typeid(vector<boost::any>) == m["Polices"].type()) {
        vector<ListPolicesForPrivateAccessTagResponseBodyTagsPolices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Polices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForPrivateAccessTagResponseBodyTagsPolices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polices = make_shared<vector<ListPolicesForPrivateAccessTagResponseBodyTagsPolices>>(expect1);
      }
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~ListPolicesForPrivateAccessTagResponseBodyTags() = default;
};
class ListPolicesForPrivateAccessTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListPolicesForPrivateAccessTagResponseBodyTags>> tags{};

  ListPolicesForPrivateAccessTagResponseBody() {}

  explicit ListPolicesForPrivateAccessTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListPolicesForPrivateAccessTagResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForPrivateAccessTagResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListPolicesForPrivateAccessTagResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~ListPolicesForPrivateAccessTagResponseBody() = default;
};
class ListPolicesForPrivateAccessTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicesForPrivateAccessTagResponseBody> body{};

  ListPolicesForPrivateAccessTagResponse() {}

  explicit ListPolicesForPrivateAccessTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicesForPrivateAccessTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicesForPrivateAccessTagResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicesForPrivateAccessTagResponse() = default;
};
class ListPolicesForUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userGroupIds{};

  ListPolicesForUserGroupRequest() {}

  explicit ListPolicesForUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPolicesForUserGroupRequest() = default;
};
class ListPolicesForUserGroupResponseBodyUserGroupsPolices : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> policyType{};

  ListPolicesForUserGroupResponseBodyUserGroupsPolices() {}

  explicit ListPolicesForUserGroupResponseBodyUserGroupsPolices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~ListPolicesForUserGroupResponseBodyUserGroupsPolices() = default;
};
class ListPolicesForUserGroupResponseBodyUserGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListPolicesForUserGroupResponseBodyUserGroupsPolices>> polices{};
  shared_ptr<string> userGroupId{};

  ListPolicesForUserGroupResponseBodyUserGroups() {}

  explicit ListPolicesForUserGroupResponseBodyUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polices) {
      vector<boost::any> temp1;
      for(auto item1:*polices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Polices"] = boost::any(temp1);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Polices") != m.end() && !m["Polices"].empty()) {
      if (typeid(vector<boost::any>) == m["Polices"].type()) {
        vector<ListPolicesForUserGroupResponseBodyUserGroupsPolices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Polices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForUserGroupResponseBodyUserGroupsPolices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polices = make_shared<vector<ListPolicesForUserGroupResponseBodyUserGroupsPolices>>(expect1);
      }
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListPolicesForUserGroupResponseBodyUserGroups() = default;
};
class ListPolicesForUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListPolicesForUserGroupResponseBodyUserGroups>> userGroups{};

  ListPolicesForUserGroupResponseBody() {}

  explicit ListPolicesForUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroups) {
      vector<boost::any> temp1;
      for(auto item1:*userGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<ListPolicesForUserGroupResponseBodyUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPolicesForUserGroupResponseBodyUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroups = make_shared<vector<ListPolicesForUserGroupResponseBodyUserGroups>>(expect1);
      }
    }
  }


  virtual ~ListPolicesForUserGroupResponseBody() = default;
};
class ListPolicesForUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPolicesForUserGroupResponseBody> body{};

  ListPolicesForUserGroupResponse() {}

  explicit ListPolicesForUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPolicesForUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPolicesForUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListPolicesForUserGroupResponse() = default;
};
class ListPrivateAccessApplicationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> connectorId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyId{};
  shared_ptr<string> status{};
  shared_ptr<string> tagId{};

  ListPrivateAccessApplicationsRequest() {}

  explicit ListPrivateAccessApplicationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (connectorId) {
      res["ConnectorId"] = boost::any(*connectorId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ConnectorId") != m.end() && !m["ConnectorId"].empty()) {
      connectorId = make_shared<string>(boost::any_cast<string>(m["ConnectorId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsRequest() = default;
};
class ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges() {}

  explicit ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges() = default;
};
class ListPrivateAccessApplicationsResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> applicationId{};
  shared_ptr<vector<string>> connectorIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<vector<ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  ListPrivateAccessApplicationsResponseBodyApplications() {}

  explicit ListPrivateAccessApplicationsResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (connectorIds) {
      res["ConnectorIds"] = boost::any(*connectorIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("ConnectorIds") != m.end() && !m["ConnectorIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ConnectorIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ConnectorIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      connectorIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<ListPrivateAccessApplicationsResponseBodyApplicationsPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPrivateAccessApplicationsResponseBodyApplications() = default;
};
class ListPrivateAccessApplicationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrivateAccessApplicationsResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListPrivateAccessApplicationsResponseBody() {}

  explicit ListPrivateAccessApplicationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListPrivateAccessApplicationsResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessApplicationsResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListPrivateAccessApplicationsResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsResponseBody() = default;
};
class ListPrivateAccessApplicationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrivateAccessApplicationsResponseBody> body{};

  ListPrivateAccessApplicationsResponse() {}

  explicit ListPrivateAccessApplicationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrivateAccessApplicationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrivateAccessApplicationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrivateAccessApplicationsResponse() = default;
};
class ListPrivateAccessApplicationsForDynamicRouteRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dynamicRouteIds{};

  ListPrivateAccessApplicationsForDynamicRouteRequest() {}

  explicit ListPrivateAccessApplicationsForDynamicRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRouteIds) {
      res["DynamicRouteIds"] = boost::any(*dynamicRouteIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRouteIds") != m.end() && !m["DynamicRouteIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DynamicRouteIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DynamicRouteIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dynamicRouteIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPrivateAccessApplicationsForDynamicRouteRequest() = default;
};
class ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges() {}

  explicit ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges() = default;
};
class ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};

  ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications() {}

  explicit ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplicationsPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications() = default;
};
class ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications>> applications{};
  shared_ptr<string> dynamicRouteId{};

  ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes() {}

  explicit ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications>>(expect1);
      }
    }
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes() = default;
};
class ListPrivateAccessApplicationsForDynamicRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes>> dynamicRoutes{};
  shared_ptr<string> requestId{};

  ListPrivateAccessApplicationsForDynamicRouteResponseBody() {}

  explicit ListPrivateAccessApplicationsForDynamicRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRoutes) {
      vector<boost::any> temp1;
      for(auto item1:*dynamicRoutes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DynamicRoutes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRoutes") != m.end() && !m["DynamicRoutes"].empty()) {
      if (typeid(vector<boost::any>) == m["DynamicRoutes"].type()) {
        vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DynamicRoutes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dynamicRoutes = make_shared<vector<ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBody() = default;
};
class ListPrivateAccessApplicationsForDynamicRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrivateAccessApplicationsForDynamicRouteResponseBody> body{};

  ListPrivateAccessApplicationsForDynamicRouteResponse() {}

  explicit ListPrivateAccessApplicationsForDynamicRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrivateAccessApplicationsForDynamicRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrivateAccessApplicationsForDynamicRouteResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrivateAccessApplicationsForDynamicRouteResponse() = default;
};
class ListPrivateAccessPolicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyAction{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<string> status{};
  shared_ptr<string> tagId{};
  shared_ptr<string> userGroupId{};

  ListPrivateAccessPolicesRequest() {}

  explicit ListPrivateAccessPolicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListPrivateAccessPolicesRequest() = default;
};
class ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes() {}

  explicit ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes() = default;
};
class ListPrivateAccessPolicesResponseBodyPolices : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes>> customUserAttributes{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<string> userGroupMode{};

  ListPrivateAccessPolicesResponseBodyPolices() {}

  explicit ListPrivateAccessPolicesResponseBodyPolices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customUserAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customUserAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomUserAttributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userGroupMode) {
      res["UserGroupMode"] = boost::any(*userGroupMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomUserAttributes"].type()) {
        vector<ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomUserAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customUserAttributes = make_shared<vector<ListPrivateAccessPolicesResponseBodyPolicesCustomUserAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupMode") != m.end() && !m["UserGroupMode"].empty()) {
      userGroupMode = make_shared<string>(boost::any_cast<string>(m["UserGroupMode"]));
    }
  }


  virtual ~ListPrivateAccessPolicesResponseBodyPolices() = default;
};
class ListPrivateAccessPolicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrivateAccessPolicesResponseBodyPolices>> polices{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListPrivateAccessPolicesResponseBody() {}

  explicit ListPrivateAccessPolicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polices) {
      vector<boost::any> temp1;
      for(auto item1:*polices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Polices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Polices") != m.end() && !m["Polices"].empty()) {
      if (typeid(vector<boost::any>) == m["Polices"].type()) {
        vector<ListPrivateAccessPolicesResponseBodyPolices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Polices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessPolicesResponseBodyPolices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polices = make_shared<vector<ListPrivateAccessPolicesResponseBodyPolices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListPrivateAccessPolicesResponseBody() = default;
};
class ListPrivateAccessPolicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrivateAccessPolicesResponseBody> body{};

  ListPrivateAccessPolicesResponse() {}

  explicit ListPrivateAccessPolicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrivateAccessPolicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrivateAccessPolicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrivateAccessPolicesResponse() = default;
};
class ListPrivateAccessTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> policyId{};
  shared_ptr<bool> simpleMode{};
  shared_ptr<vector<string>> tagIds{};

  ListPrivateAccessTagsRequest() {}

  explicit ListPrivateAccessTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (simpleMode) {
      res["SimpleMode"] = boost::any(*simpleMode);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("SimpleMode") != m.end() && !m["SimpleMode"].empty()) {
      simpleMode = make_shared<bool>(boost::any_cast<bool>(m["SimpleMode"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPrivateAccessTagsRequest() = default;
};
class ListPrivateAccessTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagType{};

  ListPrivateAccessTagsResponseBodyTags() {}

  explicit ListPrivateAccessTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagType) {
      res["TagType"] = boost::any(*tagType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagType") != m.end() && !m["TagType"].empty()) {
      tagType = make_shared<string>(boost::any_cast<string>(m["TagType"]));
    }
  }


  virtual ~ListPrivateAccessTagsResponseBodyTags() = default;
};
class ListPrivateAccessTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListPrivateAccessTagsResponseBodyTags>> tags{};
  shared_ptr<long> totalNum{};

  ListPrivateAccessTagsResponseBody() {}

  explicit ListPrivateAccessTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListPrivateAccessTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListPrivateAccessTagsResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListPrivateAccessTagsResponseBody() = default;
};
class ListPrivateAccessTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrivateAccessTagsResponseBody> body{};

  ListPrivateAccessTagsResponse() {}

  explicit ListPrivateAccessTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrivateAccessTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrivateAccessTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrivateAccessTagsResponse() = default;
};
class ListPrivateAccessTagsForDynamicRouteRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> dynamicRouteIds{};

  ListPrivateAccessTagsForDynamicRouteRequest() {}

  explicit ListPrivateAccessTagsForDynamicRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRouteIds) {
      res["DynamicRouteIds"] = boost::any(*dynamicRouteIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRouteIds") != m.end() && !m["DynamicRouteIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DynamicRouteIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DynamicRouteIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dynamicRouteIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPrivateAccessTagsForDynamicRouteRequest() = default;
};
class ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagType{};

  ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags() {}

  explicit ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagType) {
      res["TagType"] = boost::any(*tagType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagType") != m.end() && !m["TagType"].empty()) {
      tagType = make_shared<string>(boost::any_cast<string>(m["TagType"]));
    }
  }


  virtual ~ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags() = default;
};
class ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes : public Darabonba::Model {
public:
  shared_ptr<string> dynamicRouteId{};
  shared_ptr<vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags>> tags{};

  ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes() {}

  explicit ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
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
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutesTags>>(expect1);
      }
    }
  }


  virtual ~ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes() = default;
};
class ListPrivateAccessTagsForDynamicRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes>> dynamicRoutes{};
  shared_ptr<string> requestId{};

  ListPrivateAccessTagsForDynamicRouteResponseBody() {}

  explicit ListPrivateAccessTagsForDynamicRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicRoutes) {
      vector<boost::any> temp1;
      for(auto item1:*dynamicRoutes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DynamicRoutes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DynamicRoutes") != m.end() && !m["DynamicRoutes"].empty()) {
      if (typeid(vector<boost::any>) == m["DynamicRoutes"].type()) {
        vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DynamicRoutes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dynamicRoutes = make_shared<vector<ListPrivateAccessTagsForDynamicRouteResponseBodyDynamicRoutes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPrivateAccessTagsForDynamicRouteResponseBody() = default;
};
class ListPrivateAccessTagsForDynamicRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPrivateAccessTagsForDynamicRouteResponseBody> body{};

  ListPrivateAccessTagsForDynamicRouteResponse() {}

  explicit ListPrivateAccessTagsForDynamicRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPrivateAccessTagsForDynamicRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPrivateAccessTagsForDynamicRouteResponseBody>(model1);
      }
    }
  }


  virtual ~ListPrivateAccessTagsForDynamicRouteResponse() = default;
};
class ListRegistrationPoliciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyLimitType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> personalLimitType{};
  shared_ptr<vector<string>> policyIds{};
  shared_ptr<string> status{};
  shared_ptr<string> userGroupId{};

  ListRegistrationPoliciesRequest() {}

  explicit ListRegistrationPoliciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyLimitType) {
      res["CompanyLimitType"] = boost::any(*companyLimitType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (personalLimitType) {
      res["PersonalLimitType"] = boost::any(*personalLimitType);
    }
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyLimitType") != m.end() && !m["CompanyLimitType"].empty()) {
      companyLimitType = make_shared<string>(boost::any_cast<string>(m["CompanyLimitType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PersonalLimitType") != m.end() && !m["PersonalLimitType"].empty()) {
      personalLimitType = make_shared<string>(boost::any_cast<string>(m["PersonalLimitType"]));
    }
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListRegistrationPoliciesRequest() = default;
};
class ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount() {}

  explicit ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount() = default;
};
class ListRegistrationPoliciesResponseBodyPoliciesLimitDetail : public Darabonba::Model {
public:
  shared_ptr<string> deviceBelong{};
  shared_ptr<ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount> limitCount{};
  shared_ptr<string> limitType{};

  ListRegistrationPoliciesResponseBodyPoliciesLimitDetail() {}

  explicit ListRegistrationPoliciesResponseBodyPoliciesLimitDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (limitCount) {
      res["LimitCount"] = limitCount ? boost::any(limitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limitType) {
      res["LimitType"] = boost::any(*limitType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("LimitCount") != m.end() && !m["LimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["LimitCount"].type()) {
        ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LimitCount"]));
        limitCount = make_shared<ListRegistrationPoliciesResponseBodyPoliciesLimitDetailLimitCount>(model1);
      }
    }
    if (m.find("LimitType") != m.end() && !m["LimitType"].empty()) {
      limitType = make_shared<string>(boost::any_cast<string>(m["LimitType"]));
    }
  }


  virtual ~ListRegistrationPoliciesResponseBodyPoliciesLimitDetail() = default;
};
class ListRegistrationPoliciesResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListRegistrationPoliciesResponseBodyPoliciesLimitDetail>> limitDetail{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  ListRegistrationPoliciesResponseBodyPolicies() {}

  explicit ListRegistrationPoliciesResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (limitDetail) {
      vector<boost::any> temp1;
      for(auto item1:*limitDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LimitDetail"] = boost::any(temp1);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LimitDetail") != m.end() && !m["LimitDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LimitDetail"].type()) {
        vector<ListRegistrationPoliciesResponseBodyPoliciesLimitDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LimitDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegistrationPoliciesResponseBodyPoliciesLimitDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitDetail = make_shared<vector<ListRegistrationPoliciesResponseBodyPoliciesLimitDetail>>(expect1);
      }
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRegistrationPoliciesResponseBodyPolicies() = default;
};
class ListRegistrationPoliciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegistrationPoliciesResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};
  shared_ptr<string> totalNum{};

  ListRegistrationPoliciesResponseBody() {}

  explicit ListRegistrationPoliciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<ListRegistrationPoliciesResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegistrationPoliciesResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<ListRegistrationPoliciesResponseBodyPolicies>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<string>(boost::any_cast<string>(m["TotalNum"]));
    }
  }


  virtual ~ListRegistrationPoliciesResponseBody() = default;
};
class ListRegistrationPoliciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegistrationPoliciesResponseBody> body{};

  ListRegistrationPoliciesResponse() {}

  explicit ListRegistrationPoliciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegistrationPoliciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegistrationPoliciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegistrationPoliciesResponse() = default;
};
class ListRegistrationPoliciesForUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> userGroupIds{};

  ListRegistrationPoliciesForUserGroupRequest() {}

  explicit ListRegistrationPoliciesForUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupRequest() = default;
};
class ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount : public Darabonba::Model {
public:
  shared_ptr<string> all{};
  shared_ptr<string> mobile{};
  shared_ptr<string> PC{};

  ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount() {}

  explicit ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<string>(boost::any_cast<string>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<string>(boost::any_cast<string>(m["PC"]));
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount() = default;
};
class ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail : public Darabonba::Model {
public:
  shared_ptr<string> deviceBelong{};
  shared_ptr<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount> limitCount{};
  shared_ptr<string> limitType{};

  ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail() {}

  explicit ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (limitCount) {
      res["LimitCount"] = limitCount ? boost::any(limitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limitType) {
      res["LimitType"] = boost::any(*limitType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("LimitCount") != m.end() && !m["LimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["LimitCount"].type()) {
        ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LimitCount"]));
        limitCount = make_shared<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetailLimitCount>(model1);
      }
    }
    if (m.find("LimitType") != m.end() && !m["LimitType"].empty()) {
      limitType = make_shared<string>(boost::any_cast<string>(m["LimitType"]));
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail() = default;
};
class ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail>> limitDetail{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> whitelist{};

  ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies() {}

  explicit ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (limitDetail) {
      vector<boost::any> temp1;
      for(auto item1:*limitDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LimitDetail"] = boost::any(temp1);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LimitDetail") != m.end() && !m["LimitDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LimitDetail"].type()) {
        vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LimitDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitDetail = make_shared<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPoliciesLimitDetail>>(expect1);
      }
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies() = default;
};
class ListRegistrationPoliciesForUserGroupResponseBodyUserGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies>> policies{};
  shared_ptr<string> userGroupId{};

  ListRegistrationPoliciesForUserGroupResponseBodyUserGroups() {}

  explicit ListRegistrationPoliciesForUserGroupResponseBodyUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroupsPolicies>>(expect1);
      }
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupResponseBodyUserGroups() = default;
};
class ListRegistrationPoliciesForUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups>> userGroups{};

  ListRegistrationPoliciesForUserGroupResponseBody() {}

  explicit ListRegistrationPoliciesForUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userGroups) {
      vector<boost::any> temp1;
      for(auto item1:*userGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRegistrationPoliciesForUserGroupResponseBodyUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroups = make_shared<vector<ListRegistrationPoliciesForUserGroupResponseBodyUserGroups>>(expect1);
      }
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupResponseBody() = default;
};
class ListRegistrationPoliciesForUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegistrationPoliciesForUserGroupResponseBody> body{};

  ListRegistrationPoliciesForUserGroupResponse() {}

  explicit ListRegistrationPoliciesForUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegistrationPoliciesForUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegistrationPoliciesForUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegistrationPoliciesForUserGroupResponse() = default;
};
class ListSoftwareForUserDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceTag{};
  shared_ptr<long> pageSize{};

  ListSoftwareForUserDeviceRequest() {}

  explicit ListSoftwareForUserDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListSoftwareForUserDeviceRequest() = default;
};
class ListSoftwareForUserDeviceResponseBodySoftware : public Darabonba::Model {
public:
  shared_ptr<string> inc{};
  shared_ptr<string> installTime{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> versions{};

  ListSoftwareForUserDeviceResponseBodySoftware() {}

  explicit ListSoftwareForUserDeviceResponseBodySoftware(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inc) {
      res["Inc"] = boost::any(*inc);
    }
    if (installTime) {
      res["InstallTime"] = boost::any(*installTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (versions) {
      res["Versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Inc") != m.end() && !m["Inc"].empty()) {
      inc = make_shared<string>(boost::any_cast<string>(m["Inc"]));
    }
    if (m.find("InstallTime") != m.end() && !m["InstallTime"].empty()) {
      installTime = make_shared<string>(boost::any_cast<string>(m["InstallTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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


  virtual ~ListSoftwareForUserDeviceResponseBodySoftware() = default;
};
class ListSoftwareForUserDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSoftwareForUserDeviceResponseBodySoftware>> software{};
  shared_ptr<long> totalNum{};

  ListSoftwareForUserDeviceResponseBody() {}

  explicit ListSoftwareForUserDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (software) {
      vector<boost::any> temp1;
      for(auto item1:*software){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Software"] = boost::any(temp1);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Software") != m.end() && !m["Software"].empty()) {
      if (typeid(vector<boost::any>) == m["Software"].type()) {
        vector<ListSoftwareForUserDeviceResponseBodySoftware> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Software"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSoftwareForUserDeviceResponseBodySoftware model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        software = make_shared<vector<ListSoftwareForUserDeviceResponseBodySoftware>>(expect1);
      }
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListSoftwareForUserDeviceResponseBody() = default;
};
class ListSoftwareForUserDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSoftwareForUserDeviceResponseBody> body{};

  ListSoftwareForUserDeviceResponse() {}

  explicit ListSoftwareForUserDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSoftwareForUserDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSoftwareForUserDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ListSoftwareForUserDeviceResponse() = default;
};
class ListTagsForPrivateAccessApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};

  ListTagsForPrivateAccessApplicationRequest() {}

  explicit ListTagsForPrivateAccessApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagsForPrivateAccessApplicationRequest() = default;
};
class ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagType{};

  ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags() {}

  explicit ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagType) {
      res["TagType"] = boost::any(*tagType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagType") != m.end() && !m["TagType"].empty()) {
      tagType = make_shared<string>(boost::any_cast<string>(m["TagType"]));
    }
  }


  virtual ~ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags() = default;
};
class ListTagsForPrivateAccessApplicationResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<vector<ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags>> tags{};

  ListTagsForPrivateAccessApplicationResponseBodyApplications() {}

  explicit ListTagsForPrivateAccessApplicationResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
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
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagsForPrivateAccessApplicationResponseBodyApplicationsTags>>(expect1);
      }
    }
  }


  virtual ~ListTagsForPrivateAccessApplicationResponseBodyApplications() = default;
};
class ListTagsForPrivateAccessApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagsForPrivateAccessApplicationResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};

  ListTagsForPrivateAccessApplicationResponseBody() {}

  explicit ListTagsForPrivateAccessApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<ListTagsForPrivateAccessApplicationResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsForPrivateAccessApplicationResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<ListTagsForPrivateAccessApplicationResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTagsForPrivateAccessApplicationResponseBody() = default;
};
class ListTagsForPrivateAccessApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagsForPrivateAccessApplicationResponseBody> body{};

  ListTagsForPrivateAccessApplicationResponse() {}

  explicit ListTagsForPrivateAccessApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagsForPrivateAccessApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagsForPrivateAccessApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagsForPrivateAccessApplicationResponse() = default;
};
class ListTagsForPrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> policyIds{};

  ListTagsForPrivateAccessPolicyRequest() {}

  explicit ListTagsForPrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTagsForPrivateAccessPolicyRequest() = default;
};
class ListTagsForPrivateAccessPolicyResponseBodyPolicesTags : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> tagId{};
  shared_ptr<string> tagType{};

  ListTagsForPrivateAccessPolicyResponseBodyPolicesTags() {}

  explicit ListTagsForPrivateAccessPolicyResponseBodyPolicesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagType) {
      res["TagType"] = boost::any(*tagType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagType") != m.end() && !m["TagType"].empty()) {
      tagType = make_shared<string>(boost::any_cast<string>(m["TagType"]));
    }
  }


  virtual ~ListTagsForPrivateAccessPolicyResponseBodyPolicesTags() = default;
};
class ListTagsForPrivateAccessPolicyResponseBodyPolices : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<vector<ListTagsForPrivateAccessPolicyResponseBodyPolicesTags>> tags{};

  ListTagsForPrivateAccessPolicyResponseBodyPolices() {}

  explicit ListTagsForPrivateAccessPolicyResponseBodyPolices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
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
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListTagsForPrivateAccessPolicyResponseBodyPolicesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsForPrivateAccessPolicyResponseBodyPolicesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListTagsForPrivateAccessPolicyResponseBodyPolicesTags>>(expect1);
      }
    }
  }


  virtual ~ListTagsForPrivateAccessPolicyResponseBodyPolices() = default;
};
class ListTagsForPrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagsForPrivateAccessPolicyResponseBodyPolices>> polices{};
  shared_ptr<string> requestId{};

  ListTagsForPrivateAccessPolicyResponseBody() {}

  explicit ListTagsForPrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polices) {
      vector<boost::any> temp1;
      for(auto item1:*polices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Polices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Polices") != m.end() && !m["Polices"].empty()) {
      if (typeid(vector<boost::any>) == m["Polices"].type()) {
        vector<ListTagsForPrivateAccessPolicyResponseBodyPolices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Polices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagsForPrivateAccessPolicyResponseBodyPolices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polices = make_shared<vector<ListTagsForPrivateAccessPolicyResponseBodyPolices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListTagsForPrivateAccessPolicyResponseBody() = default;
};
class ListTagsForPrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagsForPrivateAccessPolicyResponseBody> body{};

  ListTagsForPrivateAccessPolicyResponse() {}

  explicit ListTagsForPrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagsForPrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagsForPrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagsForPrivateAccessPolicyResponse() = default;
};
class ListUserDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> appStatuses{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> department{};
  shared_ptr<string> deviceBelong{};
  shared_ptr<vector<string>> deviceStatuses{};
  shared_ptr<vector<string>> deviceTags{};
  shared_ptr<vector<string>> deviceTypes{};
  shared_ptr<vector<string>> dlpStatuses{};
  shared_ptr<string> hostname{};
  shared_ptr<vector<string>> iaStatuses{};
  shared_ptr<string> mac{};
  shared_ptr<vector<string>> nacStatuses{};
  shared_ptr<vector<string>> paStatuses{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> saseUserId{};
  shared_ptr<bool> sharingStatus{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> username{};

  ListUserDevicesRequest() {}

  explicit ListUserDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatuses) {
      res["AppStatuses"] = boost::any(*appStatuses);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (deviceStatuses) {
      res["DeviceStatuses"] = boost::any(*deviceStatuses);
    }
    if (deviceTags) {
      res["DeviceTags"] = boost::any(*deviceTags);
    }
    if (deviceTypes) {
      res["DeviceTypes"] = boost::any(*deviceTypes);
    }
    if (dlpStatuses) {
      res["DlpStatuses"] = boost::any(*dlpStatuses);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (iaStatuses) {
      res["IaStatuses"] = boost::any(*iaStatuses);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (nacStatuses) {
      res["NacStatuses"] = boost::any(*nacStatuses);
    }
    if (paStatuses) {
      res["PaStatuses"] = boost::any(*paStatuses);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (sharingStatus) {
      res["SharingStatus"] = boost::any(*sharingStatus);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatuses") != m.end() && !m["AppStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AppStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AppStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      appStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("DeviceStatuses") != m.end() && !m["DeviceStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DeviceTags") != m.end() && !m["DeviceTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DeviceTypes") != m.end() && !m["DeviceTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DlpStatuses") != m.end() && !m["DlpStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DlpStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DlpStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dlpStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IaStatuses") != m.end() && !m["IaStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IaStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IaStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      iaStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("NacStatuses") != m.end() && !m["NacStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["NacStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["NacStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      nacStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PaStatuses") != m.end() && !m["PaStatuses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PaStatuses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PaStatuses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      paStatuses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("SharingStatus") != m.end() && !m["SharingStatus"].empty()) {
      sharingStatus = make_shared<bool>(boost::any_cast<bool>(m["SharingStatus"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListUserDevicesRequest() = default;
};
class ListUserDevicesResponseBodyDevices : public Darabonba::Model {
public:
  shared_ptr<string> appStatus{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> CPU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> department{};
  shared_ptr<string> deviceBelong{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> deviceVersion{};
  shared_ptr<string> disk{};
  shared_ptr<string> dlpStatus{};
  shared_ptr<string> hostname{};
  shared_ptr<string> iaStatus{};
  shared_ptr<string> innerIP{};
  shared_ptr<string> mac{};
  shared_ptr<string> memory{};
  shared_ptr<string> nacStatus{};
  shared_ptr<string> paStatus{};
  shared_ptr<string> saseUserId{};
  shared_ptr<bool> sharingStatus{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> username{};

  ListUserDevicesResponseBodyDevices() {}

  explicit ListUserDevicesResponseBodyDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (deviceModel) {
      res["DeviceModel"] = boost::any(*deviceModel);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (deviceVersion) {
      res["DeviceVersion"] = boost::any(*deviceVersion);
    }
    if (disk) {
      res["Disk"] = boost::any(*disk);
    }
    if (dlpStatus) {
      res["DlpStatus"] = boost::any(*dlpStatus);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (iaStatus) {
      res["IaStatus"] = boost::any(*iaStatus);
    }
    if (innerIP) {
      res["InnerIP"] = boost::any(*innerIP);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nacStatus) {
      res["NacStatus"] = boost::any(*nacStatus);
    }
    if (paStatus) {
      res["PaStatus"] = boost::any(*paStatus);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (sharingStatus) {
      res["SharingStatus"] = boost::any(*sharingStatus);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("DeviceModel") != m.end() && !m["DeviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["DeviceModel"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("DeviceVersion") != m.end() && !m["DeviceVersion"].empty()) {
      deviceVersion = make_shared<string>(boost::any_cast<string>(m["DeviceVersion"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      disk = make_shared<string>(boost::any_cast<string>(m["Disk"]));
    }
    if (m.find("DlpStatus") != m.end() && !m["DlpStatus"].empty()) {
      dlpStatus = make_shared<string>(boost::any_cast<string>(m["DlpStatus"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IaStatus") != m.end() && !m["IaStatus"].empty()) {
      iaStatus = make_shared<string>(boost::any_cast<string>(m["IaStatus"]));
    }
    if (m.find("InnerIP") != m.end() && !m["InnerIP"].empty()) {
      innerIP = make_shared<string>(boost::any_cast<string>(m["InnerIP"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("NacStatus") != m.end() && !m["NacStatus"].empty()) {
      nacStatus = make_shared<string>(boost::any_cast<string>(m["NacStatus"]));
    }
    if (m.find("PaStatus") != m.end() && !m["PaStatus"].empty()) {
      paStatus = make_shared<string>(boost::any_cast<string>(m["PaStatus"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("SharingStatus") != m.end() && !m["SharingStatus"].empty()) {
      sharingStatus = make_shared<bool>(boost::any_cast<bool>(m["SharingStatus"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ListUserDevicesResponseBodyDevices() = default;
};
class ListUserDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserDevicesResponseBodyDevices>> devices{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};

  ListUserDevicesResponseBody() {}

  explicit ListUserDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<ListUserDevicesResponseBodyDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserDevicesResponseBodyDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<ListUserDevicesResponseBodyDevices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
  }


  virtual ~ListUserDevicesResponseBody() = default;
};
class ListUserDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserDevicesResponseBody> body{};

  ListUserDevicesResponse() {}

  explicit ListUserDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserDevicesResponse() = default;
};
class ListUserGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> attributeValue{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> name{};
  shared_ptr<string> PAPolicyId{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> userGroupIds{};

  ListUserGroupsRequest() {}

  explicit ListUserGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeValue) {
      res["AttributeValue"] = boost::any(*attributeValue);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (PAPolicyId) {
      res["PAPolicyId"] = boost::any(*PAPolicyId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeValue") != m.end() && !m["AttributeValue"].empty()) {
      attributeValue = make_shared<string>(boost::any_cast<string>(m["AttributeValue"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PAPolicyId") != m.end() && !m["PAPolicyId"].empty()) {
      PAPolicyId = make_shared<string>(boost::any_cast<string>(m["PAPolicyId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUserGroupsRequest() = default;
};
class ListUserGroupsResponseBodyUserGroupsAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  ListUserGroupsResponseBodyUserGroupsAttributes() {}

  explicit ListUserGroupsResponseBodyUserGroupsAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUserGroupsResponseBodyUserGroupsAttributes() = default;
};
class ListUserGroupsResponseBodyUserGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserGroupsResponseBodyUserGroupsAttributes>> attributes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> userGroupId{};

  ListUserGroupsResponseBodyUserGroups() {}

  explicit ListUserGroupsResponseBodyUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<ListUserGroupsResponseBodyUserGroupsAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsResponseBodyUserGroupsAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<ListUserGroupsResponseBodyUserGroupsAttributes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListUserGroupsResponseBodyUserGroups() = default;
};
class ListUserGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalNum{};
  shared_ptr<vector<ListUserGroupsResponseBodyUserGroups>> userGroups{};

  ListUserGroupsResponseBody() {}

  explicit ListUserGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalNum) {
      res["TotalNum"] = boost::any(*totalNum);
    }
    if (userGroups) {
      vector<boost::any> temp1;
      for(auto item1:*userGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalNum") != m.end() && !m["TotalNum"].empty()) {
      totalNum = make_shared<long>(boost::any_cast<long>(m["TotalNum"]));
    }
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<ListUserGroupsResponseBodyUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsResponseBodyUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroups = make_shared<vector<ListUserGroupsResponseBodyUserGroups>>(expect1);
      }
    }
  }


  virtual ~ListUserGroupsResponseBody() = default;
};
class ListUserGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupsResponseBody> body{};

  ListUserGroupsResponse() {}

  explicit ListUserGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsResponse() = default;
};
class ListUserGroupsForPrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> policyIds{};

  ListUserGroupsForPrivateAccessPolicyRequest() {}

  explicit ListUserGroupsForPrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUserGroupsForPrivateAccessPolicyRequest() = default;
};
class ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes() {}

  explicit ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes() = default;
};
class ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes>> attributes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> userGroupId{};

  ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups() {}

  explicit ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroupsAttributes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups() = default;
};
class ListUserGroupsForPrivateAccessPolicyResponseBodyPolices : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups>> userGroups{};

  ListUserGroupsForPrivateAccessPolicyResponseBodyPolices() {}

  explicit ListUserGroupsForPrivateAccessPolicyResponseBodyPolices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (userGroups) {
      vector<boost::any> temp1;
      for(auto item1:*userGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroups = make_shared<vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolicesUserGroups>>(expect1);
      }
    }
  }


  virtual ~ListUserGroupsForPrivateAccessPolicyResponseBodyPolices() = default;
};
class ListUserGroupsForPrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolices>> polices{};
  shared_ptr<string> requestId{};

  ListUserGroupsForPrivateAccessPolicyResponseBody() {}

  explicit ListUserGroupsForPrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (polices) {
      vector<boost::any> temp1;
      for(auto item1:*polices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Polices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Polices") != m.end() && !m["Polices"].empty()) {
      if (typeid(vector<boost::any>) == m["Polices"].type()) {
        vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Polices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsForPrivateAccessPolicyResponseBodyPolices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        polices = make_shared<vector<ListUserGroupsForPrivateAccessPolicyResponseBodyPolices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserGroupsForPrivateAccessPolicyResponseBody() = default;
};
class ListUserGroupsForPrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupsForPrivateAccessPolicyResponseBody> body{};

  ListUserGroupsForPrivateAccessPolicyResponse() {}

  explicit ListUserGroupsForPrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserGroupsForPrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsForPrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsForPrivateAccessPolicyResponse() = default;
};
class ListUserGroupsForRegistrationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> policyIds{};

  ListUserGroupsForRegistrationPolicyRequest() {}

  explicit ListUserGroupsForRegistrationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyIds) {
      res["PolicyIds"] = boost::any(*policyIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyIds") != m.end() && !m["PolicyIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PolicyIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PolicyIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      policyIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUserGroupsForRegistrationPolicyRequest() = default;
};
class ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes() {}

  explicit ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes() = default;
};
class ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes>> attributes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> userGroupId{};

  ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups() {}

  explicit ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroupsAttributes>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups() = default;
};
class ListUserGroupsForRegistrationPolicyResponseBodyPolicies : public Darabonba::Model {
public:
  shared_ptr<string> policyId{};
  shared_ptr<vector<ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups>> userGroups{};

  ListUserGroupsForRegistrationPolicyResponseBodyPolicies() {}

  explicit ListUserGroupsForRegistrationPolicyResponseBodyPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (userGroups) {
      vector<boost::any> temp1;
      for(auto item1:*userGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroups"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("UserGroups") != m.end() && !m["UserGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroups"].type()) {
        vector<ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroups = make_shared<vector<ListUserGroupsForRegistrationPolicyResponseBodyPoliciesUserGroups>>(expect1);
      }
    }
  }


  virtual ~ListUserGroupsForRegistrationPolicyResponseBodyPolicies() = default;
};
class ListUserGroupsForRegistrationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies>> policies{};
  shared_ptr<string> requestId{};

  ListUserGroupsForRegistrationPolicyResponseBody() {}

  explicit ListUserGroupsForRegistrationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policies) {
      vector<boost::any> temp1;
      for(auto item1:*policies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Policies"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policies") != m.end() && !m["Policies"].empty()) {
      if (typeid(vector<boost::any>) == m["Policies"].type()) {
        vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Policies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserGroupsForRegistrationPolicyResponseBodyPolicies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        policies = make_shared<vector<ListUserGroupsForRegistrationPolicyResponseBodyPolicies>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserGroupsForRegistrationPolicyResponseBody() = default;
};
class ListUserGroupsForRegistrationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserGroupsForRegistrationPolicyResponseBody> body{};

  ListUserGroupsForRegistrationPolicyResponse() {}

  explicit ListUserGroupsForRegistrationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserGroupsForRegistrationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserGroupsForRegistrationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserGroupsForRegistrationPolicyResponse() = default;
};
class UpdateDynamicRouteRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> description{};
  shared_ptr<string> dynamicRouteId{};
  shared_ptr<string> dynamicRouteType{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> name{};
  shared_ptr<string> nextHop{};
  shared_ptr<long> priority{};
  shared_ptr<vector<string>> regionIds{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  UpdateDynamicRouteRequest() {}

  explicit UpdateDynamicRouteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dynamicRouteId) {
      res["DynamicRouteId"] = boost::any(*dynamicRouteId);
    }
    if (dynamicRouteType) {
      res["DynamicRouteType"] = boost::any(*dynamicRouteType);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextHop) {
      res["NextHop"] = boost::any(*nextHop);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (regionIds) {
      res["RegionIds"] = boost::any(*regionIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DynamicRouteId") != m.end() && !m["DynamicRouteId"].empty()) {
      dynamicRouteId = make_shared<string>(boost::any_cast<string>(m["DynamicRouteId"]));
    }
    if (m.find("DynamicRouteType") != m.end() && !m["DynamicRouteType"].empty()) {
      dynamicRouteType = make_shared<string>(boost::any_cast<string>(m["DynamicRouteType"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextHop") != m.end() && !m["NextHop"].empty()) {
      nextHop = make_shared<string>(boost::any_cast<string>(m["NextHop"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("RegionIds") != m.end() && !m["RegionIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateDynamicRouteRequest() = default;
};
class UpdateDynamicRouteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDynamicRouteResponseBody() {}

  explicit UpdateDynamicRouteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDynamicRouteResponseBody() = default;
};
class UpdateDynamicRouteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDynamicRouteResponseBody> body{};

  UpdateDynamicRouteResponse() {}

  explicit UpdateDynamicRouteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDynamicRouteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDynamicRouteResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDynamicRouteResponse() = default;
};
class UpdateExcessiveDeviceRegistrationApplicationsStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> status{};

  UpdateExcessiveDeviceRegistrationApplicationsStatusRequest() {}

  explicit UpdateExcessiveDeviceRegistrationApplicationsStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusRequest() = default;
};
class UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications : public Darabonba::Model {
public:
  shared_ptr<string> applicationId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> department{};
  shared_ptr<string> description{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> hostname{};
  shared_ptr<bool> isUsed{};
  shared_ptr<string> mac{};
  shared_ptr<string> saseUserId{};
  shared_ptr<string> status{};
  shared_ptr<string> username{};

  UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications() {}

  explicit UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (isUsed) {
      res["IsUsed"] = boost::any(*isUsed);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IsUsed") != m.end() && !m["IsUsed"].empty()) {
      isUsed = make_shared<bool>(boost::any_cast<bool>(m["IsUsed"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications() = default;
};
class UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications>> applications{};
  shared_ptr<string> requestId{};

  UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody() {}

  explicit UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applications) {
      vector<boost::any> temp1;
      for(auto item1:*applications){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Applications"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Applications") != m.end() && !m["Applications"].empty()) {
      if (typeid(vector<boost::any>) == m["Applications"].type()) {
        vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Applications"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applications = make_shared<vector<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBodyApplications>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody() = default;
};
class UpdateExcessiveDeviceRegistrationApplicationsStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody> body{};

  UpdateExcessiveDeviceRegistrationApplicationsStatusResponse() {}

  explicit UpdateExcessiveDeviceRegistrationApplicationsStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateExcessiveDeviceRegistrationApplicationsStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateExcessiveDeviceRegistrationApplicationsStatusResponse() = default;
};
class UpdatePrivateAccessApplicationRequestPortRanges : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> end{};

  UpdatePrivateAccessApplicationRequestPortRanges() {}

  explicit UpdatePrivateAccessApplicationRequestPortRanges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~UpdatePrivateAccessApplicationRequestPortRanges() = default;
};
class UpdatePrivateAccessApplicationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyType{};
  shared_ptr<vector<UpdatePrivateAccessApplicationRequestPortRanges>> portRanges{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};

  UpdatePrivateAccessApplicationRequest() {}

  explicit UpdatePrivateAccessApplicationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (applicationId) {
      res["ApplicationId"] = boost::any(*applicationId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (portRanges) {
      vector<boost::any> temp1;
      for(auto item1:*portRanges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PortRanges"] = boost::any(temp1);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationId") != m.end() && !m["ApplicationId"].empty()) {
      applicationId = make_shared<string>(boost::any_cast<string>(m["ApplicationId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      if (typeid(vector<boost::any>) == m["PortRanges"].type()) {
        vector<UpdatePrivateAccessApplicationRequestPortRanges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PortRanges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePrivateAccessApplicationRequestPortRanges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        portRanges = make_shared<vector<UpdatePrivateAccessApplicationRequestPortRanges>>(expect1);
      }
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdatePrivateAccessApplicationRequest() = default;
};
class UpdatePrivateAccessApplicationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePrivateAccessApplicationResponseBody() {}

  explicit UpdatePrivateAccessApplicationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePrivateAccessApplicationResponseBody() = default;
};
class UpdatePrivateAccessApplicationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePrivateAccessApplicationResponseBody> body{};

  UpdatePrivateAccessApplicationResponse() {}

  explicit UpdatePrivateAccessApplicationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePrivateAccessApplicationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePrivateAccessApplicationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePrivateAccessApplicationResponse() = default;
};
class UpdatePrivateAccessPolicyRequestCustomUserAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  UpdatePrivateAccessPolicyRequestCustomUserAttributes() {}

  explicit UpdatePrivateAccessPolicyRequestCustomUserAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdatePrivateAccessPolicyRequestCustomUserAttributes() = default;
};
class UpdatePrivateAccessPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicationIds{};
  shared_ptr<string> applicationType{};
  shared_ptr<vector<UpdatePrivateAccessPolicyRequestCustomUserAttributes>> customUserAttributes{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<string> userGroupMode{};

  UpdatePrivateAccessPolicyRequest() {}

  explicit UpdatePrivateAccessPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIds) {
      res["ApplicationIds"] = boost::any(*applicationIds);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (customUserAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customUserAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomUserAttributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (policyAction) {
      res["PolicyAction"] = boost::any(*policyAction);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (userGroupMode) {
      res["UserGroupMode"] = boost::any(*userGroupMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicationIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicationIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicationIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomUserAttributes"].type()) {
        vector<UpdatePrivateAccessPolicyRequestCustomUserAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomUserAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdatePrivateAccessPolicyRequestCustomUserAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customUserAttributes = make_shared<vector<UpdatePrivateAccessPolicyRequestCustomUserAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("PolicyAction") != m.end() && !m["PolicyAction"].empty()) {
      policyAction = make_shared<string>(boost::any_cast<string>(m["PolicyAction"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserGroupMode") != m.end() && !m["UserGroupMode"].empty()) {
      userGroupMode = make_shared<string>(boost::any_cast<string>(m["UserGroupMode"]));
    }
  }


  virtual ~UpdatePrivateAccessPolicyRequest() = default;
};
class UpdatePrivateAccessPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePrivateAccessPolicyResponseBody() {}

  explicit UpdatePrivateAccessPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePrivateAccessPolicyResponseBody() = default;
};
class UpdatePrivateAccessPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePrivateAccessPolicyResponseBody> body{};

  UpdatePrivateAccessPolicyResponse() {}

  explicit UpdatePrivateAccessPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePrivateAccessPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePrivateAccessPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePrivateAccessPolicyResponse() = default;
};
class UpdateRegistrationPolicyRequestCompanyLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  UpdateRegistrationPolicyRequestCompanyLimitCount() {}

  explicit UpdateRegistrationPolicyRequestCompanyLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~UpdateRegistrationPolicyRequestCompanyLimitCount() = default;
};
class UpdateRegistrationPolicyRequestPersonalLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  UpdateRegistrationPolicyRequestPersonalLimitCount() {}

  explicit UpdateRegistrationPolicyRequestPersonalLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~UpdateRegistrationPolicyRequestPersonalLimitCount() = default;
};
class UpdateRegistrationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateRegistrationPolicyRequestCompanyLimitCount> companyLimitCount{};
  shared_ptr<string> companyLimitType{};
  shared_ptr<string> description{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<UpdateRegistrationPolicyRequestPersonalLimitCount> personalLimitCount{};
  shared_ptr<string> personalLimitType{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  UpdateRegistrationPolicyRequest() {}

  explicit UpdateRegistrationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyLimitCount) {
      res["CompanyLimitCount"] = companyLimitCount ? boost::any(companyLimitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (companyLimitType) {
      res["CompanyLimitType"] = boost::any(*companyLimitType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (personalLimitCount) {
      res["PersonalLimitCount"] = personalLimitCount ? boost::any(personalLimitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (personalLimitType) {
      res["PersonalLimitType"] = boost::any(*personalLimitType);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyLimitCount") != m.end() && !m["CompanyLimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["CompanyLimitCount"].type()) {
        UpdateRegistrationPolicyRequestCompanyLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CompanyLimitCount"]));
        companyLimitCount = make_shared<UpdateRegistrationPolicyRequestCompanyLimitCount>(model1);
      }
    }
    if (m.find("CompanyLimitType") != m.end() && !m["CompanyLimitType"].empty()) {
      companyLimitType = make_shared<string>(boost::any_cast<string>(m["CompanyLimitType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PersonalLimitCount") != m.end() && !m["PersonalLimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["PersonalLimitCount"].type()) {
        UpdateRegistrationPolicyRequestPersonalLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PersonalLimitCount"]));
        personalLimitCount = make_shared<UpdateRegistrationPolicyRequestPersonalLimitCount>(model1);
      }
    }
    if (m.find("PersonalLimitType") != m.end() && !m["PersonalLimitType"].empty()) {
      personalLimitType = make_shared<string>(boost::any_cast<string>(m["PersonalLimitType"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRegistrationPolicyRequest() = default;
};
class UpdateRegistrationPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyLimitCountShrink{};
  shared_ptr<string> companyLimitType{};
  shared_ptr<string> description{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> personalLimitCountShrink{};
  shared_ptr<string> personalLimitType{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  UpdateRegistrationPolicyShrinkRequest() {}

  explicit UpdateRegistrationPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyLimitCountShrink) {
      res["CompanyLimitCount"] = boost::any(*companyLimitCountShrink);
    }
    if (companyLimitType) {
      res["CompanyLimitType"] = boost::any(*companyLimitType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (personalLimitCountShrink) {
      res["PersonalLimitCount"] = boost::any(*personalLimitCountShrink);
    }
    if (personalLimitType) {
      res["PersonalLimitType"] = boost::any(*personalLimitType);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyLimitCount") != m.end() && !m["CompanyLimitCount"].empty()) {
      companyLimitCountShrink = make_shared<string>(boost::any_cast<string>(m["CompanyLimitCount"]));
    }
    if (m.find("CompanyLimitType") != m.end() && !m["CompanyLimitType"].empty()) {
      companyLimitType = make_shared<string>(boost::any_cast<string>(m["CompanyLimitType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PersonalLimitCount") != m.end() && !m["PersonalLimitCount"].empty()) {
      personalLimitCountShrink = make_shared<string>(boost::any_cast<string>(m["PersonalLimitCount"]));
    }
    if (m.find("PersonalLimitType") != m.end() && !m["PersonalLimitType"].empty()) {
      personalLimitType = make_shared<string>(boost::any_cast<string>(m["PersonalLimitType"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<long>(boost::any_cast<long>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRegistrationPolicyShrinkRequest() = default;
};
class UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount : public Darabonba::Model {
public:
  shared_ptr<long> all{};
  shared_ptr<long> mobile{};
  shared_ptr<long> PC{};

  UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount() {}

  explicit UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (PC) {
      res["PC"] = boost::any(*PC);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<long>(boost::any_cast<long>(m["All"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<long>(boost::any_cast<long>(m["Mobile"]));
    }
    if (m.find("PC") != m.end() && !m["PC"].empty()) {
      PC = make_shared<long>(boost::any_cast<long>(m["PC"]));
    }
  }


  virtual ~UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount() = default;
};
class UpdateRegistrationPolicyResponseBodyPolicyLimitDetail : public Darabonba::Model {
public:
  shared_ptr<string> deviceBelong{};
  shared_ptr<UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount> limitCount{};
  shared_ptr<string> limitType{};

  UpdateRegistrationPolicyResponseBodyPolicyLimitDetail() {}

  explicit UpdateRegistrationPolicyResponseBodyPolicyLimitDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (limitCount) {
      res["LimitCount"] = limitCount ? boost::any(limitCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (limitType) {
      res["LimitType"] = boost::any(*limitType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("LimitCount") != m.end() && !m["LimitCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["LimitCount"].type()) {
        UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LimitCount"]));
        limitCount = make_shared<UpdateRegistrationPolicyResponseBodyPolicyLimitDetailLimitCount>(model1);
      }
    }
    if (m.find("LimitType") != m.end() && !m["LimitType"].empty()) {
      limitType = make_shared<string>(boost::any_cast<string>(m["LimitType"]));
    }
  }


  virtual ~UpdateRegistrationPolicyResponseBodyPolicyLimitDetail() = default;
};
class UpdateRegistrationPolicyResponseBodyPolicy : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<UpdateRegistrationPolicyResponseBodyPolicyLimitDetail>> limitDetail{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> policyId{};
  shared_ptr<string> priority{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> userGroupIds{};
  shared_ptr<vector<string>> whitelist{};

  UpdateRegistrationPolicyResponseBodyPolicy() {}

  explicit UpdateRegistrationPolicyResponseBodyPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (limitDetail) {
      vector<boost::any> temp1;
      for(auto item1:*limitDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LimitDetail"] = boost::any(temp1);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (policyId) {
      res["PolicyId"] = boost::any(*policyId);
    }
    if (priority) {
      res["Priority"] = boost::any(*priority);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userGroupIds) {
      res["UserGroupIds"] = boost::any(*userGroupIds);
    }
    if (whitelist) {
      res["Whitelist"] = boost::any(*whitelist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("LimitDetail") != m.end() && !m["LimitDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["LimitDetail"].type()) {
        vector<UpdateRegistrationPolicyResponseBodyPolicyLimitDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LimitDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateRegistrationPolicyResponseBodyPolicyLimitDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        limitDetail = make_shared<vector<UpdateRegistrationPolicyResponseBodyPolicyLimitDetail>>(expect1);
      }
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PolicyId") != m.end() && !m["PolicyId"].empty()) {
      policyId = make_shared<string>(boost::any_cast<string>(m["PolicyId"]));
    }
    if (m.find("Priority") != m.end() && !m["Priority"].empty()) {
      priority = make_shared<string>(boost::any_cast<string>(m["Priority"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserGroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserGroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userGroupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Whitelist") != m.end() && !m["Whitelist"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Whitelist"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Whitelist"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      whitelist = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateRegistrationPolicyResponseBodyPolicy() = default;
};
class UpdateRegistrationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateRegistrationPolicyResponseBodyPolicy> policy{};
  shared_ptr<string> requestId{};

  UpdateRegistrationPolicyResponseBody() {}

  explicit UpdateRegistrationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = policy ? boost::any(policy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Policy"].type()) {
        UpdateRegistrationPolicyResponseBodyPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Policy"]));
        policy = make_shared<UpdateRegistrationPolicyResponseBodyPolicy>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateRegistrationPolicyResponseBody() = default;
};
class UpdateRegistrationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRegistrationPolicyResponseBody> body{};

  UpdateRegistrationPolicyResponse() {}

  explicit UpdateRegistrationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateRegistrationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRegistrationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRegistrationPolicyResponse() = default;
};
class UpdateUserDevicesSharingStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deviceTags{};
  shared_ptr<bool> sharingStatus{};

  UpdateUserDevicesSharingStatusRequest() {}

  explicit UpdateUserDevicesSharingStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceTags) {
      res["DeviceTags"] = boost::any(*deviceTags);
    }
    if (sharingStatus) {
      res["SharingStatus"] = boost::any(*sharingStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceTags") != m.end() && !m["DeviceTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceTags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SharingStatus") != m.end() && !m["SharingStatus"].empty()) {
      sharingStatus = make_shared<bool>(boost::any_cast<bool>(m["SharingStatus"]));
    }
  }


  virtual ~UpdateUserDevicesSharingStatusRequest() = default;
};
class UpdateUserDevicesSharingStatusResponseBodyDevices : public Darabonba::Model {
public:
  shared_ptr<string> appStatus{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> CPU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> department{};
  shared_ptr<string> deviceBelong{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> deviceVersion{};
  shared_ptr<string> disk{};
  shared_ptr<string> dlpStatus{};
  shared_ptr<string> hostname{};
  shared_ptr<string> iaStatus{};
  shared_ptr<string> innerIP{};
  shared_ptr<string> mac{};
  shared_ptr<string> memory{};
  shared_ptr<string> nacStatus{};
  shared_ptr<string> paStatus{};
  shared_ptr<string> saseUserId{};
  shared_ptr<bool> sharingStatus{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> username{};

  UpdateUserDevicesSharingStatusResponseBodyDevices() {}

  explicit UpdateUserDevicesSharingStatusResponseBodyDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (deviceModel) {
      res["DeviceModel"] = boost::any(*deviceModel);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (deviceVersion) {
      res["DeviceVersion"] = boost::any(*deviceVersion);
    }
    if (disk) {
      res["Disk"] = boost::any(*disk);
    }
    if (dlpStatus) {
      res["DlpStatus"] = boost::any(*dlpStatus);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (iaStatus) {
      res["IaStatus"] = boost::any(*iaStatus);
    }
    if (innerIP) {
      res["InnerIP"] = boost::any(*innerIP);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nacStatus) {
      res["NacStatus"] = boost::any(*nacStatus);
    }
    if (paStatus) {
      res["PaStatus"] = boost::any(*paStatus);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (sharingStatus) {
      res["SharingStatus"] = boost::any(*sharingStatus);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("DeviceModel") != m.end() && !m["DeviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["DeviceModel"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("DeviceVersion") != m.end() && !m["DeviceVersion"].empty()) {
      deviceVersion = make_shared<string>(boost::any_cast<string>(m["DeviceVersion"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      disk = make_shared<string>(boost::any_cast<string>(m["Disk"]));
    }
    if (m.find("DlpStatus") != m.end() && !m["DlpStatus"].empty()) {
      dlpStatus = make_shared<string>(boost::any_cast<string>(m["DlpStatus"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IaStatus") != m.end() && !m["IaStatus"].empty()) {
      iaStatus = make_shared<string>(boost::any_cast<string>(m["IaStatus"]));
    }
    if (m.find("InnerIP") != m.end() && !m["InnerIP"].empty()) {
      innerIP = make_shared<string>(boost::any_cast<string>(m["InnerIP"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("NacStatus") != m.end() && !m["NacStatus"].empty()) {
      nacStatus = make_shared<string>(boost::any_cast<string>(m["NacStatus"]));
    }
    if (m.find("PaStatus") != m.end() && !m["PaStatus"].empty()) {
      paStatus = make_shared<string>(boost::any_cast<string>(m["PaStatus"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("SharingStatus") != m.end() && !m["SharingStatus"].empty()) {
      sharingStatus = make_shared<bool>(boost::any_cast<bool>(m["SharingStatus"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~UpdateUserDevicesSharingStatusResponseBodyDevices() = default;
};
class UpdateUserDevicesSharingStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateUserDevicesSharingStatusResponseBodyDevices>> devices{};
  shared_ptr<string> requestId{};

  UpdateUserDevicesSharingStatusResponseBody() {}

  explicit UpdateUserDevicesSharingStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<UpdateUserDevicesSharingStatusResponseBodyDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserDevicesSharingStatusResponseBodyDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<UpdateUserDevicesSharingStatusResponseBodyDevices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateUserDevicesSharingStatusResponseBody() = default;
};
class UpdateUserDevicesSharingStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserDevicesSharingStatusResponseBody> body{};

  UpdateUserDevicesSharingStatusResponse() {}

  explicit UpdateUserDevicesSharingStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserDevicesSharingStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserDevicesSharingStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserDevicesSharingStatusResponse() = default;
};
class UpdateUserDevicesStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceAction{};
  shared_ptr<vector<string>> deviceTags{};

  UpdateUserDevicesStatusRequest() {}

  explicit UpdateUserDevicesStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceAction) {
      res["DeviceAction"] = boost::any(*deviceAction);
    }
    if (deviceTags) {
      res["DeviceTags"] = boost::any(*deviceTags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceAction") != m.end() && !m["DeviceAction"].empty()) {
      deviceAction = make_shared<string>(boost::any_cast<string>(m["DeviceAction"]));
    }
    if (m.find("DeviceTags") != m.end() && !m["DeviceTags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceTags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceTags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceTags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateUserDevicesStatusRequest() = default;
};
class UpdateUserDevicesStatusResponseBodyDevices : public Darabonba::Model {
public:
  shared_ptr<string> appStatus{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> CPU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> department{};
  shared_ptr<string> deviceBelong{};
  shared_ptr<string> deviceModel{};
  shared_ptr<string> deviceStatus{};
  shared_ptr<string> deviceTag{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> deviceVersion{};
  shared_ptr<string> disk{};
  shared_ptr<string> dlpStatus{};
  shared_ptr<string> hostname{};
  shared_ptr<string> iaStatus{};
  shared_ptr<string> innerIP{};
  shared_ptr<string> mac{};
  shared_ptr<string> memory{};
  shared_ptr<string> nacStatus{};
  shared_ptr<string> paStatus{};
  shared_ptr<string> saseUserId{};
  shared_ptr<bool> sharingStatus{};
  shared_ptr<string> srcIP{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> username{};

  UpdateUserDevicesStatusResponseBodyDevices() {}

  explicit UpdateUserDevicesStatusResponseBodyDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (CPU) {
      res["CPU"] = boost::any(*CPU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (deviceBelong) {
      res["DeviceBelong"] = boost::any(*deviceBelong);
    }
    if (deviceModel) {
      res["DeviceModel"] = boost::any(*deviceModel);
    }
    if (deviceStatus) {
      res["DeviceStatus"] = boost::any(*deviceStatus);
    }
    if (deviceTag) {
      res["DeviceTag"] = boost::any(*deviceTag);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (deviceVersion) {
      res["DeviceVersion"] = boost::any(*deviceVersion);
    }
    if (disk) {
      res["Disk"] = boost::any(*disk);
    }
    if (dlpStatus) {
      res["DlpStatus"] = boost::any(*dlpStatus);
    }
    if (hostname) {
      res["Hostname"] = boost::any(*hostname);
    }
    if (iaStatus) {
      res["IaStatus"] = boost::any(*iaStatus);
    }
    if (innerIP) {
      res["InnerIP"] = boost::any(*innerIP);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (nacStatus) {
      res["NacStatus"] = boost::any(*nacStatus);
    }
    if (paStatus) {
      res["PaStatus"] = boost::any(*paStatus);
    }
    if (saseUserId) {
      res["SaseUserId"] = boost::any(*saseUserId);
    }
    if (sharingStatus) {
      res["SharingStatus"] = boost::any(*sharingStatus);
    }
    if (srcIP) {
      res["SrcIP"] = boost::any(*srcIP);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("CPU") != m.end() && !m["CPU"].empty()) {
      CPU = make_shared<string>(boost::any_cast<string>(m["CPU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("DeviceBelong") != m.end() && !m["DeviceBelong"].empty()) {
      deviceBelong = make_shared<string>(boost::any_cast<string>(m["DeviceBelong"]));
    }
    if (m.find("DeviceModel") != m.end() && !m["DeviceModel"].empty()) {
      deviceModel = make_shared<string>(boost::any_cast<string>(m["DeviceModel"]));
    }
    if (m.find("DeviceStatus") != m.end() && !m["DeviceStatus"].empty()) {
      deviceStatus = make_shared<string>(boost::any_cast<string>(m["DeviceStatus"]));
    }
    if (m.find("DeviceTag") != m.end() && !m["DeviceTag"].empty()) {
      deviceTag = make_shared<string>(boost::any_cast<string>(m["DeviceTag"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("DeviceVersion") != m.end() && !m["DeviceVersion"].empty()) {
      deviceVersion = make_shared<string>(boost::any_cast<string>(m["DeviceVersion"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      disk = make_shared<string>(boost::any_cast<string>(m["Disk"]));
    }
    if (m.find("DlpStatus") != m.end() && !m["DlpStatus"].empty()) {
      dlpStatus = make_shared<string>(boost::any_cast<string>(m["DlpStatus"]));
    }
    if (m.find("Hostname") != m.end() && !m["Hostname"].empty()) {
      hostname = make_shared<string>(boost::any_cast<string>(m["Hostname"]));
    }
    if (m.find("IaStatus") != m.end() && !m["IaStatus"].empty()) {
      iaStatus = make_shared<string>(boost::any_cast<string>(m["IaStatus"]));
    }
    if (m.find("InnerIP") != m.end() && !m["InnerIP"].empty()) {
      innerIP = make_shared<string>(boost::any_cast<string>(m["InnerIP"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("NacStatus") != m.end() && !m["NacStatus"].empty()) {
      nacStatus = make_shared<string>(boost::any_cast<string>(m["NacStatus"]));
    }
    if (m.find("PaStatus") != m.end() && !m["PaStatus"].empty()) {
      paStatus = make_shared<string>(boost::any_cast<string>(m["PaStatus"]));
    }
    if (m.find("SaseUserId") != m.end() && !m["SaseUserId"].empty()) {
      saseUserId = make_shared<string>(boost::any_cast<string>(m["SaseUserId"]));
    }
    if (m.find("SharingStatus") != m.end() && !m["SharingStatus"].empty()) {
      sharingStatus = make_shared<bool>(boost::any_cast<bool>(m["SharingStatus"]));
    }
    if (m.find("SrcIP") != m.end() && !m["SrcIP"].empty()) {
      srcIP = make_shared<string>(boost::any_cast<string>(m["SrcIP"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~UpdateUserDevicesStatusResponseBodyDevices() = default;
};
class UpdateUserDevicesStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateUserDevicesStatusResponseBodyDevices>> devices{};
  shared_ptr<string> requestId{};

  UpdateUserDevicesStatusResponseBody() {}

  explicit UpdateUserDevicesStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Devices"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Devices") != m.end() && !m["Devices"].empty()) {
      if (typeid(vector<boost::any>) == m["Devices"].type()) {
        vector<UpdateUserDevicesStatusResponseBodyDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserDevicesStatusResponseBodyDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<UpdateUserDevicesStatusResponseBodyDevices>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateUserDevicesStatusResponseBody() = default;
};
class UpdateUserDevicesStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserDevicesStatusResponseBody> body{};

  UpdateUserDevicesStatusResponse() {}

  explicit UpdateUserDevicesStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserDevicesStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserDevicesStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserDevicesStatusResponse() = default;
};
class UpdateUserGroupRequestAttributes : public Darabonba::Model {
public:
  shared_ptr<long> idpId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupType{};
  shared_ptr<string> value{};

  UpdateUserGroupRequestAttributes() {}

  explicit UpdateUserGroupRequestAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupType) {
      res["UserGroupType"] = boost::any(*userGroupType);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<long>(boost::any_cast<long>(m["IdpId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupType") != m.end() && !m["UserGroupType"].empty()) {
      userGroupType = make_shared<string>(boost::any_cast<string>(m["UserGroupType"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateUserGroupRequestAttributes() = default;
};
class UpdateUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateUserGroupRequestAttributes>> attributes{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> userGroupId{};

  UpdateUserGroupRequest() {}

  explicit UpdateUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      vector<boost::any> temp1;
      for(auto item1:*attributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Attributes"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifyType) {
      res["ModifyType"] = boost::any(*modifyType);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<UpdateUserGroupRequestAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Attributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserGroupRequestAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        attributes = make_shared<vector<UpdateUserGroupRequestAttributes>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifyType") != m.end() && !m["ModifyType"].empty()) {
      modifyType = make_shared<string>(boost::any_cast<string>(m["ModifyType"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~UpdateUserGroupRequest() = default;
};
class UpdateUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateUserGroupResponseBody() {}

  explicit UpdateUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateUserGroupResponseBody() = default;
};
class UpdateUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserGroupResponseBody> body{};

  UpdateUserGroupResponse() {}

  explicit UpdateUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserGroupResponse() = default;
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
  AttachApplication2ConnectorResponse attachApplication2ConnectorWithOptions(shared_ptr<AttachApplication2ConnectorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachApplication2ConnectorResponse attachApplication2Connector(shared_ptr<AttachApplication2ConnectorRequest> request);
  CreateDynamicRouteResponse createDynamicRouteWithOptions(shared_ptr<CreateDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDynamicRouteResponse createDynamicRoute(shared_ptr<CreateDynamicRouteRequest> request);
  CreatePrivateAccessApplicationResponse createPrivateAccessApplicationWithOptions(shared_ptr<CreatePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrivateAccessApplicationResponse createPrivateAccessApplication(shared_ptr<CreatePrivateAccessApplicationRequest> request);
  CreatePrivateAccessPolicyResponse createPrivateAccessPolicyWithOptions(shared_ptr<CreatePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrivateAccessPolicyResponse createPrivateAccessPolicy(shared_ptr<CreatePrivateAccessPolicyRequest> request);
  CreatePrivateAccessTagResponse createPrivateAccessTagWithOptions(shared_ptr<CreatePrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrivateAccessTagResponse createPrivateAccessTag(shared_ptr<CreatePrivateAccessTagRequest> request);
  CreateRegistrationPolicyResponse createRegistrationPolicyWithOptions(shared_ptr<CreateRegistrationPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRegistrationPolicyResponse createRegistrationPolicy(shared_ptr<CreateRegistrationPolicyRequest> request);
  CreateUserGroupResponse createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserGroupResponse createUserGroup(shared_ptr<CreateUserGroupRequest> request);
  DeleteDynamicRouteResponse deleteDynamicRouteWithOptions(shared_ptr<DeleteDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDynamicRouteResponse deleteDynamicRoute(shared_ptr<DeleteDynamicRouteRequest> request);
  DeletePrivateAccessApplicationResponse deletePrivateAccessApplicationWithOptions(shared_ptr<DeletePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrivateAccessApplicationResponse deletePrivateAccessApplication(shared_ptr<DeletePrivateAccessApplicationRequest> request);
  DeletePrivateAccessPolicyResponse deletePrivateAccessPolicyWithOptions(shared_ptr<DeletePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrivateAccessPolicyResponse deletePrivateAccessPolicy(shared_ptr<DeletePrivateAccessPolicyRequest> request);
  DeletePrivateAccessTagResponse deletePrivateAccessTagWithOptions(shared_ptr<DeletePrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrivateAccessTagResponse deletePrivateAccessTag(shared_ptr<DeletePrivateAccessTagRequest> request);
  DeleteRegistrationPoliciesResponse deleteRegistrationPoliciesWithOptions(shared_ptr<DeleteRegistrationPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRegistrationPoliciesResponse deleteRegistrationPolicies(shared_ptr<DeleteRegistrationPoliciesRequest> request);
  DeleteUserGroupResponse deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupResponse deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request);
  DetachApplication2ConnectorResponse detachApplication2ConnectorWithOptions(shared_ptr<DetachApplication2ConnectorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachApplication2ConnectorResponse detachApplication2Connector(shared_ptr<DetachApplication2ConnectorRequest> request);
  GetDynamicRouteResponse getDynamicRouteWithOptions(shared_ptr<GetDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDynamicRouteResponse getDynamicRoute(shared_ptr<GetDynamicRouteRequest> request);
  GetPrivateAccessApplicationResponse getPrivateAccessApplicationWithOptions(shared_ptr<GetPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrivateAccessApplicationResponse getPrivateAccessApplication(shared_ptr<GetPrivateAccessApplicationRequest> request);
  GetPrivateAccessPolicyResponse getPrivateAccessPolicyWithOptions(shared_ptr<GetPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrivateAccessPolicyResponse getPrivateAccessPolicy(shared_ptr<GetPrivateAccessPolicyRequest> request);
  GetRegistrationPolicyResponse getRegistrationPolicyWithOptions(shared_ptr<GetRegistrationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegistrationPolicyResponse getRegistrationPolicy(shared_ptr<GetRegistrationPolicyRequest> request);
  GetUserDeviceResponse getUserDeviceWithOptions(shared_ptr<GetUserDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserDeviceResponse getUserDevice(shared_ptr<GetUserDeviceRequest> request);
  GetUserGroupResponse getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGroupResponse getUserGroup(shared_ptr<GetUserGroupRequest> request);
  ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicyWithOptions(shared_ptr<ListApplicationsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicy(shared_ptr<ListApplicationsForPrivateAccessPolicyRequest> request);
  ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTagWithOptions(shared_ptr<ListApplicationsForPrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTag(shared_ptr<ListApplicationsForPrivateAccessTagRequest> request);
  ListConnectorsResponse listConnectorsWithOptions(shared_ptr<ListConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectorsResponse listConnectors(shared_ptr<ListConnectorsRequest> request);
  ListDynamicRouteRegionsResponse listDynamicRouteRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDynamicRouteRegionsResponse listDynamicRouteRegions();
  ListDynamicRoutesResponse listDynamicRoutesWithOptions(shared_ptr<ListDynamicRoutesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDynamicRoutesResponse listDynamicRoutes(shared_ptr<ListDynamicRoutesRequest> request);
  ListExcessiveDeviceRegistrationApplicationsResponse listExcessiveDeviceRegistrationApplicationsWithOptions(shared_ptr<ListExcessiveDeviceRegistrationApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExcessiveDeviceRegistrationApplicationsResponse listExcessiveDeviceRegistrationApplications(shared_ptr<ListExcessiveDeviceRegistrationApplicationsRequest> request);
  ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplicationWithOptions(shared_ptr<ListPolicesForPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplication(shared_ptr<ListPolicesForPrivateAccessApplicationRequest> request);
  ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTagWithOptions(shared_ptr<ListPolicesForPrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTag(shared_ptr<ListPolicesForPrivateAccessTagRequest> request);
  ListPolicesForUserGroupResponse listPolicesForUserGroupWithOptions(shared_ptr<ListPolicesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicesForUserGroupResponse listPolicesForUserGroup(shared_ptr<ListPolicesForUserGroupRequest> request);
  ListPrivateAccessApplicationsResponse listPrivateAccessApplicationsWithOptions(shared_ptr<ListPrivateAccessApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessApplicationsResponse listPrivateAccessApplications(shared_ptr<ListPrivateAccessApplicationsRequest> request);
  ListPrivateAccessApplicationsForDynamicRouteResponse listPrivateAccessApplicationsForDynamicRouteWithOptions(shared_ptr<ListPrivateAccessApplicationsForDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessApplicationsForDynamicRouteResponse listPrivateAccessApplicationsForDynamicRoute(shared_ptr<ListPrivateAccessApplicationsForDynamicRouteRequest> request);
  ListPrivateAccessPolicesResponse listPrivateAccessPolicesWithOptions(shared_ptr<ListPrivateAccessPolicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessPolicesResponse listPrivateAccessPolices(shared_ptr<ListPrivateAccessPolicesRequest> request);
  ListPrivateAccessTagsResponse listPrivateAccessTagsWithOptions(shared_ptr<ListPrivateAccessTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessTagsResponse listPrivateAccessTags(shared_ptr<ListPrivateAccessTagsRequest> request);
  ListPrivateAccessTagsForDynamicRouteResponse listPrivateAccessTagsForDynamicRouteWithOptions(shared_ptr<ListPrivateAccessTagsForDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessTagsForDynamicRouteResponse listPrivateAccessTagsForDynamicRoute(shared_ptr<ListPrivateAccessTagsForDynamicRouteRequest> request);
  ListRegistrationPoliciesResponse listRegistrationPoliciesWithOptions(shared_ptr<ListRegistrationPoliciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegistrationPoliciesResponse listRegistrationPolicies(shared_ptr<ListRegistrationPoliciesRequest> request);
  ListRegistrationPoliciesForUserGroupResponse listRegistrationPoliciesForUserGroupWithOptions(shared_ptr<ListRegistrationPoliciesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegistrationPoliciesForUserGroupResponse listRegistrationPoliciesForUserGroup(shared_ptr<ListRegistrationPoliciesForUserGroupRequest> request);
  ListSoftwareForUserDeviceResponse listSoftwareForUserDeviceWithOptions(shared_ptr<ListSoftwareForUserDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSoftwareForUserDeviceResponse listSoftwareForUserDevice(shared_ptr<ListSoftwareForUserDeviceRequest> request);
  ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplicationWithOptions(shared_ptr<ListTagsForPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplication(shared_ptr<ListTagsForPrivateAccessApplicationRequest> request);
  ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicyWithOptions(shared_ptr<ListTagsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicy(shared_ptr<ListTagsForPrivateAccessPolicyRequest> request);
  ListUserDevicesResponse listUserDevicesWithOptions(shared_ptr<ListUserDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserDevicesResponse listUserDevices(shared_ptr<ListUserDevicesRequest> request);
  ListUserGroupsResponse listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsResponse listUserGroups(shared_ptr<ListUserGroupsRequest> request);
  ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicyWithOptions(shared_ptr<ListUserGroupsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicy(shared_ptr<ListUserGroupsForPrivateAccessPolicyRequest> request);
  ListUserGroupsForRegistrationPolicyResponse listUserGroupsForRegistrationPolicyWithOptions(shared_ptr<ListUserGroupsForRegistrationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsForRegistrationPolicyResponse listUserGroupsForRegistrationPolicy(shared_ptr<ListUserGroupsForRegistrationPolicyRequest> request);
  UpdateDynamicRouteResponse updateDynamicRouteWithOptions(shared_ptr<UpdateDynamicRouteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDynamicRouteResponse updateDynamicRoute(shared_ptr<UpdateDynamicRouteRequest> request);
  UpdateExcessiveDeviceRegistrationApplicationsStatusResponse updateExcessiveDeviceRegistrationApplicationsStatusWithOptions(shared_ptr<UpdateExcessiveDeviceRegistrationApplicationsStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateExcessiveDeviceRegistrationApplicationsStatusResponse updateExcessiveDeviceRegistrationApplicationsStatus(shared_ptr<UpdateExcessiveDeviceRegistrationApplicationsStatusRequest> request);
  UpdatePrivateAccessApplicationResponse updatePrivateAccessApplicationWithOptions(shared_ptr<UpdatePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePrivateAccessApplicationResponse updatePrivateAccessApplication(shared_ptr<UpdatePrivateAccessApplicationRequest> request);
  UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicyWithOptions(shared_ptr<UpdatePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicy(shared_ptr<UpdatePrivateAccessPolicyRequest> request);
  UpdateRegistrationPolicyResponse updateRegistrationPolicyWithOptions(shared_ptr<UpdateRegistrationPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRegistrationPolicyResponse updateRegistrationPolicy(shared_ptr<UpdateRegistrationPolicyRequest> request);
  UpdateUserDevicesSharingStatusResponse updateUserDevicesSharingStatusWithOptions(shared_ptr<UpdateUserDevicesSharingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserDevicesSharingStatusResponse updateUserDevicesSharingStatus(shared_ptr<UpdateUserDevicesSharingStatusRequest> request);
  UpdateUserDevicesStatusResponse updateUserDevicesStatusWithOptions(shared_ptr<UpdateUserDevicesStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserDevicesStatusResponse updateUserDevicesStatus(shared_ptr<UpdateUserDevicesStatusRequest> request);
  UpdateUserGroupResponse updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserGroupResponse updateUserGroup(shared_ptr<UpdateUserGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Csas20230120

#endif
