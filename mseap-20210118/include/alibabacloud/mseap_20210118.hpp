// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSEAP20210118_H_
#define ALIBABACLOUD_MSEAP20210118_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Mseap20210118 {
class ActivateLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> licenseCode{};
  shared_ptr<string> licenseNo{};
  shared_ptr<string> licensePublisher{};

  ActivateLicenseRequest() {}

  explicit ActivateLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    if (licenseNo) {
      res["LicenseNo"] = boost::any(*licenseNo);
    }
    if (licensePublisher) {
      res["LicensePublisher"] = boost::any(*licensePublisher);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
    if (m.find("LicenseNo") != m.end() && !m["LicenseNo"].empty()) {
      licenseNo = make_shared<string>(boost::any_cast<string>(m["LicenseNo"]));
    }
    if (m.find("LicensePublisher") != m.end() && !m["LicensePublisher"].empty()) {
      licensePublisher = make_shared<string>(boost::any_cast<string>(m["LicensePublisher"]));
    }
  }


  virtual ~ActivateLicenseRequest() = default;
};
class ActivateLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ActivateLicenseResponseBody() {}

  explicit ActivateLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ActivateLicenseResponseBody() = default;
};
class ActivateLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivateLicenseResponseBody> body{};

  ActivateLicenseResponse() {}

  explicit ActivateLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateLicenseResponse() = default;
};
class CallbackTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> bizCode{};
  shared_ptr<string> lang{};
  shared_ptr<string> orderId{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> outTaskId{};
  shared_ptr<string> principalKey{};
  shared_ptr<string> taskData{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  CallbackTaskRequest() {}

  explicit CallbackTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (outTaskId) {
      res["OutTaskId"] = boost::any(*outTaskId);
    }
    if (principalKey) {
      res["PrincipalKey"] = boost::any(*principalKey);
    }
    if (taskData) {
      res["TaskData"] = boost::any(*taskData);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("OutTaskId") != m.end() && !m["OutTaskId"].empty()) {
      outTaskId = make_shared<string>(boost::any_cast<string>(m["OutTaskId"]));
    }
    if (m.find("PrincipalKey") != m.end() && !m["PrincipalKey"].empty()) {
      principalKey = make_shared<string>(boost::any_cast<string>(m["PrincipalKey"]));
    }
    if (m.find("TaskData") != m.end() && !m["TaskData"].empty()) {
      taskData = make_shared<string>(boost::any_cast<string>(m["TaskData"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~CallbackTaskRequest() = default;
};
class CallbackTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CallbackTaskResponseBody() {}

  explicit CallbackTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CallbackTaskResponseBody() = default;
};
class CallbackTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CallbackTaskResponseBody> body{};

  CallbackTaskResponse() {}

  explicit CallbackTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CallbackTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CallbackTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CallbackTaskResponse() = default;
};
class DescribeAgreementStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> agreementCode{};

  DescribeAgreementStatusRequest() {}

  explicit DescribeAgreementStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementCode) {
      res["AgreementCode"] = boost::any(*agreementCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementCode") != m.end() && !m["AgreementCode"].empty()) {
      agreementCode = make_shared<string>(boost::any_cast<string>(m["AgreementCode"]));
    }
  }


  virtual ~DescribeAgreementStatusRequest() = default;
};
class DescribeAgreementStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> agreementCode{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};
  shared_ptr<string> userId{};

  DescribeAgreementStatusResponseBody() {}

  explicit DescribeAgreementStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementCode) {
      res["AgreementCode"] = boost::any(*agreementCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementCode") != m.end() && !m["AgreementCode"].empty()) {
      agreementCode = make_shared<string>(boost::any_cast<string>(m["AgreementCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeAgreementStatusResponseBody() = default;
};
class DescribeAgreementStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAgreementStatusResponseBody> body{};

  DescribeAgreementStatusResponse() {}

  explicit DescribeAgreementStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAgreementStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAgreementStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAgreementStatusResponse() = default;
};
class GenerateUploadFilePolicyForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};

  GenerateUploadFilePolicyForPartnerRequest() {}

  explicit GenerateUploadFilePolicyForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
  }


  virtual ~GenerateUploadFilePolicyForPartnerRequest() = default;
};
class GenerateUploadFilePolicyForPartnerResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> encodedPolicy{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> fileDir{};
  shared_ptr<string> host{};
  shared_ptr<string> ossUrl{};
  shared_ptr<string> signature{};

  GenerateUploadFilePolicyForPartnerResponseBodyModule() {}

