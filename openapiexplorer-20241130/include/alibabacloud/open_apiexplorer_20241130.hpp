// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OPENAPIEXPLORER20241130_H_
#define ALIBABACLOUD_OPENAPIEXPLORER20241130_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_OpenAPIExplorer20241130 {
class GetErrorCodeSolutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> product{};

  GetErrorCodeSolutionsRequest() {}

  explicit GetErrorCodeSolutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["acceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acceptLanguage") != m.end() && !m["acceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["acceptLanguage"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
  }


  virtual ~GetErrorCodeSolutionsRequest() = default;
};
class GetErrorCodeSolutionsResponseBodySolutions : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> product{};
  shared_ptr<string> productName{};
  shared_ptr<string> solutionId{};

  GetErrorCodeSolutionsResponseBodySolutions() {}

  explicit GetErrorCodeSolutionsResponseBodySolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (productName) {
      res["productName"] = boost::any(*productName);
    }
    if (solutionId) {
      res["solutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["productName"]));
    }
    if (m.find("solutionId") != m.end() && !m["solutionId"].empty()) {
      solutionId = make_shared<string>(boost::any_cast<string>(m["solutionId"]));
    }
  }


  virtual ~GetErrorCodeSolutionsResponseBodySolutions() = default;
};
class GetErrorCodeSolutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetErrorCodeSolutionsResponseBodySolutions>> solutions{};

  GetErrorCodeSolutionsResponseBody() {}

  explicit GetErrorCodeSolutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (solutions) {
      vector<boost::any> temp1;
      for(auto item1:*solutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["solutions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("solutions") != m.end() && !m["solutions"].empty()) {
      if (typeid(vector<boost::any>) == m["solutions"].type()) {
        vector<GetErrorCodeSolutionsResponseBodySolutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["solutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetErrorCodeSolutionsResponseBodySolutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutions = make_shared<vector<GetErrorCodeSolutionsResponseBodySolutions>>(expect1);
      }
    }
  }


  virtual ~GetErrorCodeSolutionsResponseBody() = default;
};
class GetErrorCodeSolutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetErrorCodeSolutionsResponseBody> body{};

  GetErrorCodeSolutionsResponse() {}

  explicit GetErrorCodeSolutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetErrorCodeSolutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetErrorCodeSolutionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetErrorCodeSolutionsResponse() = default;
};
class GetOwnRequestLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> logRequestId{};

  GetOwnRequestLogRequest() {}

  explicit GetOwnRequestLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRequestId) {
      res["logRequestId"] = boost::any(*logRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logRequestId") != m.end() && !m["logRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["logRequestId"]));
    }
  }


  virtual ~GetOwnRequestLogRequest() = default;
};
class GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo : public Darabonba::Model {
public:
  shared_ptr<string> authenticationType{};
  shared_ptr<string> signatureMethod{};
  shared_ptr<string> signatureVersion{};

  GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo() {}

