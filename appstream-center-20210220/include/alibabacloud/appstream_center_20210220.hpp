// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPSTREAM-CENTER20210220_H_
#define ALIBABACLOUD_APPSTREAM-CENTER20210220_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Appstream-center20210220 {
class FindIdpListByLoginIdentifierRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientChannel{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> loginIdentifier{};
  shared_ptr<vector<string>> supportTypes{};
  shared_ptr<string> uuid{};

  FindIdpListByLoginIdentifierRequest() {}

  explicit FindIdpListByLoginIdentifierRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientChannel) {
      res["ClientChannel"] = boost::any(*clientChannel);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (loginIdentifier) {
      res["LoginIdentifier"] = boost::any(*loginIdentifier);
    }
    if (supportTypes) {
      res["SupportTypes"] = boost::any(*supportTypes);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientChannel") != m.end() && !m["ClientChannel"].empty()) {
      clientChannel = make_shared<string>(boost::any_cast<string>(m["ClientChannel"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("LoginIdentifier") != m.end() && !m["LoginIdentifier"].empty()) {
      loginIdentifier = make_shared<string>(boost::any_cast<string>(m["LoginIdentifier"]));
    }
    if (m.find("SupportTypes") != m.end() && !m["SupportTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SupportTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SupportTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      supportTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~FindIdpListByLoginIdentifierRequest() = default;
};
class FindIdpListByLoginIdentifierResponseBodyIdpInfos : public Darabonba::Model {
public:
  shared_ptr<string> accountType{};
  shared_ptr<string> cookies{};
  shared_ptr<string> idpId{};
  shared_ptr<string> idpName{};
  shared_ptr<string> idpProvider{};
  shared_ptr<string> jumpSwitch{};
  shared_ptr<string> ssoProtocol{};
  shared_ptr<string> ssoServiceUrl{};

  FindIdpListByLoginIdentifierResponseBodyIdpInfos() {}

  explicit FindIdpListByLoginIdentifierResponseBodyIdpInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (cookies) {
      res["Cookies"] = boost::any(*cookies);
    }
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (idpName) {
      res["IdpName"] = boost::any(*idpName);
    }
    if (idpProvider) {
      res["IdpProvider"] = boost::any(*idpProvider);
    }
    if (jumpSwitch) {
      res["JumpSwitch"] = boost::any(*jumpSwitch);
    }
    if (ssoProtocol) {
      res["SsoProtocol"] = boost::any(*ssoProtocol);
    }
    if (ssoServiceUrl) {
      res["SsoServiceUrl"] = boost::any(*ssoServiceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("Cookies") != m.end() && !m["Cookies"].empty()) {
      cookies = make_shared<string>(boost::any_cast<string>(m["Cookies"]));
    }
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<string>(boost::any_cast<string>(m["IdpId"]));
    }
    if (m.find("IdpName") != m.end() && !m["IdpName"].empty()) {
      idpName = make_shared<string>(boost::any_cast<string>(m["IdpName"]));
    }
    if (m.find("IdpProvider") != m.end() && !m["IdpProvider"].empty()) {
      idpProvider = make_shared<string>(boost::any_cast<string>(m["IdpProvider"]));
    }
    if (m.find("JumpSwitch") != m.end() && !m["JumpSwitch"].empty()) {
      jumpSwitch = make_shared<string>(boost::any_cast<string>(m["JumpSwitch"]));
    }
    if (m.find("SsoProtocol") != m.end() && !m["SsoProtocol"].empty()) {
      ssoProtocol = make_shared<string>(boost::any_cast<string>(m["SsoProtocol"]));
    }
    if (m.find("SsoServiceUrl") != m.end() && !m["SsoServiceUrl"].empty()) {
      ssoServiceUrl = make_shared<string>(boost::any_cast<string>(m["SsoServiceUrl"]));
    }
  }


  virtual ~FindIdpListByLoginIdentifierResponseBodyIdpInfos() = default;
};
class FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> providerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> ssoServiceUrl{};

  FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo() {}

  explicit FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (providerId) {
      res["ProviderId"] = boost::any(*providerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (ssoServiceUrl) {
      res["SsoServiceUrl"] = boost::any(*ssoServiceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("ProviderId") != m.end() && !m["ProviderId"].empty()) {
      providerId = make_shared<string>(boost::any_cast<string>(m["ProviderId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SsoServiceUrl") != m.end() && !m["SsoServiceUrl"].empty()) {
      ssoServiceUrl = make_shared<string>(boost::any_cast<string>(m["SsoServiceUrl"]));
    }
  }


  virtual ~FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo() = default;
};
class FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> tenantAlias{};

  FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo() {}

  explicit FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (tenantAlias) {
      res["TenantAlias"] = boost::any(*tenantAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("TenantAlias") != m.end() && !m["TenantAlias"].empty()) {
      tenantAlias = make_shared<string>(boost::any_cast<string>(m["TenantAlias"]));
    }
  }


  virtual ~FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo() = default;
};
class FindIdpListByLoginIdentifierResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos>> idpInfos{};
  shared_ptr<FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo> officeSiteInfo{};
  shared_ptr<map<string, string>> popRegionConfig{};
  shared_ptr<string> profileRegion{};
  shared_ptr<string> requestId{};
  shared_ptr<FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo> tenantAliasInfo{};

  FindIdpListByLoginIdentifierResponseBody() {}

  explicit FindIdpListByLoginIdentifierResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idpInfos) {
      vector<boost::any> temp1;
      for(auto item1:*idpInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IdpInfos"] = boost::any(temp1);
    }
    if (officeSiteInfo) {
      res["OfficeSiteInfo"] = officeSiteInfo ? boost::any(officeSiteInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (popRegionConfig) {
      res["PopRegionConfig"] = boost::any(*popRegionConfig);
    }
    if (profileRegion) {
      res["ProfileRegion"] = boost::any(*profileRegion);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantAliasInfo) {
      res["TenantAliasInfo"] = tenantAliasInfo ? boost::any(tenantAliasInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdpInfos") != m.end() && !m["IdpInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["IdpInfos"].type()) {
        vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IdpInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindIdpListByLoginIdentifierResponseBodyIdpInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        idpInfos = make_shared<vector<FindIdpListByLoginIdentifierResponseBodyIdpInfos>>(expect1);
      }
    }
    if (m.find("OfficeSiteInfo") != m.end() && !m["OfficeSiteInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["OfficeSiteInfo"].type()) {
        FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OfficeSiteInfo"]));
        officeSiteInfo = make_shared<FindIdpListByLoginIdentifierResponseBodyOfficeSiteInfo>(model1);
      }
    }
    if (m.find("PopRegionConfig") != m.end() && !m["PopRegionConfig"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["PopRegionConfig"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      popRegionConfig = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ProfileRegion") != m.end() && !m["ProfileRegion"].empty()) {
      profileRegion = make_shared<string>(boost::any_cast<string>(m["ProfileRegion"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantAliasInfo") != m.end() && !m["TenantAliasInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TenantAliasInfo"].type()) {
        FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TenantAliasInfo"]));
        tenantAliasInfo = make_shared<FindIdpListByLoginIdentifierResponseBodyTenantAliasInfo>(model1);
      }
    }
  }


  virtual ~FindIdpListByLoginIdentifierResponseBody() = default;
};
class FindIdpListByLoginIdentifierResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindIdpListByLoginIdentifierResponseBody> body{};

  FindIdpListByLoginIdentifierResponse() {}

  explicit FindIdpListByLoginIdentifierResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FindIdpListByLoginIdentifierResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindIdpListByLoginIdentifierResponseBody>(model1);
      }
    }
  }


  virtual ~FindIdpListByLoginIdentifierResponse() = default;
};
class GetLoginTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> authenticationCode{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> currentStage{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> encryptedFingerPrintData{};
  shared_ptr<string> encryptedKey{};
  shared_ptr<string> encryptedPassword{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> fingerPrintData{};
  shared_ptr<string> idpId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<bool> keepAlive{};
  shared_ptr<string> keepAliveToken{};
  shared_ptr<string> loginIdentifier{};
  shared_ptr<string> loginName{};
  shared_ptr<string> networkType{};
  shared_ptr<string> newPassword{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> oldPassword{};
  shared_ptr<string> password{};
  shared_ptr<string> phone{};
  shared_ptr<string> phoneVerifyCode{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> ssoExtendsCookies{};
  shared_ptr<string> ssoSessionToken{};
  shared_ptr<string> tokenCode{};
  shared_ptr<string> umidToken{};
  shared_ptr<string> uuid{};

  GetLoginTokenRequest() {}

  explicit GetLoginTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authenticationCode) {
      res["AuthenticationCode"] = boost::any(*authenticationCode);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (currentStage) {
      res["CurrentStage"] = boost::any(*currentStage);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (encryptedFingerPrintData) {
      res["EncryptedFingerPrintData"] = boost::any(*encryptedFingerPrintData);
    }
    if (encryptedKey) {
      res["EncryptedKey"] = boost::any(*encryptedKey);
    }
    if (encryptedPassword) {
      res["EncryptedPassword"] = boost::any(*encryptedPassword);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (fingerPrintData) {
      res["FingerPrintData"] = boost::any(*fingerPrintData);
    }
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (keepAlive) {
      res["KeepAlive"] = boost::any(*keepAlive);
    }
    if (keepAliveToken) {
      res["KeepAliveToken"] = boost::any(*keepAliveToken);
    }
    if (loginIdentifier) {
      res["LoginIdentifier"] = boost::any(*loginIdentifier);
    }
    if (loginName) {
      res["LoginName"] = boost::any(*loginName);
    }
    if (networkType) {
      res["NetworkType"] = boost::any(*networkType);
    }
    if (newPassword) {
      res["NewPassword"] = boost::any(*newPassword);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (oldPassword) {
      res["OldPassword"] = boost::any(*oldPassword);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (phoneVerifyCode) {
      res["PhoneVerifyCode"] = boost::any(*phoneVerifyCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (ssoExtendsCookies) {
      res["SsoExtendsCookies"] = boost::any(*ssoExtendsCookies);
    }
    if (ssoSessionToken) {
      res["SsoSessionToken"] = boost::any(*ssoSessionToken);
    }
    if (tokenCode) {
      res["TokenCode"] = boost::any(*tokenCode);
    }
    if (umidToken) {
      res["UmidToken"] = boost::any(*umidToken);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthenticationCode") != m.end() && !m["AuthenticationCode"].empty()) {
      authenticationCode = make_shared<string>(boost::any_cast<string>(m["AuthenticationCode"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CurrentStage") != m.end() && !m["CurrentStage"].empty()) {
      currentStage = make_shared<string>(boost::any_cast<string>(m["CurrentStage"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EncryptedFingerPrintData") != m.end() && !m["EncryptedFingerPrintData"].empty()) {
      encryptedFingerPrintData = make_shared<string>(boost::any_cast<string>(m["EncryptedFingerPrintData"]));
    }
    if (m.find("EncryptedKey") != m.end() && !m["EncryptedKey"].empty()) {
      encryptedKey = make_shared<string>(boost::any_cast<string>(m["EncryptedKey"]));
    }
    if (m.find("EncryptedPassword") != m.end() && !m["EncryptedPassword"].empty()) {
      encryptedPassword = make_shared<string>(boost::any_cast<string>(m["EncryptedPassword"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("FingerPrintData") != m.end() && !m["FingerPrintData"].empty()) {
      fingerPrintData = make_shared<string>(boost::any_cast<string>(m["FingerPrintData"]));
    }
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<string>(boost::any_cast<string>(m["IdpId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("KeepAlive") != m.end() && !m["KeepAlive"].empty()) {
      keepAlive = make_shared<bool>(boost::any_cast<bool>(m["KeepAlive"]));
    }
    if (m.find("KeepAliveToken") != m.end() && !m["KeepAliveToken"].empty()) {
      keepAliveToken = make_shared<string>(boost::any_cast<string>(m["KeepAliveToken"]));
    }
    if (m.find("LoginIdentifier") != m.end() && !m["LoginIdentifier"].empty()) {
      loginIdentifier = make_shared<string>(boost::any_cast<string>(m["LoginIdentifier"]));
    }
    if (m.find("LoginName") != m.end() && !m["LoginName"].empty()) {
      loginName = make_shared<string>(boost::any_cast<string>(m["LoginName"]));
    }
    if (m.find("NetworkType") != m.end() && !m["NetworkType"].empty()) {
      networkType = make_shared<string>(boost::any_cast<string>(m["NetworkType"]));
    }
    if (m.find("NewPassword") != m.end() && !m["NewPassword"].empty()) {
      newPassword = make_shared<string>(boost::any_cast<string>(m["NewPassword"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("OldPassword") != m.end() && !m["OldPassword"].empty()) {
      oldPassword = make_shared<string>(boost::any_cast<string>(m["OldPassword"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("PhoneVerifyCode") != m.end() && !m["PhoneVerifyCode"].empty()) {
      phoneVerifyCode = make_shared<string>(boost::any_cast<string>(m["PhoneVerifyCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SsoExtendsCookies") != m.end() && !m["SsoExtendsCookies"].empty()) {
      ssoExtendsCookies = make_shared<string>(boost::any_cast<string>(m["SsoExtendsCookies"]));
    }
    if (m.find("SsoSessionToken") != m.end() && !m["SsoSessionToken"].empty()) {
      ssoSessionToken = make_shared<string>(boost::any_cast<string>(m["SsoSessionToken"]));
    }
    if (m.find("TokenCode") != m.end() && !m["TokenCode"].empty()) {
      tokenCode = make_shared<string>(boost::any_cast<string>(m["TokenCode"]));
    }
    if (m.find("UmidToken") != m.end() && !m["UmidToken"].empty()) {
      umidToken = make_shared<string>(boost::any_cast<string>(m["UmidToken"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetLoginTokenRequest() = default;
};
class GetLoginTokenResponseBodyPasswordStrategy : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tenantAlternativeChars{};
  shared_ptr<long> tenantPasswordLength{};

  GetLoginTokenResponseBodyPasswordStrategy() {}

  explicit GetLoginTokenResponseBodyPasswordStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tenantAlternativeChars) {
      res["TenantAlternativeChars"] = boost::any(*tenantAlternativeChars);
    }
    if (tenantPasswordLength) {
      res["TenantPasswordLength"] = boost::any(*tenantPasswordLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TenantAlternativeChars") != m.end() && !m["TenantAlternativeChars"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TenantAlternativeChars"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TenantAlternativeChars"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tenantAlternativeChars = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TenantPasswordLength") != m.end() && !m["TenantPasswordLength"].empty()) {
      tenantPasswordLength = make_shared<long>(boost::any_cast<long>(m["TenantPasswordLength"]));
    }
  }


  virtual ~GetLoginTokenResponseBodyPasswordStrategy() = default;
};
class GetLoginTokenResponseBodyRiskVerifyInfo : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<long> lastLockDuration{};
  shared_ptr<bool> locked{};
  shared_ptr<string> phone{};

  GetLoginTokenResponseBodyRiskVerifyInfo() {}

  explicit GetLoginTokenResponseBodyRiskVerifyInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lastLockDuration) {
      res["LastLockDuration"] = boost::any(*lastLockDuration);
    }
    if (locked) {
      res["Locked"] = boost::any(*locked);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("LastLockDuration") != m.end() && !m["LastLockDuration"].empty()) {
      lastLockDuration = make_shared<long>(boost::any_cast<long>(m["LastLockDuration"]));
    }
    if (m.find("Locked") != m.end() && !m["Locked"].empty()) {
      locked = make_shared<bool>(boost::any_cast<bool>(m["Locked"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~GetLoginTokenResponseBodyRiskVerifyInfo() = default;
};
class GetLoginTokenResponseBodyTenantInfos : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> tenantAlias{};

  GetLoginTokenResponseBodyTenantInfos() {}

  explicit GetLoginTokenResponseBodyTenantInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (tenantAlias) {
      res["TenantAlias"] = boost::any(*tenantAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("TenantAlias") != m.end() && !m["TenantAlias"].empty()) {
      tenantAlias = make_shared<string>(boost::any_cast<string>(m["TenantAlias"]));
    }
  }


  virtual ~GetLoginTokenResponseBodyTenantInfos() = default;
};
class GetLoginTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessType{};
  shared_ptr<string> accountType{};
  shared_ptr<string> adDomain{};
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> idpId{};
  shared_ptr<string> industry{};
  shared_ptr<string> keepAliveToken{};
  shared_ptr<string> label{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> nextStage{};
  shared_ptr<vector<string>> officeSites{};
  shared_ptr<GetLoginTokenResponseBodyPasswordStrategy> passwordStrategy{};
  shared_ptr<string> phone{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<string> qrCodePng{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<GetLoginTokenResponseBodyRiskVerifyInfo> riskVerifyInfo{};
  shared_ptr<string> secret{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tenantAlias{};
  shared_ptr<long> tenantId{};
  shared_ptr<vector<GetLoginTokenResponseBodyTenantInfos>> tenantInfos{};
  shared_ptr<string> vpcRegionId{};
  shared_ptr<string> windowDisplayMode{};
  shared_ptr<string> wyId{};

  GetLoginTokenResponseBody() {}

  explicit GetLoginTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessType) {
      res["AccessType"] = boost::any(*accessType);
    }
    if (accountType) {
      res["AccountType"] = boost::any(*accountType);
    }
    if (adDomain) {
      res["AdDomain"] = boost::any(*adDomain);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (idpId) {
      res["IdpId"] = boost::any(*idpId);
    }
    if (industry) {
      res["Industry"] = boost::any(*industry);
    }
    if (keepAliveToken) {
      res["KeepAliveToken"] = boost::any(*keepAliveToken);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (nextStage) {
      res["NextStage"] = boost::any(*nextStage);
    }
    if (officeSites) {
      res["OfficeSites"] = boost::any(*officeSites);
    }
    if (passwordStrategy) {
      res["PasswordStrategy"] = passwordStrategy ? boost::any(passwordStrategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (qrCodePng) {
      res["QrCodePng"] = boost::any(*qrCodePng);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (riskVerifyInfo) {
      res["RiskVerifyInfo"] = riskVerifyInfo ? boost::any(riskVerifyInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tenantAlias) {
      res["TenantAlias"] = boost::any(*tenantAlias);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantInfos) {
      vector<boost::any> temp1;
      for(auto item1:*tenantInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TenantInfos"] = boost::any(temp1);
    }
    if (vpcRegionId) {
      res["VpcRegionId"] = boost::any(*vpcRegionId);
    }
    if (windowDisplayMode) {
      res["WindowDisplayMode"] = boost::any(*windowDisplayMode);
    }
    if (wyId) {
      res["WyId"] = boost::any(*wyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessType") != m.end() && !m["AccessType"].empty()) {
      accessType = make_shared<string>(boost::any_cast<string>(m["AccessType"]));
    }
    if (m.find("AccountType") != m.end() && !m["AccountType"].empty()) {
      accountType = make_shared<string>(boost::any_cast<string>(m["AccountType"]));
    }
    if (m.find("AdDomain") != m.end() && !m["AdDomain"].empty()) {
      adDomain = make_shared<string>(boost::any_cast<string>(m["AdDomain"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("IdpId") != m.end() && !m["IdpId"].empty()) {
      idpId = make_shared<string>(boost::any_cast<string>(m["IdpId"]));
    }
    if (m.find("Industry") != m.end() && !m["Industry"].empty()) {
      industry = make_shared<string>(boost::any_cast<string>(m["Industry"]));
    }
    if (m.find("KeepAliveToken") != m.end() && !m["KeepAliveToken"].empty()) {
      keepAliveToken = make_shared<string>(boost::any_cast<string>(m["KeepAliveToken"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("NextStage") != m.end() && !m["NextStage"].empty()) {
      nextStage = make_shared<string>(boost::any_cast<string>(m["NextStage"]));
    }
    if (m.find("OfficeSites") != m.end() && !m["OfficeSites"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSites"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSites"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSites = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PasswordStrategy") != m.end() && !m["PasswordStrategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["PasswordStrategy"].type()) {
        GetLoginTokenResponseBodyPasswordStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PasswordStrategy"]));
        passwordStrategy = make_shared<GetLoginTokenResponseBodyPasswordStrategy>(model1);
      }
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("QrCodePng") != m.end() && !m["QrCodePng"].empty()) {
      qrCodePng = make_shared<string>(boost::any_cast<string>(m["QrCodePng"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RiskVerifyInfo") != m.end() && !m["RiskVerifyInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RiskVerifyInfo"].type()) {
        GetLoginTokenResponseBodyRiskVerifyInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RiskVerifyInfo"]));
        riskVerifyInfo = make_shared<GetLoginTokenResponseBodyRiskVerifyInfo>(model1);
      }
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TenantAlias") != m.end() && !m["TenantAlias"].empty()) {
      tenantAlias = make_shared<string>(boost::any_cast<string>(m["TenantAlias"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("TenantInfos") != m.end() && !m["TenantInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["TenantInfos"].type()) {
        vector<GetLoginTokenResponseBodyTenantInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TenantInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLoginTokenResponseBodyTenantInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tenantInfos = make_shared<vector<GetLoginTokenResponseBodyTenantInfos>>(expect1);
      }
    }
    if (m.find("VpcRegionId") != m.end() && !m["VpcRegionId"].empty()) {
      vpcRegionId = make_shared<string>(boost::any_cast<string>(m["VpcRegionId"]));
    }
    if (m.find("WindowDisplayMode") != m.end() && !m["WindowDisplayMode"].empty()) {
      windowDisplayMode = make_shared<string>(boost::any_cast<string>(m["WindowDisplayMode"]));
    }
    if (m.find("WyId") != m.end() && !m["WyId"].empty()) {
      wyId = make_shared<string>(boost::any_cast<string>(m["WyId"]));
    }
  }


  virtual ~GetLoginTokenResponseBody() = default;
};
class GetLoginTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLoginTokenResponseBody> body{};

  GetLoginTokenResponse() {}

  explicit GetLoginTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLoginTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLoginTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetLoginTokenResponse() = default;
};
class RefreshLoginTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientType{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginIdentifier{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> profileRegion{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  RefreshLoginTokenRequest() {}

  explicit RefreshLoginTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginIdentifier) {
      res["LoginIdentifier"] = boost::any(*loginIdentifier);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (profileRegion) {
      res["ProfileRegion"] = boost::any(*profileRegion);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginIdentifier") != m.end() && !m["LoginIdentifier"].empty()) {
      loginIdentifier = make_shared<string>(boost::any_cast<string>(m["LoginIdentifier"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("ProfileRegion") != m.end() && !m["ProfileRegion"].empty()) {
      profileRegion = make_shared<string>(boost::any_cast<string>(m["ProfileRegion"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~RefreshLoginTokenRequest() = default;
};
class RefreshLoginTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loginToken{};
  shared_ptr<string> requestId{};

  RefreshLoginTokenResponseBody() {}

  explicit RefreshLoginTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshLoginTokenResponseBody() = default;
};
class RefreshLoginTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshLoginTokenResponseBody> body{};

  RefreshLoginTokenResponse() {}

  explicit RefreshLoginTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshLoginTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshLoginTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshLoginTokenResponse() = default;
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
  FindIdpListByLoginIdentifierResponse findIdpListByLoginIdentifierWithOptions(shared_ptr<FindIdpListByLoginIdentifierRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindIdpListByLoginIdentifierResponse findIdpListByLoginIdentifier(shared_ptr<FindIdpListByLoginIdentifierRequest> request);
  GetLoginTokenResponse getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginTokenResponse getLoginToken(shared_ptr<GetLoginTokenRequest> request);
  RefreshLoginTokenResponse refreshLoginTokenWithOptions(shared_ptr<RefreshLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshLoginTokenResponse refreshLoginToken(shared_ptr<RefreshLoginTokenRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appstream-center20210220

#endif