  explicit GenerateUploadFilePolicyForPartnerResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (encodedPolicy) {
      res["EncodedPolicy"] = boost::any(*encodedPolicy);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fileDir) {
      res["FileDir"] = boost::any(*fileDir);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (ossUrl) {
      res["OssUrl"] = boost::any(*ossUrl);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("EncodedPolicy") != m.end() && !m["EncodedPolicy"].empty()) {
      encodedPolicy = make_shared<string>(boost::any_cast<string>(m["EncodedPolicy"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("FileDir") != m.end() && !m["FileDir"].empty()) {
      fileDir = make_shared<string>(boost::any_cast<string>(m["FileDir"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("OssUrl") != m.end() && !m["OssUrl"].empty()) {
      ossUrl = make_shared<string>(boost::any_cast<string>(m["OssUrl"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GenerateUploadFilePolicyForPartnerResponseBodyModule() = default;
};
class GenerateUploadFilePolicyForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<vector<boost::any>> errorArgs{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<GenerateUploadFilePolicyForPartnerResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateUploadFilePolicyForPartnerResponseBody() {}

  explicit GenerateUploadFilePolicyForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorArgs) {
      res["ErrorArgs"] = boost::any(*errorArgs);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorArgs") != m.end() && !m["ErrorArgs"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ErrorArgs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ErrorArgs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      errorArgs = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        GenerateUploadFilePolicyForPartnerResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<GenerateUploadFilePolicyForPartnerResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateUploadFilePolicyForPartnerResponseBody() = default;
};
class GenerateUploadFilePolicyForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateUploadFilePolicyForPartnerResponseBody> body{};

  GenerateUploadFilePolicyForPartnerResponse() {}

  explicit GenerateUploadFilePolicyForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUploadFilePolicyForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateUploadFilePolicyForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateUploadFilePolicyForPartnerResponse() = default;
};
class GetNodeByFlowIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<long> flowId{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  GetNodeByFlowIdRequest() {}

  explicit GetNodeByFlowIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (flowId) {
      res["FlowId"] = boost::any(*flowId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("FlowId") != m.end() && !m["FlowId"].empty()) {
      flowId = make_shared<long>(boost::any_cast<long>(m["FlowId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~GetNodeByFlowIdRequest() = default;
};
class GetNodeByFlowIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetNodeByFlowIdResponseBody() {}

  explicit GetNodeByFlowIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNodeByFlowIdResponseBody() = default;
};
class GetNodeByFlowIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeByFlowIdResponseBody> body{};

  GetNodeByFlowIdResponse() {}

  explicit GetNodeByFlowIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNodeByFlowIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeByFlowIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeByFlowIdResponse() = default;
};
class GetNodeByTemplateIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<long> templateId{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  GetNodeByTemplateIdRequest() {}

  explicit GetNodeByTemplateIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~GetNodeByTemplateIdRequest() = default;
};
class GetNodeByTemplateIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetNodeByTemplateIdResponseBody() {}

  explicit GetNodeByTemplateIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetNodeByTemplateIdResponseBody() = default;
};
class GetNodeByTemplateIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeByTemplateIdResponseBody> body{};

  GetNodeByTemplateIdResponse() {}

  explicit GetNodeByTemplateIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetNodeByTemplateIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeByTemplateIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeByTemplateIdResponse() = default;
};
class GetOrderSummaryForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  GetOrderSummaryForPartnerRequest() {}

  explicit GetOrderSummaryForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~GetOrderSummaryForPartnerRequest() = default;
};
class GetOrderSummaryForPartnerResponseBodyDataOrderLines : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderLineId{};
  shared_ptr<string> orderType{};

  GetOrderSummaryForPartnerResponseBodyDataOrderLines() {}

  explicit GetOrderSummaryForPartnerResponseBodyDataOrderLines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderLineId) {
      res["OrderLineId"] = boost::any(*orderLineId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderLineId") != m.end() && !m["OrderLineId"].empty()) {
      orderLineId = make_shared<string>(boost::any_cast<string>(m["OrderLineId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
  }


  virtual ~GetOrderSummaryForPartnerResponseBodyDataOrderLines() = default;
};
class GetOrderSummaryForPartnerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> encryptedBuyerId{};
  shared_ptr<string> encryptedPayerId{};
  shared_ptr<string> encryptedUserId{};
  shared_ptr<string> orderId{};
  shared_ptr<vector<GetOrderSummaryForPartnerResponseBodyDataOrderLines>> orderLines{};

  GetOrderSummaryForPartnerResponseBodyData() {}

  explicit GetOrderSummaryForPartnerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedBuyerId) {
      res["EncryptedBuyerId"] = boost::any(*encryptedBuyerId);
    }
    if (encryptedPayerId) {
      res["EncryptedPayerId"] = boost::any(*encryptedPayerId);
    }
    if (encryptedUserId) {
      res["EncryptedUserId"] = boost::any(*encryptedUserId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderLines) {
      vector<boost::any> temp1;
      for(auto item1:*orderLines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderLines"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedBuyerId") != m.end() && !m["EncryptedBuyerId"].empty()) {
      encryptedBuyerId = make_shared<string>(boost::any_cast<string>(m["EncryptedBuyerId"]));
    }
    if (m.find("EncryptedPayerId") != m.end() && !m["EncryptedPayerId"].empty()) {
      encryptedPayerId = make_shared<string>(boost::any_cast<string>(m["EncryptedPayerId"]));
    }
    if (m.find("EncryptedUserId") != m.end() && !m["EncryptedUserId"].empty()) {
      encryptedUserId = make_shared<string>(boost::any_cast<string>(m["EncryptedUserId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderLines") != m.end() && !m["OrderLines"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderLines"].type()) {
        vector<GetOrderSummaryForPartnerResponseBodyDataOrderLines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderLines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrderSummaryForPartnerResponseBodyDataOrderLines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderLines = make_shared<vector<GetOrderSummaryForPartnerResponseBodyDataOrderLines>>(expect1);
      }
    }
  }


  virtual ~GetOrderSummaryForPartnerResponseBodyData() = default;
};
class GetOrderSummaryForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOrderSummaryForPartnerResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetOrderSummaryForPartnerResponseBody() {}

  explicit GetOrderSummaryForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderSummaryForPartnerResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOrderSummaryForPartnerResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOrderSummaryForPartnerResponseBody() = default;
};
class GetOrderSummaryForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrderSummaryForPartnerResponseBody> body{};

  GetOrderSummaryForPartnerResponse() {}

  explicit GetOrderSummaryForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrderSummaryForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrderSummaryForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrderSummaryForPartnerResponse() = default;
};
class GetPlatformUserInfoForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> platformType{};
  shared_ptr<string> userId{};

  GetPlatformUserInfoForPartnerRequest() {}

  explicit GetPlatformUserInfoForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (platformType) {
      res["PlatformType"] = boost::any(*platformType);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PlatformType") != m.end() && !m["PlatformType"].empty()) {
      platformType = make_shared<string>(boost::any_cast<string>(m["PlatformType"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetPlatformUserInfoForPartnerRequest() = default;
};
class GetPlatformUserInfoForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> encryptedOpenId{};
  shared_ptr<string> encryptedUnionId{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPlatformUserInfoForPartnerResponseBody() {}

  explicit GetPlatformUserInfoForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedOpenId) {
      res["EncryptedOpenId"] = boost::any(*encryptedOpenId);
    }
    if (encryptedUnionId) {
      res["EncryptedUnionId"] = boost::any(*encryptedUnionId);
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
    if (m.find("EncryptedOpenId") != m.end() && !m["EncryptedOpenId"].empty()) {
      encryptedOpenId = make_shared<string>(boost::any_cast<string>(m["EncryptedOpenId"]));
    }
    if (m.find("EncryptedUnionId") != m.end() && !m["EncryptedUnionId"].empty()) {
      encryptedUnionId = make_shared<string>(boost::any_cast<string>(m["EncryptedUnionId"]));
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


  virtual ~GetPlatformUserInfoForPartnerResponseBody() = default;
};
class GetPlatformUserInfoForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPlatformUserInfoForPartnerResponseBody> body{};

  GetPlatformUserInfoForPartnerResponse() {}

  explicit GetPlatformUserInfoForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPlatformUserInfoForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPlatformUserInfoForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~GetPlatformUserInfoForPartnerResponse() = default;
};
class GetProxyByTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<long> type{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  GetProxyByTypeRequest() {}

  explicit GetProxyByTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~GetProxyByTypeRequest() = default;
};
class GetProxyByTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetProxyByTypeResponseBody() {}

  explicit GetProxyByTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetProxyByTypeResponseBody() = default;
};
class GetProxyByTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProxyByTypeResponseBody> body{};

  GetProxyByTypeResponse() {}

  explicit GetProxyByTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProxyByTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProxyByTypeResponseBody>(model1);
      }
    }
  }


  virtual ~GetProxyByTypeResponse() = default;
};
class GetRedisValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> key{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<long> timeout{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};
  shared_ptr<string> value{};

  GetRedisValueRequest() {}

  explicit GetRedisValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetRedisValueRequest() = default;
};
class GetRedisValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRedisValueResponseBody() {}

  explicit GetRedisValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetRedisValueResponseBody() = default;
};
class GetRedisValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRedisValueResponseBody> body{};

  GetRedisValueResponse() {}

  explicit GetRedisValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRedisValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRedisValueResponseBody>(model1);
      }
    }
  }


  virtual ~GetRedisValueResponse() = default;
};
class GetVariableRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<long> templateId{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  GetVariableRequest() {}

  explicit GetVariableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~GetVariableRequest() = default;
};
class GetVariableResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetVariableResponseBody() {}

  explicit GetVariableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetVariableResponseBody() = default;
};
class GetVariableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVariableResponseBody> body{};

  GetVariableResponse() {}

  explicit GetVariableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVariableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVariableResponseBody>(model1);
      }
    }
  }


  virtual ~GetVariableResponse() = default;
};
class IdentifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> data{};
  shared_ptr<string> label{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> type{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  IdentifyCodeRequest() {}

  explicit IdentifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~IdentifyCodeRequest() = default;
};
class IdentifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  IdentifyCodeResponseBody() {}

  explicit IdentifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~IdentifyCodeResponseBody() = default;
};
class IdentifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IdentifyCodeResponseBody> body{};

  IdentifyCodeResponse() {}

  explicit IdentifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IdentifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IdentifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~IdentifyCodeResponse() = default;
};
class PullRpaModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<long> templateId{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  PullRpaModelRequest() {}

