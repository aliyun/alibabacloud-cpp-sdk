// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NOTIFICATIONS20241225_H_
#define ALIBABACLOUD_NOTIFICATIONS20241225_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Notifications20241225 {
class DelMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> msgId{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  DelMessageRequest() {}

  explicit DelMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~DelMessageRequest() = default;
};
class DelMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DelMessageResponseBody() {}

  explicit DelMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~DelMessageResponseBody() = default;
};
class DelMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DelMessageResponseBody> body{};

  DelMessageResponse() {}

  explicit DelMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DelMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DelMessageResponseBody>(model1);
      }
    }
  }


  virtual ~DelMessageResponse() = default;
};
class DeleteAllMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<long> classId{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  DeleteAllMessageRequest() {}

  explicit DeleteAllMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~DeleteAllMessageRequest() = default;
};
class DeleteAllMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAllMessageResponseBody() {}

  explicit DeleteAllMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~DeleteAllMessageResponseBody() = default;
};
class DeleteAllMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAllMessageResponseBody> body{};

  DeleteAllMessageResponse() {}

  explicit DeleteAllMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAllMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAllMessageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAllMessageResponse() = default;
};
class ReadAllMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<long> classId{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadAllMessageRequest() {}

  explicit ReadAllMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadAllMessageRequest() = default;
};
class ReadAllMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadAllMessageResponseBody() {}

  explicit ReadAllMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~ReadAllMessageResponseBody() = default;
};
class ReadAllMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadAllMessageResponseBody> body{};

  ReadAllMessageResponse() {}

  explicit ReadAllMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadAllMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadAllMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ReadAllMessageResponse() = default;
};
class ReadClassNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadClassNameRequest() {}

  explicit ReadClassNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadClassNameRequest() = default;
};
class ReadClassNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ReadClassNameResponseBodyData() {}

  explicit ReadClassNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ReadClassNameResponseBodyData() = default;
};
class ReadClassNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ReadClassNameResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadClassNameResponseBody() {}

  explicit ReadClassNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ReadClassNameResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadClassNameResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ReadClassNameResponseBodyData>>(expect1);
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


  virtual ~ReadClassNameResponseBody() = default;
};
class ReadClassNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadClassNameResponseBody> body{};

  ReadClassNameResponse() {}

  explicit ReadClassNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadClassNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadClassNameResponseBody>(model1);
      }
    }
  }


  virtual ~ReadClassNameResponse() = default;
};
class ReadMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> msgId{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadMessageRequest() {}

