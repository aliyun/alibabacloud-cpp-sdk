// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ECD20201002_H_
#define ALIBABACLOUD_ECD20201002_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ecd20201002 {
class ApproveFotaUpdateRequest : public Darabonba::Model {
public:
  shared_ptr<string> appVersion{};
  shared_ptr<string> clientId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  ApproveFotaUpdateRequest() {}

  explicit ApproveFotaUpdateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~ApproveFotaUpdateRequest() = default;
};
class ApproveFotaUpdateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ApproveFotaUpdateResponseBody() {}

  explicit ApproveFotaUpdateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApproveFotaUpdateResponseBody() = default;
};
class ApproveFotaUpdateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApproveFotaUpdateResponseBody> body{};

  ApproveFotaUpdateResponse() {}

  explicit ApproveFotaUpdateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApproveFotaUpdateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApproveFotaUpdateResponseBody>(model1);
      }
    }
  }


  virtual ~ApproveFotaUpdateResponse() = default;
};
class ChangePasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> newPassword{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> oldPassword{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  ChangePasswordRequest() {}

  explicit ChangePasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ChangePasswordRequest() = default;
};
class ChangePasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> loginToken{};
  shared_ptr<string> requestId{};

  ChangePasswordResponseBody() {}

  explicit ChangePasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ChangePasswordResponseBody() = default;
};
class ChangePasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChangePasswordResponseBody> body{};

  ChangePasswordResponse() {}

  explicit ChangePasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangePasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangePasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ChangePasswordResponse() = default;
};
class DeleteFingerPrintTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientToken{};
  shared_ptr<long> index{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  DeleteFingerPrintTemplateRequest() {}

  explicit DeleteFingerPrintTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~DeleteFingerPrintTemplateRequest() = default;
};
class DeleteFingerPrintTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFingerPrintTemplateResponseBody() {}

  explicit DeleteFingerPrintTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFingerPrintTemplateResponseBody() = default;
};
class DeleteFingerPrintTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFingerPrintTemplateResponseBody> body{};

  DeleteFingerPrintTemplateResponse() {}

  explicit DeleteFingerPrintTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFingerPrintTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFingerPrintTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFingerPrintTemplateResponse() = default;
};
class DescribeDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<vector<string>> directoryId{};
  shared_ptr<string> regionId{};

  DescribeDirectoriesRequest() {}

  explicit DescribeDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DirectoryId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DirectoryId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      directoryId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeDirectoriesRequest() = default;
};
class DescribeDirectoriesResponseBodyDirectories : public Darabonba::Model {
public:
  shared_ptr<string> desktopAccessType{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryType{};
  shared_ptr<string> providerId{};
  shared_ptr<string> ssoServiceUrl{};

  DescribeDirectoriesResponseBodyDirectories() {}

  explicit DescribeDirectoriesResponseBodyDirectories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (directoryType) {
      res["DirectoryType"] = boost::any(*directoryType);
    }
    if (providerId) {
      res["ProviderId"] = boost::any(*providerId);
    }
    if (ssoServiceUrl) {
      res["SsoServiceUrl"] = boost::any(*ssoServiceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("DirectoryType") != m.end() && !m["DirectoryType"].empty()) {
      directoryType = make_shared<string>(boost::any_cast<string>(m["DirectoryType"]));
    }
    if (m.find("ProviderId") != m.end() && !m["ProviderId"].empty()) {
      providerId = make_shared<string>(boost::any_cast<string>(m["ProviderId"]));
    }
    if (m.find("SsoServiceUrl") != m.end() && !m["SsoServiceUrl"].empty()) {
      ssoServiceUrl = make_shared<string>(boost::any_cast<string>(m["SsoServiceUrl"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBodyDirectories() = default;
};
class DescribeDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDirectoriesResponseBodyDirectories>> directories{};
  shared_ptr<string> requestId{};

  DescribeDirectoriesResponseBody() {}

  explicit DescribeDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directories) {
      vector<boost::any> temp1;
      for(auto item1:*directories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Directories"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Directories") != m.end() && !m["Directories"].empty()) {
      if (typeid(vector<boost::any>) == m["Directories"].type()) {
        vector<DescribeDirectoriesResponseBodyDirectories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Directories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDirectoriesResponseBodyDirectories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        directories = make_shared<vector<DescribeDirectoriesResponseBodyDirectories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDirectoriesResponseBody() = default;
};
class DescribeDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDirectoriesResponseBody> body{};

  DescribeDirectoriesResponse() {}

  explicit DescribeDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDirectoriesResponse() = default;
};
class DescribeFingerPrintTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  DescribeFingerPrintTemplatesRequest() {}

  explicit DescribeFingerPrintTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~DescribeFingerPrintTemplatesRequest() = default;
};
class DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> endUserId{};
  shared_ptr<long> index{};
  shared_ptr<string> loginTime{};
  shared_ptr<string> officeSiteId{};

  DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates() {}

  explicit DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (loginTime) {
      res["LoginTime"] = boost::any(*loginTime);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("LoginTime") != m.end() && !m["LoginTime"].empty()) {
      loginTime = make_shared<string>(boost::any_cast<string>(m["LoginTime"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
  }


  virtual ~DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates() = default;
};
class DescribeFingerPrintTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates>> fingerPrintTemplates{};
  shared_ptr<string> requestId{};

  DescribeFingerPrintTemplatesResponseBody() {}

  explicit DescribeFingerPrintTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fingerPrintTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*fingerPrintTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FingerPrintTemplates"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FingerPrintTemplates") != m.end() && !m["FingerPrintTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["FingerPrintTemplates"].type()) {
        vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FingerPrintTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fingerPrintTemplates = make_shared<vector<DescribeFingerPrintTemplatesResponseBodyFingerPrintTemplates>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFingerPrintTemplatesResponseBody() = default;
};
class DescribeFingerPrintTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFingerPrintTemplatesResponseBody> body{};

  DescribeFingerPrintTemplatesResponse() {}

  explicit DescribeFingerPrintTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFingerPrintTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFingerPrintTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFingerPrintTemplatesResponse() = default;
};
class DescribeGlobalDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> desktopAccessType{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> loginRegionId{};
  shared_ptr<string> loginToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> orderBy{};
  shared_ptr<bool> queryFotaUpdate{};
  shared_ptr<string> regionId{};
  shared_ptr<string> searchRegionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sortType{};
  shared_ptr<bool> withoutLatency{};

  DescribeGlobalDesktopsRequest() {}

  explicit DescribeGlobalDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (loginRegionId) {
      res["LoginRegionId"] = boost::any(*loginRegionId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (queryFotaUpdate) {
      res["QueryFotaUpdate"] = boost::any(*queryFotaUpdate);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (searchRegionId) {
      res["SearchRegionId"] = boost::any(*searchRegionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sortType) {
      res["SortType"] = boost::any(*sortType);
    }
    if (withoutLatency) {
      res["WithoutLatency"] = boost::any(*withoutLatency);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("LoginRegionId") != m.end() && !m["LoginRegionId"].empty()) {
      loginRegionId = make_shared<string>(boost::any_cast<string>(m["LoginRegionId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("QueryFotaUpdate") != m.end() && !m["QueryFotaUpdate"].empty()) {
      queryFotaUpdate = make_shared<bool>(boost::any_cast<bool>(m["QueryFotaUpdate"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SearchRegionId") != m.end() && !m["SearchRegionId"].empty()) {
      searchRegionId = make_shared<string>(boost::any_cast<string>(m["SearchRegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SortType") != m.end() && !m["SortType"].empty()) {
      sortType = make_shared<string>(boost::any_cast<string>(m["SortType"]));
    }
    if (m.find("WithoutLatency") != m.end() && !m["WithoutLatency"].empty()) {
      withoutLatency = make_shared<bool>(boost::any_cast<bool>(m["WithoutLatency"]));
    }
  }


  virtual ~DescribeGlobalDesktopsRequest() = default;
};
class DescribeGlobalDesktopsResponseBodyDesktopsClients : public Darabonba::Model {
public:
  shared_ptr<string> clientType{};
  shared_ptr<string> status{};

  DescribeGlobalDesktopsResponseBodyDesktopsClients() {}

  explicit DescribeGlobalDesktopsResponseBodyDesktopsClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBodyDesktopsClients() = default;
};
class DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers : public Darabonba::Model {
public:
  shared_ptr<bool> allowClientSetting{};
  shared_ptr<string> cronExpression{};
  shared_ptr<bool> enforce{};
  shared_ptr<string> executionTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> operationType{};
  shared_ptr<string> resetType{};
  shared_ptr<string> timerType{};

  DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers() {}

  explicit DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowClientSetting) {
      res["AllowClientSetting"] = boost::any(*allowClientSetting);
    }
    if (cronExpression) {
      res["CronExpression"] = boost::any(*cronExpression);
    }
    if (enforce) {
      res["Enforce"] = boost::any(*enforce);
    }
    if (executionTime) {
      res["ExecutionTime"] = boost::any(*executionTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (resetType) {
      res["ResetType"] = boost::any(*resetType);
    }
    if (timerType) {
      res["TimerType"] = boost::any(*timerType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowClientSetting") != m.end() && !m["AllowClientSetting"].empty()) {
      allowClientSetting = make_shared<bool>(boost::any_cast<bool>(m["AllowClientSetting"]));
    }
    if (m.find("CronExpression") != m.end() && !m["CronExpression"].empty()) {
      cronExpression = make_shared<string>(boost::any_cast<string>(m["CronExpression"]));
    }
    if (m.find("Enforce") != m.end() && !m["Enforce"].empty()) {
      enforce = make_shared<bool>(boost::any_cast<bool>(m["Enforce"]));
    }
    if (m.find("ExecutionTime") != m.end() && !m["ExecutionTime"].empty()) {
      executionTime = make_shared<string>(boost::any_cast<string>(m["ExecutionTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("ResetType") != m.end() && !m["ResetType"].empty()) {
      resetType = make_shared<string>(boost::any_cast<string>(m["ResetType"]));
    }
    if (m.find("TimerType") != m.end() && !m["TimerType"].empty()) {
      timerType = make_shared<string>(boost::any_cast<string>(m["TimerType"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers() = default;
};
class DescribeGlobalDesktopsResponseBodyDesktopsDisks : public Darabonba::Model {
public:
  shared_ptr<string> diskId{};
  shared_ptr<long> diskSize{};
  shared_ptr<string> diskType{};

  DescribeGlobalDesktopsResponseBodyDesktopsDisks() {}

  explicit DescribeGlobalDesktopsResponseBodyDesktopsDisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskSize) {
      res["DiskSize"] = boost::any(*diskSize);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskSize") != m.end() && !m["DiskSize"].empty()) {
      diskSize = make_shared<long>(boost::any_cast<long>(m["DiskSize"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBodyDesktopsDisks() = default;
};
class DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> currentAppVersion{};
  shared_ptr<bool> force{};
  shared_ptr<string> newAppVersion{};
  shared_ptr<string> project{};
  shared_ptr<string> releaseNote{};
  shared_ptr<string> releaseNoteEn{};
  shared_ptr<string> releaseNoteJp{};
  shared_ptr<string> size{};

  DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate() {}

  explicit DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (currentAppVersion) {
      res["CurrentAppVersion"] = boost::any(*currentAppVersion);
    }
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (newAppVersion) {
      res["NewAppVersion"] = boost::any(*newAppVersion);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (releaseNote) {
      res["ReleaseNote"] = boost::any(*releaseNote);
    }
    if (releaseNoteEn) {
      res["ReleaseNoteEn"] = boost::any(*releaseNoteEn);
    }
    if (releaseNoteJp) {
      res["ReleaseNoteJp"] = boost::any(*releaseNoteJp);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("CurrentAppVersion") != m.end() && !m["CurrentAppVersion"].empty()) {
      currentAppVersion = make_shared<string>(boost::any_cast<string>(m["CurrentAppVersion"]));
    }
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("NewAppVersion") != m.end() && !m["NewAppVersion"].empty()) {
      newAppVersion = make_shared<string>(boost::any_cast<string>(m["NewAppVersion"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("ReleaseNote") != m.end() && !m["ReleaseNote"].empty()) {
      releaseNote = make_shared<string>(boost::any_cast<string>(m["ReleaseNote"]));
    }
    if (m.find("ReleaseNoteEn") != m.end() && !m["ReleaseNoteEn"].empty()) {
      releaseNoteEn = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteEn"]));
    }
    if (m.find("ReleaseNoteJp") != m.end() && !m["ReleaseNoteJp"].empty()) {
      releaseNoteJp = make_shared<string>(boost::any_cast<string>(m["ReleaseNoteJp"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate() = default;
};
class DescribeGlobalDesktopsResponseBodyDesktopsSessions : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> establishmentTime{};

  DescribeGlobalDesktopsResponseBodyDesktopsSessions() {}

  explicit DescribeGlobalDesktopsResponseBodyDesktopsSessions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (establishmentTime) {
      res["EstablishmentTime"] = boost::any(*establishmentTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("EstablishmentTime") != m.end() && !m["EstablishmentTime"].empty()) {
      establishmentTime = make_shared<string>(boost::any_cast<string>(m["EstablishmentTime"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBodyDesktopsSessions() = default;
};
class DescribeGlobalDesktopsResponseBodyDesktops : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<vector<DescribeGlobalDesktopsResponseBodyDesktopsClients>> clients{};
  shared_ptr<string> connectionStatus{};
  shared_ptr<long> cpu{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> desktopGroupId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> desktopName{};
  shared_ptr<string> desktopStatus{};
  shared_ptr<vector<DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers>> desktopTimers{};
  shared_ptr<string> desktopType{};
  shared_ptr<string> directoryId{};
  shared_ptr<vector<DescribeGlobalDesktopsResponseBodyDesktopsDisks>> disks{};
  shared_ptr<string> endUserId{};
  shared_ptr<vector<string>> endUserIds{};
  shared_ptr<string> expiredTime{};
  shared_ptr<DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate> fotaUpdate{};
  shared_ptr<long> gpuMemory{};
  shared_ptr<bool> hibernationBeta{};
  shared_ptr<string> hostName{};
  shared_ptr<string> imageId{};
  shared_ptr<string> lastStartTime{};
  shared_ptr<string> localName{};
  shared_ptr<vector<string>> managementFlags{};
  shared_ptr<long> memory{};
  shared_ptr<string> networkInterfaceIp{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> os{};
  shared_ptr<string> osType{};
  shared_ptr<string> platform{};
  shared_ptr<string> policyGroupId{};
  shared_ptr<string> protocolType{};
  shared_ptr<string> realDesktopId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionType{};
  shared_ptr<vector<DescribeGlobalDesktopsResponseBodyDesktopsSessions>> sessions{};
  shared_ptr<bool> supportHibernation{};
  shared_ptr<string> userCustomName{};

  DescribeGlobalDesktopsResponseBodyDesktops() {}

  explicit DescribeGlobalDesktopsResponseBodyDesktops(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (clients) {
      vector<boost::any> temp1;
      for(auto item1:*clients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clients"] = boost::any(temp1);
    }
    if (connectionStatus) {
      res["ConnectionStatus"] = boost::any(*connectionStatus);
    }
    if (cpu) {
      res["Cpu"] = boost::any(*cpu);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (desktopGroupId) {
      res["DesktopGroupId"] = boost::any(*desktopGroupId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (desktopName) {
      res["DesktopName"] = boost::any(*desktopName);
    }
    if (desktopStatus) {
      res["DesktopStatus"] = boost::any(*desktopStatus);
    }
    if (desktopTimers) {
      vector<boost::any> temp1;
      for(auto item1:*desktopTimers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DesktopTimers"] = boost::any(temp1);
    }
    if (desktopType) {
      res["DesktopType"] = boost::any(*desktopType);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (disks) {
      vector<boost::any> temp1;
      for(auto item1:*disks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Disks"] = boost::any(temp1);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (endUserIds) {
      res["EndUserIds"] = boost::any(*endUserIds);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (fotaUpdate) {
      res["FotaUpdate"] = fotaUpdate ? boost::any(fotaUpdate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gpuMemory) {
      res["GpuMemory"] = boost::any(*gpuMemory);
    }
    if (hibernationBeta) {
      res["HibernationBeta"] = boost::any(*hibernationBeta);
    }
    if (hostName) {
      res["HostName"] = boost::any(*hostName);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (lastStartTime) {
      res["LastStartTime"] = boost::any(*lastStartTime);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (managementFlags) {
      res["ManagementFlags"] = boost::any(*managementFlags);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (networkInterfaceIp) {
      res["NetworkInterfaceIp"] = boost::any(*networkInterfaceIp);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (os) {
      res["Os"] = boost::any(*os);
    }
    if (osType) {
      res["OsType"] = boost::any(*osType);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (policyGroupId) {
      res["PolicyGroupId"] = boost::any(*policyGroupId);
    }
    if (protocolType) {
      res["ProtocolType"] = boost::any(*protocolType);
    }
    if (realDesktopId) {
      res["RealDesktopId"] = boost::any(*realDesktopId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionType) {
      res["SessionType"] = boost::any(*sessionType);
    }
    if (sessions) {
      vector<boost::any> temp1;
      for(auto item1:*sessions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sessions"] = boost::any(temp1);
    }
    if (supportHibernation) {
      res["SupportHibernation"] = boost::any(*supportHibernation);
    }
    if (userCustomName) {
      res["UserCustomName"] = boost::any(*userCustomName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(vector<boost::any>) == m["Clients"].type()) {
        vector<DescribeGlobalDesktopsResponseBodyDesktopsClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDesktopsResponseBodyDesktopsClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clients = make_shared<vector<DescribeGlobalDesktopsResponseBodyDesktopsClients>>(expect1);
      }
    }
    if (m.find("ConnectionStatus") != m.end() && !m["ConnectionStatus"].empty()) {
      connectionStatus = make_shared<string>(boost::any_cast<string>(m["ConnectionStatus"]));
    }
    if (m.find("Cpu") != m.end() && !m["Cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["Cpu"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("DesktopGroupId") != m.end() && !m["DesktopGroupId"].empty()) {
      desktopGroupId = make_shared<string>(boost::any_cast<string>(m["DesktopGroupId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("DesktopName") != m.end() && !m["DesktopName"].empty()) {
      desktopName = make_shared<string>(boost::any_cast<string>(m["DesktopName"]));
    }
    if (m.find("DesktopStatus") != m.end() && !m["DesktopStatus"].empty()) {
      desktopStatus = make_shared<string>(boost::any_cast<string>(m["DesktopStatus"]));
    }
    if (m.find("DesktopTimers") != m.end() && !m["DesktopTimers"].empty()) {
      if (typeid(vector<boost::any>) == m["DesktopTimers"].type()) {
        vector<DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DesktopTimers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        desktopTimers = make_shared<vector<DescribeGlobalDesktopsResponseBodyDesktopsDesktopTimers>>(expect1);
      }
    }
    if (m.find("DesktopType") != m.end() && !m["DesktopType"].empty()) {
      desktopType = make_shared<string>(boost::any_cast<string>(m["DesktopType"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("Disks") != m.end() && !m["Disks"].empty()) {
      if (typeid(vector<boost::any>) == m["Disks"].type()) {
        vector<DescribeGlobalDesktopsResponseBodyDesktopsDisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Disks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDesktopsResponseBodyDesktopsDisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        disks = make_shared<vector<DescribeGlobalDesktopsResponseBodyDesktopsDisks>>(expect1);
      }
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("EndUserIds") != m.end() && !m["EndUserIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EndUserIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EndUserIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      endUserIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("FotaUpdate") != m.end() && !m["FotaUpdate"].empty()) {
      if (typeid(map<string, boost::any>) == m["FotaUpdate"].type()) {
        DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FotaUpdate"]));
        fotaUpdate = make_shared<DescribeGlobalDesktopsResponseBodyDesktopsFotaUpdate>(model1);
      }
    }
    if (m.find("GpuMemory") != m.end() && !m["GpuMemory"].empty()) {
      gpuMemory = make_shared<long>(boost::any_cast<long>(m["GpuMemory"]));
    }
    if (m.find("HibernationBeta") != m.end() && !m["HibernationBeta"].empty()) {
      hibernationBeta = make_shared<bool>(boost::any_cast<bool>(m["HibernationBeta"]));
    }
    if (m.find("HostName") != m.end() && !m["HostName"].empty()) {
      hostName = make_shared<string>(boost::any_cast<string>(m["HostName"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("LastStartTime") != m.end() && !m["LastStartTime"].empty()) {
      lastStartTime = make_shared<string>(boost::any_cast<string>(m["LastStartTime"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("ManagementFlags") != m.end() && !m["ManagementFlags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ManagementFlags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ManagementFlags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      managementFlags = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("NetworkInterfaceIp") != m.end() && !m["NetworkInterfaceIp"].empty()) {
      networkInterfaceIp = make_shared<string>(boost::any_cast<string>(m["NetworkInterfaceIp"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Os") != m.end() && !m["Os"].empty()) {
      os = make_shared<string>(boost::any_cast<string>(m["Os"]));
    }
    if (m.find("OsType") != m.end() && !m["OsType"].empty()) {
      osType = make_shared<string>(boost::any_cast<string>(m["OsType"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PolicyGroupId") != m.end() && !m["PolicyGroupId"].empty()) {
      policyGroupId = make_shared<string>(boost::any_cast<string>(m["PolicyGroupId"]));
    }
    if (m.find("ProtocolType") != m.end() && !m["ProtocolType"].empty()) {
      protocolType = make_shared<string>(boost::any_cast<string>(m["ProtocolType"]));
    }
    if (m.find("RealDesktopId") != m.end() && !m["RealDesktopId"].empty()) {
      realDesktopId = make_shared<string>(boost::any_cast<string>(m["RealDesktopId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionType") != m.end() && !m["SessionType"].empty()) {
      sessionType = make_shared<string>(boost::any_cast<string>(m["SessionType"]));
    }
    if (m.find("Sessions") != m.end() && !m["Sessions"].empty()) {
      if (typeid(vector<boost::any>) == m["Sessions"].type()) {
        vector<DescribeGlobalDesktopsResponseBodyDesktopsSessions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sessions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDesktopsResponseBodyDesktopsSessions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sessions = make_shared<vector<DescribeGlobalDesktopsResponseBodyDesktopsSessions>>(expect1);
      }
    }
    if (m.find("SupportHibernation") != m.end() && !m["SupportHibernation"].empty()) {
      supportHibernation = make_shared<bool>(boost::any_cast<bool>(m["SupportHibernation"]));
    }
    if (m.find("UserCustomName") != m.end() && !m["UserCustomName"].empty()) {
      userCustomName = make_shared<string>(boost::any_cast<string>(m["UserCustomName"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBodyDesktops() = default;
};
class DescribeGlobalDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGlobalDesktopsResponseBodyDesktops>> desktops{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  DescribeGlobalDesktopsResponseBody() {}

  explicit DescribeGlobalDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktops) {
      vector<boost::any> temp1;
      for(auto item1:*desktops){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Desktops"] = boost::any(temp1);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desktops") != m.end() && !m["Desktops"].empty()) {
      if (typeid(vector<boost::any>) == m["Desktops"].type()) {
        vector<DescribeGlobalDesktopsResponseBodyDesktops> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Desktops"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGlobalDesktopsResponseBodyDesktops model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        desktops = make_shared<vector<DescribeGlobalDesktopsResponseBodyDesktops>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeGlobalDesktopsResponseBody() = default;
};
class DescribeGlobalDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGlobalDesktopsResponseBody> body{};

  DescribeGlobalDesktopsResponse() {}

  explicit DescribeGlobalDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGlobalDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGlobalDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGlobalDesktopsResponse() = default;
};
class DescribeOfficeSitesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<vector<string>> officeSiteId{};
  shared_ptr<string> regionId{};

  DescribeOfficeSitesRequest() {}

  explicit DescribeOfficeSitesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficeSiteId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficeSiteId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officeSiteId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeOfficeSitesRequest() = default;
};
class DescribeOfficeSitesResponseBodyOfficeSites : public Darabonba::Model {
public:
  shared_ptr<string> desktopAccessType{};
  shared_ptr<string> desktopVpcEndpoint{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> officeSiteType{};
  shared_ptr<string> providerId{};
  shared_ptr<string> ssoServiceUrl{};

  DescribeOfficeSitesResponseBodyOfficeSites() {}

  explicit DescribeOfficeSitesResponseBodyOfficeSites(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desktopAccessType) {
      res["DesktopAccessType"] = boost::any(*desktopAccessType);
    }
    if (desktopVpcEndpoint) {
      res["DesktopVpcEndpoint"] = boost::any(*desktopVpcEndpoint);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (officeSiteType) {
      res["OfficeSiteType"] = boost::any(*officeSiteType);
    }
    if (providerId) {
      res["ProviderId"] = boost::any(*providerId);
    }
    if (ssoServiceUrl) {
      res["SsoServiceUrl"] = boost::any(*ssoServiceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DesktopAccessType") != m.end() && !m["DesktopAccessType"].empty()) {
      desktopAccessType = make_shared<string>(boost::any_cast<string>(m["DesktopAccessType"]));
    }
    if (m.find("DesktopVpcEndpoint") != m.end() && !m["DesktopVpcEndpoint"].empty()) {
      desktopVpcEndpoint = make_shared<string>(boost::any_cast<string>(m["DesktopVpcEndpoint"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("OfficeSiteType") != m.end() && !m["OfficeSiteType"].empty()) {
      officeSiteType = make_shared<string>(boost::any_cast<string>(m["OfficeSiteType"]));
    }
    if (m.find("ProviderId") != m.end() && !m["ProviderId"].empty()) {
      providerId = make_shared<string>(boost::any_cast<string>(m["ProviderId"]));
    }
    if (m.find("SsoServiceUrl") != m.end() && !m["SsoServiceUrl"].empty()) {
      ssoServiceUrl = make_shared<string>(boost::any_cast<string>(m["SsoServiceUrl"]));
    }
  }


  virtual ~DescribeOfficeSitesResponseBodyOfficeSites() = default;
};
class DescribeOfficeSitesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOfficeSitesResponseBodyOfficeSites>> officeSites{};
  shared_ptr<string> requestId{};

  DescribeOfficeSitesResponseBody() {}

  explicit DescribeOfficeSitesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (officeSites) {
      vector<boost::any> temp1;
      for(auto item1:*officeSites){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OfficeSites"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfficeSites") != m.end() && !m["OfficeSites"].empty()) {
      if (typeid(vector<boost::any>) == m["OfficeSites"].type()) {
        vector<DescribeOfficeSitesResponseBodyOfficeSites> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OfficeSites"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOfficeSitesResponseBodyOfficeSites model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        officeSites = make_shared<vector<DescribeOfficeSitesResponseBodyOfficeSites>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeOfficeSitesResponseBody() = default;
};
class DescribeOfficeSitesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOfficeSitesResponseBody> body{};

  DescribeOfficeSitesResponse() {}

  explicit DescribeOfficeSitesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOfficeSitesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOfficeSitesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOfficeSitesResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> regionId{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<string> regionEndpoint{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEndpoint) {
      res["RegionEndpoint"] = boost::any(*regionEndpoint);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEndpoint") != m.end() && !m["RegionEndpoint"].empty()) {
      regionEndpoint = make_shared<string>(boost::any_cast<string>(m["RegionEndpoint"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegions>> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<DescribeRegionsResponseBodyRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<DescribeRegionsResponseBodyRegions>>(expect1);
      }
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
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> snapshotId{};

  DescribeSnapshotsRequest() {}

  explicit DescribeSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~DescribeSnapshotsRequest() = default;
};
class DescribeSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<string> creationTime{};
  shared_ptr<string> description{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> progress{};
  shared_ptr<long> remainTime{};
  shared_ptr<string> snapshotId{};
  shared_ptr<string> snapshotName{};
  shared_ptr<string> snapshotType{};
  shared_ptr<string> sourceDiskSize{};
  shared_ptr<string> sourceDiskType{};
  shared_ptr<string> status{};

  DescribeSnapshotsResponseBodySnapshots() {}

  explicit DescribeSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (remainTime) {
      res["RemainTime"] = boost::any(*remainTime);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    if (snapshotType) {
      res["SnapshotType"] = boost::any(*snapshotType);
    }
    if (sourceDiskSize) {
      res["SourceDiskSize"] = boost::any(*sourceDiskSize);
    }
    if (sourceDiskType) {
      res["SourceDiskType"] = boost::any(*sourceDiskType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<string>(boost::any_cast<string>(m["Progress"]));
    }
    if (m.find("RemainTime") != m.end() && !m["RemainTime"].empty()) {
      remainTime = make_shared<long>(boost::any_cast<long>(m["RemainTime"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
    if (m.find("SnapshotType") != m.end() && !m["SnapshotType"].empty()) {
      snapshotType = make_shared<string>(boost::any_cast<string>(m["SnapshotType"]));
    }
    if (m.find("SourceDiskSize") != m.end() && !m["SourceDiskSize"].empty()) {
      sourceDiskSize = make_shared<string>(boost::any_cast<string>(m["SourceDiskSize"]));
    }
    if (m.find("SourceDiskType") != m.end() && !m["SourceDiskType"].empty()) {
      sourceDiskType = make_shared<string>(boost::any_cast<string>(m["SourceDiskType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeSnapshotsResponseBodySnapshots() = default;
};
class DescribeSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSnapshotsResponseBodySnapshots>> snapshots{};

  DescribeSnapshotsResponseBody() {}

  explicit DescribeSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<DescribeSnapshotsResponseBodySnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSnapshotsResponseBodySnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<DescribeSnapshotsResponseBodySnapshots>>(expect1);
      }
    }
  }


  virtual ~DescribeSnapshotsResponseBody() = default;
};
class DescribeSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSnapshotsResponseBody> body{};

  DescribeSnapshotsResponse() {}

  explicit DescribeSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSnapshotsResponse() = default;
};
class EncryptPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  EncryptPasswordRequest() {}

  explicit EncryptPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~EncryptPasswordRequest() = default;
};
class EncryptPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> encryptedPassword{};
  shared_ptr<string> requestId{};

  EncryptPasswordResponseBody() {}

  explicit EncryptPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedPassword) {
      res["EncryptedPassword"] = boost::any(*encryptedPassword);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedPassword") != m.end() && !m["EncryptedPassword"].empty()) {
      encryptedPassword = make_shared<string>(boost::any_cast<string>(m["EncryptedPassword"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EncryptPasswordResponseBody() = default;
};
class EncryptPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EncryptPasswordResponseBody> body{};

  EncryptPasswordResponse() {}

  explicit EncryptPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EncryptPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EncryptPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~EncryptPasswordResponse() = default;
};
class GetCloudDriveServiceMountTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  GetCloudDriveServiceMountTokenRequest() {}

  explicit GetCloudDriveServiceMountTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~GetCloudDriveServiceMountTokenRequest() = default;
};
class GetCloudDriveServiceMountTokenResponseBodyToken : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> expiredAfter{};
  shared_ptr<string> status{};
  shared_ptr<string> token{};
  shared_ptr<long> totalSize{};
  shared_ptr<long> usedSize{};

  GetCloudDriveServiceMountTokenResponseBodyToken() {}

  explicit GetCloudDriveServiceMountTokenResponseBodyToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (expiredAfter) {
      res["ExpiredAfter"] = boost::any(*expiredAfter);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    if (usedSize) {
      res["UsedSize"] = boost::any(*usedSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("ExpiredAfter") != m.end() && !m["ExpiredAfter"].empty()) {
      expiredAfter = make_shared<string>(boost::any_cast<string>(m["ExpiredAfter"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
    if (m.find("UsedSize") != m.end() && !m["UsedSize"].empty()) {
      usedSize = make_shared<long>(boost::any_cast<long>(m["UsedSize"]));
    }
  }


  virtual ~GetCloudDriveServiceMountTokenResponseBodyToken() = default;
};
class GetCloudDriveServiceMountTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetCloudDriveServiceMountTokenResponseBodyToken> token{};

  GetCloudDriveServiceMountTokenResponseBody() {}

  explicit GetCloudDriveServiceMountTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = token ? boost::any(token->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      if (typeid(map<string, boost::any>) == m["Token"].type()) {
        GetCloudDriveServiceMountTokenResponseBodyToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Token"]));
        token = make_shared<GetCloudDriveServiceMountTokenResponseBodyToken>(model1);
      }
    }
  }


  virtual ~GetCloudDriveServiceMountTokenResponseBody() = default;
};
class GetCloudDriveServiceMountTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCloudDriveServiceMountTokenResponseBody> body{};

  GetCloudDriveServiceMountTokenResponse() {}

  explicit GetCloudDriveServiceMountTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCloudDriveServiceMountTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCloudDriveServiceMountTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetCloudDriveServiceMountTokenResponse() = default;
};
class GetConnectionTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> commandContent{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> uuid{};

  GetConnectionTicketRequest() {}

  explicit GetConnectionTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (commandContent) {
      res["CommandContent"] = boost::any(*commandContent);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<string>(boost::any_cast<string>(m["ClientType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("CommandContent") != m.end() && !m["CommandContent"].empty()) {
      commandContent = make_shared<string>(boost::any_cast<string>(m["CommandContent"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetConnectionTicketRequest() = default;
};
class GetConnectionTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskCode{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskMessage{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> ticket{};

  GetConnectionTicketResponseBody() {}

  explicit GetConnectionTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskCode) {
      res["TaskCode"] = boost::any(*taskCode);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskMessage) {
      res["TaskMessage"] = boost::any(*taskMessage);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (ticket) {
      res["Ticket"] = boost::any(*ticket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskCode") != m.end() && !m["TaskCode"].empty()) {
      taskCode = make_shared<string>(boost::any_cast<string>(m["TaskCode"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskMessage") != m.end() && !m["TaskMessage"].empty()) {
      taskMessage = make_shared<string>(boost::any_cast<string>(m["TaskMessage"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("Ticket") != m.end() && !m["Ticket"].empty()) {
      ticket = make_shared<string>(boost::any_cast<string>(m["Ticket"]));
    }
  }


  virtual ~GetConnectionTicketResponseBody() = default;
};
class GetConnectionTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetConnectionTicketResponseBody> body{};

  GetConnectionTicketResponse() {}

  explicit GetConnectionTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConnectionTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConnectionTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetConnectionTicketResponse() = default;
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
  shared_ptr<string> endUserId{};
  shared_ptr<bool> keepAlive{};
  shared_ptr<string> keepAliveToken{};
  shared_ptr<string> newPassword{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> oldPassword{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tokenCode{};
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
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (keepAlive) {
      res["KeepAlive"] = boost::any(*keepAlive);
    }
    if (keepAliveToken) {
      res["KeepAliveToken"] = boost::any(*keepAliveToken);
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
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tokenCode) {
      res["TokenCode"] = boost::any(*tokenCode);
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
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("KeepAlive") != m.end() && !m["KeepAlive"].empty()) {
      keepAlive = make_shared<bool>(boost::any_cast<bool>(m["KeepAlive"]));
    }
    if (m.find("KeepAliveToken") != m.end() && !m["KeepAliveToken"].empty()) {
      keepAliveToken = make_shared<string>(boost::any_cast<string>(m["KeepAliveToken"]));
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
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TokenCode") != m.end() && !m["TokenCode"].empty()) {
      tokenCode = make_shared<string>(boost::any_cast<string>(m["TokenCode"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetLoginTokenRequest() = default;
};
class GetLoginTokenResponseBodyRiskVerifyInfo : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<long> lastLockDuration{};
  shared_ptr<string> locked{};
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
      locked = make_shared<string>(boost::any_cast<string>(m["Locked"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~GetLoginTokenResponseBodyRiskVerifyInfo() = default;
};
class GetLoginTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> industry{};
  shared_ptr<string> keepAliveToken{};
  shared_ptr<string> label{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> nextStage{};
  shared_ptr<string> phone{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<string> qrCodePng{};
  shared_ptr<string> requestId{};
  shared_ptr<GetLoginTokenResponseBodyRiskVerifyInfo> riskVerifyInfo{};
  shared_ptr<string> secret{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> windowDisplayMode{};

  GetLoginTokenResponseBody() {}

  explicit GetLoginTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
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
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (qrCodePng) {
      res["QrCodePng"] = boost::any(*qrCodePng);
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
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (windowDisplayMode) {
      res["WindowDisplayMode"] = boost::any(*windowDisplayMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
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
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("WindowDisplayMode") != m.end() && !m["WindowDisplayMode"].empty()) {
      windowDisplayMode = make_shared<string>(boost::any_cast<string>(m["WindowDisplayMode"]));
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
class IsKeepAliveRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> regionId{};

  IsKeepAliveRequest() {}

  explicit IsKeepAliveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~IsKeepAliveRequest() = default;
};
class IsKeepAliveResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isKeepAlive{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tenantId{};

  IsKeepAliveResponseBody() {}

  explicit IsKeepAliveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isKeepAlive) {
      res["IsKeepAlive"] = boost::any(*isKeepAlive);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsKeepAlive") != m.end() && !m["IsKeepAlive"].empty()) {
      isKeepAlive = make_shared<bool>(boost::any_cast<bool>(m["IsKeepAlive"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~IsKeepAliveResponseBody() = default;
};
class IsKeepAliveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IsKeepAliveResponseBody> body{};

  IsKeepAliveResponse() {}

  explicit IsKeepAliveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IsKeepAliveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsKeepAliveResponseBody>(model1);
      }
    }
  }


  virtual ~IsKeepAliveResponse() = default;
};
class QueryEdsAgentReportConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> ecsInstanceId{};

  QueryEdsAgentReportConfigRequest() {}

  explicit QueryEdsAgentReportConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
  }


  virtual ~QueryEdsAgentReportConfigRequest() = default;
};
class QueryEdsAgentReportConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> config{};

  QueryEdsAgentReportConfigResponseBodyData() {}

  explicit QueryEdsAgentReportConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
  }


  virtual ~QueryEdsAgentReportConfigResponseBodyData() = default;
};
class QueryEdsAgentReportConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryEdsAgentReportConfigResponseBodyData> data{};
  shared_ptr<string> requestId{};

  QueryEdsAgentReportConfigResponseBody() {}

  explicit QueryEdsAgentReportConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEdsAgentReportConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEdsAgentReportConfigResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryEdsAgentReportConfigResponseBody() = default;
};
class QueryEdsAgentReportConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEdsAgentReportConfigResponseBody> body{};

  QueryEdsAgentReportConfigResponse() {}

  explicit QueryEdsAgentReportConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEdsAgentReportConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEdsAgentReportConfigResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEdsAgentReportConfigResponse() = default;
};
class RebootDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientVersion{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sessionToken{};
  shared_ptr<string> uuid{};

  RebootDesktopsRequest() {}

  explicit RebootDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sessionToken) {
      res["SessionToken"] = boost::any(*sessionToken);
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
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SessionToken") != m.end() && !m["SessionToken"].empty()) {
      sessionToken = make_shared<string>(boost::any_cast<string>(m["SessionToken"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~RebootDesktopsRequest() = default;
};
class RebootDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RebootDesktopsResponseBody() {}

  explicit RebootDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RebootDesktopsResponseBody() = default;
};
class RebootDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RebootDesktopsResponseBody> body{};

  RebootDesktopsResponse() {}

  explicit RebootDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RebootDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RebootDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~RebootDesktopsResponse() = default;
};
class RefreshLoginTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> directoryId{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

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
    if (directoryId) {
      res["DirectoryId"] = boost::any(*directoryId);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DirectoryId") != m.end() && !m["DirectoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["DirectoryId"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
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
class ReportEdsAgentInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> edsAgentInfo{};

  ReportEdsAgentInfoRequest() {}

  explicit ReportEdsAgentInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (edsAgentInfo) {
      res["EdsAgentInfo"] = boost::any(*edsAgentInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("EdsAgentInfo") != m.end() && !m["EdsAgentInfo"].empty()) {
      edsAgentInfo = make_shared<string>(boost::any_cast<string>(m["EdsAgentInfo"]));
    }
  }


  virtual ~ReportEdsAgentInfoRequest() = default;
};
class ReportEdsAgentInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReportEdsAgentInfoResponseBody() {}

  explicit ReportEdsAgentInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReportEdsAgentInfoResponseBody() = default;
};
class ReportEdsAgentInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportEdsAgentInfoResponseBody> body{};

  ReportEdsAgentInfoResponse() {}

  explicit ReportEdsAgentInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportEdsAgentInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportEdsAgentInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ReportEdsAgentInfoResponse() = default;
};
class ReportSessionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<long> sessionChangeTime{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sessionStatus{};

  ReportSessionStatusRequest() {}

  explicit ReportSessionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionChangeTime) {
      res["SessionChangeTime"] = boost::any(*sessionChangeTime);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sessionStatus) {
      res["SessionStatus"] = boost::any(*sessionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionChangeTime") != m.end() && !m["SessionChangeTime"].empty()) {
      sessionChangeTime = make_shared<long>(boost::any_cast<long>(m["SessionChangeTime"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SessionStatus") != m.end() && !m["SessionStatus"].empty()) {
      sessionStatus = make_shared<string>(boost::any_cast<string>(m["SessionStatus"]));
    }
  }


  virtual ~ReportSessionStatusRequest() = default;
};
class ReportSessionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReportSessionStatusResponseBody() {}

  explicit ReportSessionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ReportSessionStatusResponseBody() = default;
};
class ReportSessionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportSessionStatusResponseBody> body{};

  ReportSessionStatusResponse() {}

  explicit ReportSessionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportSessionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportSessionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ReportSessionStatusResponse() = default;
};
class ResetPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> email{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> phone{};

  ResetPasswordRequest() {}

  explicit ResetPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
  }


  virtual ~ResetPasswordRequest() = default;
};
class ResetPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetPasswordResponseBody() {}

  explicit ResetPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetPasswordResponseBody() = default;
};
class ResetPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetPasswordResponseBody> body{};

  ResetPasswordResponse() {}

  explicit ResetPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetPasswordResponse() = default;
};
class ResetSnapshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> snapshotId{};

  ResetSnapshotRequest() {}

  explicit ResetSnapshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~ResetSnapshotRequest() = default;
};
class ResetSnapshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetSnapshotResponseBody() {}

  explicit ResetSnapshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetSnapshotResponseBody() = default;
};
class ResetSnapshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetSnapshotResponseBody> body{};

  ResetSnapshotResponse() {}

  explicit ResetSnapshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetSnapshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetSnapshotResponseBody>(model1);
      }
    }
  }


  virtual ~ResetSnapshotResponse() = default;
};
class SendTokenCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> endUserId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> tokenCode{};

  SendTokenCodeRequest() {}

  explicit SendTokenCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (tokenCode) {
      res["TokenCode"] = boost::any(*tokenCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("TokenCode") != m.end() && !m["TokenCode"].empty()) {
      tokenCode = make_shared<string>(boost::any_cast<string>(m["TokenCode"]));
    }
  }


  virtual ~SendTokenCodeRequest() = default;
};
class SendTokenCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendTokenCodeResponseBody() {}

  explicit SendTokenCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendTokenCodeResponseBody() = default;
};
class SendTokenCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendTokenCodeResponseBody> body{};

  SendTokenCodeResponse() {}

  explicit SendTokenCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendTokenCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendTokenCodeResponseBody>(model1);
      }
    }
  }


  virtual ~SendTokenCodeResponse() = default;
};
class SetFingerPrintTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> encryptedFingerPrintTemplate{};
  shared_ptr<string> encryptedKey{};
  shared_ptr<string> fingerPrintTemplate{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> password{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  SetFingerPrintTemplateRequest() {}

  explicit SetFingerPrintTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encryptedFingerPrintTemplate) {
      res["EncryptedFingerPrintTemplate"] = boost::any(*encryptedFingerPrintTemplate);
    }
    if (encryptedKey) {
      res["EncryptedKey"] = boost::any(*encryptedKey);
    }
    if (fingerPrintTemplate) {
      res["FingerPrintTemplate"] = boost::any(*fingerPrintTemplate);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncryptedFingerPrintTemplate") != m.end() && !m["EncryptedFingerPrintTemplate"].empty()) {
      encryptedFingerPrintTemplate = make_shared<string>(boost::any_cast<string>(m["EncryptedFingerPrintTemplate"]));
    }
    if (m.find("EncryptedKey") != m.end() && !m["EncryptedKey"].empty()) {
      encryptedKey = make_shared<string>(boost::any_cast<string>(m["EncryptedKey"]));
    }
    if (m.find("FingerPrintTemplate") != m.end() && !m["FingerPrintTemplate"].empty()) {
      fingerPrintTemplate = make_shared<string>(boost::any_cast<string>(m["FingerPrintTemplate"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~SetFingerPrintTemplateRequest() = default;
};
class SetFingerPrintTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> encryptedPassword{};
  shared_ptr<long> index{};
  shared_ptr<string> requestId{};

  SetFingerPrintTemplateResponseBody() {}

  explicit SetFingerPrintTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedPassword) {
      res["EncryptedPassword"] = boost::any(*encryptedPassword);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedPassword") != m.end() && !m["EncryptedPassword"].empty()) {
      encryptedPassword = make_shared<string>(boost::any_cast<string>(m["EncryptedPassword"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetFingerPrintTemplateResponseBody() = default;
};
class SetFingerPrintTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFingerPrintTemplateResponseBody> body{};

  SetFingerPrintTemplateResponse() {}

  explicit SetFingerPrintTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetFingerPrintTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFingerPrintTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~SetFingerPrintTemplateResponse() = default;
};
class SetFingerPrintTemplateDescriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<long> index{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  SetFingerPrintTemplateDescriptionRequest() {}

  explicit SetFingerPrintTemplateDescriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~SetFingerPrintTemplateDescriptionRequest() = default;
};
class SetFingerPrintTemplateDescriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetFingerPrintTemplateDescriptionResponseBody() {}

  explicit SetFingerPrintTemplateDescriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SetFingerPrintTemplateDescriptionResponseBody() = default;
};
class SetFingerPrintTemplateDescriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFingerPrintTemplateDescriptionResponseBody> body{};

  SetFingerPrintTemplateDescriptionResponse() {}

  explicit SetFingerPrintTemplateDescriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetFingerPrintTemplateDescriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFingerPrintTemplateDescriptionResponseBody>(model1);
      }
    }
  }


  virtual ~SetFingerPrintTemplateDescriptionResponse() = default;
};
class StartDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientVersion{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  StartDesktopsRequest() {}

  explicit StartDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~StartDesktopsRequest() = default;
};
class StartDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartDesktopsResponseBody() {}

  explicit StartDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartDesktopsResponseBody() = default;
};
class StartDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDesktopsResponseBody> body{};

  StartDesktopsResponse() {}

  explicit StartDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~StartDesktopsResponse() = default;
};
class StartRecordContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> filePath{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  StartRecordContentRequest() {}

  explicit StartRecordContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~StartRecordContentRequest() = default;
};
class StartRecordContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StartRecordContentResponseBody() {}

  explicit StartRecordContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StartRecordContentResponseBody() = default;
};
class StartRecordContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartRecordContentResponseBody> body{};

  StartRecordContentResponse() {}

  explicit StartRecordContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartRecordContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartRecordContentResponseBody>(model1);
      }
    }
  }


  virtual ~StartRecordContentResponse() = default;
};
class StopDesktopsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> clientVersion{};
  shared_ptr<vector<string>> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> sessionToken{};

  StopDesktopsRequest() {}

  explicit StopDesktopsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (sessionToken) {
      res["SessionToken"] = boost::any(*sessionToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DesktopId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DesktopId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      desktopId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SessionToken") != m.end() && !m["SessionToken"].empty()) {
      sessionToken = make_shared<string>(boost::any_cast<string>(m["SessionToken"]));
    }
  }


  virtual ~StopDesktopsRequest() = default;
};
class StopDesktopsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopDesktopsResponseBody() {}

  explicit StopDesktopsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopDesktopsResponseBody() = default;
};
class StopDesktopsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopDesktopsResponseBody> body{};

  StopDesktopsResponse() {}

  explicit StopDesktopsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopDesktopsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopDesktopsResponseBody>(model1);
      }
    }
  }


  virtual ~StopDesktopsResponse() = default;
};
class StopRecordContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientOS{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> desktopId{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  StopRecordContentRequest() {}

  explicit StopRecordContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (desktopId) {
      res["DesktopId"] = boost::any(*desktopId);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("DesktopId") != m.end() && !m["DesktopId"].empty()) {
      desktopId = make_shared<string>(boost::any_cast<string>(m["DesktopId"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~StopRecordContentRequest() = default;
};
class StopRecordContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopRecordContentResponseBody() {}

  explicit StopRecordContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopRecordContentResponseBody() = default;
};
class StopRecordContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopRecordContentResponseBody> body{};

  StopRecordContentResponse() {}

  explicit StopRecordContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopRecordContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopRecordContentResponseBody>(model1);
      }
    }
  }


  virtual ~StopRecordContentResponse() = default;
};
class UnbindUserDesktopRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientType{};
  shared_ptr<bool> force{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> userDesktopId{};

  UnbindUserDesktopRequest() {}

  explicit UnbindUserDesktopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (userDesktopId) {
      res["UserDesktopId"] = boost::any(*userDesktopId);
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
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("UserDesktopId") != m.end() && !m["UserDesktopId"].empty()) {
      userDesktopId = make_shared<string>(boost::any_cast<string>(m["UserDesktopId"]));
    }
  }


  virtual ~UnbindUserDesktopRequest() = default;
};
class UnbindUserDesktopResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnbindUserDesktopResponseBody() {}

  explicit UnbindUserDesktopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindUserDesktopResponseBody() = default;
};
class UnbindUserDesktopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindUserDesktopResponseBody> body{};

  UnbindUserDesktopResponse() {}

  explicit UnbindUserDesktopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindUserDesktopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindUserDesktopResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindUserDesktopResponse() = default;
};
class VerifyCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> credential{};
  shared_ptr<string> credentialType{};
  shared_ptr<string> encryptedKey{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> officeSiteId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sessionId{};

  VerifyCredentialRequest() {}

  explicit VerifyCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (credential) {
      res["Credential"] = boost::any(*credential);
    }
    if (credentialType) {
      res["CredentialType"] = boost::any(*credentialType);
    }
    if (encryptedKey) {
      res["EncryptedKey"] = boost::any(*encryptedKey);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (officeSiteId) {
      res["OfficeSiteId"] = boost::any(*officeSiteId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("Credential") != m.end() && !m["Credential"].empty()) {
      credential = make_shared<string>(boost::any_cast<string>(m["Credential"]));
    }
    if (m.find("CredentialType") != m.end() && !m["CredentialType"].empty()) {
      credentialType = make_shared<string>(boost::any_cast<string>(m["CredentialType"]));
    }
    if (m.find("EncryptedKey") != m.end() && !m["EncryptedKey"].empty()) {
      encryptedKey = make_shared<string>(boost::any_cast<string>(m["EncryptedKey"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("OfficeSiteId") != m.end() && !m["OfficeSiteId"].empty()) {
      officeSiteId = make_shared<string>(boost::any_cast<string>(m["OfficeSiteId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~VerifyCredentialRequest() = default;
};
class VerifyCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyCredentialResponseBody() {}

  explicit VerifyCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyCredentialResponseBody() = default;
};
class VerifyCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyCredentialResponseBody> body{};

  VerifyCredentialResponse() {}

  explicit VerifyCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyCredentialResponse() = default;
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
  ApproveFotaUpdateResponse approveFotaUpdateWithOptions(shared_ptr<ApproveFotaUpdateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApproveFotaUpdateResponse approveFotaUpdate(shared_ptr<ApproveFotaUpdateRequest> request);
  ChangePasswordResponse changePasswordWithOptions(shared_ptr<ChangePasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangePasswordResponse changePassword(shared_ptr<ChangePasswordRequest> request);
  DeleteFingerPrintTemplateResponse deleteFingerPrintTemplateWithOptions(shared_ptr<DeleteFingerPrintTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFingerPrintTemplateResponse deleteFingerPrintTemplate(shared_ptr<DeleteFingerPrintTemplateRequest> request);
  DescribeDirectoriesResponse describeDirectoriesWithOptions(shared_ptr<DescribeDirectoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDirectoriesResponse describeDirectories(shared_ptr<DescribeDirectoriesRequest> request);
  DescribeFingerPrintTemplatesResponse describeFingerPrintTemplatesWithOptions(shared_ptr<DescribeFingerPrintTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFingerPrintTemplatesResponse describeFingerPrintTemplates(shared_ptr<DescribeFingerPrintTemplatesRequest> request);
  DescribeGlobalDesktopsResponse describeGlobalDesktopsWithOptions(shared_ptr<DescribeGlobalDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGlobalDesktopsResponse describeGlobalDesktops(shared_ptr<DescribeGlobalDesktopsRequest> request);
  DescribeOfficeSitesResponse describeOfficeSitesWithOptions(shared_ptr<DescribeOfficeSitesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOfficeSitesResponse describeOfficeSites(shared_ptr<DescribeOfficeSitesRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSnapshotsResponse describeSnapshotsWithOptions(shared_ptr<DescribeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSnapshotsResponse describeSnapshots(shared_ptr<DescribeSnapshotsRequest> request);
  EncryptPasswordResponse encryptPasswordWithOptions(shared_ptr<EncryptPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EncryptPasswordResponse encryptPassword(shared_ptr<EncryptPasswordRequest> request);
  GetCloudDriveServiceMountTokenResponse getCloudDriveServiceMountTokenWithOptions(shared_ptr<GetCloudDriveServiceMountTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCloudDriveServiceMountTokenResponse getCloudDriveServiceMountToken(shared_ptr<GetCloudDriveServiceMountTokenRequest> request);
  GetConnectionTicketResponse getConnectionTicketWithOptions(shared_ptr<GetConnectionTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConnectionTicketResponse getConnectionTicket(shared_ptr<GetConnectionTicketRequest> request);
  GetLoginTokenResponse getLoginTokenWithOptions(shared_ptr<GetLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLoginTokenResponse getLoginToken(shared_ptr<GetLoginTokenRequest> request);
  IsKeepAliveResponse isKeepAliveWithOptions(shared_ptr<IsKeepAliveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsKeepAliveResponse isKeepAlive(shared_ptr<IsKeepAliveRequest> request);
  QueryEdsAgentReportConfigResponse queryEdsAgentReportConfigWithOptions(shared_ptr<QueryEdsAgentReportConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEdsAgentReportConfigResponse queryEdsAgentReportConfig(shared_ptr<QueryEdsAgentReportConfigRequest> request);
  RebootDesktopsResponse rebootDesktopsWithOptions(shared_ptr<RebootDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RebootDesktopsResponse rebootDesktops(shared_ptr<RebootDesktopsRequest> request);
  RefreshLoginTokenResponse refreshLoginTokenWithOptions(shared_ptr<RefreshLoginTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshLoginTokenResponse refreshLoginToken(shared_ptr<RefreshLoginTokenRequest> request);
  ReportEdsAgentInfoResponse reportEdsAgentInfoWithOptions(shared_ptr<ReportEdsAgentInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportEdsAgentInfoResponse reportEdsAgentInfo(shared_ptr<ReportEdsAgentInfoRequest> request);
  ReportSessionStatusResponse reportSessionStatusWithOptions(shared_ptr<ReportSessionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportSessionStatusResponse reportSessionStatus(shared_ptr<ReportSessionStatusRequest> request);
  ResetPasswordResponse resetPasswordWithOptions(shared_ptr<ResetPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetPasswordResponse resetPassword(shared_ptr<ResetPasswordRequest> request);
  ResetSnapshotResponse resetSnapshotWithOptions(shared_ptr<ResetSnapshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSnapshotResponse resetSnapshot(shared_ptr<ResetSnapshotRequest> request);
  SendTokenCodeResponse sendTokenCodeWithOptions(shared_ptr<SendTokenCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendTokenCodeResponse sendTokenCode(shared_ptr<SendTokenCodeRequest> request);
  SetFingerPrintTemplateResponse setFingerPrintTemplateWithOptions(shared_ptr<SetFingerPrintTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFingerPrintTemplateResponse setFingerPrintTemplate(shared_ptr<SetFingerPrintTemplateRequest> request);
  SetFingerPrintTemplateDescriptionResponse setFingerPrintTemplateDescriptionWithOptions(shared_ptr<SetFingerPrintTemplateDescriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFingerPrintTemplateDescriptionResponse setFingerPrintTemplateDescription(shared_ptr<SetFingerPrintTemplateDescriptionRequest> request);
  StartDesktopsResponse startDesktopsWithOptions(shared_ptr<StartDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDesktopsResponse startDesktops(shared_ptr<StartDesktopsRequest> request);
  StartRecordContentResponse startRecordContentWithOptions(shared_ptr<StartRecordContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartRecordContentResponse startRecordContent(shared_ptr<StartRecordContentRequest> request);
  StopDesktopsResponse stopDesktopsWithOptions(shared_ptr<StopDesktopsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopDesktopsResponse stopDesktops(shared_ptr<StopDesktopsRequest> request);
  StopRecordContentResponse stopRecordContentWithOptions(shared_ptr<StopRecordContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopRecordContentResponse stopRecordContent(shared_ptr<StopRecordContentRequest> request);
  UnbindUserDesktopResponse unbindUserDesktopWithOptions(shared_ptr<UnbindUserDesktopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindUserDesktopResponse unbindUserDesktop(shared_ptr<UnbindUserDesktopRequest> request);
  VerifyCredentialResponse verifyCredentialWithOptions(shared_ptr<VerifyCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyCredentialResponse verifyCredential(shared_ptr<VerifyCredentialRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ecd20201002

#endif