  explicit PullRpaModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~PullRpaModelRequest() = default;
};
class PullRpaModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PullRpaModelResponseBody() {}

  explicit PullRpaModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PullRpaModelResponseBody() = default;
};
class PullRpaModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PullRpaModelResponseBody> body{};

  PullRpaModelResponse() {}

  explicit PullRpaModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PullRpaModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PullRpaModelResponseBody>(model1);
      }
    }
  }


  virtual ~PullRpaModelResponse() = default;
};
class PullTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> bizCode{};
  shared_ptr<string> lang{};
  shared_ptr<string> orderId{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> principalKey{};
  shared_ptr<string> taskType{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<bool> userCallerSecurityTransport{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  PullTaskRequest() {}

  explicit PullTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (principalKey) {
      res["PrincipalKey"] = boost::any(*principalKey);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerSecurityTransport) {
      res["UserCallerSecurityTransport"] = boost::any(*userCallerSecurityTransport);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("PrincipalKey") != m.end() && !m["PrincipalKey"].empty()) {
      principalKey = make_shared<string>(boost::any_cast<string>(m["PrincipalKey"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerSecurityTransport") != m.end() && !m["UserCallerSecurityTransport"].empty()) {
      userCallerSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["UserCallerSecurityTransport"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~PullTaskRequest() = default;
};
class PullTaskResponseBodyModule : public Darabonba::Model {
public:
  shared_ptr<string> bizCode{};
  shared_ptr<string> orderId{};
  shared_ptr<string> outTaskId{};
  shared_ptr<string> principalKey{};
  shared_ptr<string> taskData{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  PullTaskResponseBodyModule() {}

  explicit PullTaskResponseBodyModule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (outTaskId) {
      res["OutTaskId"] = boost::any(*outTaskId);
    }
    if (principalKey) {
      res["PrincipalKey"] = boost::any(*principalKey);
    }
    if (taskData) {
      res["TaskData"] = boost::any(*taskData);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OutTaskId") != m.end() && !m["OutTaskId"].empty()) {
      outTaskId = make_shared<string>(boost::any_cast<string>(m["OutTaskId"]));
    }
    if (m.find("PrincipalKey") != m.end() && !m["PrincipalKey"].empty()) {
      principalKey = make_shared<string>(boost::any_cast<string>(m["PrincipalKey"]));
    }
    if (m.find("TaskData") != m.end() && !m["TaskData"].empty()) {
      taskData = make_shared<string>(boost::any_cast<string>(m["TaskData"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~PullTaskResponseBodyModule() = default;
};
class PullTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<PullTaskResponseBodyModule> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PullTaskResponseBody() {}

  explicit PullTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = module ? boost::any(module->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      if (typeid(map<string, boost::any>) == m["Module"].type()) {
        PullTaskResponseBodyModule model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Module"]));
        module = make_shared<PullTaskResponseBodyModule>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PullTaskResponseBody() = default;
};
class PullTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PullTaskResponseBody> body{};

  PullTaskResponse() {}

  explicit PullTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PullTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PullTaskResponseBody>(model1);
      }
    }
  }


  virtual ~PullTaskResponse() = default;
};
class PushRpaTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> lang{};
  shared_ptr<long> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> request{};
  shared_ptr<long> status{};
  shared_ptr<long> taskId{};
  shared_ptr<long> templateId{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};

  PushRpaTaskRequest() {}

  explicit PushRpaTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (request) {
      res["Request"] = boost::any(*request);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("Request") != m.end() && !m["Request"].empty()) {
      request = make_shared<string>(boost::any_cast<string>(m["Request"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<long>(boost::any_cast<long>(m["TemplateId"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~PushRpaTaskRequest() = default;
};
class PushRpaTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PushRpaTaskResponseBody() {}

  explicit PushRpaTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PushRpaTaskResponseBody() = default;
};
class PushRpaTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushRpaTaskResponseBody> body{};

  PushRpaTaskResponse() {}

  explicit PushRpaTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushRpaTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushRpaTaskResponseBody>(model1);
      }
    }
  }


  virtual ~PushRpaTaskResponse() = default;
};
class PushRpaTaskDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> inputData{};
  shared_ptr<string> inputHtml{};
  shared_ptr<string> inputScreenshot{};
  shared_ptr<string> lang{};
  shared_ptr<long> modelDetailId{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> outputData{};
  shared_ptr<string> outputHtml{};
  shared_ptr<string> outputScreenshot{};
  shared_ptr<long> status{};
  shared_ptr<long> taskDetailId{};
  shared_ptr<long> taskId{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<string> userSecurityToken{};

  PushRpaTaskDetailRequest() {}

  explicit PushRpaTaskDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (inputData) {
      res["InputData"] = boost::any(*inputData);
    }
    if (inputHtml) {
      res["InputHtml"] = boost::any(*inputHtml);
    }
    if (inputScreenshot) {
      res["InputScreenshot"] = boost::any(*inputScreenshot);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (modelDetailId) {
      res["ModelDetailId"] = boost::any(*modelDetailId);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (outputData) {
      res["OutputData"] = boost::any(*outputData);
    }
    if (outputHtml) {
      res["OutputHtml"] = boost::any(*outputHtml);
    }
    if (outputScreenshot) {
      res["OutputScreenshot"] = boost::any(*outputScreenshot);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskDetailId) {
      res["TaskDetailId"] = boost::any(*taskDetailId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("InputData") != m.end() && !m["InputData"].empty()) {
      inputData = make_shared<string>(boost::any_cast<string>(m["InputData"]));
    }
    if (m.find("InputHtml") != m.end() && !m["InputHtml"].empty()) {
      inputHtml = make_shared<string>(boost::any_cast<string>(m["InputHtml"]));
    }
    if (m.find("InputScreenshot") != m.end() && !m["InputScreenshot"].empty()) {
      inputScreenshot = make_shared<string>(boost::any_cast<string>(m["InputScreenshot"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ModelDetailId") != m.end() && !m["ModelDetailId"].empty()) {
      modelDetailId = make_shared<long>(boost::any_cast<long>(m["ModelDetailId"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("OutputData") != m.end() && !m["OutputData"].empty()) {
      outputData = make_shared<string>(boost::any_cast<string>(m["OutputData"]));
    }
    if (m.find("OutputHtml") != m.end() && !m["OutputHtml"].empty()) {
      outputHtml = make_shared<string>(boost::any_cast<string>(m["OutputHtml"]));
    }
    if (m.find("OutputScreenshot") != m.end() && !m["OutputScreenshot"].empty()) {
      outputScreenshot = make_shared<string>(boost::any_cast<string>(m["OutputScreenshot"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TaskDetailId") != m.end() && !m["TaskDetailId"].empty()) {
      taskDetailId = make_shared<long>(boost::any_cast<long>(m["TaskDetailId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<long>(boost::any_cast<long>(m["TaskId"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
  }


  virtual ~PushRpaTaskDetailRequest() = default;
};
class PushRpaTaskDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PushRpaTaskDetailResponseBody() {}

  explicit PushRpaTaskDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<string>(boost::any_cast<string>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PushRpaTaskDetailResponseBody() = default;
};
class PushRpaTaskDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushRpaTaskDetailResponseBody> body{};

  PushRpaTaskDetailResponse() {}

  explicit PushRpaTaskDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushRpaTaskDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushRpaTaskDetailResponseBody>(model1);
      }
    }
  }


  virtual ~PushRpaTaskDetailResponse() = default;
};
class SendNotificationForPartnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> channelType{};
  shared_ptr<string> notifyType{};
  shared_ptr<string> notifycationEventType{};
  shared_ptr<map<string, string>> paramMap{};
  shared_ptr<string> sendTarget{};
  shared_ptr<vector<string>> smartSubChannels{};
  shared_ptr<string> trackId{};

  SendNotificationForPartnerRequest() {}

  explicit SendNotificationForPartnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (notifycationEventType) {
      res["NotifycationEventType"] = boost::any(*notifycationEventType);
    }
    if (paramMap) {
      res["ParamMap"] = boost::any(*paramMap);
    }
    if (sendTarget) {
      res["SendTarget"] = boost::any(*sendTarget);
    }
    if (smartSubChannels) {
      res["SmartSubChannels"] = boost::any(*smartSubChannels);
    }
    if (trackId) {
      res["TrackId"] = boost::any(*trackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("NotifycationEventType") != m.end() && !m["NotifycationEventType"].empty()) {
      notifycationEventType = make_shared<string>(boost::any_cast<string>(m["NotifycationEventType"]));
    }
    if (m.find("ParamMap") != m.end() && !m["ParamMap"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ParamMap"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      paramMap = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SendTarget") != m.end() && !m["SendTarget"].empty()) {
      sendTarget = make_shared<string>(boost::any_cast<string>(m["SendTarget"]));
    }
    if (m.find("SmartSubChannels") != m.end() && !m["SmartSubChannels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SmartSubChannels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SmartSubChannels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      smartSubChannels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TrackId") != m.end() && !m["TrackId"].empty()) {
      trackId = make_shared<string>(boost::any_cast<string>(m["TrackId"]));
    }
  }


  virtual ~SendNotificationForPartnerRequest() = default;
};
class SendNotificationForPartnerShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> channelType{};
  shared_ptr<string> notifyType{};
  shared_ptr<string> notifycationEventType{};
  shared_ptr<string> paramMapShrink{};
  shared_ptr<string> sendTarget{};
  shared_ptr<string> smartSubChannelsShrink{};
  shared_ptr<string> trackId{};

  SendNotificationForPartnerShrinkRequest() {}

  explicit SendNotificationForPartnerShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (notifyType) {
      res["NotifyType"] = boost::any(*notifyType);
    }
    if (notifycationEventType) {
      res["NotifycationEventType"] = boost::any(*notifycationEventType);
    }
    if (paramMapShrink) {
      res["ParamMap"] = boost::any(*paramMapShrink);
    }
    if (sendTarget) {
      res["SendTarget"] = boost::any(*sendTarget);
    }
    if (smartSubChannelsShrink) {
      res["SmartSubChannels"] = boost::any(*smartSubChannelsShrink);
    }
    if (trackId) {
      res["TrackId"] = boost::any(*trackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("NotifyType") != m.end() && !m["NotifyType"].empty()) {
      notifyType = make_shared<string>(boost::any_cast<string>(m["NotifyType"]));
    }
    if (m.find("NotifycationEventType") != m.end() && !m["NotifycationEventType"].empty()) {
      notifycationEventType = make_shared<string>(boost::any_cast<string>(m["NotifycationEventType"]));
    }
    if (m.find("ParamMap") != m.end() && !m["ParamMap"].empty()) {
      paramMapShrink = make_shared<string>(boost::any_cast<string>(m["ParamMap"]));
    }
    if (m.find("SendTarget") != m.end() && !m["SendTarget"].empty()) {
      sendTarget = make_shared<string>(boost::any_cast<string>(m["SendTarget"]));
    }
    if (m.find("SmartSubChannels") != m.end() && !m["SmartSubChannels"].empty()) {
      smartSubChannelsShrink = make_shared<string>(boost::any_cast<string>(m["SmartSubChannels"]));
    }
    if (m.find("TrackId") != m.end() && !m["TrackId"].empty()) {
      trackId = make_shared<string>(boost::any_cast<string>(m["TrackId"]));
    }
  }


  virtual ~SendNotificationForPartnerShrinkRequest() = default;
};
class SendNotificationForPartnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorMsg{};
  shared_ptr<string> msgId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendNotificationForPartnerResponseBody() {}

  explicit SendNotificationForPartnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
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
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendNotificationForPartnerResponseBody() = default;
};
class SendNotificationForPartnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendNotificationForPartnerResponseBody> body{};

  SendNotificationForPartnerResponse() {}

  explicit SendNotificationForPartnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendNotificationForPartnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendNotificationForPartnerResponseBody>(model1);
      }
    }
  }


  virtual ~SendNotificationForPartnerResponse() = default;
};
class SetRedisValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunKp{};
  shared_ptr<string> apiType{};
  shared_ptr<string> bid{};
  shared_ptr<string> key{};
  shared_ptr<string> lang{};
  shared_ptr<string> originalRequest{};
  shared_ptr<string> requestId{};
  shared_ptr<long> timeout{};
  shared_ptr<string> userAccessKeyId{};
  shared_ptr<string> userBid{};
  shared_ptr<long> userCallerParentId{};
  shared_ptr<string> userCallerType{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userKp{};
  shared_ptr<bool> userMfaPresent{};
  shared_ptr<string> userSecurityToken{};
  shared_ptr<string> value{};

  SetRedisValueRequest() {}

  explicit SetRedisValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunKp) {
      res["AliyunKp"] = boost::any(*aliyunKp);
    }
    if (apiType) {
      res["ApiType"] = boost::any(*apiType);
    }
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (originalRequest) {
      res["OriginalRequest"] = boost::any(*originalRequest);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (userAccessKeyId) {
      res["UserAccessKeyId"] = boost::any(*userAccessKeyId);
    }
    if (userBid) {
      res["UserBid"] = boost::any(*userBid);
    }
    if (userCallerParentId) {
      res["UserCallerParentId"] = boost::any(*userCallerParentId);
    }
    if (userCallerType) {
      res["UserCallerType"] = boost::any(*userCallerType);
    }
    if (userClientIp) {
      res["UserClientIp"] = boost::any(*userClientIp);
    }
    if (userKp) {
      res["UserKp"] = boost::any(*userKp);
    }
    if (userMfaPresent) {
      res["UserMfaPresent"] = boost::any(*userMfaPresent);
    }
    if (userSecurityToken) {
      res["UserSecurityToken"] = boost::any(*userSecurityToken);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunKp") != m.end() && !m["AliyunKp"].empty()) {
      aliyunKp = make_shared<string>(boost::any_cast<string>(m["AliyunKp"]));
    }
    if (m.find("ApiType") != m.end() && !m["ApiType"].empty()) {
      apiType = make_shared<string>(boost::any_cast<string>(m["ApiType"]));
    }
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("OriginalRequest") != m.end() && !m["OriginalRequest"].empty()) {
      originalRequest = make_shared<string>(boost::any_cast<string>(m["OriginalRequest"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("UserAccessKeyId") != m.end() && !m["UserAccessKeyId"].empty()) {
      userAccessKeyId = make_shared<string>(boost::any_cast<string>(m["UserAccessKeyId"]));
    }
    if (m.find("UserBid") != m.end() && !m["UserBid"].empty()) {
      userBid = make_shared<string>(boost::any_cast<string>(m["UserBid"]));
    }
    if (m.find("UserCallerParentId") != m.end() && !m["UserCallerParentId"].empty()) {
      userCallerParentId = make_shared<long>(boost::any_cast<long>(m["UserCallerParentId"]));
    }
    if (m.find("UserCallerType") != m.end() && !m["UserCallerType"].empty()) {
      userCallerType = make_shared<string>(boost::any_cast<string>(m["UserCallerType"]));
    }
    if (m.find("UserClientIp") != m.end() && !m["UserClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["UserClientIp"]));
    }
    if (m.find("UserKp") != m.end() && !m["UserKp"].empty()) {
      userKp = make_shared<string>(boost::any_cast<string>(m["UserKp"]));
    }
    if (m.find("UserMfaPresent") != m.end() && !m["UserMfaPresent"].empty()) {
      userMfaPresent = make_shared<bool>(boost::any_cast<bool>(m["UserMfaPresent"]));
    }
    if (m.find("UserSecurityToken") != m.end() && !m["UserSecurityToken"].empty()) {
      userSecurityToken = make_shared<string>(boost::any_cast<string>(m["UserSecurityToken"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SetRedisValueRequest() = default;
};
class SetRedisValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> allowRetry{};
  shared_ptr<string> appName{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<bool> module{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetRedisValueResponseBody() {}

  explicit SetRedisValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowRetry) {
      res["AllowRetry"] = boost::any(*allowRetry);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (module) {
      res["Module"] = boost::any(*module);
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
    if (m.find("AllowRetry") != m.end() && !m["AllowRetry"].empty()) {
      allowRetry = make_shared<bool>(boost::any_cast<bool>(m["AllowRetry"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Module") != m.end() && !m["Module"].empty()) {
      module = make_shared<bool>(boost::any_cast<bool>(m["Module"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetRedisValueResponseBody() = default;
};
class SetRedisValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetRedisValueResponseBody> body{};

  SetRedisValueResponse() {}

  explicit SetRedisValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetRedisValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetRedisValueResponseBody>(model1);
      }
    }
  }


  virtual ~SetRedisValueResponse() = default;
};
class UpdateAgreementStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> agreementCode{};

  UpdateAgreementStatusRequest() {}

  explicit UpdateAgreementStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreementCode) {
      res["AgreementCode"] = boost::any(*agreementCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreementCode") != m.end() && !m["AgreementCode"].empty()) {
      agreementCode = make_shared<string>(boost::any_cast<string>(m["AgreementCode"]));
    }
  }


  virtual ~UpdateAgreementStatusRequest() = default;
};
class UpdateAgreementStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAgreementStatusResponseBody() {}

  explicit UpdateAgreementStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAgreementStatusResponseBody() = default;
};
class UpdateAgreementStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAgreementStatusResponseBody> body{};

  UpdateAgreementStatusResponse() {}

  explicit UpdateAgreementStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAgreementStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAgreementStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAgreementStatusResponse() = default;
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
  ActivateLicenseResponse activateLicenseWithOptions(shared_ptr<ActivateLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateLicenseResponse activateLicense(shared_ptr<ActivateLicenseRequest> request);
  CallbackTaskResponse callbackTaskWithOptions(shared_ptr<CallbackTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CallbackTaskResponse callbackTask(shared_ptr<CallbackTaskRequest> request);
  DescribeAgreementStatusResponse describeAgreementStatusWithOptions(shared_ptr<DescribeAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAgreementStatusResponse describeAgreementStatus(shared_ptr<DescribeAgreementStatusRequest> request);
  GenerateUploadFilePolicyForPartnerResponse generateUploadFilePolicyForPartnerWithOptions(shared_ptr<GenerateUploadFilePolicyForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateUploadFilePolicyForPartnerResponse generateUploadFilePolicyForPartner(shared_ptr<GenerateUploadFilePolicyForPartnerRequest> request);
  GetNodeByFlowIdResponse getNodeByFlowIdWithOptions(shared_ptr<GetNodeByFlowIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeByFlowIdResponse getNodeByFlowId(shared_ptr<GetNodeByFlowIdRequest> request);
  GetNodeByTemplateIdResponse getNodeByTemplateIdWithOptions(shared_ptr<GetNodeByTemplateIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeByTemplateIdResponse getNodeByTemplateId(shared_ptr<GetNodeByTemplateIdRequest> request);
  GetOrderSummaryForPartnerResponse getOrderSummaryForPartnerWithOptions(shared_ptr<GetOrderSummaryForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrderSummaryForPartnerResponse getOrderSummaryForPartner(shared_ptr<GetOrderSummaryForPartnerRequest> request);
  GetPlatformUserInfoForPartnerResponse getPlatformUserInfoForPartnerWithOptions(shared_ptr<GetPlatformUserInfoForPartnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPlatformUserInfoForPartnerResponse getPlatformUserInfoForPartner(shared_ptr<GetPlatformUserInfoForPartnerRequest> request);
  GetProxyByTypeResponse getProxyByTypeWithOptions(shared_ptr<GetProxyByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProxyByTypeResponse getProxyByType(shared_ptr<GetProxyByTypeRequest> request);
  GetRedisValueResponse getRedisValueWithOptions(shared_ptr<GetRedisValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRedisValueResponse getRedisValue(shared_ptr<GetRedisValueRequest> request);
  GetVariableResponse getVariableWithOptions(shared_ptr<GetVariableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVariableResponse getVariable(shared_ptr<GetVariableRequest> request);
  IdentifyCodeResponse identifyCodeWithOptions(shared_ptr<IdentifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IdentifyCodeResponse identifyCode(shared_ptr<IdentifyCodeRequest> request);
  PullRpaModelResponse pullRpaModelWithOptions(shared_ptr<PullRpaModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PullRpaModelResponse pullRpaModel(shared_ptr<PullRpaModelRequest> request);
  PullTaskResponse pullTaskWithOptions(shared_ptr<PullTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PullTaskResponse pullTask(shared_ptr<PullTaskRequest> request);
  PushRpaTaskResponse pushRpaTaskWithOptions(shared_ptr<PushRpaTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushRpaTaskResponse pushRpaTask(shared_ptr<PushRpaTaskRequest> request);
  PushRpaTaskDetailResponse pushRpaTaskDetailWithOptions(shared_ptr<PushRpaTaskDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushRpaTaskDetailResponse pushRpaTaskDetail(shared_ptr<PushRpaTaskDetailRequest> request);
  SendNotificationForPartnerResponse sendNotificationForPartnerWithOptions(shared_ptr<SendNotificationForPartnerRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendNotificationForPartnerResponse sendNotificationForPartner(shared_ptr<SendNotificationForPartnerRequest> request);
  SetRedisValueResponse setRedisValueWithOptions(shared_ptr<SetRedisValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetRedisValueResponse setRedisValue(shared_ptr<SetRedisValueRequest> request);
  UpdateAgreementStatusResponse updateAgreementStatusWithOptions(shared_ptr<UpdateAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAgreementStatusResponse updateAgreementStatus(shared_ptr<UpdateAgreementStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mseap20210118

#endif
