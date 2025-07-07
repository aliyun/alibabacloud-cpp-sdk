// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ACCOUNTCENTER20241209_H_
#define ALIBABACLOUD_ACCOUNTCENTER20241209_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AccountCenter20241209 {
class EnterpriseAccountChangeLoginPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> encryptPassword{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};

  EnterpriseAccountChangeLoginPasswordRequest() {}

  explicit EnterpriseAccountChangeLoginPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (encryptPassword) {
      res["EncryptPassword"] = boost::any(*encryptPassword);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("EncryptPassword") != m.end() && !m["EncryptPassword"].empty()) {
      encryptPassword = make_shared<string>(boost::any_cast<string>(m["EncryptPassword"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnterpriseAccountChangeLoginPasswordRequest() = default;
};
class EnterpriseAccountChangeLoginPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> pass{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountChangeLoginPasswordResponseBody() {}

  explicit EnterpriseAccountChangeLoginPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pass) {
      res["Pass"] = boost::any(*pass);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pass") != m.end() && !m["Pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["Pass"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseAccountChangeLoginPasswordResponseBody() = default;
};
class EnterpriseAccountChangeLoginPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountChangeLoginPasswordResponseBody> body{};

  EnterpriseAccountChangeLoginPasswordResponse() {}

  explicit EnterpriseAccountChangeLoginPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountChangeLoginPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountChangeLoginPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountChangeLoginPasswordResponse() = default;
};
class EnterpriseAccountChangeSecurityEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityEmail{};
  shared_ptr<string> verifyCode{};

  EnterpriseAccountChangeSecurityEmailRequest() {}

  explicit EnterpriseAccountChangeSecurityEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityEmail) {
      res["SecurityEmail"] = boost::any(*securityEmail);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityEmail") != m.end() && !m["SecurityEmail"].empty()) {
      securityEmail = make_shared<string>(boost::any_cast<string>(m["SecurityEmail"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~EnterpriseAccountChangeSecurityEmailRequest() = default;
};
class EnterpriseAccountChangeSecurityEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountChangeSecurityEmailResponseBody() {}

  explicit EnterpriseAccountChangeSecurityEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountChangeSecurityEmailResponseBody() = default;
};
class EnterpriseAccountChangeSecurityEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountChangeSecurityEmailResponseBody> body{};

  EnterpriseAccountChangeSecurityEmailResponse() {}

  explicit EnterpriseAccountChangeSecurityEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountChangeSecurityEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountChangeSecurityEmailResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountChangeSecurityEmailResponse() = default;
};
class EnterpriseAccountChangeSecurityMobileRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> newMobile{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};
  shared_ptr<string> verificationCode{};

  EnterpriseAccountChangeSecurityMobileRequest() {}

  explicit EnterpriseAccountChangeSecurityMobileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (newMobile) {
      res["NewMobile"] = boost::any(*newMobile);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verificationCode) {
      res["VerificationCode"] = boost::any(*verificationCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("NewMobile") != m.end() && !m["NewMobile"].empty()) {
      newMobile = make_shared<string>(boost::any_cast<string>(m["NewMobile"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerificationCode") != m.end() && !m["VerificationCode"].empty()) {
      verificationCode = make_shared<string>(boost::any_cast<string>(m["VerificationCode"]));
    }
  }


  virtual ~EnterpriseAccountChangeSecurityMobileRequest() = default;
};
class EnterpriseAccountChangeSecurityMobileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountChangeSecurityMobileResponseBody() {}

  explicit EnterpriseAccountChangeSecurityMobileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountChangeSecurityMobileResponseBody() = default;
};
class EnterpriseAccountChangeSecurityMobileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountChangeSecurityMobileResponseBody> body{};

  EnterpriseAccountChangeSecurityMobileResponse() {}

  explicit EnterpriseAccountChangeSecurityMobileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountChangeSecurityMobileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountChangeSecurityMobileResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountChangeSecurityMobileResponse() = default;
};
class EnterpriseAccountQueryAccountGrantedRolesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<bool> isOpenApi{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<bool> showCompleteInfo{};

  EnterpriseAccountQueryAccountGrantedRolesRequest() {}

  explicit EnterpriseAccountQueryAccountGrantedRolesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (isOpenApi) {
      res["IsOpenApi"] = boost::any(*isOpenApi);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("IsOpenApi") != m.end() && !m["IsOpenApi"].empty()) {
      isOpenApi = make_shared<bool>(boost::any_cast<bool>(m["IsOpenApi"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
  }


  virtual ~EnterpriseAccountQueryAccountGrantedRolesRequest() = default;
};
class EnterpriseAccountQueryAccountGrantedRolesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> bizRoleName{};

  EnterpriseAccountQueryAccountGrantedRolesResponseBodyData() {}

  explicit EnterpriseAccountQueryAccountGrantedRolesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (bizRoleName) {
      res["BizRoleName"] = boost::any(*bizRoleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("BizRoleName") != m.end() && !m["BizRoleName"].empty()) {
      bizRoleName = make_shared<string>(boost::any_cast<string>(m["BizRoleName"]));
    }
  }


  virtual ~EnterpriseAccountQueryAccountGrantedRolesResponseBodyData() = default;
};
class EnterpriseAccountQueryAccountGrantedRolesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<EnterpriseAccountQueryAccountGrantedRolesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountQueryAccountGrantedRolesResponseBody() {}

  explicit EnterpriseAccountQueryAccountGrantedRolesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<EnterpriseAccountQueryAccountGrantedRolesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseAccountQueryAccountGrantedRolesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<EnterpriseAccountQueryAccountGrantedRolesResponseBodyData>>(expect1);
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


  virtual ~EnterpriseAccountQueryAccountGrantedRolesResponseBody() = default;
};
class EnterpriseAccountQueryAccountGrantedRolesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountQueryAccountGrantedRolesResponseBody> body{};

  EnterpriseAccountQueryAccountGrantedRolesResponse() {}

  explicit EnterpriseAccountQueryAccountGrantedRolesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountQueryAccountGrantedRolesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountQueryAccountGrantedRolesResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountQueryAccountGrantedRolesResponse() = default;
};
class EnterpriseAccountQueryAccountsInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptTicket{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pksJson{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> showCompleteInfo{};

  EnterpriseAccountQueryAccountsInfoRequest() {}

  explicit EnterpriseAccountQueryAccountsInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pksJson) {
      res["PksJson"] = boost::any(*pksJson);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("PksJson") != m.end() && !m["PksJson"].empty()) {
      pksJson = make_shared<string>(boost::any_cast<string>(m["PksJson"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
  }


  virtual ~EnterpriseAccountQueryAccountsInfoRequest() = default;
};
class EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<bool> belongToMasterAccount{};
  shared_ptr<string> email{};
  shared_ptr<string> enterpriseEcId{};
  shared_ptr<string> enterpriseEntityId{};
  shared_ptr<string> enterpriseLicenseNo{};
  shared_ptr<string> enterpriseName{};
  shared_ptr<string> enterpriseNbId{};
  shared_ptr<bool> freezeLogin{};
  shared_ptr<string> loginId{};
  shared_ptr<string> manageInviteTimeStamp{};
  shared_ptr<string> pk{};
  shared_ptr<string> securityMobile{};

  EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList() {}

  explicit EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (belongToMasterAccount) {
      res["BelongToMasterAccount"] = boost::any(*belongToMasterAccount);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (enterpriseEcId) {
      res["EnterpriseEcId"] = boost::any(*enterpriseEcId);
    }
    if (enterpriseEntityId) {
      res["EnterpriseEntityId"] = boost::any(*enterpriseEntityId);
    }
    if (enterpriseLicenseNo) {
      res["EnterpriseLicenseNo"] = boost::any(*enterpriseLicenseNo);
    }
    if (enterpriseName) {
      res["EnterpriseName"] = boost::any(*enterpriseName);
    }
    if (enterpriseNbId) {
      res["EnterpriseNbId"] = boost::any(*enterpriseNbId);
    }
    if (freezeLogin) {
      res["FreezeLogin"] = boost::any(*freezeLogin);
    }
    if (loginId) {
      res["LoginId"] = boost::any(*loginId);
    }
    if (manageInviteTimeStamp) {
      res["ManageInviteTimeStamp"] = boost::any(*manageInviteTimeStamp);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (securityMobile) {
      res["SecurityMobile"] = boost::any(*securityMobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("BelongToMasterAccount") != m.end() && !m["BelongToMasterAccount"].empty()) {
      belongToMasterAccount = make_shared<bool>(boost::any_cast<bool>(m["BelongToMasterAccount"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EnterpriseEcId") != m.end() && !m["EnterpriseEcId"].empty()) {
      enterpriseEcId = make_shared<string>(boost::any_cast<string>(m["EnterpriseEcId"]));
    }
    if (m.find("EnterpriseEntityId") != m.end() && !m["EnterpriseEntityId"].empty()) {
      enterpriseEntityId = make_shared<string>(boost::any_cast<string>(m["EnterpriseEntityId"]));
    }
    if (m.find("EnterpriseLicenseNo") != m.end() && !m["EnterpriseLicenseNo"].empty()) {
      enterpriseLicenseNo = make_shared<string>(boost::any_cast<string>(m["EnterpriseLicenseNo"]));
    }
    if (m.find("EnterpriseName") != m.end() && !m["EnterpriseName"].empty()) {
      enterpriseName = make_shared<string>(boost::any_cast<string>(m["EnterpriseName"]));
    }
    if (m.find("EnterpriseNbId") != m.end() && !m["EnterpriseNbId"].empty()) {
      enterpriseNbId = make_shared<string>(boost::any_cast<string>(m["EnterpriseNbId"]));
    }
    if (m.find("FreezeLogin") != m.end() && !m["FreezeLogin"].empty()) {
      freezeLogin = make_shared<bool>(boost::any_cast<bool>(m["FreezeLogin"]));
    }
    if (m.find("LoginId") != m.end() && !m["LoginId"].empty()) {
      loginId = make_shared<string>(boost::any_cast<string>(m["LoginId"]));
    }
    if (m.find("ManageInviteTimeStamp") != m.end() && !m["ManageInviteTimeStamp"].empty()) {
      manageInviteTimeStamp = make_shared<string>(boost::any_cast<string>(m["ManageInviteTimeStamp"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("SecurityMobile") != m.end() && !m["SecurityMobile"].empty()) {
      securityMobile = make_shared<string>(boost::any_cast<string>(m["SecurityMobile"]));
    }
  }


  virtual ~EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList() = default;
};
class EnterpriseAccountQueryAccountsInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList>> accountInfoDtoList{};
  shared_ptr<string> code{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountQueryAccountsInfoResponseBody() {}

  explicit EnterpriseAccountQueryAccountsInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfoDtoList) {
      vector<boost::any> temp1;
      for(auto item1:*accountInfoDtoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AccountInfoDtoList"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountInfoDtoList") != m.end() && !m["AccountInfoDtoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AccountInfoDtoList"].type()) {
        vector<EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AccountInfoDtoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accountInfoDtoList = make_shared<vector<EnterpriseAccountQueryAccountsInfoResponseBodyAccountInfoDtoList>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
  }


  virtual ~EnterpriseAccountQueryAccountsInfoResponseBody() = default;
};
class EnterpriseAccountQueryAccountsInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountQueryAccountsInfoResponseBody> body{};

  EnterpriseAccountQueryAccountsInfoResponse() {}

  explicit EnterpriseAccountQueryAccountsInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountQueryAccountsInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountQueryAccountsInfoResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountQueryAccountsInfoResponse() = default;
};
class EnterpriseAccountQueryLoginSettingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<bool> isOpenApi{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<bool> showCompleteInfo{};

  EnterpriseAccountQueryLoginSettingsRequest() {}

  explicit EnterpriseAccountQueryLoginSettingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (isOpenApi) {
      res["IsOpenApi"] = boost::any(*isOpenApi);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("IsOpenApi") != m.end() && !m["IsOpenApi"].empty()) {
      isOpenApi = make_shared<bool>(boost::any_cast<bool>(m["IsOpenApi"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
  }


  virtual ~EnterpriseAccountQueryLoginSettingsRequest() = default;
};
class EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto : public Darabonba::Model {
public:
  shared_ptr<string> ipMaskEnabledStatus{};
  shared_ptr<vector<string>> ipMasks{};

  EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto() {}

  explicit EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipMaskEnabledStatus) {
      res["IpMaskEnabledStatus"] = boost::any(*ipMaskEnabledStatus);
    }
    if (ipMasks) {
      res["IpMasks"] = boost::any(*ipMasks);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpMaskEnabledStatus") != m.end() && !m["IpMaskEnabledStatus"].empty()) {
      ipMaskEnabledStatus = make_shared<string>(boost::any_cast<string>(m["IpMaskEnabledStatus"]));
    }
    if (m.find("IpMasks") != m.end() && !m["IpMasks"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IpMasks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IpMasks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ipMasks = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto() = default;
};
class EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto : public Darabonba::Model {
public:
  shared_ptr<string> protectLevel{};
  shared_ptr<bool> riskControlEnabled{};
  shared_ptr<string> verifyDetail{};
  shared_ptr<string> verifyType{};

  EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto() {}

  explicit EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (protectLevel) {
      res["ProtectLevel"] = boost::any(*protectLevel);
    }
    if (riskControlEnabled) {
      res["RiskControlEnabled"] = boost::any(*riskControlEnabled);
    }
    if (verifyDetail) {
      res["VerifyDetail"] = boost::any(*verifyDetail);
    }
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProtectLevel") != m.end() && !m["ProtectLevel"].empty()) {
      protectLevel = make_shared<string>(boost::any_cast<string>(m["ProtectLevel"]));
    }
    if (m.find("RiskControlEnabled") != m.end() && !m["RiskControlEnabled"].empty()) {
      riskControlEnabled = make_shared<bool>(boost::any_cast<bool>(m["RiskControlEnabled"]));
    }
    if (m.find("VerifyDetail") != m.end() && !m["VerifyDetail"].empty()) {
      verifyDetail = make_shared<string>(boost::any_cast<string>(m["VerifyDetail"]));
    }
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
    }
  }


  virtual ~EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto() = default;
};
class EnterpriseAccountQueryLoginSettingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto> ipMaskDto{};
  shared_ptr<string> mfaBindStatus{};
  shared_ptr<EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto> riskControlDto{};
  shared_ptr<string> securityMobileLoginStatus{};
  shared_ptr<long> sessionExpireTime{};

  EnterpriseAccountQueryLoginSettingsResponseBodyData() {}

  explicit EnterpriseAccountQueryLoginSettingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ipMaskDto) {
      res["IpMaskDto"] = ipMaskDto ? boost::any(ipMaskDto->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mfaBindStatus) {
      res["MfaBindStatus"] = boost::any(*mfaBindStatus);
    }
    if (riskControlDto) {
      res["RiskControlDto"] = riskControlDto ? boost::any(riskControlDto->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityMobileLoginStatus) {
      res["SecurityMobileLoginStatus"] = boost::any(*securityMobileLoginStatus);
    }
    if (sessionExpireTime) {
      res["SessionExpireTime"] = boost::any(*sessionExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IpMaskDto") != m.end() && !m["IpMaskDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpMaskDto"].type()) {
        EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpMaskDto"]));
        ipMaskDto = make_shared<EnterpriseAccountQueryLoginSettingsResponseBodyDataIpMaskDto>(model1);
      }
    }
    if (m.find("MfaBindStatus") != m.end() && !m["MfaBindStatus"].empty()) {
      mfaBindStatus = make_shared<string>(boost::any_cast<string>(m["MfaBindStatus"]));
    }
    if (m.find("RiskControlDto") != m.end() && !m["RiskControlDto"].empty()) {
      if (typeid(map<string, boost::any>) == m["RiskControlDto"].type()) {
        EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RiskControlDto"]));
        riskControlDto = make_shared<EnterpriseAccountQueryLoginSettingsResponseBodyDataRiskControlDto>(model1);
      }
    }
    if (m.find("SecurityMobileLoginStatus") != m.end() && !m["SecurityMobileLoginStatus"].empty()) {
      securityMobileLoginStatus = make_shared<string>(boost::any_cast<string>(m["SecurityMobileLoginStatus"]));
    }
    if (m.find("SessionExpireTime") != m.end() && !m["SessionExpireTime"].empty()) {
      sessionExpireTime = make_shared<long>(boost::any_cast<long>(m["SessionExpireTime"]));
    }
  }


  virtual ~EnterpriseAccountQueryLoginSettingsResponseBodyData() = default;
};
class EnterpriseAccountQueryLoginSettingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<EnterpriseAccountQueryLoginSettingsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountQueryLoginSettingsResponseBody() {}

  explicit EnterpriseAccountQueryLoginSettingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountQueryLoginSettingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnterpriseAccountQueryLoginSettingsResponseBodyData>(model1);
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


  virtual ~EnterpriseAccountQueryLoginSettingsResponseBody() = default;
};
class EnterpriseAccountQueryLoginSettingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountQueryLoginSettingsResponseBody> body{};

  EnterpriseAccountQueryLoginSettingsResponse() {}

  explicit EnterpriseAccountQueryLoginSettingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountQueryLoginSettingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountQueryLoginSettingsResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountQueryLoginSettingsResponse() = default;
};
class EnterpriseAccountRemoveMfaRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};

  EnterpriseAccountRemoveMfaRequest() {}

  explicit EnterpriseAccountRemoveMfaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnterpriseAccountRemoveMfaRequest() = default;
};
class EnterpriseAccountRemoveMfaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountRemoveMfaResponseBody() {}

  explicit EnterpriseAccountRemoveMfaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountRemoveMfaResponseBody() = default;
};
class EnterpriseAccountRemoveMfaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountRemoveMfaResponseBody> body{};

  EnterpriseAccountRemoveMfaResponse() {}

  explicit EnterpriseAccountRemoveMfaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountRemoveMfaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountRemoveMfaResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountRemoveMfaResponse() = default;
};
class EnterpriseAccountSeparateEaRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};

  EnterpriseAccountSeparateEaRequest() {}

  explicit EnterpriseAccountSeparateEaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~EnterpriseAccountSeparateEaRequest() = default;
};
class EnterpriseAccountSeparateEaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountSeparateEaResponseBody() {}

  explicit EnterpriseAccountSeparateEaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseAccountSeparateEaResponseBody() = default;
};
class EnterpriseAccountSeparateEaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountSeparateEaResponseBody> body{};

  EnterpriseAccountSeparateEaResponse() {}

  explicit EnterpriseAccountSeparateEaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountSeparateEaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountSeparateEaResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountSeparateEaResponse() = default;
};
class EnterpriseAccountUpdateAccountAliasRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> appName{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};

  EnterpriseAccountUpdateAccountAliasRequest() {}

  explicit EnterpriseAccountUpdateAccountAliasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnterpriseAccountUpdateAccountAliasRequest() = default;
};
class EnterpriseAccountUpdateAccountAliasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountUpdateAccountAliasResponseBody() {}

  explicit EnterpriseAccountUpdateAccountAliasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountUpdateAccountAliasResponseBody() = default;
};
class EnterpriseAccountUpdateAccountAliasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountUpdateAccountAliasResponseBody> body{};

  EnterpriseAccountUpdateAccountAliasResponse() {}

  explicit EnterpriseAccountUpdateAccountAliasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountUpdateAccountAliasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountUpdateAccountAliasResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountUpdateAccountAliasResponse() = default;
};
class EnterpriseAccountUpdateAccountBizRoleGrantRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRoleCodeListJson{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};

  EnterpriseAccountUpdateAccountBizRoleGrantRequest() {}

  explicit EnterpriseAccountUpdateAccountBizRoleGrantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleCodeListJson) {
      res["BizRoleCodeListJson"] = boost::any(*bizRoleCodeListJson);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRoleCodeListJson") != m.end() && !m["BizRoleCodeListJson"].empty()) {
      bizRoleCodeListJson = make_shared<string>(boost::any_cast<string>(m["BizRoleCodeListJson"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~EnterpriseAccountUpdateAccountBizRoleGrantRequest() = default;
};
class EnterpriseAccountUpdateAccountBizRoleGrantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountUpdateAccountBizRoleGrantResponseBody() {}

  explicit EnterpriseAccountUpdateAccountBizRoleGrantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseAccountUpdateAccountBizRoleGrantResponseBody() = default;
};
class EnterpriseAccountUpdateAccountBizRoleGrantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountUpdateAccountBizRoleGrantResponseBody> body{};

  EnterpriseAccountUpdateAccountBizRoleGrantResponse() {}

  explicit EnterpriseAccountUpdateAccountBizRoleGrantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountUpdateAccountBizRoleGrantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountUpdateAccountBizRoleGrantResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountUpdateAccountBizRoleGrantResponse() = default;
};
class EnterpriseAccountUpdateIpMaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> ipMasksJson{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  EnterpriseAccountUpdateIpMaskRequest() {}

  explicit EnterpriseAccountUpdateIpMaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (ipMasksJson) {
      res["IpMasksJson"] = boost::any(*ipMasksJson);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("IpMasksJson") != m.end() && !m["IpMasksJson"].empty()) {
      ipMasksJson = make_shared<string>(boost::any_cast<string>(m["IpMasksJson"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnterpriseAccountUpdateIpMaskRequest() = default;
};
class EnterpriseAccountUpdateIpMaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountUpdateIpMaskResponseBody() {}

  explicit EnterpriseAccountUpdateIpMaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountUpdateIpMaskResponseBody() = default;
};
class EnterpriseAccountUpdateIpMaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountUpdateIpMaskResponseBody> body{};

  EnterpriseAccountUpdateIpMaskResponse() {}

  explicit EnterpriseAccountUpdateIpMaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountUpdateIpMaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountUpdateIpMaskResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountUpdateIpMaskResponse() = default;
};
class EnterpriseAccountUpdateOperateRiskControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> productLevel{};
  shared_ptr<string> requestId{};
  shared_ptr<string> validateType{};

  EnterpriseAccountUpdateOperateRiskControlRequest() {}

  explicit EnterpriseAccountUpdateOperateRiskControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (productLevel) {
      res["ProductLevel"] = boost::any(*productLevel);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ProductLevel") != m.end() && !m["ProductLevel"].empty()) {
      productLevel = make_shared<string>(boost::any_cast<string>(m["ProductLevel"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~EnterpriseAccountUpdateOperateRiskControlRequest() = default;
};
class EnterpriseAccountUpdateOperateRiskControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountUpdateOperateRiskControlResponseBody() {}

  explicit EnterpriseAccountUpdateOperateRiskControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountUpdateOperateRiskControlResponseBody() = default;
};
class EnterpriseAccountUpdateOperateRiskControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountUpdateOperateRiskControlResponseBody> body{};

  EnterpriseAccountUpdateOperateRiskControlResponse() {}

  explicit EnterpriseAccountUpdateOperateRiskControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountUpdateOperateRiskControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountUpdateOperateRiskControlResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountUpdateOperateRiskControlResponse() = default;
};
class EnterpriseAccountUpdateSecurityMobileLoginStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  EnterpriseAccountUpdateSecurityMobileLoginStatusRequest() {}

  explicit EnterpriseAccountUpdateSecurityMobileLoginStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnterpriseAccountUpdateSecurityMobileLoginStatusRequest() = default;
};
class EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<bool> pass{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody() {}

  explicit EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pass) {
      res["Pass"] = boost::any(*pass);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Pass") != m.end() && !m["Pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["Pass"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody() = default;
};
class EnterpriseAccountUpdateSecurityMobileLoginStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody> body{};

  EnterpriseAccountUpdateSecurityMobileLoginStatusResponse() {}

  explicit EnterpriseAccountUpdateSecurityMobileLoginStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountUpdateSecurityMobileLoginStatusResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountUpdateSecurityMobileLoginStatusResponse() = default;
};
class EnterpriseAccountUpdateSessionExpireTimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> requestId{};
  shared_ptr<long> sessionExpireTime{};

  EnterpriseAccountUpdateSessionExpireTimeRequest() {}

  explicit EnterpriseAccountUpdateSessionExpireTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionExpireTime) {
      res["SessionExpireTime"] = boost::any(*sessionExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionExpireTime") != m.end() && !m["SessionExpireTime"].empty()) {
      sessionExpireTime = make_shared<long>(boost::any_cast<long>(m["SessionExpireTime"]));
    }
  }


  virtual ~EnterpriseAccountUpdateSessionExpireTimeRequest() = default;
};
class EnterpriseAccountUpdateSessionExpireTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseAccountUpdateSessionExpireTimeResponseBody() {}

  explicit EnterpriseAccountUpdateSessionExpireTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseAccountUpdateSessionExpireTimeResponseBody() = default;
};
class EnterpriseAccountUpdateSessionExpireTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseAccountUpdateSessionExpireTimeResponseBody> body{};

  EnterpriseAccountUpdateSessionExpireTimeResponse() {}

  explicit EnterpriseAccountUpdateSessionExpireTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseAccountUpdateSessionExpireTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseAccountUpdateSessionExpireTimeResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseAccountUpdateSessionExpireTimeResponse() = default;
};
class EnterpriseOrgQueryLoadTreeRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptTicket{};
  shared_ptr<bool> loadOrgOnly{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> requestId{};

  EnterpriseOrgQueryLoadTreeRequest() {}

  explicit EnterpriseOrgQueryLoadTreeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (loadOrgOnly) {
      res["LoadOrgOnly"] = boost::any(*loadOrgOnly);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("LoadOrgOnly") != m.end() && !m["LoadOrgOnly"].empty()) {
      loadOrgOnly = make_shared<bool>(boost::any_cast<bool>(m["LoadOrgOnly"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EnterpriseOrgQueryLoadTreeRequest() = default;
};
class EnterpriseOrgQueryLoadTreeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> treeDto{};

  EnterpriseOrgQueryLoadTreeResponseBody() {}

  explicit EnterpriseOrgQueryLoadTreeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (treeDto) {
      res["TreeDto"] = boost::any(*treeDto);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TreeDto") != m.end() && !m["TreeDto"].empty()) {
      treeDto = make_shared<string>(boost::any_cast<string>(m["TreeDto"]));
    }
  }


  virtual ~EnterpriseOrgQueryLoadTreeResponseBody() = default;
};
class EnterpriseOrgQueryLoadTreeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseOrgQueryLoadTreeResponseBody> body{};

  EnterpriseOrgQueryLoadTreeResponse() {}

  explicit EnterpriseOrgQueryLoadTreeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseOrgQueryLoadTreeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseOrgQueryLoadTreeResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseOrgQueryLoadTreeResponse() = default;
};
class EnterpriseRegisterAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> encryptPassword{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> loginEmail{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> showCompleteInfo{};
  shared_ptr<string> siteNick{};

  EnterpriseRegisterAccountRequest() {}

  explicit EnterpriseRegisterAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (encryptPassword) {
      res["EncryptPassword"] = boost::any(*encryptPassword);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (loginEmail) {
      res["LoginEmail"] = boost::any(*loginEmail);
    }
    if (organizationId) {
      res["OrganizationId"] = boost::any(*organizationId);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    if (siteNick) {
      res["SiteNick"] = boost::any(*siteNick);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("EncryptPassword") != m.end() && !m["EncryptPassword"].empty()) {
      encryptPassword = make_shared<string>(boost::any_cast<string>(m["EncryptPassword"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("LoginEmail") != m.end() && !m["LoginEmail"].empty()) {
      loginEmail = make_shared<string>(boost::any_cast<string>(m["LoginEmail"]));
    }
    if (m.find("OrganizationId") != m.end() && !m["OrganizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["OrganizationId"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
    if (m.find("SiteNick") != m.end() && !m["SiteNick"].empty()) {
      siteNick = make_shared<string>(boost::any_cast<string>(m["SiteNick"]));
    }
  }


  virtual ~EnterpriseRegisterAccountRequest() = default;
};
class EnterpriseRegisterAccountResponseBodyAccountInfo : public Darabonba::Model {
public:
  shared_ptr<string> enterpriseLicenseNo{};
  shared_ptr<string> enterpriseName{};
  shared_ptr<string> loginId{};
  shared_ptr<string> pk{};

  EnterpriseRegisterAccountResponseBodyAccountInfo() {}

  explicit EnterpriseRegisterAccountResponseBodyAccountInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enterpriseLicenseNo) {
      res["EnterpriseLicenseNo"] = boost::any(*enterpriseLicenseNo);
    }
    if (enterpriseName) {
      res["EnterpriseName"] = boost::any(*enterpriseName);
    }
    if (loginId) {
      res["LoginId"] = boost::any(*loginId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnterpriseLicenseNo") != m.end() && !m["EnterpriseLicenseNo"].empty()) {
      enterpriseLicenseNo = make_shared<string>(boost::any_cast<string>(m["EnterpriseLicenseNo"]));
    }
    if (m.find("EnterpriseName") != m.end() && !m["EnterpriseName"].empty()) {
      enterpriseName = make_shared<string>(boost::any_cast<string>(m["EnterpriseName"]));
    }
    if (m.find("LoginId") != m.end() && !m["LoginId"].empty()) {
      loginId = make_shared<string>(boost::any_cast<string>(m["LoginId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~EnterpriseRegisterAccountResponseBodyAccountInfo() = default;
};
class EnterpriseRegisterAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<EnterpriseRegisterAccountResponseBodyAccountInfo> accountInfo{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseRegisterAccountResponseBody() {}

  explicit EnterpriseRegisterAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountInfo) {
      res["AccountInfo"] = accountInfo ? boost::any(accountInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("AccountInfo") != m.end() && !m["AccountInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccountInfo"].type()) {
        EnterpriseRegisterAccountResponseBodyAccountInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccountInfo"]));
        accountInfo = make_shared<EnterpriseRegisterAccountResponseBodyAccountInfo>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~EnterpriseRegisterAccountResponseBody() = default;
};
class EnterpriseRegisterAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRegisterAccountResponseBody> body{};

  EnterpriseRegisterAccountResponse() {}

  explicit EnterpriseRegisterAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRegisterAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRegisterAccountResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRegisterAccountResponse() = default;
};
class EnterpriseRoleCreateBizRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizPermissionCodeListJson{};
  shared_ptr<string> bizRoleDesc{};
  shared_ptr<string> bizRoleName{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> resourceType{};

  EnterpriseRoleCreateBizRoleRequest() {}

  explicit EnterpriseRoleCreateBizRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizPermissionCodeListJson) {
      res["BizPermissionCodeListJson"] = boost::any(*bizPermissionCodeListJson);
    }
    if (bizRoleDesc) {
      res["BizRoleDesc"] = boost::any(*bizRoleDesc);
    }
    if (bizRoleName) {
      res["BizRoleName"] = boost::any(*bizRoleName);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizPermissionCodeListJson") != m.end() && !m["BizPermissionCodeListJson"].empty()) {
      bizPermissionCodeListJson = make_shared<string>(boost::any_cast<string>(m["BizPermissionCodeListJson"]));
    }
    if (m.find("BizRoleDesc") != m.end() && !m["BizRoleDesc"].empty()) {
      bizRoleDesc = make_shared<string>(boost::any_cast<string>(m["BizRoleDesc"]));
    }
    if (m.find("BizRoleName") != m.end() && !m["BizRoleName"].empty()) {
      bizRoleName = make_shared<string>(boost::any_cast<string>(m["BizRoleName"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~EnterpriseRoleCreateBizRoleRequest() = default;
};
class EnterpriseRoleCreateBizRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseRoleCreateBizRoleResponseBody() {}

  explicit EnterpriseRoleCreateBizRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~EnterpriseRoleCreateBizRoleResponseBody() = default;
};
class EnterpriseRoleCreateBizRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRoleCreateBizRoleResponseBody> body{};

  EnterpriseRoleCreateBizRoleResponse() {}

  explicit EnterpriseRoleCreateBizRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRoleCreateBizRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRoleCreateBizRoleResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRoleCreateBizRoleResponse() = default;
};
class EnterpriseRoleDeleteBizRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};

  EnterpriseRoleDeleteBizRoleRequest() {}

  explicit EnterpriseRoleDeleteBizRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
  }


  virtual ~EnterpriseRoleDeleteBizRoleRequest() = default;
};
class EnterpriseRoleDeleteBizRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseRoleDeleteBizRoleResponseBody() {}

  explicit EnterpriseRoleDeleteBizRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseRoleDeleteBizRoleResponseBody() = default;
};
class EnterpriseRoleDeleteBizRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRoleDeleteBizRoleResponseBody> body{};

  EnterpriseRoleDeleteBizRoleResponse() {}

  explicit EnterpriseRoleDeleteBizRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRoleDeleteBizRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRoleDeleteBizRoleResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRoleDeleteBizRoleResponse() = default;
};
class EnterpriseRoleQueryAccountForRoleGrantByPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orgId{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<bool> showCompleteInfo{};

  EnterpriseRoleQueryAccountForRoleGrantByPageRequest() {}

  explicit EnterpriseRoleQueryAccountForRoleGrantByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orgId) {
      res["OrgId"] = boost::any(*orgId);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrgId") != m.end() && !m["OrgId"].empty()) {
      orgId = make_shared<string>(boost::any_cast<string>(m["OrgId"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
  }


  virtual ~EnterpriseRoleQueryAccountForRoleGrantByPageRequest() = default;
};
class EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> aliyunId{};
  shared_ptr<bool> granted{};
  shared_ptr<string> pk{};

  EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts() {}

  explicit EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (granted) {
      res["Granted"] = boost::any(*granted);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("Granted") != m.end() && !m["Granted"].empty()) {
      granted = make_shared<bool>(boost::any_cast<bool>(m["Granted"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
  }


  virtual ~EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts() = default;
};
class EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts>> accounts{};
  shared_ptr<string> code{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody() {}

  explicit EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accounts) {
      vector<boost::any> temp1;
      for(auto item1:*accounts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Accounts"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accounts") != m.end() && !m["Accounts"].empty()) {
      if (typeid(vector<boost::any>) == m["Accounts"].type()) {
        vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Accounts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        accounts = make_shared<vector<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBodyAccounts>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody() = default;
};
class EnterpriseRoleQueryAccountForRoleGrantByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody> body{};

  EnterpriseRoleQueryAccountForRoleGrantByPageResponse() {}

  explicit EnterpriseRoleQueryAccountForRoleGrantByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRoleQueryAccountForRoleGrantByPageResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRoleQueryAccountForRoleGrantByPageResponse() = default;
};
class EnterpriseRoleQueryBizRoleByPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptTicket{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> srcType{};

  EnterpriseRoleQueryBizRoleByPageRequest() {}

  explicit EnterpriseRoleQueryBizRoleByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleByPageRequest() = default;
};
class EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles : public Darabonba::Model {
public:
  shared_ptr<long> bizPermissionCount{};
  shared_ptr<vector<string>> bizPermissionNameList{};
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> bizRoleDesc{};
  shared_ptr<string> bizRoleName{};
  shared_ptr<long> grantedPkCount{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> srcType{};

  EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles() {}

  explicit EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizPermissionCount) {
      res["BizPermissionCount"] = boost::any(*bizPermissionCount);
    }
    if (bizPermissionNameList) {
      res["BizPermissionNameList"] = boost::any(*bizPermissionNameList);
    }
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (bizRoleDesc) {
      res["BizRoleDesc"] = boost::any(*bizRoleDesc);
    }
    if (bizRoleName) {
      res["BizRoleName"] = boost::any(*bizRoleName);
    }
    if (grantedPkCount) {
      res["GrantedPkCount"] = boost::any(*grantedPkCount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizPermissionCount") != m.end() && !m["BizPermissionCount"].empty()) {
      bizPermissionCount = make_shared<long>(boost::any_cast<long>(m["BizPermissionCount"]));
    }
    if (m.find("BizPermissionNameList") != m.end() && !m["BizPermissionNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizPermissionNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizPermissionNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizPermissionNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("BizRoleDesc") != m.end() && !m["BizRoleDesc"].empty()) {
      bizRoleDesc = make_shared<string>(boost::any_cast<string>(m["BizRoleDesc"]));
    }
    if (m.find("BizRoleName") != m.end() && !m["BizRoleName"].empty()) {
      bizRoleName = make_shared<string>(boost::any_cast<string>(m["BizRoleName"]));
    }
    if (m.find("GrantedPkCount") != m.end() && !m["GrantedPkCount"].empty()) {
      grantedPkCount = make_shared<long>(boost::any_cast<long>(m["GrantedPkCount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles() = default;
};
class EnterpriseRoleQueryBizRoleByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles>> bizRoles{};
  shared_ptr<string> code{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalPage{};

  EnterpriseRoleQueryBizRoleByPageResponseBody() {}

  explicit EnterpriseRoleQueryBizRoleByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoles) {
      vector<boost::any> temp1;
      for(auto item1:*bizRoles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BizRoles"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRoles") != m.end() && !m["BizRoles"].empty()) {
      if (typeid(vector<boost::any>) == m["BizRoles"].type()) {
        vector<EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BizRoles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bizRoles = make_shared<vector<EnterpriseRoleQueryBizRoleByPageResponseBodyBizRoles>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
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
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleByPageResponseBody() = default;
};
class EnterpriseRoleQueryBizRoleByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRoleQueryBizRoleByPageResponseBody> body{};

  EnterpriseRoleQueryBizRoleByPageResponse() {}

  explicit EnterpriseRoleQueryBizRoleByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRoleQueryBizRoleByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRoleQueryBizRoleByPageResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleByPageResponse() = default;
};
class EnterpriseRoleQueryBizRoleDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};

  EnterpriseRoleQueryBizRoleDetailRequest() {}

  explicit EnterpriseRoleQueryBizRoleDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleDetailRequest() = default;
};
class EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions : public Darabonba::Model {
public:
  shared_ptr<string> bizPermissionCode{};
  shared_ptr<string> bizPermissionDesc{};
  shared_ptr<string> bizPermissionName{};

  EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions() {}

  explicit EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizPermissionCode) {
      res["BizPermissionCode"] = boost::any(*bizPermissionCode);
    }
    if (bizPermissionDesc) {
      res["BizPermissionDesc"] = boost::any(*bizPermissionDesc);
    }
    if (bizPermissionName) {
      res["BizPermissionName"] = boost::any(*bizPermissionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizPermissionCode") != m.end() && !m["BizPermissionCode"].empty()) {
      bizPermissionCode = make_shared<string>(boost::any_cast<string>(m["BizPermissionCode"]));
    }
    if (m.find("BizPermissionDesc") != m.end() && !m["BizPermissionDesc"].empty()) {
      bizPermissionDesc = make_shared<string>(boost::any_cast<string>(m["BizPermissionDesc"]));
    }
    if (m.find("BizPermissionName") != m.end() && !m["BizPermissionName"].empty()) {
      bizPermissionName = make_shared<string>(boost::any_cast<string>(m["BizPermissionName"]));
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions() = default;
};
class EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail : public Darabonba::Model {
public:
  shared_ptr<vector<EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions>> bizPermissions{};
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> bizRoleDesc{};
  shared_ptr<string> bizRoleName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> srcType{};

  EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail() {}

  explicit EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizPermissions) {
      vector<boost::any> temp1;
      for(auto item1:*bizPermissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BizPermissions"] = boost::any(temp1);
    }
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (bizRoleDesc) {
      res["BizRoleDesc"] = boost::any(*bizRoleDesc);
    }
    if (bizRoleName) {
      res["BizRoleName"] = boost::any(*bizRoleName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizPermissions") != m.end() && !m["BizPermissions"].empty()) {
      if (typeid(vector<boost::any>) == m["BizPermissions"].type()) {
        vector<EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BizPermissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bizPermissions = make_shared<vector<EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetailBizPermissions>>(expect1);
      }
    }
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("BizRoleDesc") != m.end() && !m["BizRoleDesc"].empty()) {
      bizRoleDesc = make_shared<string>(boost::any_cast<string>(m["BizRoleDesc"]));
    }
    if (m.find("BizRoleName") != m.end() && !m["BizRoleName"].empty()) {
      bizRoleName = make_shared<string>(boost::any_cast<string>(m["BizRoleName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail() = default;
};
class EnterpriseRoleQueryBizRoleDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail> bizRoleDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseRoleQueryBizRoleDetailResponseBody() {}

  explicit EnterpriseRoleQueryBizRoleDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizRoleDetail) {
      res["BizRoleDetail"] = bizRoleDetail ? boost::any(bizRoleDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("BizRoleDetail") != m.end() && !m["BizRoleDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizRoleDetail"].type()) {
        EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizRoleDetail"]));
        bizRoleDetail = make_shared<EnterpriseRoleQueryBizRoleDetailResponseBodyBizRoleDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~EnterpriseRoleQueryBizRoleDetailResponseBody() = default;
};
class EnterpriseRoleQueryBizRoleDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRoleQueryBizRoleDetailResponseBody> body{};

  EnterpriseRoleQueryBizRoleDetailResponse() {}

  explicit EnterpriseRoleQueryBizRoleDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRoleQueryBizRoleDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRoleQueryBizRoleDetailResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRoleQueryBizRoleDetailResponse() = default;
};
class EnterpriseRoleUpdateBizRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizPermissionCodeListJson{};
  shared_ptr<string> bizRoleCode{};
  shared_ptr<string> bizRoleDesc{};
  shared_ptr<string> bizRoleName{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};

  EnterpriseRoleUpdateBizRoleRequest() {}

  explicit EnterpriseRoleUpdateBizRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizPermissionCodeListJson) {
      res["BizPermissionCodeListJson"] = boost::any(*bizPermissionCodeListJson);
    }
    if (bizRoleCode) {
      res["BizRoleCode"] = boost::any(*bizRoleCode);
    }
    if (bizRoleDesc) {
      res["BizRoleDesc"] = boost::any(*bizRoleDesc);
    }
    if (bizRoleName) {
      res["BizRoleName"] = boost::any(*bizRoleName);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizPermissionCodeListJson") != m.end() && !m["BizPermissionCodeListJson"].empty()) {
      bizPermissionCodeListJson = make_shared<string>(boost::any_cast<string>(m["BizPermissionCodeListJson"]));
    }
    if (m.find("BizRoleCode") != m.end() && !m["BizRoleCode"].empty()) {
      bizRoleCode = make_shared<string>(boost::any_cast<string>(m["BizRoleCode"]));
    }
    if (m.find("BizRoleDesc") != m.end() && !m["BizRoleDesc"].empty()) {
      bizRoleDesc = make_shared<string>(boost::any_cast<string>(m["BizRoleDesc"]));
    }
    if (m.find("BizRoleName") != m.end() && !m["BizRoleName"].empty()) {
      bizRoleName = make_shared<string>(boost::any_cast<string>(m["BizRoleName"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
  }


  virtual ~EnterpriseRoleUpdateBizRoleRequest() = default;
};
class EnterpriseRoleUpdateBizRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseRoleUpdateBizRoleResponseBody() {}

  explicit EnterpriseRoleUpdateBizRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (success) {
      res["Success"] = boost::any(*success);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~EnterpriseRoleUpdateBizRoleResponseBody() = default;
};
class EnterpriseRoleUpdateBizRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseRoleUpdateBizRoleResponseBody> body{};

  EnterpriseRoleUpdateBizRoleResponse() {}

  explicit EnterpriseRoleUpdateBizRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseRoleUpdateBizRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseRoleUpdateBizRoleResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseRoleUpdateBizRoleResponse() = default;
};
class EnterpriseTodoDealAccountTodoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<string> todoId{};

  EnterpriseTodoDealAccountTodoRequest() {}

  explicit EnterpriseTodoDealAccountTodoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (todoId) {
      res["TodoId"] = boost::any(*todoId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TodoId") != m.end() && !m["TodoId"].empty()) {
      todoId = make_shared<string>(boost::any_cast<string>(m["TodoId"]));
    }
  }


  virtual ~EnterpriseTodoDealAccountTodoRequest() = default;
};
class EnterpriseTodoDealAccountTodoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseTodoDealAccountTodoResponseBody() {}

  explicit EnterpriseTodoDealAccountTodoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnterpriseTodoDealAccountTodoResponseBody() = default;
};
class EnterpriseTodoDealAccountTodoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseTodoDealAccountTodoResponseBody> body{};

  EnterpriseTodoDealAccountTodoResponse() {}

  explicit EnterpriseTodoDealAccountTodoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseTodoDealAccountTodoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseTodoDealAccountTodoResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseTodoDealAccountTodoResponse() = default;
};
class EnterpriseTodoQueryAccountTodoListRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> operatePk{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> showCompleteInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> todoType{};

  EnterpriseTodoQueryAccountTodoListRequest() {}

  explicit EnterpriseTodoQueryAccountTodoListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (operatePk) {
      res["OperatePk"] = boost::any(*operatePk);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (todoType) {
      res["TodoType"] = boost::any(*todoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OperatePk") != m.end() && !m["OperatePk"].empty()) {
      operatePk = make_shared<string>(boost::any_cast<string>(m["OperatePk"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TodoType") != m.end() && !m["TodoType"].empty()) {
      todoType = make_shared<string>(boost::any_cast<string>(m["TodoType"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListRequest() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> pk{};
  shared_ptr<string> pkEncoded{};
  shared_ptr<string> role{};

  EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (pkEncoded) {
      res["PkEncoded"] = boost::any(*pkEncoded);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("PkEncoded") != m.end() && !m["PkEncoded"].empty()) {
      pkEncoded = make_shared<string>(boost::any_cast<string>(m["PkEncoded"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe : public Darabonba::Model {
public:
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<long> manageableAccountCount{};
  shared_ptr<long> managedAccountCount{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList>> managerList{};
  shared_ptr<string> nbId{};
  shared_ptr<string> subjectName{};
  shared_ptr<string> subjectType{};

  EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (manageableAccountCount) {
      res["ManageableAccountCount"] = boost::any(*manageableAccountCount);
    }
    if (managedAccountCount) {
      res["ManagedAccountCount"] = boost::any(*managedAccountCount);
    }
    if (managerList) {
      vector<boost::any> temp1;
      for(auto item1:*managerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ManagerList"] = boost::any(temp1);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (subjectName) {
      res["SubjectName"] = boost::any(*subjectName);
    }
    if (subjectType) {
      res["SubjectType"] = boost::any(*subjectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("ManageableAccountCount") != m.end() && !m["ManageableAccountCount"].empty()) {
      manageableAccountCount = make_shared<long>(boost::any_cast<long>(m["ManageableAccountCount"]));
    }
    if (m.find("ManagedAccountCount") != m.end() && !m["ManagedAccountCount"].empty()) {
      managedAccountCount = make_shared<long>(boost::any_cast<long>(m["ManagedAccountCount"]));
    }
    if (m.find("ManagerList") != m.end() && !m["ManagerList"].empty()) {
      if (typeid(vector<boost::any>) == m["ManagerList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ManagerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        managerList = make_shared<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLeManagerList>>(expect1);
      }
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("SubjectName") != m.end() && !m["SubjectName"].empty()) {
      subjectName = make_shared<string>(boost::any_cast<string>(m["SubjectName"]));
    }
    if (m.find("SubjectType") != m.end() && !m["SubjectType"].empty()) {
      subjectType = make_shared<string>(boost::any_cast<string>(m["SubjectType"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<long> auditTime{};
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> nbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (auditTime) {
      res["AuditTime"] = boost::any(*auditTime);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("AuditTime") != m.end() && !m["AuditTime"].empty()) {
      auditTime = make_shared<long>(boost::any_cast<long>(m["AuditTime"]));
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> pk{};
  shared_ptr<string> pkEncoded{};
  shared_ptr<string> role{};

  EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (pkEncoded) {
      res["PkEncoded"] = boost::any(*pkEncoded);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("PkEncoded") != m.end() && !m["PkEncoded"].empty()) {
      pkEncoded = make_shared<string>(boost::any_cast<string>(m["PkEncoded"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe : public Darabonba::Model {
public:
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<long> manageableAccountCount{};
  shared_ptr<long> managedAccountCount{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList>> managerList{};
  shared_ptr<string> nbId{};
  shared_ptr<string> subjectName{};
  shared_ptr<string> subjectType{};

  EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (manageableAccountCount) {
      res["ManageableAccountCount"] = boost::any(*manageableAccountCount);
    }
    if (managedAccountCount) {
      res["ManagedAccountCount"] = boost::any(*managedAccountCount);
    }
    if (managerList) {
      vector<boost::any> temp1;
      for(auto item1:*managerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ManagerList"] = boost::any(temp1);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (subjectName) {
      res["SubjectName"] = boost::any(*subjectName);
    }
    if (subjectType) {
      res["SubjectType"] = boost::any(*subjectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("ManageableAccountCount") != m.end() && !m["ManageableAccountCount"].empty()) {
      manageableAccountCount = make_shared<long>(boost::any_cast<long>(m["ManageableAccountCount"]));
    }
    if (m.find("ManagedAccountCount") != m.end() && !m["ManagedAccountCount"].empty()) {
      managedAccountCount = make_shared<long>(boost::any_cast<long>(m["ManagedAccountCount"]));
    }
    if (m.find("ManagerList") != m.end() && !m["ManagerList"].empty()) {
      if (typeid(vector<boost::any>) == m["ManagerList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ManagerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        managerList = make_shared<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLeManagerList>>(expect1);
      }
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("SubjectName") != m.end() && !m["SubjectName"].empty()) {
      subjectName = make_shared<string>(boost::any_cast<string>(m["SubjectName"]));
    }
    if (m.find("SubjectType") != m.end() && !m["SubjectType"].empty()) {
      subjectType = make_shared<string>(boost::any_cast<string>(m["SubjectType"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> applicantAliyunId{};
  shared_ptr<string> applicantPk{};
  shared_ptr<string> applyRemark{};
  shared_ptr<long> applyTime{};
  shared_ptr<string> auditorAliyunId{};
  shared_ptr<string> auditorPk{};
  shared_ptr<string> auditorStatus{};
  shared_ptr<long> canceledTime{};
  shared_ptr<bool> closed{};
  shared_ptr<bool> currAuditor{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe> fromLe{};
  shared_ptr<string> pk{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList>> processList{};
  shared_ptr<string> status{};
  shared_ptr<long> timeoutTime{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe> toLe{};
  shared_ptr<bool> toLeAudit{};
  shared_ptr<string> todoId{};
  shared_ptr<string> todoType{};
  shared_ptr<string> todoView{};

  EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (applicantAliyunId) {
      res["ApplicantAliyunId"] = boost::any(*applicantAliyunId);
    }
    if (applicantPk) {
      res["ApplicantPk"] = boost::any(*applicantPk);
    }
    if (applyRemark) {
      res["ApplyRemark"] = boost::any(*applyRemark);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (auditorAliyunId) {
      res["AuditorAliyunId"] = boost::any(*auditorAliyunId);
    }
    if (auditorPk) {
      res["AuditorPk"] = boost::any(*auditorPk);
    }
    if (auditorStatus) {
      res["AuditorStatus"] = boost::any(*auditorStatus);
    }
    if (canceledTime) {
      res["CanceledTime"] = boost::any(*canceledTime);
    }
    if (closed) {
      res["Closed"] = boost::any(*closed);
    }
    if (currAuditor) {
      res["CurrAuditor"] = boost::any(*currAuditor);
    }
    if (fromLe) {
      res["FromLe"] = fromLe ? boost::any(fromLe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (processList) {
      vector<boost::any> temp1;
      for(auto item1:*processList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProcessList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeoutTime) {
      res["TimeoutTime"] = boost::any(*timeoutTime);
    }
    if (toLe) {
      res["ToLe"] = toLe ? boost::any(toLe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (toLeAudit) {
      res["ToLeAudit"] = boost::any(*toLeAudit);
    }
    if (todoId) {
      res["TodoId"] = boost::any(*todoId);
    }
    if (todoType) {
      res["TodoType"] = boost::any(*todoType);
    }
    if (todoView) {
      res["TodoView"] = boost::any(*todoView);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("ApplicantAliyunId") != m.end() && !m["ApplicantAliyunId"].empty()) {
      applicantAliyunId = make_shared<string>(boost::any_cast<string>(m["ApplicantAliyunId"]));
    }
    if (m.find("ApplicantPk") != m.end() && !m["ApplicantPk"].empty()) {
      applicantPk = make_shared<string>(boost::any_cast<string>(m["ApplicantPk"]));
    }
    if (m.find("ApplyRemark") != m.end() && !m["ApplyRemark"].empty()) {
      applyRemark = make_shared<string>(boost::any_cast<string>(m["ApplyRemark"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<long>(boost::any_cast<long>(m["ApplyTime"]));
    }
    if (m.find("AuditorAliyunId") != m.end() && !m["AuditorAliyunId"].empty()) {
      auditorAliyunId = make_shared<string>(boost::any_cast<string>(m["AuditorAliyunId"]));
    }
    if (m.find("AuditorPk") != m.end() && !m["AuditorPk"].empty()) {
      auditorPk = make_shared<string>(boost::any_cast<string>(m["AuditorPk"]));
    }
    if (m.find("AuditorStatus") != m.end() && !m["AuditorStatus"].empty()) {
      auditorStatus = make_shared<string>(boost::any_cast<string>(m["AuditorStatus"]));
    }
    if (m.find("CanceledTime") != m.end() && !m["CanceledTime"].empty()) {
      canceledTime = make_shared<long>(boost::any_cast<long>(m["CanceledTime"]));
    }
    if (m.find("Closed") != m.end() && !m["Closed"].empty()) {
      closed = make_shared<bool>(boost::any_cast<bool>(m["Closed"]));
    }
    if (m.find("CurrAuditor") != m.end() && !m["CurrAuditor"].empty()) {
      currAuditor = make_shared<bool>(boost::any_cast<bool>(m["CurrAuditor"]));
    }
    if (m.find("FromLe") != m.end() && !m["FromLe"].empty()) {
      if (typeid(map<string, boost::any>) == m["FromLe"].type()) {
        EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FromLe"]));
        fromLe = make_shared<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListFromLe>(model1);
      }
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ProcessList") != m.end() && !m["ProcessList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProcessList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProcessList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        processList = make_shared<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListProcessList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeoutTime") != m.end() && !m["TimeoutTime"].empty()) {
      timeoutTime = make_shared<long>(boost::any_cast<long>(m["TimeoutTime"]));
    }
    if (m.find("ToLe") != m.end() && !m["ToLe"].empty()) {
      if (typeid(map<string, boost::any>) == m["ToLe"].type()) {
        EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ToLe"]));
        toLe = make_shared<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoListToLe>(model1);
      }
    }
    if (m.find("ToLeAudit") != m.end() && !m["ToLeAudit"].empty()) {
      toLeAudit = make_shared<bool>(boost::any_cast<bool>(m["ToLeAudit"]));
    }
    if (m.find("TodoId") != m.end() && !m["TodoId"].empty()) {
      todoId = make_shared<string>(boost::any_cast<string>(m["TodoId"]));
    }
    if (m.find("TodoType") != m.end() && !m["TodoType"].empty()) {
      todoType = make_shared<string>(boost::any_cast<string>(m["TodoType"]));
    }
    if (m.find("TodoView") != m.end() && !m["TodoView"].empty()) {
      todoView = make_shared<string>(boost::any_cast<string>(m["TodoView"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList>> todoList{};

  EnterpriseTodoQueryAccountTodoListResponseBodyData() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (todoList) {
      vector<boost::any> temp1;
      for(auto item1:*todoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TodoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("TodoList") != m.end() && !m["TodoList"].empty()) {
      if (typeid(vector<boost::any>) == m["TodoList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TodoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        todoList = make_shared<vector<EnterpriseTodoQueryAccountTodoListResponseBodyDataTodoList>>(expect1);
      }
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBodyData() = default;
};
class EnterpriseTodoQueryAccountTodoListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListResponseBodyData> data{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseTodoQueryAccountTodoListResponseBody() {}

  explicit EnterpriseTodoQueryAccountTodoListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnterpriseTodoQueryAccountTodoListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnterpriseTodoQueryAccountTodoListResponseBodyData>(model1);
      }
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
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponseBody() = default;
};
class EnterpriseTodoQueryAccountTodoListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListResponseBody> body{};

  EnterpriseTodoQueryAccountTodoListResponse() {}

  explicit EnterpriseTodoQueryAccountTodoListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseTodoQueryAccountTodoListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseTodoQueryAccountTodoListResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListResponse() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> operatePk{};
  shared_ptr<string> orientedEcId{};
  shared_ptr<string> orientedLeId{};
  shared_ptr<string> orientedNbId{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> showCompleteInfo{};
  shared_ptr<string> status{};
  shared_ptr<string> todoType{};

  EnterpriseTodoQueryAccountTodoListByApplicantRequest() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (operatePk) {
      res["OperatePk"] = boost::any(*operatePk);
    }
    if (orientedEcId) {
      res["OrientedEcId"] = boost::any(*orientedEcId);
    }
    if (orientedLeId) {
      res["OrientedLeId"] = boost::any(*orientedLeId);
    }
    if (orientedNbId) {
      res["OrientedNbId"] = boost::any(*orientedNbId);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (showCompleteInfo) {
      res["ShowCompleteInfo"] = boost::any(*showCompleteInfo);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (todoType) {
      res["TodoType"] = boost::any(*todoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OperatePk") != m.end() && !m["OperatePk"].empty()) {
      operatePk = make_shared<string>(boost::any_cast<string>(m["OperatePk"]));
    }
    if (m.find("OrientedEcId") != m.end() && !m["OrientedEcId"].empty()) {
      orientedEcId = make_shared<string>(boost::any_cast<string>(m["OrientedEcId"]));
    }
    if (m.find("OrientedLeId") != m.end() && !m["OrientedLeId"].empty()) {
      orientedLeId = make_shared<string>(boost::any_cast<string>(m["OrientedLeId"]));
    }
    if (m.find("OrientedNbId") != m.end() && !m["OrientedNbId"].empty()) {
      orientedNbId = make_shared<string>(boost::any_cast<string>(m["OrientedNbId"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ShowCompleteInfo") != m.end() && !m["ShowCompleteInfo"].empty()) {
      showCompleteInfo = make_shared<bool>(boost::any_cast<bool>(m["ShowCompleteInfo"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TodoType") != m.end() && !m["TodoType"].empty()) {
      todoType = make_shared<string>(boost::any_cast<string>(m["TodoType"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantRequest() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> pk{};
  shared_ptr<string> pkEncoded{};
  shared_ptr<string> role{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (pkEncoded) {
      res["PkEncoded"] = boost::any(*pkEncoded);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("PkEncoded") != m.end() && !m["PkEncoded"].empty()) {
      pkEncoded = make_shared<string>(boost::any_cast<string>(m["PkEncoded"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe : public Darabonba::Model {
public:
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<long> manageableAccountCount{};
  shared_ptr<long> managedAccountCount{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList>> managerList{};
  shared_ptr<string> nbId{};
  shared_ptr<string> subjectName{};
  shared_ptr<string> subjectType{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (manageableAccountCount) {
      res["ManageableAccountCount"] = boost::any(*manageableAccountCount);
    }
    if (managedAccountCount) {
      res["ManagedAccountCount"] = boost::any(*managedAccountCount);
    }
    if (managerList) {
      vector<boost::any> temp1;
      for(auto item1:*managerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ManagerList"] = boost::any(temp1);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (subjectName) {
      res["SubjectName"] = boost::any(*subjectName);
    }
    if (subjectType) {
      res["SubjectType"] = boost::any(*subjectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("ManageableAccountCount") != m.end() && !m["ManageableAccountCount"].empty()) {
      manageableAccountCount = make_shared<long>(boost::any_cast<long>(m["ManageableAccountCount"]));
    }
    if (m.find("ManagedAccountCount") != m.end() && !m["ManagedAccountCount"].empty()) {
      managedAccountCount = make_shared<long>(boost::any_cast<long>(m["ManagedAccountCount"]));
    }
    if (m.find("ManagerList") != m.end() && !m["ManagerList"].empty()) {
      if (typeid(vector<boost::any>) == m["ManagerList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ManagerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        managerList = make_shared<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLeManagerList>>(expect1);
      }
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("SubjectName") != m.end() && !m["SubjectName"].empty()) {
      subjectName = make_shared<string>(boost::any_cast<string>(m["SubjectName"]));
    }
    if (m.find("SubjectType") != m.end() && !m["SubjectType"].empty()) {
      subjectType = make_shared<string>(boost::any_cast<string>(m["SubjectType"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<long> auditTime{};
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> nbId{};
  shared_ptr<string> pk{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (auditTime) {
      res["AuditTime"] = boost::any(*auditTime);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("AuditTime") != m.end() && !m["AuditTime"].empty()) {
      auditTime = make_shared<long>(boost::any_cast<long>(m["AuditTime"]));
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> pk{};
  shared_ptr<string> pkEncoded{};
  shared_ptr<string> role{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (pkEncoded) {
      res["PkEncoded"] = boost::any(*pkEncoded);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("PkEncoded") != m.end() && !m["PkEncoded"].empty()) {
      pkEncoded = make_shared<string>(boost::any_cast<string>(m["PkEncoded"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe : public Darabonba::Model {
public:
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<long> manageableAccountCount{};
  shared_ptr<long> managedAccountCount{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList>> managerList{};
  shared_ptr<string> nbId{};
  shared_ptr<string> subjectName{};
  shared_ptr<string> subjectType{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (manageableAccountCount) {
      res["ManageableAccountCount"] = boost::any(*manageableAccountCount);
    }
    if (managedAccountCount) {
      res["ManagedAccountCount"] = boost::any(*managedAccountCount);
    }
    if (managerList) {
      vector<boost::any> temp1;
      for(auto item1:*managerList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ManagerList"] = boost::any(temp1);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (subjectName) {
      res["SubjectName"] = boost::any(*subjectName);
    }
    if (subjectType) {
      res["SubjectType"] = boost::any(*subjectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("ManageableAccountCount") != m.end() && !m["ManageableAccountCount"].empty()) {
      manageableAccountCount = make_shared<long>(boost::any_cast<long>(m["ManageableAccountCount"]));
    }
    if (m.find("ManagedAccountCount") != m.end() && !m["ManagedAccountCount"].empty()) {
      managedAccountCount = make_shared<long>(boost::any_cast<long>(m["ManagedAccountCount"]));
    }
    if (m.find("ManagerList") != m.end() && !m["ManagerList"].empty()) {
      if (typeid(vector<boost::any>) == m["ManagerList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ManagerList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        managerList = make_shared<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLeManagerList>>(expect1);
      }
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("SubjectName") != m.end() && !m["SubjectName"].empty()) {
      subjectName = make_shared<string>(boost::any_cast<string>(m["SubjectName"]));
    }
    if (m.find("SubjectType") != m.end() && !m["SubjectType"].empty()) {
      subjectType = make_shared<string>(boost::any_cast<string>(m["SubjectType"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList : public Darabonba::Model {
public:
  shared_ptr<string> aliyunId{};
  shared_ptr<string> applicantAliyunId{};
  shared_ptr<string> applicantPk{};
  shared_ptr<string> applyRemark{};
  shared_ptr<long> applyTime{};
  shared_ptr<string> auditorAliyunId{};
  shared_ptr<string> auditorPk{};
  shared_ptr<string> auditorStatus{};
  shared_ptr<long> canceledTime{};
  shared_ptr<bool> closed{};
  shared_ptr<bool> currAuditor{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe> fromLe{};
  shared_ptr<string> pk{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList>> processList{};
  shared_ptr<string> status{};
  shared_ptr<long> timeoutTime{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe> toLe{};
  shared_ptr<bool> toLeAudit{};
  shared_ptr<string> todoId{};
  shared_ptr<string> todoType{};
  shared_ptr<string> todoView{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunId) {
      res["AliyunId"] = boost::any(*aliyunId);
    }
    if (applicantAliyunId) {
      res["ApplicantAliyunId"] = boost::any(*applicantAliyunId);
    }
    if (applicantPk) {
      res["ApplicantPk"] = boost::any(*applicantPk);
    }
    if (applyRemark) {
      res["ApplyRemark"] = boost::any(*applyRemark);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (auditorAliyunId) {
      res["AuditorAliyunId"] = boost::any(*auditorAliyunId);
    }
    if (auditorPk) {
      res["AuditorPk"] = boost::any(*auditorPk);
    }
    if (auditorStatus) {
      res["AuditorStatus"] = boost::any(*auditorStatus);
    }
    if (canceledTime) {
      res["CanceledTime"] = boost::any(*canceledTime);
    }
    if (closed) {
      res["Closed"] = boost::any(*closed);
    }
    if (currAuditor) {
      res["CurrAuditor"] = boost::any(*currAuditor);
    }
    if (fromLe) {
      res["FromLe"] = fromLe ? boost::any(fromLe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pk) {
      res["Pk"] = boost::any(*pk);
    }
    if (processList) {
      vector<boost::any> temp1;
      for(auto item1:*processList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProcessList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timeoutTime) {
      res["TimeoutTime"] = boost::any(*timeoutTime);
    }
    if (toLe) {
      res["ToLe"] = toLe ? boost::any(toLe->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (toLeAudit) {
      res["ToLeAudit"] = boost::any(*toLeAudit);
    }
    if (todoId) {
      res["TodoId"] = boost::any(*todoId);
    }
    if (todoType) {
      res["TodoType"] = boost::any(*todoType);
    }
    if (todoView) {
      res["TodoView"] = boost::any(*todoView);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunId") != m.end() && !m["AliyunId"].empty()) {
      aliyunId = make_shared<string>(boost::any_cast<string>(m["AliyunId"]));
    }
    if (m.find("ApplicantAliyunId") != m.end() && !m["ApplicantAliyunId"].empty()) {
      applicantAliyunId = make_shared<string>(boost::any_cast<string>(m["ApplicantAliyunId"]));
    }
    if (m.find("ApplicantPk") != m.end() && !m["ApplicantPk"].empty()) {
      applicantPk = make_shared<string>(boost::any_cast<string>(m["ApplicantPk"]));
    }
    if (m.find("ApplyRemark") != m.end() && !m["ApplyRemark"].empty()) {
      applyRemark = make_shared<string>(boost::any_cast<string>(m["ApplyRemark"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<long>(boost::any_cast<long>(m["ApplyTime"]));
    }
    if (m.find("AuditorAliyunId") != m.end() && !m["AuditorAliyunId"].empty()) {
      auditorAliyunId = make_shared<string>(boost::any_cast<string>(m["AuditorAliyunId"]));
    }
    if (m.find("AuditorPk") != m.end() && !m["AuditorPk"].empty()) {
      auditorPk = make_shared<string>(boost::any_cast<string>(m["AuditorPk"]));
    }
    if (m.find("AuditorStatus") != m.end() && !m["AuditorStatus"].empty()) {
      auditorStatus = make_shared<string>(boost::any_cast<string>(m["AuditorStatus"]));
    }
    if (m.find("CanceledTime") != m.end() && !m["CanceledTime"].empty()) {
      canceledTime = make_shared<long>(boost::any_cast<long>(m["CanceledTime"]));
    }
    if (m.find("Closed") != m.end() && !m["Closed"].empty()) {
      closed = make_shared<bool>(boost::any_cast<bool>(m["Closed"]));
    }
    if (m.find("CurrAuditor") != m.end() && !m["CurrAuditor"].empty()) {
      currAuditor = make_shared<bool>(boost::any_cast<bool>(m["CurrAuditor"]));
    }
    if (m.find("FromLe") != m.end() && !m["FromLe"].empty()) {
      if (typeid(map<string, boost::any>) == m["FromLe"].type()) {
        EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FromLe"]));
        fromLe = make_shared<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListFromLe>(model1);
      }
    }
    if (m.find("Pk") != m.end() && !m["Pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["Pk"]));
    }
    if (m.find("ProcessList") != m.end() && !m["ProcessList"].empty()) {
      if (typeid(vector<boost::any>) == m["ProcessList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProcessList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        processList = make_shared<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListProcessList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TimeoutTime") != m.end() && !m["TimeoutTime"].empty()) {
      timeoutTime = make_shared<long>(boost::any_cast<long>(m["TimeoutTime"]));
    }
    if (m.find("ToLe") != m.end() && !m["ToLe"].empty()) {
      if (typeid(map<string, boost::any>) == m["ToLe"].type()) {
        EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ToLe"]));
        toLe = make_shared<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoListToLe>(model1);
      }
    }
    if (m.find("ToLeAudit") != m.end() && !m["ToLeAudit"].empty()) {
      toLeAudit = make_shared<bool>(boost::any_cast<bool>(m["ToLeAudit"]));
    }
    if (m.find("TodoId") != m.end() && !m["TodoId"].empty()) {
      todoId = make_shared<string>(boost::any_cast<string>(m["TodoId"]));
    }
    if (m.find("TodoType") != m.end() && !m["TodoType"].empty()) {
      todoType = make_shared<string>(boost::any_cast<string>(m["TodoType"]));
    }
    if (m.find("TodoView") != m.end() && !m["TodoView"].empty()) {
      todoView = make_shared<string>(boost::any_cast<string>(m["TodoView"]));
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList>> todoList{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (todoList) {
      vector<boost::any> temp1;
      for(auto item1:*todoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TodoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("TodoList") != m.end() && !m["TodoList"].empty()) {
      if (typeid(vector<boost::any>) == m["TodoList"].type()) {
        vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TodoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        todoList = make_shared<vector<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyDataTodoList>>(expect1);
      }
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData> data{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> message{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponseBody() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnterpriseTodoQueryAccountTodoListByApplicantResponseBodyData>(model1);
      }
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
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponseBody() = default;
};
class EnterpriseTodoQueryAccountTodoListByApplicantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantResponseBody> body{};

  EnterpriseTodoQueryAccountTodoListByApplicantResponse() {}

  explicit EnterpriseTodoQueryAccountTodoListByApplicantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseTodoQueryAccountTodoListByApplicantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseTodoQueryAccountTodoListByApplicantResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseTodoQueryAccountTodoListByApplicantResponse() = default;
};
class EnterpriseUninvitedAdminInviteJoinEnterpriseRequest : public Darabonba::Model {
public:
  shared_ptr<string> ecId{};
  shared_ptr<string> encryptTicket{};
  shared_ptr<string> inviteePk{};
  shared_ptr<string> leId{};
  shared_ptr<string> nbId{};
  shared_ptr<string> remark{};

  EnterpriseUninvitedAdminInviteJoinEnterpriseRequest() {}

  explicit EnterpriseUninvitedAdminInviteJoinEnterpriseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (encryptTicket) {
      res["EncryptTicket"] = boost::any(*encryptTicket);
    }
    if (inviteePk) {
      res["InviteePk"] = boost::any(*inviteePk);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("EncryptTicket") != m.end() && !m["EncryptTicket"].empty()) {
      encryptTicket = make_shared<string>(boost::any_cast<string>(m["EncryptTicket"]));
    }
    if (m.find("InviteePk") != m.end() && !m["InviteePk"].empty()) {
      inviteePk = make_shared<string>(boost::any_cast<string>(m["InviteePk"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
  }


  virtual ~EnterpriseUninvitedAdminInviteJoinEnterpriseRequest() = default;
};
class EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> applicantAliyunId{};
  shared_ptr<string> applicantPk{};
  shared_ptr<string> applyRemark{};
  shared_ptr<long> applyTime{};
  shared_ptr<string> auditorAliyunId{};
  shared_ptr<string> auditorPk{};
  shared_ptr<string> ecId{};
  shared_ptr<string> leId{};
  shared_ptr<string> leLicenseNo{};
  shared_ptr<string> leName{};
  shared_ptr<string> message{};
  shared_ptr<string> nbId{};
  shared_ptr<string> operatedAliyunId{};
  shared_ptr<string> operatedPk{};
  shared_ptr<string> success{};
  shared_ptr<long> timeoutTime{};
  shared_ptr<string> todoId{};
  shared_ptr<string> todoType{};

  EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData() {}

  explicit EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicantAliyunId) {
      res["ApplicantAliyunId"] = boost::any(*applicantAliyunId);
    }
    if (applicantPk) {
      res["ApplicantPk"] = boost::any(*applicantPk);
    }
    if (applyRemark) {
      res["ApplyRemark"] = boost::any(*applyRemark);
    }
    if (applyTime) {
      res["ApplyTime"] = boost::any(*applyTime);
    }
    if (auditorAliyunId) {
      res["AuditorAliyunId"] = boost::any(*auditorAliyunId);
    }
    if (auditorPk) {
      res["AuditorPk"] = boost::any(*auditorPk);
    }
    if (ecId) {
      res["EcId"] = boost::any(*ecId);
    }
    if (leId) {
      res["LeId"] = boost::any(*leId);
    }
    if (leLicenseNo) {
      res["LeLicenseNo"] = boost::any(*leLicenseNo);
    }
    if (leName) {
      res["LeName"] = boost::any(*leName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (nbId) {
      res["NbId"] = boost::any(*nbId);
    }
    if (operatedAliyunId) {
      res["OperatedAliyunId"] = boost::any(*operatedAliyunId);
    }
    if (operatedPk) {
      res["OperatedPk"] = boost::any(*operatedPk);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (timeoutTime) {
      res["TimeoutTime"] = boost::any(*timeoutTime);
    }
    if (todoId) {
      res["TodoId"] = boost::any(*todoId);
    }
    if (todoType) {
      res["TodoType"] = boost::any(*todoType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicantAliyunId") != m.end() && !m["ApplicantAliyunId"].empty()) {
      applicantAliyunId = make_shared<string>(boost::any_cast<string>(m["ApplicantAliyunId"]));
    }
    if (m.find("ApplicantPk") != m.end() && !m["ApplicantPk"].empty()) {
      applicantPk = make_shared<string>(boost::any_cast<string>(m["ApplicantPk"]));
    }
    if (m.find("ApplyRemark") != m.end() && !m["ApplyRemark"].empty()) {
      applyRemark = make_shared<string>(boost::any_cast<string>(m["ApplyRemark"]));
    }
    if (m.find("ApplyTime") != m.end() && !m["ApplyTime"].empty()) {
      applyTime = make_shared<long>(boost::any_cast<long>(m["ApplyTime"]));
    }
    if (m.find("AuditorAliyunId") != m.end() && !m["AuditorAliyunId"].empty()) {
      auditorAliyunId = make_shared<string>(boost::any_cast<string>(m["AuditorAliyunId"]));
    }
    if (m.find("AuditorPk") != m.end() && !m["AuditorPk"].empty()) {
      auditorPk = make_shared<string>(boost::any_cast<string>(m["AuditorPk"]));
    }
    if (m.find("EcId") != m.end() && !m["EcId"].empty()) {
      ecId = make_shared<string>(boost::any_cast<string>(m["EcId"]));
    }
    if (m.find("LeId") != m.end() && !m["LeId"].empty()) {
      leId = make_shared<string>(boost::any_cast<string>(m["LeId"]));
    }
    if (m.find("LeLicenseNo") != m.end() && !m["LeLicenseNo"].empty()) {
      leLicenseNo = make_shared<string>(boost::any_cast<string>(m["LeLicenseNo"]));
    }
    if (m.find("LeName") != m.end() && !m["LeName"].empty()) {
      leName = make_shared<string>(boost::any_cast<string>(m["LeName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("NbId") != m.end() && !m["NbId"].empty()) {
      nbId = make_shared<string>(boost::any_cast<string>(m["NbId"]));
    }
    if (m.find("OperatedAliyunId") != m.end() && !m["OperatedAliyunId"].empty()) {
      operatedAliyunId = make_shared<string>(boost::any_cast<string>(m["OperatedAliyunId"]));
    }
    if (m.find("OperatedPk") != m.end() && !m["OperatedPk"].empty()) {
      operatedPk = make_shared<string>(boost::any_cast<string>(m["OperatedPk"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TimeoutTime") != m.end() && !m["TimeoutTime"].empty()) {
      timeoutTime = make_shared<long>(boost::any_cast<long>(m["TimeoutTime"]));
    }
    if (m.find("TodoId") != m.end() && !m["TodoId"].empty()) {
      todoId = make_shared<string>(boost::any_cast<string>(m["TodoId"]));
    }
    if (m.find("TodoType") != m.end() && !m["TodoType"].empty()) {
      todoType = make_shared<string>(boost::any_cast<string>(m["TodoType"]));
    }
  }


  virtual ~EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData() = default;
};
class EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody() {}

  explicit EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBodyData>>(expect1);
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


  virtual ~EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody() = default;
};
class EnterpriseUninvitedAdminInviteJoinEnterpriseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody> body{};

  EnterpriseUninvitedAdminInviteJoinEnterpriseResponse() {}

  explicit EnterpriseUninvitedAdminInviteJoinEnterpriseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnterpriseUninvitedAdminInviteJoinEnterpriseResponseBody>(model1);
      }
    }
  }


  virtual ~EnterpriseUninvitedAdminInviteJoinEnterpriseResponse() = default;
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
  EnterpriseAccountChangeLoginPasswordResponse enterpriseAccountChangeLoginPasswordWithOptions(shared_ptr<EnterpriseAccountChangeLoginPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountChangeLoginPasswordResponse enterpriseAccountChangeLoginPassword(shared_ptr<EnterpriseAccountChangeLoginPasswordRequest> request);
  EnterpriseAccountChangeSecurityEmailResponse enterpriseAccountChangeSecurityEmailWithOptions(shared_ptr<EnterpriseAccountChangeSecurityEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountChangeSecurityEmailResponse enterpriseAccountChangeSecurityEmail(shared_ptr<EnterpriseAccountChangeSecurityEmailRequest> request);
  EnterpriseAccountChangeSecurityMobileResponse enterpriseAccountChangeSecurityMobileWithOptions(shared_ptr<EnterpriseAccountChangeSecurityMobileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountChangeSecurityMobileResponse enterpriseAccountChangeSecurityMobile(shared_ptr<EnterpriseAccountChangeSecurityMobileRequest> request);
  EnterpriseAccountQueryAccountGrantedRolesResponse enterpriseAccountQueryAccountGrantedRolesWithOptions(shared_ptr<EnterpriseAccountQueryAccountGrantedRolesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountQueryAccountGrantedRolesResponse enterpriseAccountQueryAccountGrantedRoles(shared_ptr<EnterpriseAccountQueryAccountGrantedRolesRequest> request);
  EnterpriseAccountQueryAccountsInfoResponse enterpriseAccountQueryAccountsInfoWithOptions(shared_ptr<EnterpriseAccountQueryAccountsInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountQueryAccountsInfoResponse enterpriseAccountQueryAccountsInfo(shared_ptr<EnterpriseAccountQueryAccountsInfoRequest> request);
  EnterpriseAccountQueryLoginSettingsResponse enterpriseAccountQueryLoginSettingsWithOptions(shared_ptr<EnterpriseAccountQueryLoginSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountQueryLoginSettingsResponse enterpriseAccountQueryLoginSettings(shared_ptr<EnterpriseAccountQueryLoginSettingsRequest> request);
  EnterpriseAccountRemoveMfaResponse enterpriseAccountRemoveMfaWithOptions(shared_ptr<EnterpriseAccountRemoveMfaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountRemoveMfaResponse enterpriseAccountRemoveMfa(shared_ptr<EnterpriseAccountRemoveMfaRequest> request);
  EnterpriseAccountSeparateEaResponse enterpriseAccountSeparateEaWithOptions(shared_ptr<EnterpriseAccountSeparateEaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountSeparateEaResponse enterpriseAccountSeparateEa(shared_ptr<EnterpriseAccountSeparateEaRequest> request);
  EnterpriseAccountUpdateAccountAliasResponse enterpriseAccountUpdateAccountAliasWithOptions(shared_ptr<EnterpriseAccountUpdateAccountAliasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountUpdateAccountAliasResponse enterpriseAccountUpdateAccountAlias(shared_ptr<EnterpriseAccountUpdateAccountAliasRequest> request);
  EnterpriseAccountUpdateAccountBizRoleGrantResponse enterpriseAccountUpdateAccountBizRoleGrantWithOptions(shared_ptr<EnterpriseAccountUpdateAccountBizRoleGrantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountUpdateAccountBizRoleGrantResponse enterpriseAccountUpdateAccountBizRoleGrant(shared_ptr<EnterpriseAccountUpdateAccountBizRoleGrantRequest> request);
  EnterpriseAccountUpdateIpMaskResponse enterpriseAccountUpdateIpMaskWithOptions(shared_ptr<EnterpriseAccountUpdateIpMaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountUpdateIpMaskResponse enterpriseAccountUpdateIpMask(shared_ptr<EnterpriseAccountUpdateIpMaskRequest> request);
  EnterpriseAccountUpdateOperateRiskControlResponse enterpriseAccountUpdateOperateRiskControlWithOptions(shared_ptr<EnterpriseAccountUpdateOperateRiskControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountUpdateOperateRiskControlResponse enterpriseAccountUpdateOperateRiskControl(shared_ptr<EnterpriseAccountUpdateOperateRiskControlRequest> request);
  EnterpriseAccountUpdateSecurityMobileLoginStatusResponse enterpriseAccountUpdateSecurityMobileLoginStatusWithOptions(shared_ptr<EnterpriseAccountUpdateSecurityMobileLoginStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountUpdateSecurityMobileLoginStatusResponse enterpriseAccountUpdateSecurityMobileLoginStatus(shared_ptr<EnterpriseAccountUpdateSecurityMobileLoginStatusRequest> request);
  EnterpriseAccountUpdateSessionExpireTimeResponse enterpriseAccountUpdateSessionExpireTimeWithOptions(shared_ptr<EnterpriseAccountUpdateSessionExpireTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseAccountUpdateSessionExpireTimeResponse enterpriseAccountUpdateSessionExpireTime(shared_ptr<EnterpriseAccountUpdateSessionExpireTimeRequest> request);
  EnterpriseOrgQueryLoadTreeResponse enterpriseOrgQueryLoadTreeWithOptions(shared_ptr<EnterpriseOrgQueryLoadTreeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseOrgQueryLoadTreeResponse enterpriseOrgQueryLoadTree(shared_ptr<EnterpriseOrgQueryLoadTreeRequest> request);
  EnterpriseRegisterAccountResponse enterpriseRegisterAccountWithOptions(shared_ptr<EnterpriseRegisterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRegisterAccountResponse enterpriseRegisterAccount(shared_ptr<EnterpriseRegisterAccountRequest> request);
  EnterpriseRoleCreateBizRoleResponse enterpriseRoleCreateBizRoleWithOptions(shared_ptr<EnterpriseRoleCreateBizRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRoleCreateBizRoleResponse enterpriseRoleCreateBizRole(shared_ptr<EnterpriseRoleCreateBizRoleRequest> request);
  EnterpriseRoleDeleteBizRoleResponse enterpriseRoleDeleteBizRoleWithOptions(shared_ptr<EnterpriseRoleDeleteBizRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRoleDeleteBizRoleResponse enterpriseRoleDeleteBizRole(shared_ptr<EnterpriseRoleDeleteBizRoleRequest> request);
  EnterpriseRoleQueryAccountForRoleGrantByPageResponse enterpriseRoleQueryAccountForRoleGrantByPageWithOptions(shared_ptr<EnterpriseRoleQueryAccountForRoleGrantByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRoleQueryAccountForRoleGrantByPageResponse enterpriseRoleQueryAccountForRoleGrantByPage(shared_ptr<EnterpriseRoleQueryAccountForRoleGrantByPageRequest> request);
  EnterpriseRoleQueryBizRoleByPageResponse enterpriseRoleQueryBizRoleByPageWithOptions(shared_ptr<EnterpriseRoleQueryBizRoleByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRoleQueryBizRoleByPageResponse enterpriseRoleQueryBizRoleByPage(shared_ptr<EnterpriseRoleQueryBizRoleByPageRequest> request);
  EnterpriseRoleQueryBizRoleDetailResponse enterpriseRoleQueryBizRoleDetailWithOptions(shared_ptr<EnterpriseRoleQueryBizRoleDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRoleQueryBizRoleDetailResponse enterpriseRoleQueryBizRoleDetail(shared_ptr<EnterpriseRoleQueryBizRoleDetailRequest> request);
  EnterpriseRoleUpdateBizRoleResponse enterpriseRoleUpdateBizRoleWithOptions(shared_ptr<EnterpriseRoleUpdateBizRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseRoleUpdateBizRoleResponse enterpriseRoleUpdateBizRole(shared_ptr<EnterpriseRoleUpdateBizRoleRequest> request);
  EnterpriseTodoDealAccountTodoResponse enterpriseTodoDealAccountTodoWithOptions(shared_ptr<EnterpriseTodoDealAccountTodoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseTodoDealAccountTodoResponse enterpriseTodoDealAccountTodo(shared_ptr<EnterpriseTodoDealAccountTodoRequest> request);
  EnterpriseTodoQueryAccountTodoListResponse enterpriseTodoQueryAccountTodoListWithOptions(shared_ptr<EnterpriseTodoQueryAccountTodoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseTodoQueryAccountTodoListResponse enterpriseTodoQueryAccountTodoList(shared_ptr<EnterpriseTodoQueryAccountTodoListRequest> request);
  EnterpriseTodoQueryAccountTodoListByApplicantResponse enterpriseTodoQueryAccountTodoListByApplicantWithOptions(shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseTodoQueryAccountTodoListByApplicantResponse enterpriseTodoQueryAccountTodoListByApplicant(shared_ptr<EnterpriseTodoQueryAccountTodoListByApplicantRequest> request);
  EnterpriseUninvitedAdminInviteJoinEnterpriseResponse enterpriseUninvitedAdminInviteJoinEnterpriseWithOptions(shared_ptr<EnterpriseUninvitedAdminInviteJoinEnterpriseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnterpriseUninvitedAdminInviteJoinEnterpriseResponse enterpriseUninvitedAdminInviteJoinEnterprise(shared_ptr<EnterpriseUninvitedAdminInviteJoinEnterpriseRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AccountCenter20241209

#endif
