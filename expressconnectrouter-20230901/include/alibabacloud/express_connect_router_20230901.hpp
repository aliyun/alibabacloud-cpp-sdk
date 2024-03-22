// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_EXPRESSCONNECTROUTER20230901_H_
#define ALIBABACLOUD_EXPRESSCONNECTROUTER20230901_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ExpressConnectRouter20230901 {
class AttachExpressConnectRouterChildInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> childInstanceId{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  AttachExpressConnectRouterChildInstanceRequest() {}

  explicit AttachExpressConnectRouterChildInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~AttachExpressConnectRouterChildInstanceRequest() = default;
};
class AttachExpressConnectRouterChildInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AttachExpressConnectRouterChildInstanceResponseBody() {}

  explicit AttachExpressConnectRouterChildInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~AttachExpressConnectRouterChildInstanceResponseBody() = default;
};
class AttachExpressConnectRouterChildInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachExpressConnectRouterChildInstanceResponseBody> body{};

  AttachExpressConnectRouterChildInstanceResponse() {}

  explicit AttachExpressConnectRouterChildInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachExpressConnectRouterChildInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachExpressConnectRouterChildInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~AttachExpressConnectRouterChildInstanceResponse() = default;
};
class CheckAddRegionToExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> freshRegionId{};

  CheckAddRegionToExpressConnectRouterRequest() {}

  explicit CheckAddRegionToExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (freshRegionId) {
      res["FreshRegionId"] = boost::any(*freshRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("FreshRegionId") != m.end() && !m["FreshRegionId"].empty()) {
      freshRegionId = make_shared<string>(boost::any_cast<string>(m["FreshRegionId"]));
    }
  }


  virtual ~CheckAddRegionToExpressConnectRouterRequest() = default;
};
class CheckAddRegionToExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<bool> anyCrossBorderLink{};
  shared_ptr<bool> anyInterRegionLink{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> isCdtCrossBorderEnabled{};
  shared_ptr<bool> isCdtInterRegionEnabled{};
  shared_ptr<bool> isUserAllowedToCreateCrossBorderLink{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckAddRegionToExpressConnectRouterResponseBody() {}

  explicit CheckAddRegionToExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (anyCrossBorderLink) {
      res["AnyCrossBorderLink"] = boost::any(*anyCrossBorderLink);
    }
    if (anyInterRegionLink) {
      res["AnyInterRegionLink"] = boost::any(*anyInterRegionLink);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (isCdtCrossBorderEnabled) {
      res["IsCdtCrossBorderEnabled"] = boost::any(*isCdtCrossBorderEnabled);
    }
    if (isCdtInterRegionEnabled) {
      res["IsCdtInterRegionEnabled"] = boost::any(*isCdtInterRegionEnabled);
    }
    if (isUserAllowedToCreateCrossBorderLink) {
      res["IsUserAllowedToCreateCrossBorderLink"] = boost::any(*isUserAllowedToCreateCrossBorderLink);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AnyCrossBorderLink") != m.end() && !m["AnyCrossBorderLink"].empty()) {
      anyCrossBorderLink = make_shared<bool>(boost::any_cast<bool>(m["AnyCrossBorderLink"]));
    }
    if (m.find("AnyInterRegionLink") != m.end() && !m["AnyInterRegionLink"].empty()) {
      anyInterRegionLink = make_shared<bool>(boost::any_cast<bool>(m["AnyInterRegionLink"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("IsCdtCrossBorderEnabled") != m.end() && !m["IsCdtCrossBorderEnabled"].empty()) {
      isCdtCrossBorderEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCdtCrossBorderEnabled"]));
    }
    if (m.find("IsCdtInterRegionEnabled") != m.end() && !m["IsCdtInterRegionEnabled"].empty()) {
      isCdtInterRegionEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsCdtInterRegionEnabled"]));
    }
    if (m.find("IsUserAllowedToCreateCrossBorderLink") != m.end() && !m["IsUserAllowedToCreateCrossBorderLink"].empty()) {
      isUserAllowedToCreateCrossBorderLink = make_shared<bool>(boost::any_cast<bool>(m["IsUserAllowedToCreateCrossBorderLink"]));
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


  virtual ~CheckAddRegionToExpressConnectRouterResponseBody() = default;
};
class CheckAddRegionToExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAddRegionToExpressConnectRouterResponseBody> body{};

  CheckAddRegionToExpressConnectRouterResponse() {}

  explicit CheckAddRegionToExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckAddRegionToExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAddRegionToExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAddRegionToExpressConnectRouterResponse() = default;
};
class CreateExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<long> alibabaSideAsn{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};

  CreateExpressConnectRouterRequest() {}

  explicit CreateExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alibabaSideAsn) {
      res["AlibabaSideAsn"] = boost::any(*alibabaSideAsn);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlibabaSideAsn") != m.end() && !m["AlibabaSideAsn"].empty()) {
      alibabaSideAsn = make_shared<long>(boost::any_cast<long>(m["AlibabaSideAsn"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~CreateExpressConnectRouterRequest() = default;
};
class CreateExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateExpressConnectRouterResponseBody() {}

  explicit CreateExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateExpressConnectRouterResponseBody() = default;
};
class CreateExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExpressConnectRouterResponseBody> body{};

  CreateExpressConnectRouterResponse() {}

  explicit CreateExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExpressConnectRouterResponse() = default;
};
class CreateExpressConnectRouterAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedPrefixes{};
  shared_ptr<string> associationRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> createAttachment{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<long> transitRouterOwnerId{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> vpcOwnerId{};

  CreateExpressConnectRouterAssociationRequest() {}

  explicit CreateExpressConnectRouterAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedPrefixes) {
      res["AllowedPrefixes"] = boost::any(*allowedPrefixes);
    }
    if (associationRegionId) {
      res["AssociationRegionId"] = boost::any(*associationRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (createAttachment) {
      res["CreateAttachment"] = boost::any(*createAttachment);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterOwnerId) {
      res["TransitRouterOwnerId"] = boost::any(*transitRouterOwnerId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcOwnerId) {
      res["VpcOwnerId"] = boost::any(*vpcOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedPrefixes") != m.end() && !m["AllowedPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AssociationRegionId") != m.end() && !m["AssociationRegionId"].empty()) {
      associationRegionId = make_shared<string>(boost::any_cast<string>(m["AssociationRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CreateAttachment") != m.end() && !m["CreateAttachment"].empty()) {
      createAttachment = make_shared<bool>(boost::any_cast<bool>(m["CreateAttachment"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterOwnerId") != m.end() && !m["TransitRouterOwnerId"].empty()) {
      transitRouterOwnerId = make_shared<long>(boost::any_cast<long>(m["TransitRouterOwnerId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcOwnerId") != m.end() && !m["VpcOwnerId"].empty()) {
      vpcOwnerId = make_shared<long>(boost::any_cast<long>(m["VpcOwnerId"]));
    }
  }


  virtual ~CreateExpressConnectRouterAssociationRequest() = default;
};
class CreateExpressConnectRouterAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> associationId{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateExpressConnectRouterAssociationResponseBody() {}

  explicit CreateExpressConnectRouterAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateExpressConnectRouterAssociationResponseBody() = default;
};
class CreateExpressConnectRouterAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExpressConnectRouterAssociationResponseBody> body{};

  CreateExpressConnectRouterAssociationResponse() {}

  explicit CreateExpressConnectRouterAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExpressConnectRouterAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExpressConnectRouterAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExpressConnectRouterAssociationResponse() = default;
};
class DeleteExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  DeleteExpressConnectRouterRequest() {}

  explicit DeleteExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~DeleteExpressConnectRouterRequest() = default;
};
class DeleteExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteExpressConnectRouterResponseBody() {}

  explicit DeleteExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeleteExpressConnectRouterResponseBody() = default;
};
class DeleteExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExpressConnectRouterResponseBody> body{};

  DeleteExpressConnectRouterResponse() {}

  explicit DeleteExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExpressConnectRouterResponse() = default;
};
class DeleteExpressConnectRouterAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<string> associationId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> deleteAttachment{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  DeleteExpressConnectRouterAssociationRequest() {}

  explicit DeleteExpressConnectRouterAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (deleteAttachment) {
      res["DeleteAttachment"] = boost::any(*deleteAttachment);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DeleteAttachment") != m.end() && !m["DeleteAttachment"].empty()) {
      deleteAttachment = make_shared<bool>(boost::any_cast<bool>(m["DeleteAttachment"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~DeleteExpressConnectRouterAssociationRequest() = default;
};
class DeleteExpressConnectRouterAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteExpressConnectRouterAssociationResponseBody() {}

  explicit DeleteExpressConnectRouterAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DeleteExpressConnectRouterAssociationResponseBody() = default;
};
class DeleteExpressConnectRouterAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExpressConnectRouterAssociationResponseBody> body{};

  DeleteExpressConnectRouterAssociationResponse() {}

  explicit DeleteExpressConnectRouterAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExpressConnectRouterAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExpressConnectRouterAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExpressConnectRouterAssociationResponse() = default;
};
class DescribeDisabledExpressConnectRouterRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeDisabledExpressConnectRouterRouteEntriesRequest() {}

  explicit DescribeDisabledExpressConnectRouterRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeDisabledExpressConnectRouterRouteEntriesRequest() = default;
};
class DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList : public Darabonba::Model {
public:
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> nexthopInstanceId{};
  shared_ptr<string> nexthopInstanceRegionId{};

  DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList() {}

  explicit DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (nexthopInstanceId) {
      res["NexthopInstanceId"] = boost::any(*nexthopInstanceId);
    }
    if (nexthopInstanceRegionId) {
      res["NexthopInstanceRegionId"] = boost::any(*nexthopInstanceRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("NexthopInstanceId") != m.end() && !m["NexthopInstanceId"].empty()) {
      nexthopInstanceId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceId"]));
    }
    if (m.find("NexthopInstanceRegionId") != m.end() && !m["NexthopInstanceRegionId"].empty()) {
      nexthopInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceRegionId"]));
    }
  }


  virtual ~DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList() = default;
};
class DescribeDisabledExpressConnectRouterRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList>> disabledRouteEntryList{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeDisabledExpressConnectRouterRouteEntriesResponseBody() {}

  explicit DescribeDisabledExpressConnectRouterRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (disabledRouteEntryList) {
      vector<boost::any> temp1;
      for(auto item1:*disabledRouteEntryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DisabledRouteEntryList"] = boost::any(temp1);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DisabledRouteEntryList") != m.end() && !m["DisabledRouteEntryList"].empty()) {
      if (typeid(vector<boost::any>) == m["DisabledRouteEntryList"].type()) {
        vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DisabledRouteEntryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disabledRouteEntryList = make_shared<vector<DescribeDisabledExpressConnectRouterRouteEntriesResponseBodyDisabledRouteEntryList>>(expect1);
      }
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDisabledExpressConnectRouterRouteEntriesResponseBody() = default;
};
class DescribeDisabledExpressConnectRouterRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody> body{};

  DescribeDisabledExpressConnectRouterRouteEntriesResponse() {}

  explicit DescribeDisabledExpressConnectRouterRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDisabledExpressConnectRouterRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDisabledExpressConnectRouterRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDisabledExpressConnectRouterRouteEntriesResponse() = default;
};
class DescribeExpressConnectRouterRequestTagModels : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeExpressConnectRouterRequestTagModels() {}

  explicit DescribeExpressConnectRouterRequestTagModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeExpressConnectRouterRequestTagModels() = default;
};
class DescribeExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeExpressConnectRouterRequestTagModels>> tagModels{};

  DescribeExpressConnectRouterRequest() {}

  explicit DescribeExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagModels) {
      vector<boost::any> temp1;
      for(auto item1:*tagModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TagModels") != m.end() && !m["TagModels"].empty()) {
      if (typeid(vector<boost::any>) == m["TagModels"].type()) {
        vector<DescribeExpressConnectRouterRequestTagModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterRequestTagModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagModels = make_shared<vector<DescribeExpressConnectRouterRequestTagModels>>(expect1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterRequest() = default;
};
class DescribeExpressConnectRouterResponseBodyEcrListTags : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> category{};
  shared_ptr<long> id{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resuorceType{};
  shared_ptr<long> scope{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeExpressConnectRouterResponseBodyEcrListTags() {}

  explicit DescribeExpressConnectRouterResponseBodyEcrListTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resuorceType) {
      res["ResuorceType"] = boost::any(*resuorceType);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
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
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<long>(boost::any_cast<long>(m["Category"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResuorceType") != m.end() && !m["ResuorceType"].empty()) {
      resuorceType = make_shared<string>(boost::any_cast<string>(m["ResuorceType"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<long>(boost::any_cast<long>(m["Scope"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeExpressConnectRouterResponseBodyEcrListTags() = default;
};
class DescribeExpressConnectRouterResponseBodyEcrList : public Darabonba::Model {
public:
  shared_ptr<long> alibabaSideAsn{};
  shared_ptr<string> bizStatus{};
  shared_ptr<string> description{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> name{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeExpressConnectRouterResponseBodyEcrListTags>> tags{};

  DescribeExpressConnectRouterResponseBodyEcrList() {}

  explicit DescribeExpressConnectRouterResponseBodyEcrList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alibabaSideAsn) {
      res["AlibabaSideAsn"] = boost::any(*alibabaSideAsn);
    }
    if (bizStatus) {
      res["BizStatus"] = boost::any(*bizStatus);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("AlibabaSideAsn") != m.end() && !m["AlibabaSideAsn"].empty()) {
      alibabaSideAsn = make_shared<long>(boost::any_cast<long>(m["AlibabaSideAsn"]));
    }
    if (m.find("BizStatus") != m.end() && !m["BizStatus"].empty()) {
      bizStatus = make_shared<string>(boost::any_cast<string>(m["BizStatus"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeExpressConnectRouterResponseBodyEcrListTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterResponseBodyEcrListTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeExpressConnectRouterResponseBodyEcrListTags>>(expect1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterResponseBodyEcrList() = default;
};
class DescribeExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<DescribeExpressConnectRouterResponseBodyEcrList>> ecrList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeExpressConnectRouterResponseBody() {}

  explicit DescribeExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (ecrList) {
      vector<boost::any> temp1;
      for(auto item1:*ecrList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcrList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("EcrList") != m.end() && !m["EcrList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcrList"].type()) {
        vector<DescribeExpressConnectRouterResponseBodyEcrList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcrList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterResponseBodyEcrList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecrList = make_shared<vector<DescribeExpressConnectRouterResponseBodyEcrList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeExpressConnectRouterResponseBody() = default;
};
class DescribeExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterResponseBody> body{};

  DescribeExpressConnectRouterResponse() {}

  explicit DescribeExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterResponse() = default;
};
class DescribeExpressConnectRouterAllowedPrefixHistoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> associationId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};

  DescribeExpressConnectRouterAllowedPrefixHistoryRequest() {}

  explicit DescribeExpressConnectRouterAllowedPrefixHistoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeExpressConnectRouterAllowedPrefixHistoryRequest() = default;
};
class DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedPrefix{};
  shared_ptr<string> gmtCreate{};

  DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList() {}

  explicit DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedPrefix) {
      res["AllowedPrefix"] = boost::any(*allowedPrefix);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedPrefix") != m.end() && !m["AllowedPrefix"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedPrefix"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedPrefix"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedPrefix = make_shared<vector<string>>(toVec1);
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
  }


  virtual ~DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList() = default;
};
class DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList>> allowedPrefixHistoryList{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody() {}

  explicit DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (allowedPrefixHistoryList) {
      vector<boost::any> temp1;
      for(auto item1:*allowedPrefixHistoryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AllowedPrefixHistoryList"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AllowedPrefixHistoryList") != m.end() && !m["AllowedPrefixHistoryList"].empty()) {
      if (typeid(vector<boost::any>) == m["AllowedPrefixHistoryList"].type()) {
        vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AllowedPrefixHistoryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allowedPrefixHistoryList = make_shared<vector<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBodyAllowedPrefixHistoryList>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody() = default;
};
class DescribeExpressConnectRouterAllowedPrefixHistoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody> body{};

  DescribeExpressConnectRouterAllowedPrefixHistoryResponse() {}

  explicit DescribeExpressConnectRouterAllowedPrefixHistoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterAllowedPrefixHistoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterAllowedPrefixHistoryResponse() = default;
};
class DescribeExpressConnectRouterAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<string> associationId{};
  shared_ptr<string> associationNodeType{};
  shared_ptr<string> associationRegionId{};
  shared_ptr<string> cenId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<string> vpcId{};

  DescribeExpressConnectRouterAssociationRequest() {}

  explicit DescribeExpressConnectRouterAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (associationNodeType) {
      res["AssociationNodeType"] = boost::any(*associationNodeType);
    }
    if (associationRegionId) {
      res["AssociationRegionId"] = boost::any(*associationRegionId);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("AssociationNodeType") != m.end() && !m["AssociationNodeType"].empty()) {
      associationNodeType = make_shared<string>(boost::any_cast<string>(m["AssociationNodeType"]));
    }
    if (m.find("AssociationRegionId") != m.end() && !m["AssociationRegionId"].empty()) {
      associationRegionId = make_shared<string>(boost::any_cast<string>(m["AssociationRegionId"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeExpressConnectRouterAssociationRequest() = default;
};
class DescribeExpressConnectRouterAssociationResponseBodyAssociationList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedPrefixes{};
  shared_ptr<string> associationId{};
  shared_ptr<string> associationNodeType{};
  shared_ptr<string> cenId{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> transitRouterId{};
  shared_ptr<long> transitRouterOwnerId{};
  shared_ptr<string> vpcId{};
  shared_ptr<long> vpcOwnerId{};

  DescribeExpressConnectRouterAssociationResponseBodyAssociationList() {}

  explicit DescribeExpressConnectRouterAssociationResponseBodyAssociationList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedPrefixes) {
      res["AllowedPrefixes"] = boost::any(*allowedPrefixes);
    }
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (associationNodeType) {
      res["AssociationNodeType"] = boost::any(*associationNodeType);
    }
    if (cenId) {
      res["CenId"] = boost::any(*cenId);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (transitRouterId) {
      res["TransitRouterId"] = boost::any(*transitRouterId);
    }
    if (transitRouterOwnerId) {
      res["TransitRouterOwnerId"] = boost::any(*transitRouterOwnerId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (vpcOwnerId) {
      res["VpcOwnerId"] = boost::any(*vpcOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedPrefixes") != m.end() && !m["AllowedPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("AssociationNodeType") != m.end() && !m["AssociationNodeType"].empty()) {
      associationNodeType = make_shared<string>(boost::any_cast<string>(m["AssociationNodeType"]));
    }
    if (m.find("CenId") != m.end() && !m["CenId"].empty()) {
      cenId = make_shared<string>(boost::any_cast<string>(m["CenId"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TransitRouterId") != m.end() && !m["TransitRouterId"].empty()) {
      transitRouterId = make_shared<string>(boost::any_cast<string>(m["TransitRouterId"]));
    }
    if (m.find("TransitRouterOwnerId") != m.end() && !m["TransitRouterOwnerId"].empty()) {
      transitRouterOwnerId = make_shared<long>(boost::any_cast<long>(m["TransitRouterOwnerId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("VpcOwnerId") != m.end() && !m["VpcOwnerId"].empty()) {
      vpcOwnerId = make_shared<long>(boost::any_cast<long>(m["VpcOwnerId"]));
    }
  }


  virtual ~DescribeExpressConnectRouterAssociationResponseBodyAssociationList() = default;
};
class DescribeExpressConnectRouterAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<DescribeExpressConnectRouterAssociationResponseBodyAssociationList>> associationList{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeExpressConnectRouterAssociationResponseBody() {}

  explicit DescribeExpressConnectRouterAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (associationList) {
      vector<boost::any> temp1;
      for(auto item1:*associationList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AssociationList"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AssociationList") != m.end() && !m["AssociationList"].empty()) {
      if (typeid(vector<boost::any>) == m["AssociationList"].type()) {
        vector<DescribeExpressConnectRouterAssociationResponseBodyAssociationList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AssociationList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterAssociationResponseBodyAssociationList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        associationList = make_shared<vector<DescribeExpressConnectRouterAssociationResponseBodyAssociationList>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeExpressConnectRouterAssociationResponseBody() = default;
};
class DescribeExpressConnectRouterAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterAssociationResponseBody> body{};

  DescribeExpressConnectRouterAssociationResponse() {}

  explicit DescribeExpressConnectRouterAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterAssociationResponse() = default;
};
class DescribeExpressConnectRouterChildInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> associationId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  DescribeExpressConnectRouterChildInstanceRequest() {}

  explicit DescribeExpressConnectRouterChildInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
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
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~DescribeExpressConnectRouterChildInstanceRequest() = default;
};
class DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> associationId{};
  shared_ptr<string> childInstanceId{};
  shared_ptr<long> childInstanceOwnerId{};
  shared_ptr<string> childInstanceRegionId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList() {}

  explicit DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceOwnerId) {
      res["ChildInstanceOwnerId"] = boost::any(*childInstanceOwnerId);
    }
    if (childInstanceRegionId) {
      res["ChildInstanceRegionId"] = boost::any(*childInstanceRegionId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceOwnerId") != m.end() && !m["ChildInstanceOwnerId"].empty()) {
      childInstanceOwnerId = make_shared<long>(boost::any_cast<long>(m["ChildInstanceOwnerId"]));
    }
    if (m.find("ChildInstanceRegionId") != m.end() && !m["ChildInstanceRegionId"].empty()) {
      childInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceRegionId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList() = default;
};
class DescribeExpressConnectRouterChildInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<vector<DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList>> childInstanceList{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeExpressConnectRouterChildInstanceResponseBody() {}

  explicit DescribeExpressConnectRouterChildInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (childInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*childInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChildInstanceList"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("ChildInstanceList") != m.end() && !m["ChildInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["ChildInstanceList"].type()) {
        vector<DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChildInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        childInstanceList = make_shared<vector<DescribeExpressConnectRouterChildInstanceResponseBodyChildInstanceList>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeExpressConnectRouterChildInstanceResponseBody() = default;
};
class DescribeExpressConnectRouterChildInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterChildInstanceResponseBody> body{};

  DescribeExpressConnectRouterChildInstanceResponse() {}

  explicit DescribeExpressConnectRouterChildInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterChildInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterChildInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterChildInstanceResponse() = default;
};
class DescribeExpressConnectRouterInterRegionTransitModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  DescribeExpressConnectRouterInterRegionTransitModeRequest() {}

  explicit DescribeExpressConnectRouterInterRegionTransitModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~DescribeExpressConnectRouterInterRegionTransitModeRequest() = default;
};
class DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<string> regionId{};

  DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList() {}

  explicit DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList() = default;
};
class DescribeExpressConnectRouterInterRegionTransitModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<vector<DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList>> interRegionTransitModeList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeExpressConnectRouterInterRegionTransitModeResponseBody() {}

  explicit DescribeExpressConnectRouterInterRegionTransitModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (interRegionTransitModeList) {
      vector<boost::any> temp1;
      for(auto item1:*interRegionTransitModeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InterRegionTransitModeList"] = boost::any(temp1);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("InterRegionTransitModeList") != m.end() && !m["InterRegionTransitModeList"].empty()) {
      if (typeid(vector<boost::any>) == m["InterRegionTransitModeList"].type()) {
        vector<DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InterRegionTransitModeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        interRegionTransitModeList = make_shared<vector<DescribeExpressConnectRouterInterRegionTransitModeResponseBodyInterRegionTransitModeList>>(expect1);
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


  virtual ~DescribeExpressConnectRouterInterRegionTransitModeResponseBody() = default;
};
class DescribeExpressConnectRouterInterRegionTransitModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterInterRegionTransitModeResponseBody> body{};

  DescribeExpressConnectRouterInterRegionTransitModeResponse() {}

  explicit DescribeExpressConnectRouterInterRegionTransitModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterInterRegionTransitModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterInterRegionTransitModeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterInterRegionTransitModeResponse() = default;
};
class DescribeExpressConnectRouterRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  DescribeExpressConnectRouterRegionRequest() {}

  explicit DescribeExpressConnectRouterRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~DescribeExpressConnectRouterRegionRequest() = default;
};
class DescribeExpressConnectRouterRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<vector<string>> regionIdList{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeExpressConnectRouterRegionResponseBody() {}

  explicit DescribeExpressConnectRouterRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionIdList) {
      res["RegionIdList"] = boost::any(*regionIdList);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionIdList") != m.end() && !m["RegionIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RegionIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RegionIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      regionIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeExpressConnectRouterRegionResponseBody() = default;
};
class DescribeExpressConnectRouterRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterRegionResponseBody> body{};

  DescribeExpressConnectRouterRegionResponse() {}

  explicit DescribeExpressConnectRouterRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterRegionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterRegionResponse() = default;
};
class DescribeExpressConnectRouterRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> asPath{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> community{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> nexthopInstanceId{};
  shared_ptr<string> queryRegionId{};

  DescribeExpressConnectRouterRouteEntriesRequest() {}

  explicit DescribeExpressConnectRouterRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPath) {
      res["AsPath"] = boost::any(*asPath);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (community) {
      res["Community"] = boost::any(*community);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (nexthopInstanceId) {
      res["NexthopInstanceId"] = boost::any(*nexthopInstanceId);
    }
    if (queryRegionId) {
      res["QueryRegionId"] = boost::any(*queryRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPath") != m.end() && !m["AsPath"].empty()) {
      asPath = make_shared<string>(boost::any_cast<string>(m["AsPath"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Community") != m.end() && !m["Community"].empty()) {
      community = make_shared<string>(boost::any_cast<string>(m["Community"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("NexthopInstanceId") != m.end() && !m["NexthopInstanceId"].empty()) {
      nexthopInstanceId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceId"]));
    }
    if (m.find("QueryRegionId") != m.end() && !m["QueryRegionId"].empty()) {
      queryRegionId = make_shared<string>(boost::any_cast<string>(m["QueryRegionId"]));
    }
  }


  virtual ~DescribeExpressConnectRouterRouteEntriesRequest() = default;
};
class DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList : public Darabonba::Model {
public:
  shared_ptr<string> asPath{};
  shared_ptr<string> community{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<string> nexthopInstanceId{};
  shared_ptr<string> nexthopInstanceRegionId{};
  shared_ptr<string> status{};

  DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList() {}

  explicit DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asPath) {
      res["AsPath"] = boost::any(*asPath);
    }
    if (community) {
      res["Community"] = boost::any(*community);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (nexthopInstanceId) {
      res["NexthopInstanceId"] = boost::any(*nexthopInstanceId);
    }
    if (nexthopInstanceRegionId) {
      res["NexthopInstanceRegionId"] = boost::any(*nexthopInstanceRegionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsPath") != m.end() && !m["AsPath"].empty()) {
      asPath = make_shared<string>(boost::any_cast<string>(m["AsPath"]));
    }
    if (m.find("Community") != m.end() && !m["Community"].empty()) {
      community = make_shared<string>(boost::any_cast<string>(m["Community"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("NexthopInstanceId") != m.end() && !m["NexthopInstanceId"].empty()) {
      nexthopInstanceId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceId"]));
    }
    if (m.find("NexthopInstanceRegionId") != m.end() && !m["NexthopInstanceRegionId"].empty()) {
      nexthopInstanceRegionId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceRegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList() = default;
};
class DescribeExpressConnectRouterRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList>> routeEntriesList{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeExpressConnectRouterRouteEntriesResponseBody() {}

  explicit DescribeExpressConnectRouterRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (routeEntriesList) {
      vector<boost::any> temp1;
      for(auto item1:*routeEntriesList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RouteEntriesList"] = boost::any(temp1);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RouteEntriesList") != m.end() && !m["RouteEntriesList"].empty()) {
      if (typeid(vector<boost::any>) == m["RouteEntriesList"].type()) {
        vector<DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RouteEntriesList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        routeEntriesList = make_shared<vector<DescribeExpressConnectRouterRouteEntriesResponseBodyRouteEntriesList>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeExpressConnectRouterRouteEntriesResponseBody() = default;
};
class DescribeExpressConnectRouterRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressConnectRouterRouteEntriesResponseBody> body{};

  DescribeExpressConnectRouterRouteEntriesResponse() {}

  explicit DescribeExpressConnectRouterRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressConnectRouterRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressConnectRouterRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressConnectRouterRouteEntriesResponse() = default;
};
class DescribeInstanceGrantedToExpressConnectRouterRequestTagModels : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeInstanceGrantedToExpressConnectRouterRequestTagModels() {}

  explicit DescribeInstanceGrantedToExpressConnectRouterRequestTagModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeInstanceGrantedToExpressConnectRouterRequestTagModels() = default;
};
class DescribeInstanceGrantedToExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};
  shared_ptr<string> instanceRegionId{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>> tagModels{};

  DescribeInstanceGrantedToExpressConnectRouterRequest() {}

  explicit DescribeInstanceGrantedToExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    if (instanceRegionId) {
      res["InstanceRegionId"] = boost::any(*instanceRegionId);
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
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagModels) {
      vector<boost::any> temp1;
      for(auto item1:*tagModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagModels"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
    if (m.find("InstanceRegionId") != m.end() && !m["InstanceRegionId"].empty()) {
      instanceRegionId = make_shared<string>(boost::any_cast<string>(m["InstanceRegionId"]));
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
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("TagModels") != m.end() && !m["TagModels"].empty()) {
      if (typeid(vector<boost::any>) == m["TagModels"].type()) {
        vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceGrantedToExpressConnectRouterRequestTagModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagModels = make_shared<vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceGrantedToExpressConnectRouterRequest() = default;
};
class DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> ecrId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> grantId{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeOwnerBid{};
  shared_ptr<long> nodeOwnerUid{};
  shared_ptr<string> nodeRegionId{};
  shared_ptr<string> nodeType{};
  shared_ptr<string> status{};

  DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList() {}

  explicit DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (grantId) {
      res["GrantId"] = boost::any(*grantId);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeOwnerBid) {
      res["NodeOwnerBid"] = boost::any(*nodeOwnerBid);
    }
    if (nodeOwnerUid) {
      res["NodeOwnerUid"] = boost::any(*nodeOwnerUid);
    }
    if (nodeRegionId) {
      res["NodeRegionId"] = boost::any(*nodeRegionId);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("GrantId") != m.end() && !m["GrantId"].empty()) {
      grantId = make_shared<string>(boost::any_cast<string>(m["GrantId"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeOwnerBid") != m.end() && !m["NodeOwnerBid"].empty()) {
      nodeOwnerBid = make_shared<string>(boost::any_cast<string>(m["NodeOwnerBid"]));
    }
    if (m.find("NodeOwnerUid") != m.end() && !m["NodeOwnerUid"].empty()) {
      nodeOwnerUid = make_shared<long>(boost::any_cast<long>(m["NodeOwnerUid"]));
    }
    if (m.find("NodeRegionId") != m.end() && !m["NodeRegionId"].empty()) {
      nodeRegionId = make_shared<string>(boost::any_cast<string>(m["NodeRegionId"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList() = default;
};
class DescribeInstanceGrantedToExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList>> ecrGrantedInstanceList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeInstanceGrantedToExpressConnectRouterResponseBody() {}

  explicit DescribeInstanceGrantedToExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (ecrGrantedInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*ecrGrantedInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EcrGrantedInstanceList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("EcrGrantedInstanceList") != m.end() && !m["EcrGrantedInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["EcrGrantedInstanceList"].type()) {
        vector<DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EcrGrantedInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ecrGrantedInstanceList = make_shared<vector<DescribeInstanceGrantedToExpressConnectRouterResponseBodyEcrGrantedInstanceList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeInstanceGrantedToExpressConnectRouterResponseBody() = default;
};
class DescribeInstanceGrantedToExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceGrantedToExpressConnectRouterResponseBody> body{};

  DescribeInstanceGrantedToExpressConnectRouterResponse() {}

  explicit DescribeInstanceGrantedToExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceGrantedToExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceGrantedToExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceGrantedToExpressConnectRouterResponse() = default;
};
class DetachExpressConnectRouterChildInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> childInstanceId{};
  shared_ptr<string> childInstanceType{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  DetachExpressConnectRouterChildInstanceRequest() {}

  explicit DetachExpressConnectRouterChildInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childInstanceId) {
      res["ChildInstanceId"] = boost::any(*childInstanceId);
    }
    if (childInstanceType) {
      res["ChildInstanceType"] = boost::any(*childInstanceType);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildInstanceId") != m.end() && !m["ChildInstanceId"].empty()) {
      childInstanceId = make_shared<string>(boost::any_cast<string>(m["ChildInstanceId"]));
    }
    if (m.find("ChildInstanceType") != m.end() && !m["ChildInstanceType"].empty()) {
      childInstanceType = make_shared<string>(boost::any_cast<string>(m["ChildInstanceType"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~DetachExpressConnectRouterChildInstanceRequest() = default;
};
class DetachExpressConnectRouterChildInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DetachExpressConnectRouterChildInstanceResponseBody() {}

  explicit DetachExpressConnectRouterChildInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DetachExpressConnectRouterChildInstanceResponseBody() = default;
};
class DetachExpressConnectRouterChildInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachExpressConnectRouterChildInstanceResponseBody> body{};

  DetachExpressConnectRouterChildInstanceResponse() {}

  explicit DetachExpressConnectRouterChildInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachExpressConnectRouterChildInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachExpressConnectRouterChildInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DetachExpressConnectRouterChildInstanceResponse() = default;
};
class DisableExpressConnectRouterRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> nexthopInstanceId{};

  DisableExpressConnectRouterRouteEntriesRequest() {}

  explicit DisableExpressConnectRouterRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (nexthopInstanceId) {
      res["NexthopInstanceId"] = boost::any(*nexthopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("NexthopInstanceId") != m.end() && !m["NexthopInstanceId"].empty()) {
      nexthopInstanceId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceId"]));
    }
  }


  virtual ~DisableExpressConnectRouterRouteEntriesRequest() = default;
};
class DisableExpressConnectRouterRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableExpressConnectRouterRouteEntriesResponseBody() {}

  explicit DisableExpressConnectRouterRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~DisableExpressConnectRouterRouteEntriesResponseBody() = default;
};
class DisableExpressConnectRouterRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableExpressConnectRouterRouteEntriesResponseBody> body{};

  DisableExpressConnectRouterRouteEntriesResponse() {}

  explicit DisableExpressConnectRouterRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableExpressConnectRouterRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableExpressConnectRouterRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~DisableExpressConnectRouterRouteEntriesResponse() = default;
};
class EnableExpressConnectRouterRouteEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> destinationCidrBlock{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> nexthopInstanceId{};

  EnableExpressConnectRouterRouteEntriesRequest() {}

  explicit EnableExpressConnectRouterRouteEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (destinationCidrBlock) {
      res["DestinationCidrBlock"] = boost::any(*destinationCidrBlock);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (nexthopInstanceId) {
      res["NexthopInstanceId"] = boost::any(*nexthopInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DestinationCidrBlock") != m.end() && !m["DestinationCidrBlock"].empty()) {
      destinationCidrBlock = make_shared<string>(boost::any_cast<string>(m["DestinationCidrBlock"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("NexthopInstanceId") != m.end() && !m["NexthopInstanceId"].empty()) {
      nexthopInstanceId = make_shared<string>(boost::any_cast<string>(m["NexthopInstanceId"]));
    }
  }


  virtual ~EnableExpressConnectRouterRouteEntriesRequest() = default;
};
class EnableExpressConnectRouterRouteEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableExpressConnectRouterRouteEntriesResponseBody() {}

  explicit EnableExpressConnectRouterRouteEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~EnableExpressConnectRouterRouteEntriesResponseBody() = default;
};
class EnableExpressConnectRouterRouteEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableExpressConnectRouterRouteEntriesResponseBody> body{};

  EnableExpressConnectRouterRouteEntriesResponse() {}

  explicit EnableExpressConnectRouterRouteEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableExpressConnectRouterRouteEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableExpressConnectRouterRouteEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~EnableExpressConnectRouterRouteEntriesResponse() = default;
};
class ForceDeleteExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  ForceDeleteExpressConnectRouterRequest() {}

  explicit ForceDeleteExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~ForceDeleteExpressConnectRouterRequest() = default;
};
class ForceDeleteExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ForceDeleteExpressConnectRouterResponseBody() {}

  explicit ForceDeleteExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ForceDeleteExpressConnectRouterResponseBody() = default;
};
class ForceDeleteExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ForceDeleteExpressConnectRouterResponseBody> body{};

  ForceDeleteExpressConnectRouterResponse() {}

  explicit ForceDeleteExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ForceDeleteExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ForceDeleteExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~ForceDeleteExpressConnectRouterResponse() = default;
};
class GrantInstanceToExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> ecrOwnerAliUid{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRegionId{};
  shared_ptr<string> instanceType{};

  GrantInstanceToExpressConnectRouterRequest() {}

  explicit GrantInstanceToExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (ecrOwnerAliUid) {
      res["EcrOwnerAliUid"] = boost::any(*ecrOwnerAliUid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceRegionId) {
      res["InstanceRegionId"] = boost::any(*instanceRegionId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("EcrOwnerAliUid") != m.end() && !m["EcrOwnerAliUid"].empty()) {
      ecrOwnerAliUid = make_shared<long>(boost::any_cast<long>(m["EcrOwnerAliUid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceRegionId") != m.end() && !m["InstanceRegionId"].empty()) {
      instanceRegionId = make_shared<string>(boost::any_cast<string>(m["InstanceRegionId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~GrantInstanceToExpressConnectRouterRequest() = default;
};
class GrantInstanceToExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GrantInstanceToExpressConnectRouterResponseBody() {}

  explicit GrantInstanceToExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GrantInstanceToExpressConnectRouterResponseBody() = default;
};
class GrantInstanceToExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GrantInstanceToExpressConnectRouterResponseBody> body{};

  GrantInstanceToExpressConnectRouterResponse() {}

  explicit GrantInstanceToExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GrantInstanceToExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GrantInstanceToExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~GrantInstanceToExpressConnectRouterResponse() = default;
};
class ListExpressConnectRouterSupportedRegionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> nodeType{};

  ListExpressConnectRouterSupportedRegionRequest() {}

  explicit ListExpressConnectRouterSupportedRegionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (nodeType) {
      res["NodeType"] = boost::any(*nodeType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("NodeType") != m.end() && !m["NodeType"].empty()) {
      nodeType = make_shared<string>(boost::any_cast<string>(m["NodeType"]));
    }
  }


  virtual ~ListExpressConnectRouterSupportedRegionRequest() = default;
};
class ListExpressConnectRouterSupportedRegionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<string>> supportedRegionIdList{};

  ListExpressConnectRouterSupportedRegionResponseBody() {}

  explicit ListExpressConnectRouterSupportedRegionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (supportedRegionIdList) {
      res["SupportedRegionIdList"] = boost::any(*supportedRegionIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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
    if (m.find("SupportedRegionIdList") != m.end() && !m["SupportedRegionIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportedRegionIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportedRegionIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportedRegionIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListExpressConnectRouterSupportedRegionResponseBody() = default;
};
class ListExpressConnectRouterSupportedRegionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExpressConnectRouterSupportedRegionResponseBody> body{};

  ListExpressConnectRouterSupportedRegionResponse() {}

  explicit ListExpressConnectRouterSupportedRegionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExpressConnectRouterSupportedRegionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExpressConnectRouterSupportedRegionResponseBody>(model1);
      }
    }
  }


  virtual ~ListExpressConnectRouterSupportedRegionResponse() = default;
};
class ModifyExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> name{};

  ModifyExpressConnectRouterRequest() {}

  explicit ModifyExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyExpressConnectRouterRequest() = default;
};
class ModifyExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyExpressConnectRouterResponseBody() {}

  explicit ModifyExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyExpressConnectRouterResponseBody() = default;
};
class ModifyExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyExpressConnectRouterResponseBody> body{};

  ModifyExpressConnectRouterResponse() {}

  explicit ModifyExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyExpressConnectRouterResponse() = default;
};
class ModifyExpressConnectRouterAssociationAllowedPrefixRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedPrefixes{};
  shared_ptr<string> associationId{};
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<string> ownerAccount{};

  ModifyExpressConnectRouterAssociationAllowedPrefixRequest() {}

  explicit ModifyExpressConnectRouterAssociationAllowedPrefixRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedPrefixes) {
      res["AllowedPrefixes"] = boost::any(*allowedPrefixes);
    }
    if (associationId) {
      res["AssociationId"] = boost::any(*associationId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (ownerAccount) {
      res["OwnerAccount"] = boost::any(*ownerAccount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedPrefixes") != m.end() && !m["AllowedPrefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedPrefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedPrefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedPrefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AssociationId") != m.end() && !m["AssociationId"].empty()) {
      associationId = make_shared<string>(boost::any_cast<string>(m["AssociationId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("OwnerAccount") != m.end() && !m["OwnerAccount"].empty()) {
      ownerAccount = make_shared<string>(boost::any_cast<string>(m["OwnerAccount"]));
    }
  }


  virtual ~ModifyExpressConnectRouterAssociationAllowedPrefixRequest() = default;
};
class ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody() {}

  explicit ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody() = default;
};
class ModifyExpressConnectRouterAssociationAllowedPrefixResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody> body{};

  ModifyExpressConnectRouterAssociationAllowedPrefixResponse() {}

  explicit ModifyExpressConnectRouterAssociationAllowedPrefixResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyExpressConnectRouterAssociationAllowedPrefixResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyExpressConnectRouterAssociationAllowedPrefixResponse() = default;
};
class ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<string> regionId{};

  ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList() {}

  explicit ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList() = default;
};
class ModifyExpressConnectRouterInterRegionTransitModeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<vector<ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList>> transitModeList{};

  ModifyExpressConnectRouterInterRegionTransitModeRequest() {}

  explicit ModifyExpressConnectRouterInterRegionTransitModeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (transitModeList) {
      vector<boost::any> temp1;
      for(auto item1:*transitModeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransitModeList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("TransitModeList") != m.end() && !m["TransitModeList"].empty()) {
      if (typeid(vector<boost::any>) == m["TransitModeList"].type()) {
        vector<ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransitModeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transitModeList = make_shared<vector<ModifyExpressConnectRouterInterRegionTransitModeRequestTransitModeList>>(expect1);
      }
    }
  }


  virtual ~ModifyExpressConnectRouterInterRegionTransitModeRequest() = default;
};
class ModifyExpressConnectRouterInterRegionTransitModeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyExpressConnectRouterInterRegionTransitModeResponseBody() {}

  explicit ModifyExpressConnectRouterInterRegionTransitModeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ModifyExpressConnectRouterInterRegionTransitModeResponseBody() = default;
};
class ModifyExpressConnectRouterInterRegionTransitModeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyExpressConnectRouterInterRegionTransitModeResponseBody> body{};

  ModifyExpressConnectRouterInterRegionTransitModeResponse() {}

  explicit ModifyExpressConnectRouterInterRegionTransitModeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyExpressConnectRouterInterRegionTransitModeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyExpressConnectRouterInterRegionTransitModeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyExpressConnectRouterInterRegionTransitModeResponse() = default;
};
class RevokeInstanceFromExpressConnectRouterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};
  shared_ptr<long> ecrOwnerAliUid{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceRegionId{};
  shared_ptr<string> instanceType{};

  RevokeInstanceFromExpressConnectRouterRequest() {}

  explicit RevokeInstanceFromExpressConnectRouterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    if (ecrOwnerAliUid) {
      res["EcrOwnerAliUid"] = boost::any(*ecrOwnerAliUid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceRegionId) {
      res["InstanceRegionId"] = boost::any(*instanceRegionId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
    if (m.find("EcrOwnerAliUid") != m.end() && !m["EcrOwnerAliUid"].empty()) {
      ecrOwnerAliUid = make_shared<long>(boost::any_cast<long>(m["EcrOwnerAliUid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceRegionId") != m.end() && !m["InstanceRegionId"].empty()) {
      instanceRegionId = make_shared<string>(boost::any_cast<string>(m["InstanceRegionId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~RevokeInstanceFromExpressConnectRouterRequest() = default;
};
class RevokeInstanceFromExpressConnectRouterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RevokeInstanceFromExpressConnectRouterResponseBody() {}

  explicit RevokeInstanceFromExpressConnectRouterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~RevokeInstanceFromExpressConnectRouterResponseBody() = default;
};
class RevokeInstanceFromExpressConnectRouterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeInstanceFromExpressConnectRouterResponseBody> body{};

  RevokeInstanceFromExpressConnectRouterResponse() {}

  explicit RevokeInstanceFromExpressConnectRouterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeInstanceFromExpressConnectRouterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeInstanceFromExpressConnectRouterResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeInstanceFromExpressConnectRouterResponse() = default;
};
class SynchronizeExpressConnectRouterInterRegionBandwidthRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<bool> dryRun{};
  shared_ptr<string> ecrId{};

  SynchronizeExpressConnectRouterInterRegionBandwidthRequest() {}

  explicit SynchronizeExpressConnectRouterInterRegionBandwidthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (dryRun) {
      res["DryRun"] = boost::any(*dryRun);
    }
    if (ecrId) {
      res["EcrId"] = boost::any(*ecrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("DryRun") != m.end() && !m["DryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["DryRun"]));
    }
    if (m.find("EcrId") != m.end() && !m["EcrId"].empty()) {
      ecrId = make_shared<string>(boost::any_cast<string>(m["EcrId"]));
    }
  }


  virtual ~SynchronizeExpressConnectRouterInterRegionBandwidthRequest() = default;
};
class SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody() {}

  explicit SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody() = default;
};
class SynchronizeExpressConnectRouterInterRegionBandwidthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody> body{};

  SynchronizeExpressConnectRouterInterRegionBandwidthResponse() {}

  explicit SynchronizeExpressConnectRouterInterRegionBandwidthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SynchronizeExpressConnectRouterInterRegionBandwidthResponseBody>(model1);
      }
    }
  }


  virtual ~SynchronizeExpressConnectRouterInterRegionBandwidthResponse() = default;
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
  AttachExpressConnectRouterChildInstanceResponse attachExpressConnectRouterChildInstanceWithOptions(shared_ptr<AttachExpressConnectRouterChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachExpressConnectRouterChildInstanceResponse attachExpressConnectRouterChildInstance(shared_ptr<AttachExpressConnectRouterChildInstanceRequest> request);
  CheckAddRegionToExpressConnectRouterResponse checkAddRegionToExpressConnectRouterWithOptions(shared_ptr<CheckAddRegionToExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAddRegionToExpressConnectRouterResponse checkAddRegionToExpressConnectRouter(shared_ptr<CheckAddRegionToExpressConnectRouterRequest> request);
  CreateExpressConnectRouterResponse createExpressConnectRouterWithOptions(shared_ptr<CreateExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExpressConnectRouterResponse createExpressConnectRouter(shared_ptr<CreateExpressConnectRouterRequest> request);
  CreateExpressConnectRouterAssociationResponse createExpressConnectRouterAssociationWithOptions(shared_ptr<CreateExpressConnectRouterAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExpressConnectRouterAssociationResponse createExpressConnectRouterAssociation(shared_ptr<CreateExpressConnectRouterAssociationRequest> request);
  DeleteExpressConnectRouterResponse deleteExpressConnectRouterWithOptions(shared_ptr<DeleteExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExpressConnectRouterResponse deleteExpressConnectRouter(shared_ptr<DeleteExpressConnectRouterRequest> request);
  DeleteExpressConnectRouterAssociationResponse deleteExpressConnectRouterAssociationWithOptions(shared_ptr<DeleteExpressConnectRouterAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExpressConnectRouterAssociationResponse deleteExpressConnectRouterAssociation(shared_ptr<DeleteExpressConnectRouterAssociationRequest> request);
  DescribeDisabledExpressConnectRouterRouteEntriesResponse describeDisabledExpressConnectRouterRouteEntriesWithOptions(shared_ptr<DescribeDisabledExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDisabledExpressConnectRouterRouteEntriesResponse describeDisabledExpressConnectRouterRouteEntries(shared_ptr<DescribeDisabledExpressConnectRouterRouteEntriesRequest> request);
  DescribeExpressConnectRouterResponse describeExpressConnectRouterWithOptions(shared_ptr<DescribeExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterResponse describeExpressConnectRouter(shared_ptr<DescribeExpressConnectRouterRequest> request);
  DescribeExpressConnectRouterAllowedPrefixHistoryResponse describeExpressConnectRouterAllowedPrefixHistoryWithOptions(shared_ptr<DescribeExpressConnectRouterAllowedPrefixHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterAllowedPrefixHistoryResponse describeExpressConnectRouterAllowedPrefixHistory(shared_ptr<DescribeExpressConnectRouterAllowedPrefixHistoryRequest> request);
  DescribeExpressConnectRouterAssociationResponse describeExpressConnectRouterAssociationWithOptions(shared_ptr<DescribeExpressConnectRouterAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterAssociationResponse describeExpressConnectRouterAssociation(shared_ptr<DescribeExpressConnectRouterAssociationRequest> request);
  DescribeExpressConnectRouterChildInstanceResponse describeExpressConnectRouterChildInstanceWithOptions(shared_ptr<DescribeExpressConnectRouterChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterChildInstanceResponse describeExpressConnectRouterChildInstance(shared_ptr<DescribeExpressConnectRouterChildInstanceRequest> request);
  DescribeExpressConnectRouterInterRegionTransitModeResponse describeExpressConnectRouterInterRegionTransitModeWithOptions(shared_ptr<DescribeExpressConnectRouterInterRegionTransitModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterInterRegionTransitModeResponse describeExpressConnectRouterInterRegionTransitMode(shared_ptr<DescribeExpressConnectRouterInterRegionTransitModeRequest> request);
  DescribeExpressConnectRouterRegionResponse describeExpressConnectRouterRegionWithOptions(shared_ptr<DescribeExpressConnectRouterRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterRegionResponse describeExpressConnectRouterRegion(shared_ptr<DescribeExpressConnectRouterRegionRequest> request);
  DescribeExpressConnectRouterRouteEntriesResponse describeExpressConnectRouterRouteEntriesWithOptions(shared_ptr<DescribeExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressConnectRouterRouteEntriesResponse describeExpressConnectRouterRouteEntries(shared_ptr<DescribeExpressConnectRouterRouteEntriesRequest> request);
  DescribeInstanceGrantedToExpressConnectRouterResponse describeInstanceGrantedToExpressConnectRouterWithOptions(shared_ptr<DescribeInstanceGrantedToExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceGrantedToExpressConnectRouterResponse describeInstanceGrantedToExpressConnectRouter(shared_ptr<DescribeInstanceGrantedToExpressConnectRouterRequest> request);
  DetachExpressConnectRouterChildInstanceResponse detachExpressConnectRouterChildInstanceWithOptions(shared_ptr<DetachExpressConnectRouterChildInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachExpressConnectRouterChildInstanceResponse detachExpressConnectRouterChildInstance(shared_ptr<DetachExpressConnectRouterChildInstanceRequest> request);
  DisableExpressConnectRouterRouteEntriesResponse disableExpressConnectRouterRouteEntriesWithOptions(shared_ptr<DisableExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableExpressConnectRouterRouteEntriesResponse disableExpressConnectRouterRouteEntries(shared_ptr<DisableExpressConnectRouterRouteEntriesRequest> request);
  EnableExpressConnectRouterRouteEntriesResponse enableExpressConnectRouterRouteEntriesWithOptions(shared_ptr<EnableExpressConnectRouterRouteEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableExpressConnectRouterRouteEntriesResponse enableExpressConnectRouterRouteEntries(shared_ptr<EnableExpressConnectRouterRouteEntriesRequest> request);
  ForceDeleteExpressConnectRouterResponse forceDeleteExpressConnectRouterWithOptions(shared_ptr<ForceDeleteExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ForceDeleteExpressConnectRouterResponse forceDeleteExpressConnectRouter(shared_ptr<ForceDeleteExpressConnectRouterRequest> request);
  GrantInstanceToExpressConnectRouterResponse grantInstanceToExpressConnectRouterWithOptions(shared_ptr<GrantInstanceToExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GrantInstanceToExpressConnectRouterResponse grantInstanceToExpressConnectRouter(shared_ptr<GrantInstanceToExpressConnectRouterRequest> request);
  ListExpressConnectRouterSupportedRegionResponse listExpressConnectRouterSupportedRegionWithOptions(shared_ptr<ListExpressConnectRouterSupportedRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExpressConnectRouterSupportedRegionResponse listExpressConnectRouterSupportedRegion(shared_ptr<ListExpressConnectRouterSupportedRegionRequest> request);
  ModifyExpressConnectRouterResponse modifyExpressConnectRouterWithOptions(shared_ptr<ModifyExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyExpressConnectRouterResponse modifyExpressConnectRouter(shared_ptr<ModifyExpressConnectRouterRequest> request);
  ModifyExpressConnectRouterAssociationAllowedPrefixResponse modifyExpressConnectRouterAssociationAllowedPrefixWithOptions(shared_ptr<ModifyExpressConnectRouterAssociationAllowedPrefixRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyExpressConnectRouterAssociationAllowedPrefixResponse modifyExpressConnectRouterAssociationAllowedPrefix(shared_ptr<ModifyExpressConnectRouterAssociationAllowedPrefixRequest> request);
  ModifyExpressConnectRouterInterRegionTransitModeResponse modifyExpressConnectRouterInterRegionTransitModeWithOptions(shared_ptr<ModifyExpressConnectRouterInterRegionTransitModeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyExpressConnectRouterInterRegionTransitModeResponse modifyExpressConnectRouterInterRegionTransitMode(shared_ptr<ModifyExpressConnectRouterInterRegionTransitModeRequest> request);
  RevokeInstanceFromExpressConnectRouterResponse revokeInstanceFromExpressConnectRouterWithOptions(shared_ptr<RevokeInstanceFromExpressConnectRouterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeInstanceFromExpressConnectRouterResponse revokeInstanceFromExpressConnectRouter(shared_ptr<RevokeInstanceFromExpressConnectRouterRequest> request);
  SynchronizeExpressConnectRouterInterRegionBandwidthResponse synchronizeExpressConnectRouterInterRegionBandwidthWithOptions(shared_ptr<SynchronizeExpressConnectRouterInterRegionBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SynchronizeExpressConnectRouterInterRegionBandwidthResponse synchronizeExpressConnectRouterInterRegionBandwidth(shared_ptr<SynchronizeExpressConnectRouterInterRegionBandwidthRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ExpressConnectRouter20230901

#endif