  explicit GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationType) {
      res["authenticationType"] = boost::any(*authenticationType);
    }
    if (signatureMethod) {
      res["signatureMethod"] = boost::any(*signatureMethod);
    }
    if (signatureVersion) {
      res["signatureVersion"] = boost::any(*signatureVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authenticationType") != m.end() && !m["authenticationType"].empty()) {
      authenticationType = make_shared<string>(boost::any_cast<string>(m["authenticationType"]));
    }
    if (m.find("signatureMethod") != m.end() && !m["signatureMethod"].empty()) {
      signatureMethod = make_shared<string>(boost::any_cast<string>(m["signatureMethod"]));
    }
    if (m.find("signatureVersion") != m.end() && !m["signatureVersion"].empty()) {
      signatureVersion = make_shared<string>(boost::any_cast<string>(m["signatureVersion"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo() = default;
};
class GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};
  shared_ptr<string> encodedDiagnosticMessage{};
  shared_ptr<string> noPermissionType{};
  shared_ptr<string> policyType{};

  GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail() {}

  explicit GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["authAction"] = boost::any(*authAction);
    }
    if (authPrincipalDisplayName) {
      res["authPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["authPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["authPrincipalType"] = boost::any(*authPrincipalType);
    }
    if (encodedDiagnosticMessage) {
      res["encodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    if (noPermissionType) {
      res["noPermissionType"] = boost::any(*noPermissionType);
    }
    if (policyType) {
      res["policyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authAction") != m.end() && !m["authAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["authAction"]));
    }
    if (m.find("authPrincipalDisplayName") != m.end() && !m["authPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["authPrincipalDisplayName"]));
    }
    if (m.find("authPrincipalOwnerId") != m.end() && !m["authPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["authPrincipalOwnerId"]));
    }
    if (m.find("authPrincipalType") != m.end() && !m["authPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["authPrincipalType"]));
    }
    if (m.find("encodedDiagnosticMessage") != m.end() && !m["encodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["encodedDiagnosticMessage"]));
    }
    if (m.find("noPermissionType") != m.end() && !m["noPermissionType"].empty()) {
      noPermissionType = make_shared<string>(boost::any_cast<string>(m["noPermissionType"]));
    }
    if (m.find("policyType") != m.end() && !m["policyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["policyType"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail() = default;
};
class GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc : public Darabonba::Model {
public:
  shared_ptr<string> alibabacloudSite{};
  shared_ptr<string> aliyunSite{};

  GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc() {}

  explicit GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alibabacloudSite) {
      res["alibabacloudSite"] = boost::any(*alibabacloudSite);
    }
    if (aliyunSite) {
      res["aliyunSite"] = boost::any(*aliyunSite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alibabacloudSite") != m.end() && !m["alibabacloudSite"].empty()) {
      alibabacloudSite = make_shared<string>(boost::any_cast<string>(m["alibabacloudSite"]));
    }
    if (m.find("aliyunSite") != m.end() && !m["aliyunSite"].empty()) {
      aliyunSite = make_shared<string>(boost::any_cast<string>(m["aliyunSite"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc() = default;
};
class GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName : public Darabonba::Model {
public:
  shared_ptr<string> cnName{};
  shared_ptr<string> enName{};

  GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName() {}

  explicit GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnName) {
      res["cnName"] = boost::any(*cnName);
    }
    if (enName) {
      res["enName"] = boost::any(*enName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cnName") != m.end() && !m["cnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["cnName"]));
    }
    if (m.find("enName") != m.end() && !m["enName"].empty()) {
      enName = make_shared<string>(boost::any_cast<string>(m["enName"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName() = default;
};
class GetOwnRequestLogResponseBodyLogInfoBasicInfo : public Darabonba::Model {
public:
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail> accessDeniedDetail{};
  shared_ptr<string> api{};
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc> apiDoc{};
  shared_ptr<string> apiStyle{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> gatewayProcessTime{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> product{};
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName> productName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestDuration{};
  shared_ptr<string> sdkRequestTime{};
  shared_ptr<string> throttlingResult{};

  GetOwnRequestLogResponseBodyLogInfoBasicInfo() {}

  explicit GetOwnRequestLogResponseBodyLogInfoBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = accessDeniedDetail ? boost::any(accessDeniedDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (api) {
      res["api"] = boost::any(*api);
    }
    if (apiDoc) {
      res["apiDoc"] = apiDoc ? boost::any(apiDoc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (apiStyle) {
      res["apiStyle"] = boost::any(*apiStyle);
    }
    if (apiVersion) {
      res["apiVersion"] = boost::any(*apiVersion);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (gatewayProcessTime) {
      res["gatewayProcessTime"] = boost::any(*gatewayProcessTime);
    }
    if (httpMethod) {
      res["httpMethod"] = boost::any(*httpMethod);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (logRequestId) {
      res["logRequestId"] = boost::any(*logRequestId);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (productName) {
      res["productName"] = productName ? boost::any(productName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestDuration) {
      res["requestDuration"] = boost::any(*requestDuration);
    }
    if (sdkRequestTime) {
      res["sdkRequestTime"] = boost::any(*sdkRequestTime);
    }
    if (throttlingResult) {
      res["throttlingResult"] = boost::any(*throttlingResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["accessDeniedDetail"].type()) {
        GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["accessDeniedDetail"]));
        accessDeniedDetail = make_shared<GetOwnRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail>(model1);
      }
    }
    if (m.find("api") != m.end() && !m["api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["api"]));
    }
    if (m.find("apiDoc") != m.end() && !m["apiDoc"].empty()) {
      if (typeid(map<string, boost::any>) == m["apiDoc"].type()) {
        GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apiDoc"]));
        apiDoc = make_shared<GetOwnRequestLogResponseBodyLogInfoBasicInfoApiDoc>(model1);
      }
    }
    if (m.find("apiStyle") != m.end() && !m["apiStyle"].empty()) {
      apiStyle = make_shared<string>(boost::any_cast<string>(m["apiStyle"]));
    }
    if (m.find("apiVersion") != m.end() && !m["apiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["apiVersion"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("gatewayProcessTime") != m.end() && !m["gatewayProcessTime"].empty()) {
      gatewayProcessTime = make_shared<string>(boost::any_cast<string>(m["gatewayProcessTime"]));
    }
    if (m.find("httpMethod") != m.end() && !m["httpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["httpMethod"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("logRequestId") != m.end() && !m["logRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["logRequestId"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      if (typeid(map<string, boost::any>) == m["productName"].type()) {
        GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productName"]));
        productName = make_shared<GetOwnRequestLogResponseBodyLogInfoBasicInfoProductName>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestDuration") != m.end() && !m["requestDuration"].empty()) {
      requestDuration = make_shared<string>(boost::any_cast<string>(m["requestDuration"]));
    }
    if (m.find("sdkRequestTime") != m.end() && !m["sdkRequestTime"].empty()) {
      sdkRequestTime = make_shared<string>(boost::any_cast<string>(m["sdkRequestTime"]));
    }
    if (m.find("throttlingResult") != m.end() && !m["throttlingResult"].empty()) {
      throttlingResult = make_shared<string>(boost::any_cast<string>(m["throttlingResult"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoBasicInfo() = default;
};
class GetOwnRequestLogResponseBodyLogInfoCallerInfo : public Darabonba::Model {
public:
  shared_ptr<string> callerAccountId{};
  shared_ptr<string> callerIp{};
  shared_ptr<string> callerType{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> userAgent{};

  GetOwnRequestLogResponseBodyLogInfoCallerInfo() {}

  explicit GetOwnRequestLogResponseBodyLogInfoCallerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerAccountId) {
      res["callerAccountId"] = boost::any(*callerAccountId);
    }
    if (callerIp) {
      res["callerIp"] = boost::any(*callerIp);
    }
    if (callerType) {
      res["callerType"] = boost::any(*callerType);
    }
    if (masterAccountId) {
      res["masterAccountId"] = boost::any(*masterAccountId);
    }
    if (userAgent) {
      res["userAgent"] = boost::any(*userAgent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("callerAccountId") != m.end() && !m["callerAccountId"].empty()) {
      callerAccountId = make_shared<string>(boost::any_cast<string>(m["callerAccountId"]));
    }
    if (m.find("callerIp") != m.end() && !m["callerIp"].empty()) {
      callerIp = make_shared<string>(boost::any_cast<string>(m["callerIp"]));
    }
    if (m.find("callerType") != m.end() && !m["callerType"].empty()) {
      callerType = make_shared<string>(boost::any_cast<string>(m["callerType"]));
    }
    if (m.find("masterAccountId") != m.end() && !m["masterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["masterAccountId"]));
    }
    if (m.find("userAgent") != m.end() && !m["userAgent"].empty()) {
      userAgent = make_shared<string>(boost::any_cast<string>(m["userAgent"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoCallerInfo() = default;
};
class GetOwnRequestLogResponseBodyLogInfoParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};
  shared_ptr<boost::any> value{};

  GetOwnRequestLogResponseBodyLogInfoParameters() {}

  explicit GetOwnRequestLogResponseBodyLogInfoParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoParameters() = default;
};
class GetOwnRequestLogResponseBodyLogInfoResponses : public Darabonba::Model {
public:
  shared_ptr<string> responseBody{};
  shared_ptr<string> responseBodyFormat{};

  GetOwnRequestLogResponseBodyLogInfoResponses() {}

  explicit GetOwnRequestLogResponseBodyLogInfoResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (responseBody) {
      res["responseBody"] = boost::any(*responseBody);
    }
    if (responseBodyFormat) {
      res["responseBodyFormat"] = boost::any(*responseBodyFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("responseBody") != m.end() && !m["responseBody"].empty()) {
      responseBody = make_shared<string>(boost::any_cast<string>(m["responseBody"]));
    }
    if (m.find("responseBodyFormat") != m.end() && !m["responseBodyFormat"].empty()) {
      responseBodyFormat = make_shared<string>(boost::any_cast<string>(m["responseBodyFormat"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfoResponses() = default;
};
class GetOwnRequestLogResponseBodyLogInfo : public Darabonba::Model {
public:
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo> authenticationInfo{};
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoBasicInfo> basicInfo{};
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoCallerInfo> callerInfo{};
  shared_ptr<vector<GetOwnRequestLogResponseBodyLogInfoParameters>> parameters{};
  shared_ptr<GetOwnRequestLogResponseBodyLogInfoResponses> responses{};

  GetOwnRequestLogResponseBodyLogInfo() {}

  explicit GetOwnRequestLogResponseBodyLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationInfo) {
      res["authenticationInfo"] = authenticationInfo ? boost::any(authenticationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (basicInfo) {
      res["basicInfo"] = basicInfo ? boost::any(basicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callerInfo) {
      res["callerInfo"] = callerInfo ? boost::any(callerInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    if (responses) {
      res["responses"] = responses ? boost::any(responses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authenticationInfo") != m.end() && !m["authenticationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["authenticationInfo"].type()) {
        GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authenticationInfo"]));
        authenticationInfo = make_shared<GetOwnRequestLogResponseBodyLogInfoAuthenticationInfo>(model1);
      }
    }
    if (m.find("basicInfo") != m.end() && !m["basicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["basicInfo"].type()) {
        GetOwnRequestLogResponseBodyLogInfoBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["basicInfo"]));
        basicInfo = make_shared<GetOwnRequestLogResponseBodyLogInfoBasicInfo>(model1);
      }
    }
    if (m.find("callerInfo") != m.end() && !m["callerInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["callerInfo"].type()) {
        GetOwnRequestLogResponseBodyLogInfoCallerInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["callerInfo"]));
        callerInfo = make_shared<GetOwnRequestLogResponseBodyLogInfoCallerInfo>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<GetOwnRequestLogResponseBodyLogInfoParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOwnRequestLogResponseBodyLogInfoParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetOwnRequestLogResponseBodyLogInfoParameters>>(expect1);
      }
    }
    if (m.find("responses") != m.end() && !m["responses"].empty()) {
      if (typeid(map<string, boost::any>) == m["responses"].type()) {
        GetOwnRequestLogResponseBodyLogInfoResponses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["responses"]));
        responses = make_shared<GetOwnRequestLogResponseBodyLogInfoResponses>(model1);
      }
    }
  }


  virtual ~GetOwnRequestLogResponseBodyLogInfo() = default;
};
class GetOwnRequestLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOwnRequestLogResponseBodyLogInfo> logInfo{};
  shared_ptr<string> requestId{};

  GetOwnRequestLogResponseBody() {}

  explicit GetOwnRequestLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logInfo) {
      res["logInfo"] = logInfo ? boost::any(logInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logInfo") != m.end() && !m["logInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["logInfo"].type()) {
        GetOwnRequestLogResponseBodyLogInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logInfo"]));
        logInfo = make_shared<GetOwnRequestLogResponseBodyLogInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetOwnRequestLogResponseBody() = default;
};
class GetOwnRequestLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOwnRequestLogResponseBody> body{};

  GetOwnRequestLogResponse() {}

  explicit GetOwnRequestLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOwnRequestLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOwnRequestLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetOwnRequestLogResponse() = default;
};
class GetRequestLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> logRequestId{};

  GetRequestLogRequest() {}

  explicit GetRequestLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logRequestId) {
      res["logRequestId"] = boost::any(*logRequestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logRequestId") != m.end() && !m["logRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["logRequestId"]));
    }
  }


  virtual ~GetRequestLogRequest() = default;
};
class GetRequestLogResponseBodyLogInfoAuthenticationInfo : public Darabonba::Model {
public:
  shared_ptr<string> authenticationType{};
  shared_ptr<string> signatureMethod{};
  shared_ptr<string> signatureVersion{};

  GetRequestLogResponseBodyLogInfoAuthenticationInfo() {}

  explicit GetRequestLogResponseBodyLogInfoAuthenticationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationType) {
      res["authenticationType"] = boost::any(*authenticationType);
    }
    if (signatureMethod) {
      res["signatureMethod"] = boost::any(*signatureMethod);
    }
    if (signatureVersion) {
      res["signatureVersion"] = boost::any(*signatureVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authenticationType") != m.end() && !m["authenticationType"].empty()) {
      authenticationType = make_shared<string>(boost::any_cast<string>(m["authenticationType"]));
    }
    if (m.find("signatureMethod") != m.end() && !m["signatureMethod"].empty()) {
      signatureMethod = make_shared<string>(boost::any_cast<string>(m["signatureMethod"]));
    }
    if (m.find("signatureVersion") != m.end() && !m["signatureVersion"].empty()) {
      signatureVersion = make_shared<string>(boost::any_cast<string>(m["signatureVersion"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoAuthenticationInfo() = default;
};
class GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};
  shared_ptr<string> encodedDiagnosticMessage{};
  shared_ptr<string> noPermissionType{};
  shared_ptr<string> policyType{};

  GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail() {}

  explicit GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["authAction"] = boost::any(*authAction);
    }
    if (authPrincipalDisplayName) {
      res["authPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["authPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["authPrincipalType"] = boost::any(*authPrincipalType);
    }
    if (encodedDiagnosticMessage) {
      res["encodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    if (noPermissionType) {
      res["noPermissionType"] = boost::any(*noPermissionType);
    }
    if (policyType) {
      res["policyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authAction") != m.end() && !m["authAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["authAction"]));
    }
    if (m.find("authPrincipalDisplayName") != m.end() && !m["authPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["authPrincipalDisplayName"]));
    }
    if (m.find("authPrincipalOwnerId") != m.end() && !m["authPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["authPrincipalOwnerId"]));
    }
    if (m.find("authPrincipalType") != m.end() && !m["authPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["authPrincipalType"]));
    }
    if (m.find("encodedDiagnosticMessage") != m.end() && !m["encodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["encodedDiagnosticMessage"]));
    }
    if (m.find("noPermissionType") != m.end() && !m["noPermissionType"].empty()) {
      noPermissionType = make_shared<string>(boost::any_cast<string>(m["noPermissionType"]));
    }
    if (m.find("policyType") != m.end() && !m["policyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["policyType"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail() = default;
};
class GetRequestLogResponseBodyLogInfoBasicInfoApiDoc : public Darabonba::Model {
public:
  shared_ptr<string> alibabacloudSite{};
  shared_ptr<string> aliyunSite{};

  GetRequestLogResponseBodyLogInfoBasicInfoApiDoc() {}

  explicit GetRequestLogResponseBodyLogInfoBasicInfoApiDoc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alibabacloudSite) {
      res["alibabacloudSite"] = boost::any(*alibabacloudSite);
    }
    if (aliyunSite) {
      res["aliyunSite"] = boost::any(*aliyunSite);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alibabacloudSite") != m.end() && !m["alibabacloudSite"].empty()) {
      alibabacloudSite = make_shared<string>(boost::any_cast<string>(m["alibabacloudSite"]));
    }
    if (m.find("aliyunSite") != m.end() && !m["aliyunSite"].empty()) {
      aliyunSite = make_shared<string>(boost::any_cast<string>(m["aliyunSite"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoBasicInfoApiDoc() = default;
};
class GetRequestLogResponseBodyLogInfoBasicInfoProductName : public Darabonba::Model {
public:
  shared_ptr<string> cnName{};
  shared_ptr<string> enName{};

  GetRequestLogResponseBodyLogInfoBasicInfoProductName() {}

  explicit GetRequestLogResponseBodyLogInfoBasicInfoProductName(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cnName) {
      res["cnName"] = boost::any(*cnName);
    }
    if (enName) {
      res["enName"] = boost::any(*enName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cnName") != m.end() && !m["cnName"].empty()) {
      cnName = make_shared<string>(boost::any_cast<string>(m["cnName"]));
    }
    if (m.find("enName") != m.end() && !m["enName"].empty()) {
      enName = make_shared<string>(boost::any_cast<string>(m["enName"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoBasicInfoProductName() = default;
};
class GetRequestLogResponseBodyLogInfoBasicInfo : public Darabonba::Model {
public:
  shared_ptr<GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail> accessDeniedDetail{};
  shared_ptr<string> api{};
  shared_ptr<GetRequestLogResponseBodyLogInfoBasicInfoApiDoc> apiDoc{};
  shared_ptr<string> apiStyle{};
  shared_ptr<string> apiVersion{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> gatewayProcessTime{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> product{};
  shared_ptr<GetRequestLogResponseBodyLogInfoBasicInfoProductName> productName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestDuration{};
  shared_ptr<string> sdkRequestTime{};
  shared_ptr<string> throttlingResult{};

  GetRequestLogResponseBodyLogInfoBasicInfo() {}

  explicit GetRequestLogResponseBodyLogInfoBasicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["accessDeniedDetail"] = accessDeniedDetail ? boost::any(accessDeniedDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (api) {
      res["api"] = boost::any(*api);
    }
    if (apiDoc) {
      res["apiDoc"] = apiDoc ? boost::any(apiDoc->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (apiStyle) {
      res["apiStyle"] = boost::any(*apiStyle);
    }
    if (apiVersion) {
      res["apiVersion"] = boost::any(*apiVersion);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (gatewayProcessTime) {
      res["gatewayProcessTime"] = boost::any(*gatewayProcessTime);
    }
    if (httpMethod) {
      res["httpMethod"] = boost::any(*httpMethod);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (logRequestId) {
      res["logRequestId"] = boost::any(*logRequestId);
    }
    if (product) {
      res["product"] = boost::any(*product);
    }
    if (productName) {
      res["productName"] = productName ? boost::any(productName->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    if (requestDuration) {
      res["requestDuration"] = boost::any(*requestDuration);
    }
    if (sdkRequestTime) {
      res["sdkRequestTime"] = boost::any(*sdkRequestTime);
    }
    if (throttlingResult) {
      res["throttlingResult"] = boost::any(*throttlingResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessDeniedDetail") != m.end() && !m["accessDeniedDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["accessDeniedDetail"].type()) {
        GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["accessDeniedDetail"]));
        accessDeniedDetail = make_shared<GetRequestLogResponseBodyLogInfoBasicInfoAccessDeniedDetail>(model1);
      }
    }
    if (m.find("api") != m.end() && !m["api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["api"]));
    }
    if (m.find("apiDoc") != m.end() && !m["apiDoc"].empty()) {
      if (typeid(map<string, boost::any>) == m["apiDoc"].type()) {
        GetRequestLogResponseBodyLogInfoBasicInfoApiDoc model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["apiDoc"]));
        apiDoc = make_shared<GetRequestLogResponseBodyLogInfoBasicInfoApiDoc>(model1);
      }
    }
    if (m.find("apiStyle") != m.end() && !m["apiStyle"].empty()) {
      apiStyle = make_shared<string>(boost::any_cast<string>(m["apiStyle"]));
    }
    if (m.find("apiVersion") != m.end() && !m["apiVersion"].empty()) {
      apiVersion = make_shared<string>(boost::any_cast<string>(m["apiVersion"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("gatewayProcessTime") != m.end() && !m["gatewayProcessTime"].empty()) {
      gatewayProcessTime = make_shared<string>(boost::any_cast<string>(m["gatewayProcessTime"]));
    }
    if (m.find("httpMethod") != m.end() && !m["httpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["httpMethod"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("logRequestId") != m.end() && !m["logRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["logRequestId"]));
    }
    if (m.find("product") != m.end() && !m["product"].empty()) {
      product = make_shared<string>(boost::any_cast<string>(m["product"]));
    }
    if (m.find("productName") != m.end() && !m["productName"].empty()) {
      if (typeid(map<string, boost::any>) == m["productName"].type()) {
        GetRequestLogResponseBodyLogInfoBasicInfoProductName model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["productName"]));
        productName = make_shared<GetRequestLogResponseBodyLogInfoBasicInfoProductName>(model1);
      }
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
    if (m.find("requestDuration") != m.end() && !m["requestDuration"].empty()) {
      requestDuration = make_shared<string>(boost::any_cast<string>(m["requestDuration"]));
    }
    if (m.find("sdkRequestTime") != m.end() && !m["sdkRequestTime"].empty()) {
      sdkRequestTime = make_shared<string>(boost::any_cast<string>(m["sdkRequestTime"]));
    }
    if (m.find("throttlingResult") != m.end() && !m["throttlingResult"].empty()) {
      throttlingResult = make_shared<string>(boost::any_cast<string>(m["throttlingResult"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoBasicInfo() = default;
};
class GetRequestLogResponseBodyLogInfoCallerInfo : public Darabonba::Model {
public:
  shared_ptr<string> callerAccountId{};
  shared_ptr<string> callerIp{};
  shared_ptr<string> callerType{};
  shared_ptr<string> masterAccountId{};
  shared_ptr<string> userAgent{};

  GetRequestLogResponseBodyLogInfoCallerInfo() {}

  explicit GetRequestLogResponseBodyLogInfoCallerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerAccountId) {
      res["callerAccountId"] = boost::any(*callerAccountId);
    }
    if (callerIp) {
      res["callerIp"] = boost::any(*callerIp);
    }
    if (callerType) {
      res["callerType"] = boost::any(*callerType);
    }
    if (masterAccountId) {
      res["masterAccountId"] = boost::any(*masterAccountId);
    }
    if (userAgent) {
      res["userAgent"] = boost::any(*userAgent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("callerAccountId") != m.end() && !m["callerAccountId"].empty()) {
      callerAccountId = make_shared<string>(boost::any_cast<string>(m["callerAccountId"]));
    }
    if (m.find("callerIp") != m.end() && !m["callerIp"].empty()) {
      callerIp = make_shared<string>(boost::any_cast<string>(m["callerIp"]));
    }
    if (m.find("callerType") != m.end() && !m["callerType"].empty()) {
      callerType = make_shared<string>(boost::any_cast<string>(m["callerType"]));
    }
    if (m.find("masterAccountId") != m.end() && !m["masterAccountId"].empty()) {
      masterAccountId = make_shared<string>(boost::any_cast<string>(m["masterAccountId"]));
    }
    if (m.find("userAgent") != m.end() && !m["userAgent"].empty()) {
      userAgent = make_shared<string>(boost::any_cast<string>(m["userAgent"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoCallerInfo() = default;
};
class GetRequestLogResponseBodyLogInfoParameters : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<bool> required{};
  shared_ptr<string> type{};
  shared_ptr<boost::any> value{};

  GetRequestLogResponseBodyLogInfoParameters() {}

  explicit GetRequestLogResponseBodyLogInfoParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (required) {
      res["required"] = boost::any(*required);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("required") != m.end() && !m["required"].empty()) {
      required = make_shared<bool>(boost::any_cast<bool>(m["required"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<boost::any>(boost::any_cast<boost::any>(m["value"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoParameters() = default;
};
class GetRequestLogResponseBodyLogInfoResponses : public Darabonba::Model {
public:
  shared_ptr<string> responseBody{};
  shared_ptr<string> responseBodyFormat{};

  GetRequestLogResponseBodyLogInfoResponses() {}

  explicit GetRequestLogResponseBodyLogInfoResponses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (responseBody) {
      res["responseBody"] = boost::any(*responseBody);
    }
    if (responseBodyFormat) {
      res["responseBodyFormat"] = boost::any(*responseBodyFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("responseBody") != m.end() && !m["responseBody"].empty()) {
      responseBody = make_shared<string>(boost::any_cast<string>(m["responseBody"]));
    }
    if (m.find("responseBodyFormat") != m.end() && !m["responseBodyFormat"].empty()) {
      responseBodyFormat = make_shared<string>(boost::any_cast<string>(m["responseBodyFormat"]));
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfoResponses() = default;
};
class GetRequestLogResponseBodyLogInfo : public Darabonba::Model {
public:
  shared_ptr<GetRequestLogResponseBodyLogInfoAuthenticationInfo> authenticationInfo{};
  shared_ptr<GetRequestLogResponseBodyLogInfoBasicInfo> basicInfo{};
  shared_ptr<GetRequestLogResponseBodyLogInfoCallerInfo> callerInfo{};
  shared_ptr<vector<GetRequestLogResponseBodyLogInfoParameters>> parameters{};
  shared_ptr<GetRequestLogResponseBodyLogInfoResponses> responses{};

  GetRequestLogResponseBodyLogInfo() {}

  explicit GetRequestLogResponseBodyLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationInfo) {
      res["authenticationInfo"] = authenticationInfo ? boost::any(authenticationInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (basicInfo) {
      res["basicInfo"] = basicInfo ? boost::any(basicInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callerInfo) {
      res["callerInfo"] = callerInfo ? boost::any(callerInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["parameters"] = boost::any(temp1);
    }
    if (responses) {
      res["responses"] = responses ? boost::any(responses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authenticationInfo") != m.end() && !m["authenticationInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["authenticationInfo"].type()) {
        GetRequestLogResponseBodyLogInfoAuthenticationInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["authenticationInfo"]));
        authenticationInfo = make_shared<GetRequestLogResponseBodyLogInfoAuthenticationInfo>(model1);
      }
    }
    if (m.find("basicInfo") != m.end() && !m["basicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["basicInfo"].type()) {
        GetRequestLogResponseBodyLogInfoBasicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["basicInfo"]));
        basicInfo = make_shared<GetRequestLogResponseBodyLogInfoBasicInfo>(model1);
      }
    }
    if (m.find("callerInfo") != m.end() && !m["callerInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["callerInfo"].type()) {
        GetRequestLogResponseBodyLogInfoCallerInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["callerInfo"]));
        callerInfo = make_shared<GetRequestLogResponseBodyLogInfoCallerInfo>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["parameters"].type()) {
        vector<GetRequestLogResponseBodyLogInfoParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRequestLogResponseBodyLogInfoParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<GetRequestLogResponseBodyLogInfoParameters>>(expect1);
      }
    }
    if (m.find("responses") != m.end() && !m["responses"].empty()) {
      if (typeid(map<string, boost::any>) == m["responses"].type()) {
        GetRequestLogResponseBodyLogInfoResponses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["responses"]));
        responses = make_shared<GetRequestLogResponseBodyLogInfoResponses>(model1);
      }
    }
  }


  virtual ~GetRequestLogResponseBodyLogInfo() = default;
};
class GetRequestLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRequestLogResponseBodyLogInfo> logInfo{};
  shared_ptr<string> requestId{};

  GetRequestLogResponseBody() {}

  explicit GetRequestLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logInfo) {
      res["logInfo"] = logInfo ? boost::any(logInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("logInfo") != m.end() && !m["logInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["logInfo"].type()) {
        GetRequestLogResponseBodyLogInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["logInfo"]));
        logInfo = make_shared<GetRequestLogResponseBodyLogInfo>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetRequestLogResponseBody() = default;
};
class GetRequestLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRequestLogResponseBody> body{};

  GetRequestLogResponse() {}

  explicit GetRequestLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRequestLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRequestLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetRequestLogResponse() = default;
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
  GetErrorCodeSolutionsResponse getErrorCodeSolutionsWithOptions(shared_ptr<GetErrorCodeSolutionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetErrorCodeSolutionsResponse getErrorCodeSolutions(shared_ptr<GetErrorCodeSolutionsRequest> request);
  GetOwnRequestLogResponse getOwnRequestLogWithOptions(shared_ptr<GetOwnRequestLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOwnRequestLogResponse getOwnRequestLog(shared_ptr<GetOwnRequestLogRequest> request);
  GetRequestLogResponse getRequestLogWithOptions(shared_ptr<GetRequestLogRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRequestLogResponse getRequestLog(shared_ptr<GetRequestLogRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OpenAPIExplorer20241130

#endif
