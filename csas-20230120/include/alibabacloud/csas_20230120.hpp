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
class CreatePrivateAccessApplicationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> portRangesShrink{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<string> tagIdsShrink{};

  CreatePrivateAccessApplicationShrinkRequest() {}

  explicit CreatePrivateAccessApplicationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressesShrink) {
      res["Addresses"] = boost::any(*addressesShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (portRangesShrink) {
      res["PortRanges"] = boost::any(*portRangesShrink);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIdsShrink) {
      res["TagIds"] = boost::any(*tagIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      addressesShrink = make_shared<string>(boost::any_cast<string>(m["Addresses"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PortRanges") != m.end() && !m["PortRanges"].empty()) {
      portRangesShrink = make_shared<string>(boost::any_cast<string>(m["PortRanges"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      tagIdsShrink = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
  }


  virtual ~CreatePrivateAccessApplicationShrinkRequest() = default;
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
class CreatePrivateAccessPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationIdsShrink{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> customUserAttributesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> policyAction{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<string> tagIdsShrink{};
  shared_ptr<string> userGroupIdsShrink{};
  shared_ptr<string> userGroupMode{};

  CreatePrivateAccessPolicyShrinkRequest() {}

  explicit CreatePrivateAccessPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIdsShrink) {
      res["ApplicationIds"] = boost::any(*applicationIdsShrink);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (customUserAttributesShrink) {
      res["CustomUserAttributes"] = boost::any(*customUserAttributesShrink);
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
    if (tagIdsShrink) {
      res["TagIds"] = boost::any(*tagIdsShrink);
    }
    if (userGroupIdsShrink) {
      res["UserGroupIds"] = boost::any(*userGroupIdsShrink);
    }
    if (userGroupMode) {
      res["UserGroupMode"] = boost::any(*userGroupMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      applicationIdsShrink = make_shared<string>(boost::any_cast<string>(m["ApplicationIds"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      customUserAttributesShrink = make_shared<string>(boost::any_cast<string>(m["CustomUserAttributes"]));
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
      tagIdsShrink = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIdsShrink = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserGroupMode") != m.end() && !m["UserGroupMode"].empty()) {
      userGroupMode = make_shared<string>(boost::any_cast<string>(m["UserGroupMode"]));
    }
  }


  virtual ~CreatePrivateAccessPolicyShrinkRequest() = default;
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
class UpdatePrivateAccessApplicationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressesShrink{};
  shared_ptr<string> applicationId{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> portRangesShrink{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<string> tagIdsShrink{};

  UpdatePrivateAccessApplicationShrinkRequest() {}

  explicit UpdatePrivateAccessApplicationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressesShrink) {
      res["Addresses"] = boost::any(*addressesShrink);
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
    if (portRangesShrink) {
      res["PortRanges"] = boost::any(*portRangesShrink);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagIdsShrink) {
      res["TagIds"] = boost::any(*tagIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      addressesShrink = make_shared<string>(boost::any_cast<string>(m["Addresses"]));
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
      portRangesShrink = make_shared<string>(boost::any_cast<string>(m["PortRanges"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      tagIdsShrink = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
  }


  virtual ~UpdatePrivateAccessApplicationShrinkRequest() = default;
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
class UpdatePrivateAccessPolicyShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationIdsShrink{};
  shared_ptr<string> applicationType{};
  shared_ptr<string> customUserAttributesShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> modifyType{};
  shared_ptr<string> policyAction{};
  shared_ptr<string> policyId{};
  shared_ptr<long> priority{};
  shared_ptr<string> status{};
  shared_ptr<string> tagIdsShrink{};
  shared_ptr<string> userGroupIdsShrink{};
  shared_ptr<string> userGroupMode{};

  UpdatePrivateAccessPolicyShrinkRequest() {}

  explicit UpdatePrivateAccessPolicyShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationIdsShrink) {
      res["ApplicationIds"] = boost::any(*applicationIdsShrink);
    }
    if (applicationType) {
      res["ApplicationType"] = boost::any(*applicationType);
    }
    if (customUserAttributesShrink) {
      res["CustomUserAttributes"] = boost::any(*customUserAttributesShrink);
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
    if (tagIdsShrink) {
      res["TagIds"] = boost::any(*tagIdsShrink);
    }
    if (userGroupIdsShrink) {
      res["UserGroupIds"] = boost::any(*userGroupIdsShrink);
    }
    if (userGroupMode) {
      res["UserGroupMode"] = boost::any(*userGroupMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationIds") != m.end() && !m["ApplicationIds"].empty()) {
      applicationIdsShrink = make_shared<string>(boost::any_cast<string>(m["ApplicationIds"]));
    }
    if (m.find("ApplicationType") != m.end() && !m["ApplicationType"].empty()) {
      applicationType = make_shared<string>(boost::any_cast<string>(m["ApplicationType"]));
    }
    if (m.find("CustomUserAttributes") != m.end() && !m["CustomUserAttributes"].empty()) {
      customUserAttributesShrink = make_shared<string>(boost::any_cast<string>(m["CustomUserAttributes"]));
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
      tagIdsShrink = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
    if (m.find("UserGroupIds") != m.end() && !m["UserGroupIds"].empty()) {
      userGroupIdsShrink = make_shared<string>(boost::any_cast<string>(m["UserGroupIds"]));
    }
    if (m.find("UserGroupMode") != m.end() && !m["UserGroupMode"].empty()) {
      userGroupMode = make_shared<string>(boost::any_cast<string>(m["UserGroupMode"]));
    }
  }


  virtual ~UpdatePrivateAccessPolicyShrinkRequest() = default;
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
  CreatePrivateAccessApplicationResponse createPrivateAccessApplicationWithOptions(shared_ptr<CreatePrivateAccessApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrivateAccessApplicationResponse createPrivateAccessApplication(shared_ptr<CreatePrivateAccessApplicationRequest> request);
  CreatePrivateAccessPolicyResponse createPrivateAccessPolicyWithOptions(shared_ptr<CreatePrivateAccessPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrivateAccessPolicyResponse createPrivateAccessPolicy(shared_ptr<CreatePrivateAccessPolicyRequest> request);
  CreatePrivateAccessTagResponse createPrivateAccessTagWithOptions(shared_ptr<CreatePrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePrivateAccessTagResponse createPrivateAccessTag(shared_ptr<CreatePrivateAccessTagRequest> request);
  CreateUserGroupResponse createUserGroupWithOptions(shared_ptr<CreateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserGroupResponse createUserGroup(shared_ptr<CreateUserGroupRequest> request);
  DeletePrivateAccessApplicationResponse deletePrivateAccessApplicationWithOptions(shared_ptr<DeletePrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrivateAccessApplicationResponse deletePrivateAccessApplication(shared_ptr<DeletePrivateAccessApplicationRequest> request);
  DeletePrivateAccessPolicyResponse deletePrivateAccessPolicyWithOptions(shared_ptr<DeletePrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrivateAccessPolicyResponse deletePrivateAccessPolicy(shared_ptr<DeletePrivateAccessPolicyRequest> request);
  DeletePrivateAccessTagResponse deletePrivateAccessTagWithOptions(shared_ptr<DeletePrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePrivateAccessTagResponse deletePrivateAccessTag(shared_ptr<DeletePrivateAccessTagRequest> request);
  DeleteUserGroupResponse deleteUserGroupWithOptions(shared_ptr<DeleteUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserGroupResponse deleteUserGroup(shared_ptr<DeleteUserGroupRequest> request);
  DetachApplication2ConnectorResponse detachApplication2ConnectorWithOptions(shared_ptr<DetachApplication2ConnectorRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachApplication2ConnectorResponse detachApplication2Connector(shared_ptr<DetachApplication2ConnectorRequest> request);
  GetPrivateAccessApplicationResponse getPrivateAccessApplicationWithOptions(shared_ptr<GetPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrivateAccessApplicationResponse getPrivateAccessApplication(shared_ptr<GetPrivateAccessApplicationRequest> request);
  GetPrivateAccessPolicyResponse getPrivateAccessPolicyWithOptions(shared_ptr<GetPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPrivateAccessPolicyResponse getPrivateAccessPolicy(shared_ptr<GetPrivateAccessPolicyRequest> request);
  GetUserGroupResponse getUserGroupWithOptions(shared_ptr<GetUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserGroupResponse getUserGroup(shared_ptr<GetUserGroupRequest> request);
  ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicyWithOptions(shared_ptr<ListApplicationsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsForPrivateAccessPolicyResponse listApplicationsForPrivateAccessPolicy(shared_ptr<ListApplicationsForPrivateAccessPolicyRequest> request);
  ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTagWithOptions(shared_ptr<ListApplicationsForPrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListApplicationsForPrivateAccessTagResponse listApplicationsForPrivateAccessTag(shared_ptr<ListApplicationsForPrivateAccessTagRequest> request);
  ListConnectorsResponse listConnectorsWithOptions(shared_ptr<ListConnectorsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnectorsResponse listConnectors(shared_ptr<ListConnectorsRequest> request);
  ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplicationWithOptions(shared_ptr<ListPolicesForPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicesForPrivateAccessApplicationResponse listPolicesForPrivateAccessApplication(shared_ptr<ListPolicesForPrivateAccessApplicationRequest> request);
  ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTagWithOptions(shared_ptr<ListPolicesForPrivateAccessTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicesForPrivateAccessTagResponse listPolicesForPrivateAccessTag(shared_ptr<ListPolicesForPrivateAccessTagRequest> request);
  ListPolicesForUserGroupResponse listPolicesForUserGroupWithOptions(shared_ptr<ListPolicesForUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPolicesForUserGroupResponse listPolicesForUserGroup(shared_ptr<ListPolicesForUserGroupRequest> request);
  ListPrivateAccessApplicationsResponse listPrivateAccessApplicationsWithOptions(shared_ptr<ListPrivateAccessApplicationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessApplicationsResponse listPrivateAccessApplications(shared_ptr<ListPrivateAccessApplicationsRequest> request);
  ListPrivateAccessPolicesResponse listPrivateAccessPolicesWithOptions(shared_ptr<ListPrivateAccessPolicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessPolicesResponse listPrivateAccessPolices(shared_ptr<ListPrivateAccessPolicesRequest> request);
  ListPrivateAccessTagsResponse listPrivateAccessTagsWithOptions(shared_ptr<ListPrivateAccessTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPrivateAccessTagsResponse listPrivateAccessTags(shared_ptr<ListPrivateAccessTagsRequest> request);
  ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplicationWithOptions(shared_ptr<ListTagsForPrivateAccessApplicationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsForPrivateAccessApplicationResponse listTagsForPrivateAccessApplication(shared_ptr<ListTagsForPrivateAccessApplicationRequest> request);
  ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicyWithOptions(shared_ptr<ListTagsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagsForPrivateAccessPolicyResponse listTagsForPrivateAccessPolicy(shared_ptr<ListTagsForPrivateAccessPolicyRequest> request);
  ListUserGroupsResponse listUserGroupsWithOptions(shared_ptr<ListUserGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsResponse listUserGroups(shared_ptr<ListUserGroupsRequest> request);
  ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicyWithOptions(shared_ptr<ListUserGroupsForPrivateAccessPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserGroupsForPrivateAccessPolicyResponse listUserGroupsForPrivateAccessPolicy(shared_ptr<ListUserGroupsForPrivateAccessPolicyRequest> request);
  UpdatePrivateAccessApplicationResponse updatePrivateAccessApplicationWithOptions(shared_ptr<UpdatePrivateAccessApplicationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePrivateAccessApplicationResponse updatePrivateAccessApplication(shared_ptr<UpdatePrivateAccessApplicationRequest> request);
  UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicyWithOptions(shared_ptr<UpdatePrivateAccessPolicyRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePrivateAccessPolicyResponse updatePrivateAccessPolicy(shared_ptr<UpdatePrivateAccessPolicyRequest> request);
  UpdateUserGroupResponse updateUserGroupWithOptions(shared_ptr<UpdateUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserGroupResponse updateUserGroup(shared_ptr<UpdateUserGroupRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Csas20230120

#endif