  explicit ReadMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadMessageRequest() = default;
};
class ReadMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadMessageResponseBody() {}

  explicit ReadMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~ReadMessageResponseBody() = default;
};
class ReadMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadMessageResponseBody> body{};

  ReadMessageResponse() {}

  explicit ReadMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ReadMessageResponse() = default;
};
class ReadMessageContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<long> classId{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> msgId{};
  shared_ptr<string> srcUrl{};
  shared_ptr<long> status{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadMessageContentRequest() {}

  explicit ReadMessageContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadMessageContentRequest() = default;
};
class ReadMessageContentResponseBodyDataDatasItem : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<long> classId{};
  shared_ptr<string> content{};
  shared_ptr<long> deleted{};
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> gmtUpdate{};
  shared_ptr<long> massId{};
  shared_ptr<string> memo{};
  shared_ptr<long> msgId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};

  ReadMessageContentResponseBodyDataDatasItem() {}

  explicit ReadMessageContentResponseBodyDataDatasItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtUpdate) {
      res["GmtUpdate"] = boost::any(*gmtUpdate);
    }
    if (massId) {
      res["MassId"] = boost::any(*massId);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<long>(boost::any_cast<long>(m["Deleted"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("GmtUpdate") != m.end() && !m["GmtUpdate"].empty()) {
      gmtUpdate = make_shared<long>(boost::any_cast<long>(m["GmtUpdate"]));
    }
    if (m.find("MassId") != m.end() && !m["MassId"].empty()) {
      massId = make_shared<long>(boost::any_cast<long>(m["MassId"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<long>(boost::any_cast<long>(m["MsgId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ReadMessageContentResponseBodyDataDatasItem() = default;
};
class ReadMessageContentResponseBodyDataDatasLastItem : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<long> classId{};
  shared_ptr<string> content{};
  shared_ptr<long> deleted{};
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> gmtUpdate{};
  shared_ptr<long> massId{};
  shared_ptr<string> memo{};
  shared_ptr<long> msgId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};

  ReadMessageContentResponseBodyDataDatasLastItem() {}

  explicit ReadMessageContentResponseBodyDataDatasLastItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtUpdate) {
      res["GmtUpdate"] = boost::any(*gmtUpdate);
    }
    if (massId) {
      res["MassId"] = boost::any(*massId);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<long>(boost::any_cast<long>(m["Deleted"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("GmtUpdate") != m.end() && !m["GmtUpdate"].empty()) {
      gmtUpdate = make_shared<long>(boost::any_cast<long>(m["GmtUpdate"]));
    }
    if (m.find("MassId") != m.end() && !m["MassId"].empty()) {
      massId = make_shared<long>(boost::any_cast<long>(m["MassId"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<long>(boost::any_cast<long>(m["MsgId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ReadMessageContentResponseBodyDataDatasLastItem() = default;
};
class ReadMessageContentResponseBodyDataDatasNextItem : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<long> classId{};
  shared_ptr<string> content{};
  shared_ptr<long> deleted{};
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> gmtUpdate{};
  shared_ptr<long> massId{};
  shared_ptr<string> memo{};
  shared_ptr<long> msgId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};

  ReadMessageContentResponseBodyDataDatasNextItem() {}

  explicit ReadMessageContentResponseBodyDataDatasNextItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtUpdate) {
      res["GmtUpdate"] = boost::any(*gmtUpdate);
    }
    if (massId) {
      res["MassId"] = boost::any(*massId);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<long>(boost::any_cast<long>(m["Deleted"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("GmtUpdate") != m.end() && !m["GmtUpdate"].empty()) {
      gmtUpdate = make_shared<long>(boost::any_cast<long>(m["GmtUpdate"]));
    }
    if (m.find("MassId") != m.end() && !m["MassId"].empty()) {
      massId = make_shared<long>(boost::any_cast<long>(m["MassId"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<long>(boost::any_cast<long>(m["MsgId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ReadMessageContentResponseBodyDataDatasNextItem() = default;
};
class ReadMessageContentResponseBodyDataDatas : public Darabonba::Model {
public:
  shared_ptr<vector<ReadMessageContentResponseBodyDataDatasItem>> item{};
  shared_ptr<vector<ReadMessageContentResponseBodyDataDatasLastItem>> lastItem{};
  shared_ptr<vector<ReadMessageContentResponseBodyDataDatasNextItem>> nextItem{};

  ReadMessageContentResponseBodyDataDatas() {}

  explicit ReadMessageContentResponseBodyDataDatas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (item) {
      vector<boost::any> temp1;
      for(auto item1:*item){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Item"] = boost::any(temp1);
    }
    if (lastItem) {
      vector<boost::any> temp1;
      for(auto item1:*lastItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LastItem"] = boost::any(temp1);
    }
    if (nextItem) {
      vector<boost::any> temp1;
      for(auto item1:*nextItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NextItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Item") != m.end() && !m["Item"].empty()) {
      if (typeid(vector<boost::any>) == m["Item"].type()) {
        vector<ReadMessageContentResponseBodyDataDatasItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Item"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadMessageContentResponseBodyDataDatasItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        item = make_shared<vector<ReadMessageContentResponseBodyDataDatasItem>>(expect1);
      }
    }
    if (m.find("LastItem") != m.end() && !m["LastItem"].empty()) {
      if (typeid(vector<boost::any>) == m["LastItem"].type()) {
        vector<ReadMessageContentResponseBodyDataDatasLastItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LastItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadMessageContentResponseBodyDataDatasLastItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lastItem = make_shared<vector<ReadMessageContentResponseBodyDataDatasLastItem>>(expect1);
      }
    }
    if (m.find("NextItem") != m.end() && !m["NextItem"].empty()) {
      if (typeid(vector<boost::any>) == m["NextItem"].type()) {
        vector<ReadMessageContentResponseBodyDataDatasNextItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NextItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadMessageContentResponseBodyDataDatasNextItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nextItem = make_shared<vector<ReadMessageContentResponseBodyDataDatasNextItem>>(expect1);
      }
    }
  }


  virtual ~ReadMessageContentResponseBodyDataDatas() = default;
};
class ReadMessageContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ReadMessageContentResponseBodyDataDatas> datas{};

  ReadMessageContentResponseBodyData() {}

  explicit ReadMessageContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datas) {
      res["Datas"] = datas ? boost::any(datas->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      if (typeid(map<string, boost::any>) == m["Datas"].type()) {
        ReadMessageContentResponseBodyDataDatas model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Datas"]));
        datas = make_shared<ReadMessageContentResponseBodyDataDatas>(model1);
      }
    }
  }


  virtual ~ReadMessageContentResponseBodyData() = default;
};
class ReadMessageContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ReadMessageContentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadMessageContentResponseBody() {}

  explicit ReadMessageContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReadMessageContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReadMessageContentResponseBodyData>(model1);
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


  virtual ~ReadMessageContentResponseBody() = default;
};
class ReadMessageContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadMessageContentResponseBody> body{};

  ReadMessageContentResponse() {}

  explicit ReadMessageContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadMessageContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadMessageContentResponseBody>(model1);
      }
    }
  }


  virtual ~ReadMessageContentResponse() = default;
};
class ReadMessageListRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<long> classId{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> content{};
  shared_ptr<string> cookies{};
  shared_ptr<string> loc{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> srcUrl{};
  shared_ptr<long> status{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> title{};
  shared_ptr<string> uidType{};

  ReadMessageListRequest() {}

  explicit ReadMessageListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (loc) {
      res["Loc"] = boost::any(*loc);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("Loc") != m.end() && !m["Loc"].empty()) {
      loc = make_shared<string>(boost::any_cast<string>(m["Loc"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadMessageListRequest() = default;
};
class ReadMessageListResponseBodyDataRows : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> class_{};
  shared_ptr<long> classId{};
  shared_ptr<string> content{};
  shared_ptr<long> deleted{};
  shared_ptr<long> gmtCreated{};
  shared_ptr<long> gmtUpdate{};
  shared_ptr<long> massId{};
  shared_ptr<string> memo{};
  shared_ptr<long> msgId{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};

  ReadMessageListResponseBodyDataRows() {}

  explicit ReadMessageListResponseBodyDataRows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (gmtCreated) {
      res["GmtCreated"] = boost::any(*gmtCreated);
    }
    if (gmtUpdate) {
      res["GmtUpdate"] = boost::any(*gmtUpdate);
    }
    if (massId) {
      res["MassId"] = boost::any(*massId);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<long>(boost::any_cast<long>(m["Deleted"]));
    }
    if (m.find("GmtCreated") != m.end() && !m["GmtCreated"].empty()) {
      gmtCreated = make_shared<long>(boost::any_cast<long>(m["GmtCreated"]));
    }
    if (m.find("GmtUpdate") != m.end() && !m["GmtUpdate"].empty()) {
      gmtUpdate = make_shared<long>(boost::any_cast<long>(m["GmtUpdate"]));
    }
    if (m.find("MassId") != m.end() && !m["MassId"].empty()) {
      massId = make_shared<long>(boost::any_cast<long>(m["MassId"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<long>(boost::any_cast<long>(m["MsgId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ReadMessageListResponseBodyDataRows() = default;
};
class ReadMessageListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ReadMessageListResponseBodyDataRows>> rows{};

  ReadMessageListResponseBodyData() {}

  explicit ReadMessageListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rows) {
      vector<boost::any> temp1;
      for(auto item1:*rows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Rows") != m.end() && !m["Rows"].empty()) {
      if (typeid(vector<boost::any>) == m["Rows"].type()) {
        vector<ReadMessageListResponseBodyDataRows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadMessageListResponseBodyDataRows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rows = make_shared<vector<ReadMessageListResponseBodyDataRows>>(expect1);
      }
    }
  }


  virtual ~ReadMessageListResponseBodyData() = default;
};
class ReadMessageListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ReadMessageListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadMessageListResponseBody() {}

  explicit ReadMessageListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ReadMessageListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ReadMessageListResponseBodyData>(model1);
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


  virtual ~ReadMessageListResponseBody() = default;
};
class ReadMessageListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadMessageListResponseBody> body{};

  ReadMessageListResponse() {}

  explicit ReadMessageListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadMessageListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadMessageListResponseBody>(model1);
      }
    }
  }


  virtual ~ReadMessageListResponse() = default;
};
class ReadMessageNewTotalRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadMessageNewTotalRequest() {}

  explicit ReadMessageNewTotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadMessageNewTotalRequest() = default;
};
class ReadMessageNewTotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadMessageNewTotalResponseBody() {}

  explicit ReadMessageNewTotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<long>(boost::any_cast<long>(m["Data"]));
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


  virtual ~ReadMessageNewTotalResponseBody() = default;
};
class ReadMessageNewTotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadMessageNewTotalResponseBody> body{};

  ReadMessageNewTotalResponse() {}

  explicit ReadMessageNewTotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadMessageNewTotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadMessageNewTotalResponseBody>(model1);
      }
    }
  }


  virtual ~ReadMessageNewTotalResponse() = default;
};
class ReadNumGroupByClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadNumGroupByClassRequest() {}

  explicit ReadNumGroupByClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadNumGroupByClassRequest() = default;
};
class ReadNumGroupByClassResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> classId{};
  shared_ptr<long> msgCount{};

  ReadNumGroupByClassResponseBodyData() {}

  explicit ReadNumGroupByClassResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classId) {
      res["ClassId"] = boost::any(*classId);
    }
    if (msgCount) {
      res["MsgCount"] = boost::any(*msgCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClassId") != m.end() && !m["ClassId"].empty()) {
      classId = make_shared<long>(boost::any_cast<long>(m["ClassId"]));
    }
    if (m.find("MsgCount") != m.end() && !m["MsgCount"].empty()) {
      msgCount = make_shared<long>(boost::any_cast<long>(m["MsgCount"]));
    }
  }


  virtual ~ReadNumGroupByClassResponseBodyData() = default;
};
class ReadNumGroupByClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ReadNumGroupByClassResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadNumGroupByClassResponseBody() {}

  explicit ReadNumGroupByClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ReadNumGroupByClassResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadNumGroupByClassResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ReadNumGroupByClassResponseBodyData>>(expect1);
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


  virtual ~ReadNumGroupByClassResponseBody() = default;
};
class ReadNumGroupByClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadNumGroupByClassResponseBody> body{};

  ReadNumGroupByClassResponse() {}

  explicit ReadNumGroupByClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadNumGroupByClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadNumGroupByClassResponseBody>(model1);
      }
    }
  }


  virtual ~ReadNumGroupByClassResponse() = default;
};
class ReadNumGroupTotalRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};
  shared_ptr<string> appName{};
  shared_ptr<string> bizName{};
  shared_ptr<string> callerProtocol{};
  shared_ptr<string> clientSource{};
  shared_ptr<string> cookies{};
  shared_ptr<string> srcUrl{};
  shared_ptr<string> tenantCode{};
  shared_ptr<string> uidType{};

  ReadNumGroupTotalRequest() {}

  explicit ReadNumGroupTotalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (callerProtocol) {
      res["CallerProtocol"] = boost::any(*callerProtocol);
    }
    if (clientSource) {
      res["ClientSource"] = boost::any(*clientSource);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (srcUrl) {
      res["SrcUrl"] = boost::any(*srcUrl);
    }
    if (tenantCode) {
      res["TenantCode"] = boost::any(*tenantCode);
    }
    if (uidType) {
      res["UidType"] = boost::any(*uidType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("CallerProtocol") != m.end() && !m["CallerProtocol"].empty()) {
      callerProtocol = make_shared<string>(boost::any_cast<string>(m["CallerProtocol"]));
    }
    if (m.find("ClientSource") != m.end() && !m["ClientSource"].empty()) {
      clientSource = make_shared<string>(boost::any_cast<string>(m["ClientSource"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("SrcUrl") != m.end() && !m["SrcUrl"].empty()) {
      srcUrl = make_shared<string>(boost::any_cast<string>(m["SrcUrl"]));
    }
    if (m.find("TenantCode") != m.end() && !m["TenantCode"].empty()) {
      tenantCode = make_shared<string>(boost::any_cast<string>(m["TenantCode"]));
    }
    if (m.find("UidType") != m.end() && !m["UidType"].empty()) {
      uidType = make_shared<string>(boost::any_cast<string>(m["UidType"]));
    }
  }


  virtual ~ReadNumGroupTotalRequest() = default;
};
class ReadNumGroupTotalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> readCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> unReadCount{};

  ReadNumGroupTotalResponseBodyData() {}

  explicit ReadNumGroupTotalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (readCount) {
      res["ReadCount"] = boost::any(*readCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (unReadCount) {
      res["UnReadCount"] = boost::any(*unReadCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ReadCount") != m.end() && !m["ReadCount"].empty()) {
      readCount = make_shared<long>(boost::any_cast<long>(m["ReadCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UnReadCount") != m.end() && !m["UnReadCount"].empty()) {
      unReadCount = make_shared<long>(boost::any_cast<long>(m["UnReadCount"]));
    }
  }


  virtual ~ReadNumGroupTotalResponseBodyData() = default;
};
class ReadNumGroupTotalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ReadNumGroupTotalResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReadNumGroupTotalResponseBody() {}

  explicit ReadNumGroupTotalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ReadNumGroupTotalResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ReadNumGroupTotalResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ReadNumGroupTotalResponseBodyData>>(expect1);
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


  virtual ~ReadNumGroupTotalResponseBody() = default;
};
class ReadNumGroupTotalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReadNumGroupTotalResponseBody> body{};

  ReadNumGroupTotalResponse() {}

  explicit ReadNumGroupTotalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReadNumGroupTotalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReadNumGroupTotalResponseBody>(model1);
      }
    }
  }


  virtual ~ReadNumGroupTotalResponse() = default;
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
  DelMessageResponse delMessageWithOptions(shared_ptr<DelMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelMessageResponse delMessage(shared_ptr<DelMessageRequest> request);
  DeleteAllMessageResponse deleteAllMessageWithOptions(shared_ptr<DeleteAllMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAllMessageResponse deleteAllMessage(shared_ptr<DeleteAllMessageRequest> request);
  ReadAllMessageResponse readAllMessageWithOptions(shared_ptr<ReadAllMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadAllMessageResponse readAllMessage(shared_ptr<ReadAllMessageRequest> request);
  ReadClassNameResponse readClassNameWithOptions(shared_ptr<ReadClassNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadClassNameResponse readClassName(shared_ptr<ReadClassNameRequest> request);
  ReadMessageResponse readMessageWithOptions(shared_ptr<ReadMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadMessageResponse readMessage(shared_ptr<ReadMessageRequest> request);
  ReadMessageContentResponse readMessageContentWithOptions(shared_ptr<ReadMessageContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadMessageContentResponse readMessageContent(shared_ptr<ReadMessageContentRequest> request);
  ReadMessageListResponse readMessageListWithOptions(shared_ptr<ReadMessageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadMessageListResponse readMessageList(shared_ptr<ReadMessageListRequest> request);
  ReadMessageNewTotalResponse readMessageNewTotalWithOptions(shared_ptr<ReadMessageNewTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadMessageNewTotalResponse readMessageNewTotal(shared_ptr<ReadMessageNewTotalRequest> request);
  ReadNumGroupByClassResponse readNumGroupByClassWithOptions(shared_ptr<ReadNumGroupByClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadNumGroupByClassResponse readNumGroupByClass(shared_ptr<ReadNumGroupByClassRequest> request);
  ReadNumGroupTotalResponse readNumGroupTotalWithOptions(shared_ptr<ReadNumGroupTotalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReadNumGroupTotalResponse readNumGroupTotal(shared_ptr<ReadNumGroupTotalRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Notifications20241225

#endif
