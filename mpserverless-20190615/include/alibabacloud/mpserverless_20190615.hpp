// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MPSERVERLESS20190615_H_
#define ALIBABACLOUD_MPSERVERLESS20190615_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_MPServerless20190615 {
class AddCorsDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> spaceId{};

  AddCorsDomainRequest() {}

  explicit AddCorsDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~AddCorsDomainRequest() = default;
};
class AddCorsDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> requestId{};

  AddCorsDomainResponseBody() {}

  explicit AddCorsDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddCorsDomainResponseBody() = default;
};
class AddCorsDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddCorsDomainResponseBody> body{};

  AddCorsDomainResponse() {}

  explicit AddCorsDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddCorsDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCorsDomainResponseBody>(model1);
      }
    }
  }


  virtual ~AddCorsDomainResponse() = default;
};
class AddDingtalkOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> spaceId{};

  AddDingtalkOpenPlatformConfigRequest() {}

  explicit AddDingtalkOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~AddDingtalkOpenPlatformConfigRequest() = default;
};
class AddDingtalkOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddDingtalkOpenPlatformConfigResponseBody() {}

  explicit AddDingtalkOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddDingtalkOpenPlatformConfigResponseBody() = default;
};
class AddDingtalkOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddDingtalkOpenPlatformConfigResponseBody> body{};

  AddDingtalkOpenPlatformConfigResponse() {}

  explicit AddDingtalkOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddDingtalkOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddDingtalkOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~AddDingtalkOpenPlatformConfigResponse() = default;
};
class AttachWebHostingCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certType{};
  shared_ptr<string> domain{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> serverCertificate{};
  shared_ptr<string> spaceId{};

  AttachWebHostingCertificateRequest() {}

  explicit AttachWebHostingCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (serverCertificate) {
      res["ServerCertificate"] = boost::any(*serverCertificate);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("ServerCertificate") != m.end() && !m["ServerCertificate"].empty()) {
      serverCertificate = make_shared<string>(boost::any_cast<string>(m["ServerCertificate"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~AttachWebHostingCertificateRequest() = default;
};
class AttachWebHostingCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  AttachWebHostingCertificateResponseBody() {}

  explicit AttachWebHostingCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachWebHostingCertificateResponseBody() = default;
};
class AttachWebHostingCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachWebHostingCertificateResponseBody> body{};

  AttachWebHostingCertificateResponse() {}

  explicit AttachWebHostingCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachWebHostingCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachWebHostingCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~AttachWebHostingCertificateResponse() = default;
};
class BatchDeleteWebHostingFilesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> filePaths{};
  shared_ptr<string> spaceId{};

  BatchDeleteWebHostingFilesRequest() {}

  explicit BatchDeleteWebHostingFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePaths) {
      res["FilePaths"] = boost::any(*filePaths);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePaths") != m.end() && !m["FilePaths"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FilePaths"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FilePaths"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      filePaths = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~BatchDeleteWebHostingFilesRequest() = default;
};
class BatchDeleteWebHostingFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  BatchDeleteWebHostingFilesResponseBody() {}

  explicit BatchDeleteWebHostingFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchDeleteWebHostingFilesResponseBody() = default;
};
class BatchDeleteWebHostingFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchDeleteWebHostingFilesResponseBody> body{};

  BatchDeleteWebHostingFilesResponse() {}

  explicit BatchDeleteWebHostingFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteWebHostingFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteWebHostingFilesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteWebHostingFilesResponse() = default;
};
class BindWebHostingCustomDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> customDomain{};
  shared_ptr<string> spaceId{};

  BindWebHostingCustomDomainRequest() {}

  explicit BindWebHostingCustomDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = boost::any(*customDomain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomain = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~BindWebHostingCustomDomainRequest() = default;
};
class BindWebHostingCustomDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  BindWebHostingCustomDomainResponseBody() {}

  explicit BindWebHostingCustomDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BindWebHostingCustomDomainResponseBody() = default;
};
class BindWebHostingCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindWebHostingCustomDomainResponseBody> body{};

  BindWebHostingCustomDomainResponse() {}

  explicit BindWebHostingCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindWebHostingCustomDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindWebHostingCustomDomainResponseBody>(model1);
      }
    }
  }


  virtual ~BindWebHostingCustomDomainResponse() = default;
};
class CheckMpServerlessRoleExistsRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  CheckMpServerlessRoleExistsRequest() {}

  explicit CheckMpServerlessRoleExistsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CheckMpServerlessRoleExistsRequest() = default;
};
class CheckMpServerlessRoleExistsResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> exists{};
  shared_ptr<string> requestId{};

  CheckMpServerlessRoleExistsResponseBody() {}

  explicit CheckMpServerlessRoleExistsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exists) {
      res["Exists"] = boost::any(*exists);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exists") != m.end() && !m["Exists"].empty()) {
      exists = make_shared<bool>(boost::any_cast<bool>(m["Exists"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckMpServerlessRoleExistsResponseBody() = default;
};
class CheckMpServerlessRoleExistsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMpServerlessRoleExistsResponseBody> body{};

  CheckMpServerlessRoleExistsResponse() {}

  explicit CheckMpServerlessRoleExistsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMpServerlessRoleExistsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMpServerlessRoleExistsResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMpServerlessRoleExistsResponse() = default;
};
class CreateDBExportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> fields{};
  shared_ptr<string> fileType{};
  shared_ptr<string> spaceId{};

  CreateDBExportTaskRequest() {}

  explicit CreateDBExportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~CreateDBExportTaskRequest() = default;
};
class CreateDBExportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateDBExportTaskResponseBody() {}

  explicit CreateDBExportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDBExportTaskResponseBody() = default;
};
class CreateDBExportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBExportTaskResponseBody> body{};

  CreateDBExportTaskResponse() {}

  explicit CreateDBExportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBExportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBExportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBExportTaskResponse() = default;
};
class CreateDBImportTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> collection{};
  shared_ptr<string> fileType{};
  shared_ptr<string> mode{};
  shared_ptr<string> spaceId{};

  CreateDBImportTaskRequest() {}

  explicit CreateDBImportTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collection) {
      res["Collection"] = boost::any(*collection);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collection") != m.end() && !m["Collection"].empty()) {
      collection = make_shared<string>(boost::any_cast<string>(m["Collection"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~CreateDBImportTaskRequest() = default;
};
class CreateDBImportTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> fileKey{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};
  shared_ptr<string> taskId{};

  CreateDBImportTaskResponseBody() {}

  explicit CreateDBImportTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (fileKey) {
      res["FileKey"] = boost::any(*fileKey);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("FileKey") != m.end() && !m["FileKey"].empty()) {
      fileKey = make_shared<string>(boost::any_cast<string>(m["FileKey"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDBImportTaskResponseBody() = default;
};
class CreateDBImportTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBImportTaskResponseBody> body{};

  CreateDBImportTaskResponse() {}

  explicit CreateDBImportTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBImportTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBImportTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBImportTaskResponse() = default;
};
class CreateDBRestoreTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> newCollections{};
  shared_ptr<string> originCollections{};
  shared_ptr<string> spaceId{};

  CreateDBRestoreTaskRequest() {}

  explicit CreateDBRestoreTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (newCollections) {
      res["NewCollections"] = boost::any(*newCollections);
    }
    if (originCollections) {
      res["OriginCollections"] = boost::any(*originCollections);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("NewCollections") != m.end() && !m["NewCollections"].empty()) {
      newCollections = make_shared<string>(boost::any_cast<string>(m["NewCollections"]));
    }
    if (m.find("OriginCollections") != m.end() && !m["OriginCollections"].empty()) {
      originCollections = make_shared<string>(boost::any_cast<string>(m["OriginCollections"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~CreateDBRestoreTaskRequest() = default;
};
class CreateDBRestoreTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateDBRestoreTaskResponseBody() {}

  explicit CreateDBRestoreTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDBRestoreTaskResponseBody() = default;
};
class CreateDBRestoreTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDBRestoreTaskResponseBody> body{};

  CreateDBRestoreTaskResponse() {}

  explicit CreateDBRestoreTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDBRestoreTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDBRestoreTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDBRestoreTaskResponse() = default;
};
class CreateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> memory{};
  shared_ptr<string> name{};
  shared_ptr<string> runtime{};
  shared_ptr<string> spaceId{};
  shared_ptr<long> timeout{};

  CreateFunctionRequest() {}

  explicit CreateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~CreateFunctionRequest() = default;
};
class CreateFunctionResponseBodySpec : public Darabonba::Model {
public:
  shared_ptr<string> instanceConcurrency{};
  shared_ptr<string> memory{};
  shared_ptr<string> runtime{};
  shared_ptr<string> timeout{};

  CreateFunctionResponseBodySpec() {}

  explicit CreateFunctionResponseBodySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceConcurrency) {
      res["InstanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceConcurrency") != m.end() && !m["InstanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<string>(boost::any_cast<string>(m["InstanceConcurrency"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<string>(boost::any_cast<string>(m["Timeout"]));
    }
  }


  virtual ~CreateFunctionResponseBodySpec() = default;
};
class CreateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> desc{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<CreateFunctionResponseBodySpec> spec{};

  CreateFunctionResponseBody() {}

  explicit CreateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (modifiedAt) {
      res["ModifiedAt"] = boost::any(*modifiedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("ModifiedAt") != m.end() && !m["ModifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["ModifiedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        CreateFunctionResponseBodySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<CreateFunctionResponseBodySpec>(model1);
      }
    }
  }


  virtual ~CreateFunctionResponseBody() = default;
};
class CreateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionResponseBody> body{};

  CreateFunctionResponse() {}

  explicit CreateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionResponse() = default;
};
class CreateFunctionDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> spaceId{};

  CreateFunctionDeploymentRequest() {}

  explicit CreateFunctionDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~CreateFunctionDeploymentRequest() = default;
};
class CreateFunctionDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> uploadSignedUrl{};

  CreateFunctionDeploymentResponseBody() {}

  explicit CreateFunctionDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["DeploymentId"] = boost::any(*deploymentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uploadSignedUrl) {
      res["UploadSignedUrl"] = boost::any(*uploadSignedUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeploymentId") != m.end() && !m["DeploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["DeploymentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UploadSignedUrl") != m.end() && !m["UploadSignedUrl"].empty()) {
      uploadSignedUrl = make_shared<string>(boost::any_cast<string>(m["UploadSignedUrl"]));
    }
  }


  virtual ~CreateFunctionDeploymentResponseBody() = default;
};
class CreateFunctionDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionDeploymentResponseBody> body{};

  CreateFunctionDeploymentResponse() {}

  explicit CreateFunctionDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFunctionDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionDeploymentResponse() = default;
};
class CreateSpaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<long> workspaceId{};

  CreateSpaceRequest() {}

  explicit CreateSpaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<long>(boost::any_cast<long>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateSpaceRequest() = default;
};
class CreateSpaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> spaceId{};

  CreateSpaceResponseBody() {}

  explicit CreateSpaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~CreateSpaceResponseBody() = default;
};
class CreateSpaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSpaceResponseBody> body{};

  CreateSpaceResponse() {}

  explicit CreateSpaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSpaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSpaceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSpaceResponse() = default;
};
class CreateSpaceWithOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> name{};
  shared_ptr<string> packageVersion{};
  shared_ptr<long> period{};
  shared_ptr<string> subscriptionType{};
  shared_ptr<bool> useCoupon{};

  CreateSpaceWithOrderRequest() {}

  explicit CreateSpaceWithOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageVersion) {
      res["PackageVersion"] = boost::any(*packageVersion);
    }
    if (period) {
      res["Period"] = boost::any(*period);
    }
    if (subscriptionType) {
      res["SubscriptionType"] = boost::any(*subscriptionType);
    }
    if (useCoupon) {
      res["UseCoupon"] = boost::any(*useCoupon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageVersion") != m.end() && !m["PackageVersion"].empty()) {
      packageVersion = make_shared<string>(boost::any_cast<string>(m["PackageVersion"]));
    }
    if (m.find("Period") != m.end() && !m["Period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["Period"]));
    }
    if (m.find("SubscriptionType") != m.end() && !m["SubscriptionType"].empty()) {
      subscriptionType = make_shared<string>(boost::any_cast<string>(m["SubscriptionType"]));
    }
    if (m.find("UseCoupon") != m.end() && !m["UseCoupon"].empty()) {
      useCoupon = make_shared<bool>(boost::any_cast<bool>(m["UseCoupon"]));
    }
  }


  virtual ~CreateSpaceWithOrderRequest() = default;
};
class CreateSpaceWithOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> spaceId{};

  CreateSpaceWithOrderResponseBody() {}

  explicit CreateSpaceWithOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~CreateSpaceWithOrderResponseBody() = default;
};
class CreateSpaceWithOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSpaceWithOrderResponseBody> body{};

  CreateSpaceWithOrderResponse() {}

  explicit CreateSpaceWithOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSpaceWithOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSpaceWithOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSpaceWithOrderResponse() = default;
};
class DeleteAntOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> spaceId{};

  DeleteAntOpenPlatformConfigRequest() {}

  explicit DeleteAntOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteAntOpenPlatformConfigRequest() = default;
};
class DeleteAntOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAntOpenPlatformConfigResponseBody() {}

  explicit DeleteAntOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteAntOpenPlatformConfigResponseBody() = default;
};
class DeleteAntOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAntOpenPlatformConfigResponseBody> body{};

  DeleteAntOpenPlatformConfigResponse() {}

  explicit DeleteAntOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAntOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAntOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAntOpenPlatformConfigResponse() = default;
};
class DeleteCorsDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainId{};
  shared_ptr<string> spaceId{};

  DeleteCorsDomainRequest() {}

  explicit DeleteCorsDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteCorsDomainRequest() = default;
};
class DeleteCorsDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCorsDomainResponseBody() {}

  explicit DeleteCorsDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCorsDomainResponseBody() = default;
};
class DeleteCorsDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCorsDomainResponseBody> body{};

  DeleteCorsDomainResponse() {}

  explicit DeleteCorsDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCorsDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCorsDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCorsDomainResponse() = default;
};
class DeleteDBCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> spaceId{};

  DeleteDBCollectionRequest() {}

  explicit DeleteDBCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteDBCollectionRequest() = default;
};
class DeleteDBCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDBCollectionResponseBody() {}

  explicit DeleteDBCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDBCollectionResponseBody() = default;
};
class DeleteDBCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDBCollectionResponseBody> body{};

  DeleteDBCollectionResponse() {}

  explicit DeleteDBCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDBCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDBCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDBCollectionResponse() = default;
};
class DeleteDingtalkOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> spaceId{};

  DeleteDingtalkOpenPlatformConfigRequest() {}

  explicit DeleteDingtalkOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteDingtalkOpenPlatformConfigRequest() = default;
};
class DeleteDingtalkOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDingtalkOpenPlatformConfigResponseBody() {}

  explicit DeleteDingtalkOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDingtalkOpenPlatformConfigResponseBody() = default;
};
class DeleteDingtalkOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDingtalkOpenPlatformConfigResponseBody> body{};

  DeleteDingtalkOpenPlatformConfigResponse() {}

  explicit DeleteDingtalkOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDingtalkOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDingtalkOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDingtalkOpenPlatformConfigResponse() = default;
};
class DeleteFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> spaceId{};

  DeleteFileRequest() {}

  explicit DeleteFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteFileRequest() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFileResponseBody() = default;
};
class DeleteFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFileResponseBody> body{};

  DeleteFileResponse() {}

  explicit DeleteFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileResponse() = default;
};
class DeleteFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> spaceId{};

  DeleteFunctionRequest() {}

  explicit DeleteFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteFunctionRequest() = default;
};
class DeleteFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFunctionResponseBody() {}

  explicit DeleteFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFunctionResponseBody() = default;
};
class DeleteFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFunctionResponseBody> body{};

  DeleteFunctionResponse() {}

  explicit DeleteFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFunctionResponse() = default;
};
class DeleteSpaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  DeleteSpaceRequest() {}

  explicit DeleteSpaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteSpaceRequest() = default;
};
class DeleteSpaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSpaceResponseBody() {}

  explicit DeleteSpaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSpaceResponseBody() = default;
};
class DeleteSpaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSpaceResponseBody> body{};

  DeleteSpaceResponse() {}

  explicit DeleteSpaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSpaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSpaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSpaceResponse() = default;
};
class DeleteWebHostingCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> spaceId{};

  DeleteWebHostingCertificateRequest() {}

  explicit DeleteWebHostingCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteWebHostingCertificateRequest() = default;
};
class DeleteWebHostingCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteWebHostingCertificateResponseBody() {}

  explicit DeleteWebHostingCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWebHostingCertificateResponseBody() = default;
};
class DeleteWebHostingCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWebHostingCertificateResponseBody> body{};

  DeleteWebHostingCertificateResponse() {}

  explicit DeleteWebHostingCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWebHostingCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWebHostingCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWebHostingCertificateResponse() = default;
};
class DeleteWebHostingFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> spaceId{};

  DeleteWebHostingFileRequest() {}

  explicit DeleteWebHostingFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteWebHostingFileRequest() = default;
};
class DeleteWebHostingFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  DeleteWebHostingFileResponseBody() {}

  explicit DeleteWebHostingFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWebHostingFileResponseBody() = default;
};
class DeleteWebHostingFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWebHostingFileResponseBody> body{};

  DeleteWebHostingFileResponse() {}

  explicit DeleteWebHostingFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWebHostingFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWebHostingFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWebHostingFileResponse() = default;
};
class DeleteWechatOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> spaceId{};

  DeleteWechatOpenPlatformConfigRequest() {}

  explicit DeleteWechatOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeleteWechatOpenPlatformConfigRequest() = default;
};
class DeleteWechatOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWechatOpenPlatformConfigResponseBody() {}

  explicit DeleteWechatOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWechatOpenPlatformConfigResponseBody() = default;
};
class DeleteWechatOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWechatOpenPlatformConfigResponseBody> body{};

  DeleteWechatOpenPlatformConfigResponse() {}

  explicit DeleteWechatOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWechatOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWechatOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWechatOpenPlatformConfigResponse() = default;
};
class DeployFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> deploymentId{};
  shared_ptr<string> spaceId{};

  DeployFunctionRequest() {}

  explicit DeployFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deploymentId) {
      res["DeploymentId"] = boost::any(*deploymentId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeploymentId") != m.end() && !m["DeploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["DeploymentId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DeployFunctionRequest() = default;
};
class DeployFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployFunctionResponseBody() {}

  explicit DeployFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeployFunctionResponseBody() = default;
};
class DeployFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployFunctionResponseBody> body{};

  DeployFunctionResponse() {}

  explicit DeployFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DeployFunctionResponse() = default;
};
class DescribeCdnDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};

  DescribeCdnDomainRequest() {}

  explicit DescribeCdnDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCdnDomainRequest() = default;
};
class DescribeCdnDomainResponseBodyAuthConfig : public Darabonba::Model {
public:
  shared_ptr<long> authDelta{};
  shared_ptr<string> authKey{};
  shared_ptr<string> authType{};
  shared_ptr<string> configId{};

  DescribeCdnDomainResponseBodyAuthConfig() {}

  explicit DescribeCdnDomainResponseBodyAuthConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authDelta) {
      res["AuthDelta"] = boost::any(*authDelta);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (configId) {
      res["configId"] = boost::any(*configId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthDelta") != m.end() && !m["AuthDelta"].empty()) {
      authDelta = make_shared<long>(boost::any_cast<long>(m["AuthDelta"]));
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("configId") != m.end() && !m["configId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["configId"]));
    }
  }


  virtual ~DescribeCdnDomainResponseBodyAuthConfig() = default;
};
class DescribeCdnDomainResponseBodyCorsConfig : public Darabonba::Model {
public:
  shared_ptr<bool> accessOriginControl{};
  shared_ptr<string> allowOrigin{};
  shared_ptr<string> configId{};

  DescribeCdnDomainResponseBodyCorsConfig() {}

  explicit DescribeCdnDomainResponseBodyCorsConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessOriginControl) {
      res["AccessOriginControl"] = boost::any(*accessOriginControl);
    }
    if (allowOrigin) {
      res["AllowOrigin"] = boost::any(*allowOrigin);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessOriginControl") != m.end() && !m["AccessOriginControl"].empty()) {
      accessOriginControl = make_shared<bool>(boost::any_cast<bool>(m["AccessOriginControl"]));
    }
    if (m.find("AllowOrigin") != m.end() && !m["AllowOrigin"].empty()) {
      allowOrigin = make_shared<string>(boost::any_cast<string>(m["AllowOrigin"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
  }


  virtual ~DescribeCdnDomainResponseBodyCorsConfig() = default;
};
class DescribeCdnDomainResponseBodyIpConfig : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> ipList{};
  shared_ptr<string> type{};

  DescribeCdnDomainResponseBodyIpConfig() {}

  explicit DescribeCdnDomainResponseBodyIpConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (ipList) {
      res["IpList"] = boost::any(*ipList);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("IpList") != m.end() && !m["IpList"].empty()) {
      ipList = make_shared<string>(boost::any_cast<string>(m["IpList"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCdnDomainResponseBodyIpConfig() = default;
};
class DescribeCdnDomainResponseBodyRefererConfig : public Darabonba::Model {
public:
  shared_ptr<string> allowEmpty{};
  shared_ptr<string> configId{};
  shared_ptr<string> disableAst{};
  shared_ptr<string> referList{};
  shared_ptr<string> type{};

  DescribeCdnDomainResponseBodyRefererConfig() {}

  explicit DescribeCdnDomainResponseBodyRefererConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowEmpty) {
      res["AllowEmpty"] = boost::any(*allowEmpty);
    }
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (disableAst) {
      res["DisableAst"] = boost::any(*disableAst);
    }
    if (referList) {
      res["ReferList"] = boost::any(*referList);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowEmpty") != m.end() && !m["AllowEmpty"].empty()) {
      allowEmpty = make_shared<string>(boost::any_cast<string>(m["AllowEmpty"]));
    }
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("DisableAst") != m.end() && !m["DisableAst"].empty()) {
      disableAst = make_shared<string>(boost::any_cast<string>(m["DisableAst"]));
    }
    if (m.find("ReferList") != m.end() && !m["ReferList"].empty()) {
      referList = make_shared<string>(boost::any_cast<string>(m["ReferList"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeCdnDomainResponseBodyRefererConfig() = default;
};
class DescribeCdnDomainResponseBodyUaConfig : public Darabonba::Model {
public:
  shared_ptr<string> configId{};
  shared_ptr<string> type{};
  shared_ptr<string> uaList{};

  DescribeCdnDomainResponseBodyUaConfig() {}

  explicit DescribeCdnDomainResponseBodyUaConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configId) {
      res["ConfigId"] = boost::any(*configId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uaList) {
      res["UaList"] = boost::any(*uaList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigId") != m.end() && !m["ConfigId"].empty()) {
      configId = make_shared<string>(boost::any_cast<string>(m["ConfigId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UaList") != m.end() && !m["UaList"].empty()) {
      uaList = make_shared<string>(boost::any_cast<string>(m["UaList"]));
    }
  }


  virtual ~DescribeCdnDomainResponseBodyUaConfig() = default;
};
class DescribeCdnDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCdnDomainResponseBodyAuthConfig> authConfig{};
  shared_ptr<DescribeCdnDomainResponseBodyCorsConfig> corsConfig{};
  shared_ptr<string> domainName{};
  shared_ptr<DescribeCdnDomainResponseBodyIpConfig> ipConfig{};
  shared_ptr<DescribeCdnDomainResponseBodyRefererConfig> refererConfig{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> spaceId{};
  shared_ptr<DescribeCdnDomainResponseBodyUaConfig> uaConfig{};

  DescribeCdnDomainResponseBody() {}

  explicit DescribeCdnDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["AuthConfig"] = authConfig ? boost::any(authConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (corsConfig) {
      res["CorsConfig"] = corsConfig ? boost::any(corsConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (ipConfig) {
      res["IpConfig"] = ipConfig ? boost::any(ipConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (refererConfig) {
      res["RefererConfig"] = refererConfig ? boost::any(refererConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (uaConfig) {
      res["UaConfig"] = uaConfig ? boost::any(uaConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthConfig") != m.end() && !m["AuthConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuthConfig"].type()) {
        DescribeCdnDomainResponseBodyAuthConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuthConfig"]));
        authConfig = make_shared<DescribeCdnDomainResponseBodyAuthConfig>(model1);
      }
    }
    if (m.find("CorsConfig") != m.end() && !m["CorsConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CorsConfig"].type()) {
        DescribeCdnDomainResponseBodyCorsConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CorsConfig"]));
        corsConfig = make_shared<DescribeCdnDomainResponseBodyCorsConfig>(model1);
      }
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("IpConfig") != m.end() && !m["IpConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["IpConfig"].type()) {
        DescribeCdnDomainResponseBodyIpConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IpConfig"]));
        ipConfig = make_shared<DescribeCdnDomainResponseBodyIpConfig>(model1);
      }
    }
    if (m.find("RefererConfig") != m.end() && !m["RefererConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RefererConfig"].type()) {
        DescribeCdnDomainResponseBodyRefererConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RefererConfig"]));
        refererConfig = make_shared<DescribeCdnDomainResponseBodyRefererConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("UaConfig") != m.end() && !m["UaConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["UaConfig"].type()) {
        DescribeCdnDomainResponseBodyUaConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UaConfig"]));
        uaConfig = make_shared<DescribeCdnDomainResponseBodyUaConfig>(model1);
      }
    }
  }


  virtual ~DescribeCdnDomainResponseBody() = default;
};
class DescribeCdnDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCdnDomainResponseBody> body{};

  DescribeCdnDomainResponse() {}

  explicit DescribeCdnDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCdnDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCdnDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCdnDomainResponse() = default;
};
class DescribeFCOpenStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeFCOpenStatusResponseBody() {}

  explicit DescribeFCOpenStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeFCOpenStatusResponseBody() = default;
};
class DescribeFCOpenStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFCOpenStatusResponseBody> body{};

  DescribeFCOpenStatusResponse() {}

  explicit DescribeFCOpenStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFCOpenStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFCOpenStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFCOpenStatusResponse() = default;
};
class DescribeFileUploadSignedUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> fileId{};
  shared_ptr<string> filename{};
  shared_ptr<long> size{};
  shared_ptr<string> spaceId{};

  DescribeFileUploadSignedUrlRequest() {}

  explicit DescribeFileUploadSignedUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeFileUploadSignedUrlRequest() = default;
};
class DescribeFileUploadSignedUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> ossCallbackUrl{};
  shared_ptr<bool> overwrite{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signUrl{};

  DescribeFileUploadSignedUrlResponseBody() {}

  explicit DescribeFileUploadSignedUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (ossCallbackUrl) {
      res["OssCallbackUrl"] = boost::any(*ossCallbackUrl);
    }
    if (overwrite) {
      res["Overwrite"] = boost::any(*overwrite);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signUrl) {
      res["SignUrl"] = boost::any(*signUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("OssCallbackUrl") != m.end() && !m["OssCallbackUrl"].empty()) {
      ossCallbackUrl = make_shared<string>(boost::any_cast<string>(m["OssCallbackUrl"]));
    }
    if (m.find("Overwrite") != m.end() && !m["Overwrite"].empty()) {
      overwrite = make_shared<bool>(boost::any_cast<bool>(m["Overwrite"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignUrl") != m.end() && !m["SignUrl"].empty()) {
      signUrl = make_shared<string>(boost::any_cast<string>(m["SignUrl"]));
    }
  }


  virtual ~DescribeFileUploadSignedUrlResponseBody() = default;
};
class DescribeFileUploadSignedUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileUploadSignedUrlResponseBody> body{};

  DescribeFileUploadSignedUrlResponse() {}

  explicit DescribeFileUploadSignedUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileUploadSignedUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileUploadSignedUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileUploadSignedUrlResponse() = default;
};
class DescribeFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> spaceId{};

  DescribeFunctionRequest() {}

  explicit DescribeFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeFunctionRequest() = default;
};
class DescribeFunctionResponseBodyDeployment : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> downloadSignedUrl{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> versionNo{};

  DescribeFunctionResponseBodyDeployment() {}

  explicit DescribeFunctionResponseBodyDeployment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (deploymentId) {
      res["DeploymentId"] = boost::any(*deploymentId);
    }
    if (downloadSignedUrl) {
      res["DownloadSignedUrl"] = boost::any(*downloadSignedUrl);
    }
    if (modifiedAt) {
      res["ModifiedAt"] = boost::any(*modifiedAt);
    }
    if (versionNo) {
      res["VersionNo"] = boost::any(*versionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DeploymentId") != m.end() && !m["DeploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["DeploymentId"]));
    }
    if (m.find("DownloadSignedUrl") != m.end() && !m["DownloadSignedUrl"].empty()) {
      downloadSignedUrl = make_shared<string>(boost::any_cast<string>(m["DownloadSignedUrl"]));
    }
    if (m.find("ModifiedAt") != m.end() && !m["ModifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["ModifiedAt"]));
    }
    if (m.find("VersionNo") != m.end() && !m["VersionNo"].empty()) {
      versionNo = make_shared<string>(boost::any_cast<string>(m["VersionNo"]));
    }
  }


  virtual ~DescribeFunctionResponseBodyDeployment() = default;
};
class DescribeFunctionResponseBodyFunctionSpec : public Darabonba::Model {
public:
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<string> memory{};
  shared_ptr<string> runtime{};
  shared_ptr<string> timeout{};

  DescribeFunctionResponseBodyFunctionSpec() {}

  explicit DescribeFunctionResponseBodyFunctionSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceConcurrency) {
      res["InstanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceConcurrency") != m.end() && !m["InstanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["InstanceConcurrency"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<string>(boost::any_cast<string>(m["Timeout"]));
    }
  }


  virtual ~DescribeFunctionResponseBodyFunctionSpec() = default;
};
class DescribeFunctionResponseBodyFunction : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> desc{};
  shared_ptr<string> httpTriggerPath{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> name{};
  shared_ptr<DescribeFunctionResponseBodyFunctionSpec> spec{};
  shared_ptr<string> timingTriggerConfig{};
  shared_ptr<string> timingTriggerUserPayload{};

  DescribeFunctionResponseBodyFunction() {}

  explicit DescribeFunctionResponseBodyFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (httpTriggerPath) {
      res["HttpTriggerPath"] = boost::any(*httpTriggerPath);
    }
    if (modifiedAt) {
      res["ModifiedAt"] = boost::any(*modifiedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timingTriggerConfig) {
      res["TimingTriggerConfig"] = boost::any(*timingTriggerConfig);
    }
    if (timingTriggerUserPayload) {
      res["TimingTriggerUserPayload"] = boost::any(*timingTriggerUserPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("HttpTriggerPath") != m.end() && !m["HttpTriggerPath"].empty()) {
      httpTriggerPath = make_shared<string>(boost::any_cast<string>(m["HttpTriggerPath"]));
    }
    if (m.find("ModifiedAt") != m.end() && !m["ModifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["ModifiedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        DescribeFunctionResponseBodyFunctionSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<DescribeFunctionResponseBodyFunctionSpec>(model1);
      }
    }
    if (m.find("TimingTriggerConfig") != m.end() && !m["TimingTriggerConfig"].empty()) {
      timingTriggerConfig = make_shared<string>(boost::any_cast<string>(m["TimingTriggerConfig"]));
    }
    if (m.find("TimingTriggerUserPayload") != m.end() && !m["TimingTriggerUserPayload"].empty()) {
      timingTriggerUserPayload = make_shared<string>(boost::any_cast<string>(m["TimingTriggerUserPayload"]));
    }
  }


  virtual ~DescribeFunctionResponseBodyFunction() = default;
};
class DescribeFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeFunctionResponseBodyDeployment> deployment{};
  shared_ptr<DescribeFunctionResponseBodyFunction> function{};
  shared_ptr<string> requestId{};

  DescribeFunctionResponseBody() {}

  explicit DescribeFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployment) {
      res["Deployment"] = deployment ? boost::any(deployment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (function) {
      res["Function"] = function ? boost::any(function->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deployment") != m.end() && !m["Deployment"].empty()) {
      if (typeid(map<string, boost::any>) == m["Deployment"].type()) {
        DescribeFunctionResponseBodyDeployment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Deployment"]));
        deployment = make_shared<DescribeFunctionResponseBodyDeployment>(model1);
      }
    }
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      if (typeid(map<string, boost::any>) == m["Function"].type()) {
        DescribeFunctionResponseBodyFunction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Function"]));
        function = make_shared<DescribeFunctionResponseBodyFunction>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeFunctionResponseBody() = default;
};
class DescribeFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFunctionResponseBody> body{};

  DescribeFunctionResponse() {}

  explicit DescribeFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFunctionResponse() = default;
};
class DescribeHttpTriggerConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  DescribeHttpTriggerConfigRequest() {}

  explicit DescribeHttpTriggerConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeHttpTriggerConfigRequest() = default;
};
class DescribeHttpTriggerConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> customDomain{};
  shared_ptr<string> customDomainCertificateInfo{};
  shared_ptr<string> customDomainCname{};
  shared_ptr<string> defaultEndpoint{};
  shared_ptr<bool> enableService{};
  shared_ptr<string> requestId{};

  DescribeHttpTriggerConfigResponseBody() {}

  explicit DescribeHttpTriggerConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = boost::any(*customDomain);
    }
    if (customDomainCertificateInfo) {
      res["CustomDomainCertificateInfo"] = boost::any(*customDomainCertificateInfo);
    }
    if (customDomainCname) {
      res["CustomDomainCname"] = boost::any(*customDomainCname);
    }
    if (defaultEndpoint) {
      res["DefaultEndpoint"] = boost::any(*defaultEndpoint);
    }
    if (enableService) {
      res["EnableService"] = boost::any(*enableService);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomain = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
    if (m.find("CustomDomainCertificateInfo") != m.end() && !m["CustomDomainCertificateInfo"].empty()) {
      customDomainCertificateInfo = make_shared<string>(boost::any_cast<string>(m["CustomDomainCertificateInfo"]));
    }
    if (m.find("CustomDomainCname") != m.end() && !m["CustomDomainCname"].empty()) {
      customDomainCname = make_shared<string>(boost::any_cast<string>(m["CustomDomainCname"]));
    }
    if (m.find("DefaultEndpoint") != m.end() && !m["DefaultEndpoint"].empty()) {
      defaultEndpoint = make_shared<string>(boost::any_cast<string>(m["DefaultEndpoint"]));
    }
    if (m.find("EnableService") != m.end() && !m["EnableService"].empty()) {
      enableService = make_shared<bool>(boost::any_cast<bool>(m["EnableService"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeHttpTriggerConfigResponseBody() = default;
};
class DescribeHttpTriggerConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHttpTriggerConfigResponseBody> body{};

  DescribeHttpTriggerConfigResponse() {}

  explicit DescribeHttpTriggerConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeHttpTriggerConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHttpTriggerConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHttpTriggerConfigResponse() = default;
};
class DescribeResourceQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  DescribeResourceQuotaRequest() {}

  explicit DescribeResourceQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeResourceQuotaRequest() = default;
};
class DescribeResourceQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> cloudStorageDataSizeQuota{};
  shared_ptr<string> requestId{};
  shared_ptr<double> staticWebDataSizeQuota{};

  DescribeResourceQuotaResponseBody() {}

  explicit DescribeResourceQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudStorageDataSizeQuota) {
      res["CloudStorageDataSizeQuota"] = boost::any(*cloudStorageDataSizeQuota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (staticWebDataSizeQuota) {
      res["StaticWebDataSizeQuota"] = boost::any(*staticWebDataSizeQuota);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudStorageDataSizeQuota") != m.end() && !m["CloudStorageDataSizeQuota"].empty()) {
      cloudStorageDataSizeQuota = make_shared<double>(boost::any_cast<double>(m["CloudStorageDataSizeQuota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StaticWebDataSizeQuota") != m.end() && !m["StaticWebDataSizeQuota"].empty()) {
      staticWebDataSizeQuota = make_shared<double>(boost::any_cast<double>(m["StaticWebDataSizeQuota"]));
    }
  }


  virtual ~DescribeResourceQuotaResponseBody() = default;
};
class DescribeResourceQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceQuotaResponseBody> body{};

  DescribeResourceQuotaResponse() {}

  explicit DescribeResourceQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceQuotaResponse() = default;
};
class DescribeResourceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> format{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> startTime{};

  DescribeResourceUsageRequest() {}

  explicit DescribeResourceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeResourceUsageRequest() = default;
};
class DescribeResourceUsageResponseBodyDataListCloudDB : public Darabonba::Model {
public:
  shared_ptr<long> dataSize{};
  shared_ptr<long> read{};
  shared_ptr<long> write{};

  DescribeResourceUsageResponseBodyDataListCloudDB() {}

  explicit DescribeResourceUsageResponseBodyDataListCloudDB(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (read) {
      res["Read"] = boost::any(*read);
    }
    if (write) {
      res["Write"] = boost::any(*write);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Read") != m.end() && !m["Read"].empty()) {
      read = make_shared<long>(boost::any_cast<long>(m["Read"]));
    }
    if (m.find("Write") != m.end() && !m["Write"].empty()) {
      write = make_shared<long>(boost::any_cast<long>(m["Write"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBodyDataListCloudDB() = default;
};
class DescribeResourceUsageResponseBodyDataListCloudFunction : public Darabonba::Model {
public:
  shared_ptr<long> compute{};
  shared_ptr<long> count{};
  shared_ptr<long> traffic{};

  DescribeResourceUsageResponseBodyDataListCloudFunction() {}

  explicit DescribeResourceUsageResponseBodyDataListCloudFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compute) {
      res["Compute"] = boost::any(*compute);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (traffic) {
      res["Traffic"] = boost::any(*traffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Compute") != m.end() && !m["Compute"].empty()) {
      compute = make_shared<long>(boost::any_cast<long>(m["Compute"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Traffic") != m.end() && !m["Traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["Traffic"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBodyDataListCloudFunction() = default;
};
class DescribeResourceUsageResponseBodyDataListCloudStorage : public Darabonba::Model {
public:
  shared_ptr<long> dataSize{};
  shared_ptr<long> download{};
  shared_ptr<long> traffic{};
  shared_ptr<long> upload{};

  DescribeResourceUsageResponseBodyDataListCloudStorage() {}

  explicit DescribeResourceUsageResponseBodyDataListCloudStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (download) {
      res["Download"] = boost::any(*download);
    }
    if (traffic) {
      res["Traffic"] = boost::any(*traffic);
    }
    if (upload) {
      res["Upload"] = boost::any(*upload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Download") != m.end() && !m["Download"].empty()) {
      download = make_shared<long>(boost::any_cast<long>(m["Download"]));
    }
    if (m.find("Traffic") != m.end() && !m["Traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["Traffic"]));
    }
    if (m.find("Upload") != m.end() && !m["Upload"].empty()) {
      upload = make_shared<long>(boost::any_cast<long>(m["Upload"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBodyDataListCloudStorage() = default;
};
class DescribeResourceUsageResponseBodyDataListStaticWeb : public Darabonba::Model {
public:
  shared_ptr<long> dataSize{};
  shared_ptr<long> traffic{};

  DescribeResourceUsageResponseBodyDataListStaticWeb() {}

  explicit DescribeResourceUsageResponseBodyDataListStaticWeb(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (traffic) {
      res["Traffic"] = boost::any(*traffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<long>(boost::any_cast<long>(m["DataSize"]));
    }
    if (m.find("Traffic") != m.end() && !m["Traffic"].empty()) {
      traffic = make_shared<long>(boost::any_cast<long>(m["Traffic"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBodyDataListStaticWeb() = default;
};
class DescribeResourceUsageResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<DescribeResourceUsageResponseBodyDataListCloudDB> cloudDB{};
  shared_ptr<DescribeResourceUsageResponseBodyDataListCloudFunction> cloudFunction{};
  shared_ptr<DescribeResourceUsageResponseBodyDataListCloudStorage> cloudStorage{};
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeResourceUsageResponseBodyDataListStaticWeb> staticWeb{};

  DescribeResourceUsageResponseBodyDataList() {}

  explicit DescribeResourceUsageResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudDB) {
      res["CloudDB"] = cloudDB ? boost::any(cloudDB->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cloudFunction) {
      res["CloudFunction"] = cloudFunction ? boost::any(cloudFunction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cloudStorage) {
      res["CloudStorage"] = cloudStorage ? boost::any(cloudStorage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (staticWeb) {
      res["StaticWeb"] = staticWeb ? boost::any(staticWeb->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudDB") != m.end() && !m["CloudDB"].empty()) {
      if (typeid(map<string, boost::any>) == m["CloudDB"].type()) {
        DescribeResourceUsageResponseBodyDataListCloudDB model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CloudDB"]));
        cloudDB = make_shared<DescribeResourceUsageResponseBodyDataListCloudDB>(model1);
      }
    }
    if (m.find("CloudFunction") != m.end() && !m["CloudFunction"].empty()) {
      if (typeid(map<string, boost::any>) == m["CloudFunction"].type()) {
        DescribeResourceUsageResponseBodyDataListCloudFunction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CloudFunction"]));
        cloudFunction = make_shared<DescribeResourceUsageResponseBodyDataListCloudFunction>(model1);
      }
    }
    if (m.find("CloudStorage") != m.end() && !m["CloudStorage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CloudStorage"].type()) {
        DescribeResourceUsageResponseBodyDataListCloudStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CloudStorage"]));
        cloudStorage = make_shared<DescribeResourceUsageResponseBodyDataListCloudStorage>(model1);
      }
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("StaticWeb") != m.end() && !m["StaticWeb"].empty()) {
      if (typeid(map<string, boost::any>) == m["StaticWeb"].type()) {
        DescribeResourceUsageResponseBodyDataListStaticWeb model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StaticWeb"]));
        staticWeb = make_shared<DescribeResourceUsageResponseBodyDataListStaticWeb>(model1);
      }
    }
  }


  virtual ~DescribeResourceUsageResponseBodyDataList() = default;
};
class DescribeResourceUsageResponseBodyPaginator : public Darabonba::Model {
public:
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  DescribeResourceUsageResponseBodyPaginator() {}

  explicit DescribeResourceUsageResponseBodyPaginator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBodyPaginator() = default;
};
class DescribeResourceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<DescribeResourceUsageResponseBodyDataList>> dataList{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<DescribeResourceUsageResponseBodyPaginator> paginator{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeResourceUsageResponseBody() {}

  explicit DescribeResourceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (paginator) {
      res["Paginator"] = paginator ? boost::any(paginator->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<DescribeResourceUsageResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeResourceUsageResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<DescribeResourceUsageResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Paginator") != m.end() && !m["Paginator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paginator"].type()) {
        DescribeResourceUsageResponseBodyPaginator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paginator"]));
        paginator = make_shared<DescribeResourceUsageResponseBodyPaginator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeResourceUsageResponseBody() = default;
};
class DescribeResourceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeResourceUsageResponseBody> body{};

  DescribeResourceUsageResponse() {}

  explicit DescribeResourceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeResourceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeResourceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeResourceUsageResponse() = default;
};
class DescribeServicePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spaceId{};

  DescribeServicePolicyRequest() {}

  explicit DescribeServicePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeServicePolicyRequest() = default;
};
class DescribeServicePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<string> policy{};
  shared_ptr<string> policyName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spaceId{};

  DescribeServicePolicyResponseBody() {}

  explicit DescribeServicePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeServicePolicyResponseBody() = default;
};
class DescribeServicePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServicePolicyResponseBody> body{};

  DescribeServicePolicyResponse() {}

  explicit DescribeServicePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServicePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServicePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServicePolicyResponse() = default;
};
class DescribeSpaceClientConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<string> spaceId{};
  shared_ptr<long> workspaceId{};

  DescribeSpaceClientConfigRequest() {}

  explicit DescribeSpaceClientConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<long>(boost::any_cast<long>(m["WorkspaceId"]));
    }
  }


  virtual ~DescribeSpaceClientConfigRequest() = default;
};
class DescribeSpaceClientConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> fileUploadEndpoint{};
  shared_ptr<string> name{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> spaceId{};

  DescribeSpaceClientConfigResponseBody() {}

  explicit DescribeSpaceClientConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["ApiKey"] = boost::any(*apiKey);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (fileUploadEndpoint) {
      res["FileUploadEndpoint"] = boost::any(*fileUploadEndpoint);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKey") != m.end() && !m["ApiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["ApiKey"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("FileUploadEndpoint") != m.end() && !m["FileUploadEndpoint"].empty()) {
      fileUploadEndpoint = make_shared<string>(boost::any_cast<string>(m["FileUploadEndpoint"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeSpaceClientConfigResponseBody() = default;
};
class DescribeSpaceClientConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSpaceClientConfigResponseBody> body{};

  DescribeSpaceClientConfigResponse() {}

  explicit DescribeSpaceClientConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSpaceClientConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSpaceClientConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSpaceClientConfigResponse() = default;
};
class DescribeSpacesRequest : public Darabonba::Model {
public:
  shared_ptr<long> emasWorkspaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> spaceIds{};
  shared_ptr<string> specCode{};
  shared_ptr<string> tenantId{};

  DescribeSpacesRequest() {}

  explicit DescribeSpacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emasWorkspaceId) {
      res["EmasWorkspaceId"] = boost::any(*emasWorkspaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceIds) {
      res["SpaceIds"] = boost::any(*spaceIds);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmasWorkspaceId") != m.end() && !m["EmasWorkspaceId"].empty()) {
      emasWorkspaceId = make_shared<long>(boost::any_cast<long>(m["EmasWorkspaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceIds") != m.end() && !m["SpaceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpaceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpaceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spaceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~DescribeSpacesRequest() = default;
};
class DescribeSpacesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> emasWorkspaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spaceIdsShrink{};
  shared_ptr<string> specCode{};
  shared_ptr<string> tenantId{};

  DescribeSpacesShrinkRequest() {}

  explicit DescribeSpacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emasWorkspaceId) {
      res["EmasWorkspaceId"] = boost::any(*emasWorkspaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceIdsShrink) {
      res["SpaceIds"] = boost::any(*spaceIdsShrink);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmasWorkspaceId") != m.end() && !m["EmasWorkspaceId"].empty()) {
      emasWorkspaceId = make_shared<long>(boost::any_cast<long>(m["EmasWorkspaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceIds") != m.end() && !m["SpaceIds"].empty()) {
      spaceIdsShrink = make_shared<string>(boost::any_cast<string>(m["SpaceIds"]));
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
  }


  virtual ~DescribeSpacesShrinkRequest() = default;
};
class DescribeSpacesResponseBodySpaces : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<string> chargeType{};
  shared_ptr<string> description{};
  shared_ptr<long> emasWorkspaceId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<string> orderType{};
  shared_ptr<string> packageEndDate{};
  shared_ptr<string> packageStartDate{};
  shared_ptr<string> packageStatus{};
  shared_ptr<string> renewDuration{};
  shared_ptr<string> serviceStatus{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> specCode{};

  DescribeSpacesResponseBodySpaces() {}

  explicit DescribeSpacesResponseBodySpaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["AutoRenew"] = boost::any(*autoRenew);
    }
    if (chargeType) {
      res["ChargeType"] = boost::any(*chargeType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (emasWorkspaceId) {
      res["EmasWorkspaceId"] = boost::any(*emasWorkspaceId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (packageEndDate) {
      res["PackageEndDate"] = boost::any(*packageEndDate);
    }
    if (packageStartDate) {
      res["PackageStartDate"] = boost::any(*packageStartDate);
    }
    if (packageStatus) {
      res["PackageStatus"] = boost::any(*packageStatus);
    }
    if (renewDuration) {
      res["RenewDuration"] = boost::any(*renewDuration);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoRenew") != m.end() && !m["AutoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["AutoRenew"]));
    }
    if (m.find("ChargeType") != m.end() && !m["ChargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["ChargeType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmasWorkspaceId") != m.end() && !m["EmasWorkspaceId"].empty()) {
      emasWorkspaceId = make_shared<long>(boost::any_cast<long>(m["EmasWorkspaceId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("PackageEndDate") != m.end() && !m["PackageEndDate"].empty()) {
      packageEndDate = make_shared<string>(boost::any_cast<string>(m["PackageEndDate"]));
    }
    if (m.find("PackageStartDate") != m.end() && !m["PackageStartDate"].empty()) {
      packageStartDate = make_shared<string>(boost::any_cast<string>(m["PackageStartDate"]));
    }
    if (m.find("PackageStatus") != m.end() && !m["PackageStatus"].empty()) {
      packageStatus = make_shared<string>(boost::any_cast<string>(m["PackageStatus"]));
    }
    if (m.find("RenewDuration") != m.end() && !m["RenewDuration"].empty()) {
      renewDuration = make_shared<string>(boost::any_cast<string>(m["RenewDuration"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
  }


  virtual ~DescribeSpacesResponseBodySpaces() = default;
};
class DescribeSpacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeSpacesResponseBodySpaces>> spaces{};

  DescribeSpacesResponseBody() {}

  explicit DescribeSpacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaces) {
      vector<boost::any> temp1;
      for(auto item1:*spaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Spaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Spaces") != m.end() && !m["Spaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Spaces"].type()) {
        vector<DescribeSpacesResponseBodySpaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Spaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSpacesResponseBodySpaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spaces = make_shared<vector<DescribeSpacesResponseBodySpaces>>(expect1);
      }
    }
  }


  virtual ~DescribeSpacesResponseBody() = default;
};
class DescribeSpacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSpacesResponseBody> body{};

  DescribeSpacesResponse() {}

  explicit DescribeSpacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSpacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSpacesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSpacesResponse() = default;
};
class DescribeWebHostingFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> spaceId{};

  DescribeWebHostingFileRequest() {}

  explicit DescribeWebHostingFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~DescribeWebHostingFileRequest() = default;
};
class DescribeWebHostingFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> ETag{};
  shared_ptr<bool> exists{};
  shared_ptr<string> filePath{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> signedUrl{};
  shared_ptr<long> size{};

  DescribeWebHostingFileResponseBodyData() {}

  explicit DescribeWebHostingFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (ETag) {
      res["ETag"] = boost::any(*ETag);
    }
    if (exists) {
      res["Exists"] = boost::any(*exists);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (signedUrl) {
      res["SignedUrl"] = boost::any(*signedUrl);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("ETag") != m.end() && !m["ETag"].empty()) {
      ETag = make_shared<string>(boost::any_cast<string>(m["ETag"]));
    }
    if (m.find("Exists") != m.end() && !m["Exists"].empty()) {
      exists = make_shared<bool>(boost::any_cast<bool>(m["Exists"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("SignedUrl") != m.end() && !m["SignedUrl"].empty()) {
      signedUrl = make_shared<string>(boost::any_cast<string>(m["SignedUrl"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~DescribeWebHostingFileResponseBodyData() = default;
};
class DescribeWebHostingFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeWebHostingFileResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DescribeWebHostingFileResponseBody() {}

  explicit DescribeWebHostingFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebHostingFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeWebHostingFileResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeWebHostingFileResponseBody() = default;
};
class DescribeWebHostingFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebHostingFileResponseBody> body{};

  DescribeWebHostingFileResponse() {}

  explicit DescribeWebHostingFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebHostingFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebHostingFileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebHostingFileResponse() = default;
};
class EnableExtensionRequest : public Darabonba::Model {
public:
  shared_ptr<string> extensionId{};

  EnableExtensionRequest() {}

  explicit EnableExtensionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extensionId) {
      res["ExtensionId"] = boost::any(*extensionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtensionId") != m.end() && !m["ExtensionId"].empty()) {
      extensionId = make_shared<string>(boost::any_cast<string>(m["ExtensionId"]));
    }
  }


  virtual ~EnableExtensionRequest() = default;
};
class EnableExtensionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EnableExtensionResponseBody() {}

  explicit EnableExtensionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableExtensionResponseBody() = default;
};
class EnableExtensionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableExtensionResponseBody> body{};

  EnableExtensionResponse() {}

  explicit EnableExtensionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableExtensionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableExtensionResponseBody>(model1);
      }
    }
  }


  virtual ~EnableExtensionResponse() = default;
};
class GetWebHostingCertificateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> customDomain{};
  shared_ptr<string> spaceId{};

  GetWebHostingCertificateDetailRequest() {}

  explicit GetWebHostingCertificateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = boost::any(*customDomain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomain = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~GetWebHostingCertificateDetailRequest() = default;
};
class GetWebHostingCertificateDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certDomainName{};
  shared_ptr<long> certExpiredTime{};
  shared_ptr<string> certLife{};
  shared_ptr<string> certName{};
  shared_ptr<string> certType{};
  shared_ptr<string> serverCertificateStatus{};

  GetWebHostingCertificateDetailResponseBodyData() {}

  explicit GetWebHostingCertificateDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certDomainName) {
      res["CertDomainName"] = boost::any(*certDomainName);
    }
    if (certExpiredTime) {
      res["CertExpiredTime"] = boost::any(*certExpiredTime);
    }
    if (certLife) {
      res["CertLife"] = boost::any(*certLife);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (serverCertificateStatus) {
      res["ServerCertificateStatus"] = boost::any(*serverCertificateStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertDomainName") != m.end() && !m["CertDomainName"].empty()) {
      certDomainName = make_shared<string>(boost::any_cast<string>(m["CertDomainName"]));
    }
    if (m.find("CertExpiredTime") != m.end() && !m["CertExpiredTime"].empty()) {
      certExpiredTime = make_shared<long>(boost::any_cast<long>(m["CertExpiredTime"]));
    }
    if (m.find("CertLife") != m.end() && !m["CertLife"].empty()) {
      certLife = make_shared<string>(boost::any_cast<string>(m["CertLife"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("ServerCertificateStatus") != m.end() && !m["ServerCertificateStatus"].empty()) {
      serverCertificateStatus = make_shared<string>(boost::any_cast<string>(m["ServerCertificateStatus"]));
    }
  }


  virtual ~GetWebHostingCertificateDetailResponseBodyData() = default;
};
class GetWebHostingCertificateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetWebHostingCertificateDetailResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetWebHostingCertificateDetailResponseBody() {}

  explicit GetWebHostingCertificateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingCertificateDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWebHostingCertificateDetailResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetWebHostingCertificateDetailResponseBody() = default;
};
class GetWebHostingCertificateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebHostingCertificateDetailResponseBody> body{};

  GetWebHostingCertificateDetailResponse() {}

  explicit GetWebHostingCertificateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingCertificateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebHostingCertificateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebHostingCertificateDetailResponse() = default;
};
class GetWebHostingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  GetWebHostingConfigRequest() {}

  explicit GetWebHostingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~GetWebHostingConfigRequest() = default;
};
class GetWebHostingConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> allowedIps{};
  shared_ptr<string> defaultDomain{};
  shared_ptr<string> errorPath{};
  shared_ptr<string> historyModePath{};
  shared_ptr<string> indexPath{};
  shared_ptr<string> spaceId{};

  GetWebHostingConfigResponseBodyData() {}

  explicit GetWebHostingConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedIps) {
      res["AllowedIps"] = boost::any(*allowedIps);
    }
    if (defaultDomain) {
      res["DefaultDomain"] = boost::any(*defaultDomain);
    }
    if (errorPath) {
      res["ErrorPath"] = boost::any(*errorPath);
    }
    if (historyModePath) {
      res["HistoryModePath"] = boost::any(*historyModePath);
    }
    if (indexPath) {
      res["IndexPath"] = boost::any(*indexPath);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedIps") != m.end() && !m["AllowedIps"].empty()) {
      allowedIps = make_shared<string>(boost::any_cast<string>(m["AllowedIps"]));
    }
    if (m.find("DefaultDomain") != m.end() && !m["DefaultDomain"].empty()) {
      defaultDomain = make_shared<string>(boost::any_cast<string>(m["DefaultDomain"]));
    }
    if (m.find("ErrorPath") != m.end() && !m["ErrorPath"].empty()) {
      errorPath = make_shared<string>(boost::any_cast<string>(m["ErrorPath"]));
    }
    if (m.find("HistoryModePath") != m.end() && !m["HistoryModePath"].empty()) {
      historyModePath = make_shared<string>(boost::any_cast<string>(m["HistoryModePath"]));
    }
    if (m.find("IndexPath") != m.end() && !m["IndexPath"].empty()) {
      indexPath = make_shared<string>(boost::any_cast<string>(m["IndexPath"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~GetWebHostingConfigResponseBodyData() = default;
};
class GetWebHostingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetWebHostingConfigResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetWebHostingConfigResponseBody() {}

  explicit GetWebHostingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWebHostingConfigResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetWebHostingConfigResponseBody() = default;
};
class GetWebHostingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebHostingConfigResponseBody> body{};

  GetWebHostingConfigResponse() {}

  explicit GetWebHostingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebHostingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebHostingConfigResponse() = default;
};
class GetWebHostingDomainVerificationContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> spaceId{};

  GetWebHostingDomainVerificationContentRequest() {}

  explicit GetWebHostingDomainVerificationContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~GetWebHostingDomainVerificationContentRequest() = default;
};
class GetWebHostingDomainVerificationContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> domain{};

  GetWebHostingDomainVerificationContentResponseBodyData() {}

  explicit GetWebHostingDomainVerificationContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
  }


  virtual ~GetWebHostingDomainVerificationContentResponseBodyData() = default;
};
class GetWebHostingDomainVerificationContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetWebHostingDomainVerificationContentResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetWebHostingDomainVerificationContentResponseBody() {}

  explicit GetWebHostingDomainVerificationContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingDomainVerificationContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWebHostingDomainVerificationContentResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetWebHostingDomainVerificationContentResponseBody() = default;
};
class GetWebHostingDomainVerificationContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebHostingDomainVerificationContentResponseBody> body{};

  GetWebHostingDomainVerificationContentResponse() {}

  explicit GetWebHostingDomainVerificationContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingDomainVerificationContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebHostingDomainVerificationContentResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebHostingDomainVerificationContentResponse() = default;
};
class GetWebHostingStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  GetWebHostingStatusRequest() {}

  explicit GetWebHostingStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~GetWebHostingStatusRequest() = default;
};
class GetWebHostingStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};
  shared_ptr<string> status{};

  GetWebHostingStatusResponseBodyData() {}

  explicit GetWebHostingStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetWebHostingStatusResponseBodyData() = default;
};
class GetWebHostingStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetWebHostingStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetWebHostingStatusResponseBody() {}

  explicit GetWebHostingStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWebHostingStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetWebHostingStatusResponseBody() = default;
};
class GetWebHostingStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebHostingStatusResponseBody> body{};

  GetWebHostingStatusResponse() {}

  explicit GetWebHostingStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebHostingStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebHostingStatusResponse() = default;
};
class GetWebHostingUploadCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> spaceId{};

  GetWebHostingUploadCredentialRequest() {}

  explicit GetWebHostingUploadCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~GetWebHostingUploadCredentialRequest() = default;
};
class GetWebHostingUploadCredentialResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> endpoint{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> filePath{};
  shared_ptr<string> policy{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> signature{};

  GetWebHostingUploadCredentialResponseBodyData() {}

  explicit GetWebHostingUploadCredentialResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GetWebHostingUploadCredentialResponseBodyData() = default;
};
class GetWebHostingUploadCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetWebHostingUploadCredentialResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetWebHostingUploadCredentialResponseBody() {}

  explicit GetWebHostingUploadCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingUploadCredentialResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetWebHostingUploadCredentialResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetWebHostingUploadCredentialResponseBody() = default;
};
class GetWebHostingUploadCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebHostingUploadCredentialResponseBody> body{};

  GetWebHostingUploadCredentialResponse() {}

  explicit GetWebHostingUploadCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebHostingUploadCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebHostingUploadCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebHostingUploadCredentialResponse() = default;
};
class ListAvailableCertificatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> spaceId{};

  ListAvailableCertificatesRequest() {}

  explicit ListAvailableCertificatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListAvailableCertificatesRequest() = default;
};
class ListAvailableCertificatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> statusCode{};

  ListAvailableCertificatesResponseBodyData() {}

  explicit ListAvailableCertificatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
  }


  virtual ~ListAvailableCertificatesResponseBodyData() = default;
};
class ListAvailableCertificatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAvailableCertificatesResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListAvailableCertificatesResponseBody() {}

  explicit ListAvailableCertificatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAvailableCertificatesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAvailableCertificatesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAvailableCertificatesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAvailableCertificatesResponseBody() = default;
};
class ListAvailableCertificatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAvailableCertificatesResponseBody> body{};

  ListAvailableCertificatesResponse() {}

  explicit ListAvailableCertificatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAvailableCertificatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAvailableCertificatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAvailableCertificatesResponse() = default;
};
class ListCorsDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  ListCorsDomainsRequest() {}

  explicit ListCorsDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListCorsDomainsRequest() = default;
};
class ListCorsDomainsResponseBodyDomains : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> domainId{};

  ListCorsDomainsResponseBodyDomains() {}

  explicit ListCorsDomainsResponseBodyDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainId) {
      res["DomainId"] = boost::any(*domainId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainId") != m.end() && !m["DomainId"].empty()) {
      domainId = make_shared<string>(boost::any_cast<string>(m["DomainId"]));
    }
  }


  virtual ~ListCorsDomainsResponseBodyDomains() = default;
};
class ListCorsDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCorsDomainsResponseBodyDomains>> domains{};
  shared_ptr<string> requestId{};

  ListCorsDomainsResponseBody() {}

  explicit ListCorsDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<ListCorsDomainsResponseBodyDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCorsDomainsResponseBodyDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<ListCorsDomainsResponseBodyDomains>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCorsDomainsResponseBody() = default;
};
class ListCorsDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCorsDomainsResponseBody> body{};

  ListCorsDomainsResponse() {}

  explicit ListCorsDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCorsDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCorsDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCorsDomainsResponse() = default;
};
class ListDingtalkOpenPlatformConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  ListDingtalkOpenPlatformConfigsRequest() {}

  explicit ListDingtalkOpenPlatformConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListDingtalkOpenPlatformConfigsRequest() = default;
};
class ListDingtalkOpenPlatformConfigsResponseBodyConfigs : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};

  ListDingtalkOpenPlatformConfigsResponseBodyConfigs() {}

  explicit ListDingtalkOpenPlatformConfigsResponseBodyConfigs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~ListDingtalkOpenPlatformConfigsResponseBodyConfigs() = default;
};
class ListDingtalkOpenPlatformConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDingtalkOpenPlatformConfigsResponseBodyConfigs>> configs{};
  shared_ptr<string> requestId{};

  ListDingtalkOpenPlatformConfigsResponseBody() {}

  explicit ListDingtalkOpenPlatformConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configs) {
      vector<boost::any> temp1;
      for(auto item1:*configs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Configs"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Configs") != m.end() && !m["Configs"].empty()) {
      if (typeid(vector<boost::any>) == m["Configs"].type()) {
        vector<ListDingtalkOpenPlatformConfigsResponseBodyConfigs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Configs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDingtalkOpenPlatformConfigsResponseBodyConfigs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configs = make_shared<vector<ListDingtalkOpenPlatformConfigsResponseBodyConfigs>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDingtalkOpenPlatformConfigsResponseBody() = default;
};
class ListDingtalkOpenPlatformConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDingtalkOpenPlatformConfigsResponseBody> body{};

  ListDingtalkOpenPlatformConfigsResponse() {}

  explicit ListDingtalkOpenPlatformConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDingtalkOpenPlatformConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDingtalkOpenPlatformConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDingtalkOpenPlatformConfigsResponse() = default;
};
class ListExtensionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListExtensionsRequest() {}

  explicit ListExtensionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListExtensionsRequest() = default;
};
class ListExtensionsResponseBodyExtensions : public Darabonba::Model {
public:
  shared_ptr<string> enabled{};
  shared_ptr<string> extensionDesc{};
  shared_ptr<string> extensionDocumentationLink{};
  shared_ptr<string> extensionId{};
  shared_ptr<string> extensionName{};

  ListExtensionsResponseBodyExtensions() {}

  explicit ListExtensionsResponseBodyExtensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (extensionDesc) {
      res["ExtensionDesc"] = boost::any(*extensionDesc);
    }
    if (extensionDocumentationLink) {
      res["ExtensionDocumentationLink"] = boost::any(*extensionDocumentationLink);
    }
    if (extensionId) {
      res["ExtensionId"] = boost::any(*extensionId);
    }
    if (extensionName) {
      res["ExtensionName"] = boost::any(*extensionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<string>(boost::any_cast<string>(m["Enabled"]));
    }
    if (m.find("ExtensionDesc") != m.end() && !m["ExtensionDesc"].empty()) {
      extensionDesc = make_shared<string>(boost::any_cast<string>(m["ExtensionDesc"]));
    }
    if (m.find("ExtensionDocumentationLink") != m.end() && !m["ExtensionDocumentationLink"].empty()) {
      extensionDocumentationLink = make_shared<string>(boost::any_cast<string>(m["ExtensionDocumentationLink"]));
    }
    if (m.find("ExtensionId") != m.end() && !m["ExtensionId"].empty()) {
      extensionId = make_shared<string>(boost::any_cast<string>(m["ExtensionId"]));
    }
    if (m.find("ExtensionName") != m.end() && !m["ExtensionName"].empty()) {
      extensionName = make_shared<string>(boost::any_cast<string>(m["ExtensionName"]));
    }
  }


  virtual ~ListExtensionsResponseBodyExtensions() = default;
};
class ListExtensionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListExtensionsResponseBodyExtensions>> extensions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListExtensionsResponseBody() {}

  explicit ListExtensionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extensions) {
      vector<boost::any> temp1;
      for(auto item1:*extensions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Extensions"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      if (typeid(vector<boost::any>) == m["Extensions"].type()) {
        vector<ListExtensionsResponseBodyExtensions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Extensions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListExtensionsResponseBodyExtensions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extensions = make_shared<vector<ListExtensionsResponseBodyExtensions>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListExtensionsResponseBody() = default;
};
class ListExtensionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListExtensionsResponseBody> body{};

  ListExtensionsResponse() {}

  explicit ListExtensionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListExtensionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListExtensionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListExtensionsResponse() = default;
};
class ListFileRequest : public Darabonba::Model {
public:
  shared_ptr<long> authDelta{};
  shared_ptr<string> fileId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> mode{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prefix{};
  shared_ptr<string> spaceId{};

  ListFileRequest() {}

  explicit ListFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authDelta) {
      res["AuthDelta"] = boost::any(*authDelta);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthDelta") != m.end() && !m["AuthDelta"].empty()) {
      authDelta = make_shared<long>(boost::any_cast<long>(m["AuthDelta"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListFileRequest() = default;
};
class ListFileResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> authDelta{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ListFileResponseBodyDataList() {}

  explicit ListFileResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authDelta) {
      res["AuthDelta"] = boost::any(*authDelta);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthDelta") != m.end() && !m["AuthDelta"].empty()) {
      authDelta = make_shared<long>(boost::any_cast<long>(m["AuthDelta"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListFileResponseBodyDataList() = default;
};
class ListFileResponseBodyPaginator : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> pageSize{};

  ListFileResponseBodyPaginator() {}

  explicit ListFileResponseBodyPaginator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListFileResponseBodyPaginator() = default;
};
class ListFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFileResponseBodyDataList>> dataList{};
  shared_ptr<ListFileResponseBodyPaginator> paginator{};
  shared_ptr<string> requestId{};

  ListFileResponseBody() {}

  explicit ListFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (paginator) {
      res["Paginator"] = paginator ? boost::any(paginator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListFileResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFileResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListFileResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Paginator") != m.end() && !m["Paginator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paginator"].type()) {
        ListFileResponseBodyPaginator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paginator"]));
        paginator = make_shared<ListFileResponseBodyPaginator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFileResponseBody() = default;
};
class ListFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFileResponseBody> body{};

  ListFileResponse() {}

  explicit ListFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFileResponseBody>(model1);
      }
    }
  }


  virtual ~ListFileResponse() = default;
};
class ListFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> filterBy{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spaceId{};

  ListFunctionRequest() {}

  explicit ListFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filterBy) {
      res["FilterBy"] = boost::any(*filterBy);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilterBy") != m.end() && !m["FilterBy"].empty()) {
      filterBy = make_shared<string>(boost::any_cast<string>(m["FilterBy"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListFunctionRequest() = default;
};
class ListFunctionResponseBodyDataListSpec : public Darabonba::Model {
public:
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<string> memory{};
  shared_ptr<string> runtime{};
  shared_ptr<string> timeout{};

  ListFunctionResponseBodyDataListSpec() {}

  explicit ListFunctionResponseBodyDataListSpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceConcurrency) {
      res["InstanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceConcurrency") != m.end() && !m["InstanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["InstanceConcurrency"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<string>(boost::any_cast<string>(m["Timeout"]));
    }
  }


  virtual ~ListFunctionResponseBodyDataListSpec() = default;
};
class ListFunctionResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> desc{};
  shared_ptr<string> httpTriggerPath{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> name{};
  shared_ptr<ListFunctionResponseBodyDataListSpec> spec{};
  shared_ptr<string> timingTriggerConfig{};

  ListFunctionResponseBodyDataList() {}

  explicit ListFunctionResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (httpTriggerPath) {
      res["HttpTriggerPath"] = boost::any(*httpTriggerPath);
    }
    if (modifiedAt) {
      res["ModifiedAt"] = boost::any(*modifiedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timingTriggerConfig) {
      res["TimingTriggerConfig"] = boost::any(*timingTriggerConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("HttpTriggerPath") != m.end() && !m["HttpTriggerPath"].empty()) {
      httpTriggerPath = make_shared<string>(boost::any_cast<string>(m["HttpTriggerPath"]));
    }
    if (m.find("ModifiedAt") != m.end() && !m["ModifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["ModifiedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        ListFunctionResponseBodyDataListSpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<ListFunctionResponseBodyDataListSpec>(model1);
      }
    }
    if (m.find("TimingTriggerConfig") != m.end() && !m["TimingTriggerConfig"].empty()) {
      timingTriggerConfig = make_shared<string>(boost::any_cast<string>(m["TimingTriggerConfig"]));
    }
  }


  virtual ~ListFunctionResponseBodyDataList() = default;
};
class ListFunctionResponseBodyPaginator : public Darabonba::Model {
public:
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListFunctionResponseBodyPaginator() {}

  explicit ListFunctionResponseBodyPaginator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListFunctionResponseBodyPaginator() = default;
};
class ListFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionResponseBodyDataList>> dataList{};
  shared_ptr<ListFunctionResponseBodyPaginator> paginator{};
  shared_ptr<string> requestId{};

  ListFunctionResponseBody() {}

  explicit ListFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (paginator) {
      res["Paginator"] = paginator ? boost::any(paginator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListFunctionResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListFunctionResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Paginator") != m.end() && !m["Paginator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paginator"].type()) {
        ListFunctionResponseBodyPaginator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paginator"]));
        paginator = make_shared<ListFunctionResponseBodyPaginator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFunctionResponseBody() = default;
};
class ListFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionResponseBody> body{};

  ListFunctionResponse() {}

  explicit ListFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionResponse() = default;
};
class ListFunctionDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> status{};

  ListFunctionDeploymentRequest() {}

  explicit ListFunctionDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFunctionDeploymentRequest() = default;
};
class ListFunctionDeploymentResponseBodyDataListStatus : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> status{};

  ListFunctionDeploymentResponseBodyDataListStatus() {}

  explicit ListFunctionDeploymentResponseBodyDataListStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListFunctionDeploymentResponseBodyDataListStatus() = default;
};
class ListFunctionDeploymentResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> deploymentId{};
  shared_ptr<string> downloadSignedUrl{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<ListFunctionDeploymentResponseBodyDataListStatus> status{};
  shared_ptr<string> versionNo{};

  ListFunctionDeploymentResponseBodyDataList() {}

  explicit ListFunctionDeploymentResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (deploymentId) {
      res["DeploymentId"] = boost::any(*deploymentId);
    }
    if (downloadSignedUrl) {
      res["DownloadSignedUrl"] = boost::any(*downloadSignedUrl);
    }
    if (modifiedAt) {
      res["ModifiedAt"] = boost::any(*modifiedAt);
    }
    if (status) {
      res["Status"] = status ? boost::any(status->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (versionNo) {
      res["VersionNo"] = boost::any(*versionNo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("DeploymentId") != m.end() && !m["DeploymentId"].empty()) {
      deploymentId = make_shared<string>(boost::any_cast<string>(m["DeploymentId"]));
    }
    if (m.find("DownloadSignedUrl") != m.end() && !m["DownloadSignedUrl"].empty()) {
      downloadSignedUrl = make_shared<string>(boost::any_cast<string>(m["DownloadSignedUrl"]));
    }
    if (m.find("ModifiedAt") != m.end() && !m["ModifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["ModifiedAt"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      if (typeid(map<string, boost::any>) == m["Status"].type()) {
        ListFunctionDeploymentResponseBodyDataListStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Status"]));
        status = make_shared<ListFunctionDeploymentResponseBodyDataListStatus>(model1);
      }
    }
    if (m.find("VersionNo") != m.end() && !m["VersionNo"].empty()) {
      versionNo = make_shared<string>(boost::any_cast<string>(m["VersionNo"]));
    }
  }


  virtual ~ListFunctionDeploymentResponseBodyDataList() = default;
};
class ListFunctionDeploymentResponseBodyPaginator : public Darabonba::Model {
public:
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListFunctionDeploymentResponseBodyPaginator() {}

  explicit ListFunctionDeploymentResponseBodyPaginator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListFunctionDeploymentResponseBodyPaginator() = default;
};
class ListFunctionDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionDeploymentResponseBodyDataList>> dataList{};
  shared_ptr<ListFunctionDeploymentResponseBodyPaginator> paginator{};
  shared_ptr<string> requestId{};

  ListFunctionDeploymentResponseBody() {}

  explicit ListFunctionDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (paginator) {
      res["Paginator"] = paginator ? boost::any(paginator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListFunctionDeploymentResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionDeploymentResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListFunctionDeploymentResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Paginator") != m.end() && !m["Paginator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paginator"].type()) {
        ListFunctionDeploymentResponseBodyPaginator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paginator"]));
        paginator = make_shared<ListFunctionDeploymentResponseBodyPaginator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFunctionDeploymentResponseBody() = default;
};
class ListFunctionDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionDeploymentResponseBody> body{};

  ListFunctionDeploymentResponse() {}

  explicit ListFunctionDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionDeploymentResponse() = default;
};
class ListFunctionLogRequest : public Darabonba::Model {
public:
  shared_ptr<long> fromDate{};
  shared_ptr<string> logRequestId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> status{};
  shared_ptr<long> toDate{};

  ListFunctionLogRequest() {}

  explicit ListFunctionLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromDate) {
      res["FromDate"] = boost::any(*fromDate);
    }
    if (logRequestId) {
      res["LogRequestId"] = boost::any(*logRequestId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromDate") != m.end() && !m["FromDate"].empty()) {
      fromDate = make_shared<long>(boost::any_cast<long>(m["FromDate"]));
    }
    if (m.find("LogRequestId") != m.end() && !m["LogRequestId"].empty()) {
      logRequestId = make_shared<string>(boost::any_cast<string>(m["LogRequestId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<long>(boost::any_cast<long>(m["ToDate"]));
    }
  }


  virtual ~ListFunctionLogRequest() = default;
};
class ListFunctionLogResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contents{};
  shared_ptr<string> functionName{};
  shared_ptr<vector<string>> levels{};
  shared_ptr<string> requestId{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> timestamps{};

  ListFunctionLogResponseBodyDataList() {}

  explicit ListFunctionLogResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contents) {
      res["Contents"] = boost::any(*contents);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (levels) {
      res["Levels"] = boost::any(*levels);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (timestamps) {
      res["Timestamps"] = boost::any(*timestamps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Contents"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Contents"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contents = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("Levels") != m.end() && !m["Levels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Levels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Levels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      levels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Timestamps") != m.end() && !m["Timestamps"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Timestamps"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Timestamps"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      timestamps = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFunctionLogResponseBodyDataList() = default;
};
class ListFunctionLogResponseBodyPaginator : public Darabonba::Model {
public:
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListFunctionLogResponseBodyPaginator() {}

  explicit ListFunctionLogResponseBodyPaginator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListFunctionLogResponseBodyPaginator() = default;
};
class ListFunctionLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionLogResponseBodyDataList>> dataList{};
  shared_ptr<ListFunctionLogResponseBodyPaginator> paginator{};
  shared_ptr<string> requestId{};

  ListFunctionLogResponseBody() {}

  explicit ListFunctionLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (paginator) {
      res["Paginator"] = paginator ? boost::any(paginator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListFunctionLogResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionLogResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListFunctionLogResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Paginator") != m.end() && !m["Paginator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paginator"].type()) {
        ListFunctionLogResponseBodyPaginator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paginator"]));
        paginator = make_shared<ListFunctionLogResponseBodyPaginator>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFunctionLogResponseBody() = default;
};
class ListFunctionLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionLogResponseBody> body{};

  ListFunctionLogResponse() {}

  explicit ListFunctionLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFunctionLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionLogResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionLogResponse() = default;
};
class ListOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> platform{};
  shared_ptr<string> spaceId{};

  ListOpenPlatformConfigRequest() {}

  explicit ListOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListOpenPlatformConfigRequest() = default;
};
class ListOpenPlatformConfigResponseBodySecretList : public Darabonba::Model {
public:
  shared_ptr<string> appCert{};
  shared_ptr<string> appId{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> platform{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> publicCert{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> rootCert{};
  shared_ptr<string> signMode{};
  shared_ptr<string> spaceId{};

  ListOpenPlatformConfigResponseBodySecretList() {}

  explicit ListOpenPlatformConfigResponseBodySecretList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCert) {
      res["AppCert"] = boost::any(*appCert);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (publicCert) {
      res["PublicCert"] = boost::any(*publicCert);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (rootCert) {
      res["RootCert"] = boost::any(*rootCert);
    }
    if (signMode) {
      res["SignMode"] = boost::any(*signMode);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCert") != m.end() && !m["AppCert"].empty()) {
      appCert = make_shared<string>(boost::any_cast<string>(m["AppCert"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("PublicCert") != m.end() && !m["PublicCert"].empty()) {
      publicCert = make_shared<string>(boost::any_cast<string>(m["PublicCert"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("RootCert") != m.end() && !m["RootCert"].empty()) {
      rootCert = make_shared<string>(boost::any_cast<string>(m["RootCert"]));
    }
    if (m.find("SignMode") != m.end() && !m["SignMode"].empty()) {
      signMode = make_shared<string>(boost::any_cast<string>(m["SignMode"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListOpenPlatformConfigResponseBodySecretList() = default;
};
class ListOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOpenPlatformConfigResponseBodySecretList>> secretList{};

  ListOpenPlatformConfigResponseBody() {}

  explicit ListOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretList) {
      vector<boost::any> temp1;
      for(auto item1:*secretList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecretList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretList") != m.end() && !m["SecretList"].empty()) {
      if (typeid(vector<boost::any>) == m["SecretList"].type()) {
        vector<ListOpenPlatformConfigResponseBodySecretList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecretList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOpenPlatformConfigResponseBodySecretList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secretList = make_shared<vector<ListOpenPlatformConfigResponseBodySecretList>>(expect1);
      }
    }
  }


  virtual ~ListOpenPlatformConfigResponseBody() = default;
};
class ListOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOpenPlatformConfigResponseBody> body{};

  ListOpenPlatformConfigResponse() {}

  explicit ListOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ListOpenPlatformConfigResponse() = default;
};
class ListSpaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> emasWorkspaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> spaceIds{};

  ListSpaceRequest() {}

  explicit ListSpaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emasWorkspaceId) {
      res["EmasWorkspaceId"] = boost::any(*emasWorkspaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceIds) {
      res["SpaceIds"] = boost::any(*spaceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmasWorkspaceId") != m.end() && !m["EmasWorkspaceId"].empty()) {
      emasWorkspaceId = make_shared<string>(boost::any_cast<string>(m["EmasWorkspaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceIds") != m.end() && !m["SpaceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpaceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpaceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spaceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListSpaceRequest() = default;
};
class ListSpaceShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> emasWorkspaceId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> spaceIdsShrink{};

  ListSpaceShrinkRequest() {}

  explicit ListSpaceShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (emasWorkspaceId) {
      res["EmasWorkspaceId"] = boost::any(*emasWorkspaceId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (spaceIdsShrink) {
      res["SpaceIds"] = boost::any(*spaceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EmasWorkspaceId") != m.end() && !m["EmasWorkspaceId"].empty()) {
      emasWorkspaceId = make_shared<string>(boost::any_cast<string>(m["EmasWorkspaceId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SpaceIds") != m.end() && !m["SpaceIds"].empty()) {
      spaceIdsShrink = make_shared<string>(boost::any_cast<string>(m["SpaceIds"]));
    }
  }


  virtual ~ListSpaceShrinkRequest() = default;
};
class ListSpaceResponseBodySpaces : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtLastAccess{};
  shared_ptr<string> name{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> status{};

  ListSpaceResponseBodySpaces() {}

  explicit ListSpaceResponseBodySpaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtLastAccess) {
      res["GmtLastAccess"] = boost::any(*gmtLastAccess);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtLastAccess") != m.end() && !m["GmtLastAccess"].empty()) {
      gmtLastAccess = make_shared<long>(boost::any_cast<long>(m["GmtLastAccess"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListSpaceResponseBodySpaces() = default;
};
class ListSpaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSpaceResponseBodySpaces>> spaces{};

  ListSpaceResponseBody() {}

  explicit ListSpaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaces) {
      vector<boost::any> temp1;
      for(auto item1:*spaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Spaces"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Spaces") != m.end() && !m["Spaces"].empty()) {
      if (typeid(vector<boost::any>) == m["Spaces"].type()) {
        vector<ListSpaceResponseBodySpaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Spaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSpaceResponseBodySpaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spaces = make_shared<vector<ListSpaceResponseBodySpaces>>(expect1);
      }
    }
  }


  virtual ~ListSpaceResponseBody() = default;
};
class ListSpaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSpaceResponseBody> body{};

  ListSpaceResponse() {}

  explicit ListSpaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSpaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSpaceResponseBody>(model1);
      }
    }
  }


  virtual ~ListSpaceResponse() = default;
};
class ListWebHostingCustomDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  ListWebHostingCustomDomainsRequest() {}

  explicit ListWebHostingCustomDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListWebHostingCustomDomainsRequest() = default;
};
class ListWebHostingCustomDomainsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessControlAllowOrigin{};
  shared_ptr<bool> accessOriginControl{};
  shared_ptr<string> cname{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<bool> enableCors{};
  shared_ptr<string> forceRedirectType{};
  shared_ptr<string> sslProtocol{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  ListWebHostingCustomDomainsResponseBodyData() {}

  explicit ListWebHostingCustomDomainsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlAllowOrigin) {
      res["AccessControlAllowOrigin"] = boost::any(*accessControlAllowOrigin);
    }
    if (accessOriginControl) {
      res["AccessOriginControl"] = boost::any(*accessOriginControl);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enableCors) {
      res["EnableCors"] = boost::any(*enableCors);
    }
    if (forceRedirectType) {
      res["ForceRedirectType"] = boost::any(*forceRedirectType);
    }
    if (sslProtocol) {
      res["SslProtocol"] = boost::any(*sslProtocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlAllowOrigin") != m.end() && !m["AccessControlAllowOrigin"].empty()) {
      accessControlAllowOrigin = make_shared<string>(boost::any_cast<string>(m["AccessControlAllowOrigin"]));
    }
    if (m.find("AccessOriginControl") != m.end() && !m["AccessOriginControl"].empty()) {
      accessOriginControl = make_shared<bool>(boost::any_cast<bool>(m["AccessOriginControl"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnableCors") != m.end() && !m["EnableCors"].empty()) {
      enableCors = make_shared<bool>(boost::any_cast<bool>(m["EnableCors"]));
    }
    if (m.find("ForceRedirectType") != m.end() && !m["ForceRedirectType"].empty()) {
      forceRedirectType = make_shared<string>(boost::any_cast<string>(m["ForceRedirectType"]));
    }
    if (m.find("SslProtocol") != m.end() && !m["SslProtocol"].empty()) {
      sslProtocol = make_shared<string>(boost::any_cast<string>(m["SslProtocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListWebHostingCustomDomainsResponseBodyData() = default;
};
class ListWebHostingCustomDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListWebHostingCustomDomainsResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListWebHostingCustomDomainsResponseBody() {}

  explicit ListWebHostingCustomDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListWebHostingCustomDomainsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWebHostingCustomDomainsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListWebHostingCustomDomainsResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListWebHostingCustomDomainsResponseBody() = default;
};
class ListWebHostingCustomDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWebHostingCustomDomainsResponseBody> body{};

  ListWebHostingCustomDomainsResponse() {}

  explicit ListWebHostingCustomDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWebHostingCustomDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWebHostingCustomDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWebHostingCustomDomainsResponse() = default;
};
class ListWebHostingFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prefix{};
  shared_ptr<string> spaceId{};

  ListWebHostingFilesRequest() {}

  explicit ListWebHostingFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ListWebHostingFilesRequest() = default;
};
class ListWebHostingFilesResponseBodyDataWebHostingFiles : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> ETag{};
  shared_ptr<string> filePath{};
  shared_ptr<long> lastModifiedTime{};
  shared_ptr<string> signedUrl{};
  shared_ptr<long> size{};

  ListWebHostingFilesResponseBodyDataWebHostingFiles() {}

  explicit ListWebHostingFilesResponseBodyDataWebHostingFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (ETag) {
      res["ETag"] = boost::any(*ETag);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (lastModifiedTime) {
      res["LastModifiedTime"] = boost::any(*lastModifiedTime);
    }
    if (signedUrl) {
      res["SignedUrl"] = boost::any(*signedUrl);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("ETag") != m.end() && !m["ETag"].empty()) {
      ETag = make_shared<string>(boost::any_cast<string>(m["ETag"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("LastModifiedTime") != m.end() && !m["LastModifiedTime"].empty()) {
      lastModifiedTime = make_shared<long>(boost::any_cast<long>(m["LastModifiedTime"]));
    }
    if (m.find("SignedUrl") != m.end() && !m["SignedUrl"].empty()) {
      signedUrl = make_shared<string>(boost::any_cast<string>(m["SignedUrl"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListWebHostingFilesResponseBodyDataWebHostingFiles() = default;
};
class ListWebHostingFilesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> nextMarker{};
  shared_ptr<vector<ListWebHostingFilesResponseBodyDataWebHostingFiles>> webHostingFiles{};

  ListWebHostingFilesResponseBodyData() {}

  explicit ListWebHostingFilesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (webHostingFiles) {
      vector<boost::any> temp1;
      for(auto item1:*webHostingFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WebHostingFiles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("WebHostingFiles") != m.end() && !m["WebHostingFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["WebHostingFiles"].type()) {
        vector<ListWebHostingFilesResponseBodyDataWebHostingFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WebHostingFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWebHostingFilesResponseBodyDataWebHostingFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        webHostingFiles = make_shared<vector<ListWebHostingFilesResponseBodyDataWebHostingFiles>>(expect1);
      }
    }
  }


  virtual ~ListWebHostingFilesResponseBodyData() = default;
};
class ListWebHostingFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListWebHostingFilesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListWebHostingFilesResponseBody() {}

  explicit ListWebHostingFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWebHostingFilesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListWebHostingFilesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListWebHostingFilesResponseBody() = default;
};
class ListWebHostingFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWebHostingFilesResponseBody> body{};

  ListWebHostingFilesResponse() {}

  explicit ListWebHostingFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListWebHostingFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWebHostingFilesResponseBody>(model1);
      }
    }
  }


  virtual ~ListWebHostingFilesResponse() = default;
};
class ModifyWebHostingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> allowedIps{};
  shared_ptr<string> errorPath{};
  shared_ptr<string> historyModePath{};
  shared_ptr<string> indexPath{};
  shared_ptr<string> spaceId{};

  ModifyWebHostingConfigRequest() {}

  explicit ModifyWebHostingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedIps) {
      res["AllowedIps"] = boost::any(*allowedIps);
    }
    if (errorPath) {
      res["ErrorPath"] = boost::any(*errorPath);
    }
    if (historyModePath) {
      res["HistoryModePath"] = boost::any(*historyModePath);
    }
    if (indexPath) {
      res["IndexPath"] = boost::any(*indexPath);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedIps") != m.end() && !m["AllowedIps"].empty()) {
      allowedIps = make_shared<string>(boost::any_cast<string>(m["AllowedIps"]));
    }
    if (m.find("ErrorPath") != m.end() && !m["ErrorPath"].empty()) {
      errorPath = make_shared<string>(boost::any_cast<string>(m["ErrorPath"]));
    }
    if (m.find("HistoryModePath") != m.end() && !m["HistoryModePath"].empty()) {
      historyModePath = make_shared<string>(boost::any_cast<string>(m["HistoryModePath"]));
    }
    if (m.find("IndexPath") != m.end() && !m["IndexPath"].empty()) {
      indexPath = make_shared<string>(boost::any_cast<string>(m["IndexPath"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ModifyWebHostingConfigRequest() = default;
};
class ModifyWebHostingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  ModifyWebHostingConfigResponseBody() {}

  explicit ModifyWebHostingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyWebHostingConfigResponseBody() = default;
};
class ModifyWebHostingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyWebHostingConfigResponseBody> body{};

  ModifyWebHostingConfigResponse() {}

  explicit ModifyWebHostingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyWebHostingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyWebHostingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyWebHostingConfigResponse() = default;
};
class OpenServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<string> spaceId{};

  OpenServiceRequest() {}

  explicit OpenServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~OpenServiceRequest() = default;
};
class OpenServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  OpenServiceResponseBody() {}

  explicit OpenServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenServiceResponseBody() = default;
};
class OpenServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenServiceResponseBody> body{};

  OpenServiceResponse() {}

  explicit OpenServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenServiceResponse() = default;
};
class OpenWebHostingServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  OpenWebHostingServiceRequest() {}

  explicit OpenWebHostingServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~OpenWebHostingServiceRequest() = default;
};
class OpenWebHostingServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  OpenWebHostingServiceResponseBody() {}

  explicit OpenWebHostingServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~OpenWebHostingServiceResponseBody() = default;
};
class OpenWebHostingServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenWebHostingServiceResponseBody> body{};

  OpenWebHostingServiceResponse() {}

  explicit OpenWebHostingServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenWebHostingServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenWebHostingServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenWebHostingServiceResponse() = default;
};
class QueryDBBackupCollectionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> spaceId{};

  QueryDBBackupCollectionsRequest() {}

  explicit QueryDBBackupCollectionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~QueryDBBackupCollectionsRequest() = default;
};
class QueryDBBackupCollectionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> collections{};
  shared_ptr<string> requestId{};

  QueryDBBackupCollectionsResponseBody() {}

  explicit QueryDBBackupCollectionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collections) {
      res["Collections"] = boost::any(*collections);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Collections") != m.end() && !m["Collections"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Collections"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Collections"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      collections = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDBBackupCollectionsResponseBody() = default;
};
class QueryDBBackupCollectionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDBBackupCollectionsResponseBody> body{};

  QueryDBBackupCollectionsResponse() {}

  explicit QueryDBBackupCollectionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDBBackupCollectionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDBBackupCollectionsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDBBackupCollectionsResponse() = default;
};
class QueryDBBackupDumpTimesRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  QueryDBBackupDumpTimesRequest() {}

  explicit QueryDBBackupDumpTimesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~QueryDBBackupDumpTimesRequest() = default;
};
class QueryDBBackupDumpTimesResponseBodyBackupDumpTimes : public Darabonba::Model {
public:
  shared_ptr<string> backupId{};
  shared_ptr<string> dumpTime{};

  QueryDBBackupDumpTimesResponseBodyBackupDumpTimes() {}

  explicit QueryDBBackupDumpTimesResponseBodyBackupDumpTimes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupId) {
      res["BackupId"] = boost::any(*backupId);
    }
    if (dumpTime) {
      res["DumpTime"] = boost::any(*dumpTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupId") != m.end() && !m["BackupId"].empty()) {
      backupId = make_shared<string>(boost::any_cast<string>(m["BackupId"]));
    }
    if (m.find("DumpTime") != m.end() && !m["DumpTime"].empty()) {
      dumpTime = make_shared<string>(boost::any_cast<string>(m["DumpTime"]));
    }
  }


  virtual ~QueryDBBackupDumpTimesResponseBodyBackupDumpTimes() = default;
};
class QueryDBBackupDumpTimesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDBBackupDumpTimesResponseBodyBackupDumpTimes>> backupDumpTimes{};
  shared_ptr<string> requestId{};

  QueryDBBackupDumpTimesResponseBody() {}

  explicit QueryDBBackupDumpTimesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backupDumpTimes) {
      vector<boost::any> temp1;
      for(auto item1:*backupDumpTimes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BackupDumpTimes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackupDumpTimes") != m.end() && !m["BackupDumpTimes"].empty()) {
      if (typeid(vector<boost::any>) == m["BackupDumpTimes"].type()) {
        vector<QueryDBBackupDumpTimesResponseBodyBackupDumpTimes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BackupDumpTimes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDBBackupDumpTimesResponseBodyBackupDumpTimes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        backupDumpTimes = make_shared<vector<QueryDBBackupDumpTimesResponseBodyBackupDumpTimes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryDBBackupDumpTimesResponseBody() = default;
};
class QueryDBBackupDumpTimesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDBBackupDumpTimesResponseBody> body{};

  QueryDBBackupDumpTimesResponse() {}

  explicit QueryDBBackupDumpTimesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDBBackupDumpTimesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDBBackupDumpTimesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDBBackupDumpTimesResponse() = default;
};
class QueryDBExportTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};
  shared_ptr<string> taskId{};

  QueryDBExportTaskStatusRequest() {}

  explicit QueryDBExportTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryDBExportTaskStatusRequest() = default;
};
class QueryDBExportTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detailMessage{};
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> exportedCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  QueryDBExportTaskStatusResponseBody() {}

  explicit QueryDBExportTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailMessage) {
      res["DetailMessage"] = boost::any(*detailMessage);
    }
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (exportedCount) {
      res["ExportedCount"] = boost::any(*exportedCount);
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
    if (m.find("DetailMessage") != m.end() && !m["DetailMessage"].empty()) {
      detailMessage = make_shared<string>(boost::any_cast<string>(m["DetailMessage"]));
    }
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("ExportedCount") != m.end() && !m["ExportedCount"].empty()) {
      exportedCount = make_shared<string>(boost::any_cast<string>(m["ExportedCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryDBExportTaskStatusResponseBody() = default;
};
class QueryDBExportTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDBExportTaskStatusResponseBody> body{};

  QueryDBExportTaskStatusResponse() {}

  explicit QueryDBExportTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDBExportTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDBExportTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDBExportTaskStatusResponse() = default;
};
class QueryDBImportTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};
  shared_ptr<string> taskId{};

  QueryDBImportTaskStatusRequest() {}

  explicit QueryDBImportTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryDBImportTaskStatusRequest() = default;
};
class QueryDBImportTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detailMessage{};
  shared_ptr<string> failedCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> successCount{};

  QueryDBImportTaskStatusResponseBody() {}

  explicit QueryDBImportTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailMessage) {
      res["DetailMessage"] = boost::any(*detailMessage);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailMessage") != m.end() && !m["DetailMessage"].empty()) {
      detailMessage = make_shared<string>(boost::any_cast<string>(m["DetailMessage"]));
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<string>(boost::any_cast<string>(m["FailedCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<string>(boost::any_cast<string>(m["SuccessCount"]));
    }
  }


  virtual ~QueryDBImportTaskStatusResponseBody() = default;
};
class QueryDBImportTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDBImportTaskStatusResponseBody> body{};

  QueryDBImportTaskStatusResponse() {}

  explicit QueryDBImportTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDBImportTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDBImportTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDBImportTaskStatusResponse() = default;
};
class QueryDBRestoreTaskStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};
  shared_ptr<string> taskId{};

  QueryDBRestoreTaskStatusRequest() {}

  explicit QueryDBRestoreTaskStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryDBRestoreTaskStatusRequest() = default;
};
class QueryDBRestoreTaskStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> detailMessage{};
  shared_ptr<long> failedCount{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<long> successCount{};

  QueryDBRestoreTaskStatusResponseBody() {}

  explicit QueryDBRestoreTaskStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detailMessage) {
      res["DetailMessage"] = boost::any(*detailMessage);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetailMessage") != m.end() && !m["DetailMessage"].empty()) {
      detailMessage = make_shared<string>(boost::any_cast<string>(m["DetailMessage"]));
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<long>(boost::any_cast<long>(m["FailedCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
  }


  virtual ~QueryDBRestoreTaskStatusResponseBody() = default;
};
class QueryDBRestoreTaskStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDBRestoreTaskStatusResponseBody> body{};

  QueryDBRestoreTaskStatusResponse() {}

  explicit QueryDBRestoreTaskStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDBRestoreTaskStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDBRestoreTaskStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDBRestoreTaskStatusResponse() = default;
};
class QueryServiceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceName{};
  shared_ptr<string> spaceId{};

  QueryServiceStatusRequest() {}

  explicit QueryServiceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~QueryServiceStatusRequest() = default;
};
class QueryServiceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceStatus{};

  QueryServiceStatusResponseBody() {}

  explicit QueryServiceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceStatus) {
      res["ServiceStatus"] = boost::any(*serviceStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceStatus") != m.end() && !m["ServiceStatus"].empty()) {
      serviceStatus = make_shared<string>(boost::any_cast<string>(m["ServiceStatus"]));
    }
  }


  virtual ~QueryServiceStatusResponseBody() = default;
};
class QueryServiceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryServiceStatusResponseBody> body{};

  QueryServiceStatusResponse() {}

  explicit QueryServiceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryServiceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryServiceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryServiceStatusResponse() = default;
};
class QuerySpaceConsumptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  QuerySpaceConsumptionRequest() {}

  explicit QuerySpaceConsumptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~QuerySpaceConsumptionRequest() = default;
};
class QuerySpaceConsumptionResponseBodyCsUsage : public Darabonba::Model {
public:
  shared_ptr<long> cdnTraffic{};
  shared_ptr<long> downloadCount{};
  shared_ptr<long> storageSize{};
  shared_ptr<long> uploadCount{};

  QuerySpaceConsumptionResponseBodyCsUsage() {}

  explicit QuerySpaceConsumptionResponseBodyCsUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnTraffic) {
      res["CdnTraffic"] = boost::any(*cdnTraffic);
    }
    if (downloadCount) {
      res["DownloadCount"] = boost::any(*downloadCount);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (uploadCount) {
      res["UploadCount"] = boost::any(*uploadCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnTraffic") != m.end() && !m["CdnTraffic"].empty()) {
      cdnTraffic = make_shared<long>(boost::any_cast<long>(m["CdnTraffic"]));
    }
    if (m.find("DownloadCount") != m.end() && !m["DownloadCount"].empty()) {
      downloadCount = make_shared<long>(boost::any_cast<long>(m["DownloadCount"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("UploadCount") != m.end() && !m["UploadCount"].empty()) {
      uploadCount = make_shared<long>(boost::any_cast<long>(m["UploadCount"]));
    }
  }


  virtual ~QuerySpaceConsumptionResponseBodyCsUsage() = default;
};
class QuerySpaceConsumptionResponseBodyDbUsage : public Darabonba::Model {
public:
  shared_ptr<long> readCount{};
  shared_ptr<long> storageSize{};
  shared_ptr<long> writeCount{};

  QuerySpaceConsumptionResponseBodyDbUsage() {}

  explicit QuerySpaceConsumptionResponseBodyDbUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readCount) {
      res["ReadCount"] = boost::any(*readCount);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (writeCount) {
      res["WriteCount"] = boost::any(*writeCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadCount") != m.end() && !m["ReadCount"].empty()) {
      readCount = make_shared<long>(boost::any_cast<long>(m["ReadCount"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("WriteCount") != m.end() && !m["WriteCount"].empty()) {
      writeCount = make_shared<long>(boost::any_cast<long>(m["WriteCount"]));
    }
  }


  virtual ~QuerySpaceConsumptionResponseBodyDbUsage() = default;
};
class QuerySpaceConsumptionResponseBodyFcUsage : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<long> requestCount{};
  shared_ptr<long> txTraffic{};

  QuerySpaceConsumptionResponseBodyFcUsage() {}

  explicit QuerySpaceConsumptionResponseBodyFcUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (txTraffic) {
      res["TxTraffic"] = boost::any(*txTraffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<long>(boost::any_cast<long>(m["RequestCount"]));
    }
    if (m.find("TxTraffic") != m.end() && !m["TxTraffic"].empty()) {
      txTraffic = make_shared<long>(boost::any_cast<long>(m["TxTraffic"]));
    }
  }


  virtual ~QuerySpaceConsumptionResponseBodyFcUsage() = default;
};
class QuerySpaceConsumptionResponseBodyWhUsage : public Darabonba::Model {
public:
  shared_ptr<long> cdnTraffic{};
  shared_ptr<long> storageSize{};

  QuerySpaceConsumptionResponseBodyWhUsage() {}

  explicit QuerySpaceConsumptionResponseBodyWhUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnTraffic) {
      res["CdnTraffic"] = boost::any(*cdnTraffic);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnTraffic") != m.end() && !m["CdnTraffic"].empty()) {
      cdnTraffic = make_shared<long>(boost::any_cast<long>(m["CdnTraffic"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
  }


  virtual ~QuerySpaceConsumptionResponseBodyWhUsage() = default;
};
class QuerySpaceConsumptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<QuerySpaceConsumptionResponseBodyCsUsage> csUsage{};
  shared_ptr<long> cycleEndTime{};
  shared_ptr<long> cycleStartTime{};
  shared_ptr<QuerySpaceConsumptionResponseBodyDbUsage> dbUsage{};
  shared_ptr<QuerySpaceConsumptionResponseBodyFcUsage> fcUsage{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> specCode{};
  shared_ptr<QuerySpaceConsumptionResponseBodyWhUsage> whUsage{};

  QuerySpaceConsumptionResponseBody() {}

  explicit QuerySpaceConsumptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csUsage) {
      res["CsUsage"] = csUsage ? boost::any(csUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (cycleEndTime) {
      res["CycleEndTime"] = boost::any(*cycleEndTime);
    }
    if (cycleStartTime) {
      res["CycleStartTime"] = boost::any(*cycleStartTime);
    }
    if (dbUsage) {
      res["DbUsage"] = dbUsage ? boost::any(dbUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fcUsage) {
      res["FcUsage"] = fcUsage ? boost::any(fcUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    if (whUsage) {
      res["WhUsage"] = whUsage ? boost::any(whUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsUsage") != m.end() && !m["CsUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CsUsage"].type()) {
        QuerySpaceConsumptionResponseBodyCsUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CsUsage"]));
        csUsage = make_shared<QuerySpaceConsumptionResponseBodyCsUsage>(model1);
      }
    }
    if (m.find("CycleEndTime") != m.end() && !m["CycleEndTime"].empty()) {
      cycleEndTime = make_shared<long>(boost::any_cast<long>(m["CycleEndTime"]));
    }
    if (m.find("CycleStartTime") != m.end() && !m["CycleStartTime"].empty()) {
      cycleStartTime = make_shared<long>(boost::any_cast<long>(m["CycleStartTime"]));
    }
    if (m.find("DbUsage") != m.end() && !m["DbUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbUsage"].type()) {
        QuerySpaceConsumptionResponseBodyDbUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbUsage"]));
        dbUsage = make_shared<QuerySpaceConsumptionResponseBodyDbUsage>(model1);
      }
    }
    if (m.find("FcUsage") != m.end() && !m["FcUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["FcUsage"].type()) {
        QuerySpaceConsumptionResponseBodyFcUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FcUsage"]));
        fcUsage = make_shared<QuerySpaceConsumptionResponseBodyFcUsage>(model1);
      }
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
    if (m.find("WhUsage") != m.end() && !m["WhUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["WhUsage"].type()) {
        QuerySpaceConsumptionResponseBodyWhUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WhUsage"]));
        whUsage = make_shared<QuerySpaceConsumptionResponseBodyWhUsage>(model1);
      }
    }
  }


  virtual ~QuerySpaceConsumptionResponseBody() = default;
};
class QuerySpaceConsumptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySpaceConsumptionResponseBody> body{};

  QuerySpaceConsumptionResponse() {}

  explicit QuerySpaceConsumptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySpaceConsumptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySpaceConsumptionResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySpaceConsumptionResponse() = default;
};
class QuerySpaceSpecDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> specCode{};

  QuerySpaceSpecDetailRequest() {}

  explicit QuerySpaceSpecDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
  }


  virtual ~QuerySpaceSpecDetailRequest() = default;
};
class QuerySpaceSpecDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> csCdnTraffic{};
  shared_ptr<long> csDownloadCount{};
  shared_ptr<long> csStorageSize{};
  shared_ptr<long> csUploadCount{};
  shared_ptr<long> dbReadCount{};
  shared_ptr<long> dbStorageSize{};
  shared_ptr<long> dbWriteCount{};
  shared_ptr<long> fcCost{};
  shared_ptr<long> fcRequestCount{};
  shared_ptr<long> fcTxTraffic{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> specCode{};
  shared_ptr<string> specDetailText{};
  shared_ptr<long> whCdnTraffic{};
  shared_ptr<long> whStorageSize{};

  QuerySpaceSpecDetailResponseBody() {}

  explicit QuerySpaceSpecDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csCdnTraffic) {
      res["CsCdnTraffic"] = boost::any(*csCdnTraffic);
    }
    if (csDownloadCount) {
      res["CsDownloadCount"] = boost::any(*csDownloadCount);
    }
    if (csStorageSize) {
      res["CsStorageSize"] = boost::any(*csStorageSize);
    }
    if (csUploadCount) {
      res["CsUploadCount"] = boost::any(*csUploadCount);
    }
    if (dbReadCount) {
      res["DbReadCount"] = boost::any(*dbReadCount);
    }
    if (dbStorageSize) {
      res["DbStorageSize"] = boost::any(*dbStorageSize);
    }
    if (dbWriteCount) {
      res["DbWriteCount"] = boost::any(*dbWriteCount);
    }
    if (fcCost) {
      res["FcCost"] = boost::any(*fcCost);
    }
    if (fcRequestCount) {
      res["FcRequestCount"] = boost::any(*fcRequestCount);
    }
    if (fcTxTraffic) {
      res["FcTxTraffic"] = boost::any(*fcTxTraffic);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (specCode) {
      res["SpecCode"] = boost::any(*specCode);
    }
    if (specDetailText) {
      res["SpecDetailText"] = boost::any(*specDetailText);
    }
    if (whCdnTraffic) {
      res["WhCdnTraffic"] = boost::any(*whCdnTraffic);
    }
    if (whStorageSize) {
      res["WhStorageSize"] = boost::any(*whStorageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsCdnTraffic") != m.end() && !m["CsCdnTraffic"].empty()) {
      csCdnTraffic = make_shared<long>(boost::any_cast<long>(m["CsCdnTraffic"]));
    }
    if (m.find("CsDownloadCount") != m.end() && !m["CsDownloadCount"].empty()) {
      csDownloadCount = make_shared<long>(boost::any_cast<long>(m["CsDownloadCount"]));
    }
    if (m.find("CsStorageSize") != m.end() && !m["CsStorageSize"].empty()) {
      csStorageSize = make_shared<long>(boost::any_cast<long>(m["CsStorageSize"]));
    }
    if (m.find("CsUploadCount") != m.end() && !m["CsUploadCount"].empty()) {
      csUploadCount = make_shared<long>(boost::any_cast<long>(m["CsUploadCount"]));
    }
    if (m.find("DbReadCount") != m.end() && !m["DbReadCount"].empty()) {
      dbReadCount = make_shared<long>(boost::any_cast<long>(m["DbReadCount"]));
    }
    if (m.find("DbStorageSize") != m.end() && !m["DbStorageSize"].empty()) {
      dbStorageSize = make_shared<long>(boost::any_cast<long>(m["DbStorageSize"]));
    }
    if (m.find("DbWriteCount") != m.end() && !m["DbWriteCount"].empty()) {
      dbWriteCount = make_shared<long>(boost::any_cast<long>(m["DbWriteCount"]));
    }
    if (m.find("FcCost") != m.end() && !m["FcCost"].empty()) {
      fcCost = make_shared<long>(boost::any_cast<long>(m["FcCost"]));
    }
    if (m.find("FcRequestCount") != m.end() && !m["FcRequestCount"].empty()) {
      fcRequestCount = make_shared<long>(boost::any_cast<long>(m["FcRequestCount"]));
    }
    if (m.find("FcTxTraffic") != m.end() && !m["FcTxTraffic"].empty()) {
      fcTxTraffic = make_shared<long>(boost::any_cast<long>(m["FcTxTraffic"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpecCode") != m.end() && !m["SpecCode"].empty()) {
      specCode = make_shared<string>(boost::any_cast<string>(m["SpecCode"]));
    }
    if (m.find("SpecDetailText") != m.end() && !m["SpecDetailText"].empty()) {
      specDetailText = make_shared<string>(boost::any_cast<string>(m["SpecDetailText"]));
    }
    if (m.find("WhCdnTraffic") != m.end() && !m["WhCdnTraffic"].empty()) {
      whCdnTraffic = make_shared<long>(boost::any_cast<long>(m["WhCdnTraffic"]));
    }
    if (m.find("WhStorageSize") != m.end() && !m["WhStorageSize"].empty()) {
      whStorageSize = make_shared<long>(boost::any_cast<long>(m["WhStorageSize"]));
    }
  }


  virtual ~QuerySpaceSpecDetailResponseBody() = default;
};
class QuerySpaceSpecDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySpaceSpecDetailResponseBody> body{};

  QuerySpaceSpecDetailResponse() {}

  explicit QuerySpaceSpecDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySpaceSpecDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySpaceSpecDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySpaceSpecDetailResponse() = default;
};
class QuerySpaceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<long> interval{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> startTime{};

  QuerySpaceUsageRequest() {}

  explicit QuerySpaceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QuerySpaceUsageRequest() = default;
};
class QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage : public Darabonba::Model {
public:
  shared_ptr<long> cdnTraffic{};
  shared_ptr<long> downloadCount{};
  shared_ptr<long> storageSize{};
  shared_ptr<long> uploadCount{};

  QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage() {}

  explicit QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnTraffic) {
      res["CdnTraffic"] = boost::any(*cdnTraffic);
    }
    if (downloadCount) {
      res["DownloadCount"] = boost::any(*downloadCount);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (uploadCount) {
      res["UploadCount"] = boost::any(*uploadCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnTraffic") != m.end() && !m["CdnTraffic"].empty()) {
      cdnTraffic = make_shared<long>(boost::any_cast<long>(m["CdnTraffic"]));
    }
    if (m.find("DownloadCount") != m.end() && !m["DownloadCount"].empty()) {
      downloadCount = make_shared<long>(boost::any_cast<long>(m["DownloadCount"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("UploadCount") != m.end() && !m["UploadCount"].empty()) {
      uploadCount = make_shared<long>(boost::any_cast<long>(m["UploadCount"]));
    }
  }


  virtual ~QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage() = default;
};
class QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage : public Darabonba::Model {
public:
  shared_ptr<long> readCount{};
  shared_ptr<long> storageSize{};
  shared_ptr<long> writeCount{};

  QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage() {}

  explicit QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (readCount) {
      res["ReadCount"] = boost::any(*readCount);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    if (writeCount) {
      res["WriteCount"] = boost::any(*writeCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ReadCount") != m.end() && !m["ReadCount"].empty()) {
      readCount = make_shared<long>(boost::any_cast<long>(m["ReadCount"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("WriteCount") != m.end() && !m["WriteCount"].empty()) {
      writeCount = make_shared<long>(boost::any_cast<long>(m["WriteCount"]));
    }
  }


  virtual ~QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage() = default;
};
class QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<long> requestCount{};
  shared_ptr<long> txTraffic{};

  QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage() {}

  explicit QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["Cost"] = boost::any(*cost);
    }
    if (requestCount) {
      res["RequestCount"] = boost::any(*requestCount);
    }
    if (txTraffic) {
      res["TxTraffic"] = boost::any(*txTraffic);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cost") != m.end() && !m["Cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["Cost"]));
    }
    if (m.find("RequestCount") != m.end() && !m["RequestCount"].empty()) {
      requestCount = make_shared<long>(boost::any_cast<long>(m["RequestCount"]));
    }
    if (m.find("TxTraffic") != m.end() && !m["TxTraffic"].empty()) {
      txTraffic = make_shared<long>(boost::any_cast<long>(m["TxTraffic"]));
    }
  }


  virtual ~QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage() = default;
};
class QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage : public Darabonba::Model {
public:
  shared_ptr<long> cdnTraffic{};
  shared_ptr<long> storageSize{};

  QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage() {}

  explicit QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cdnTraffic) {
      res["CdnTraffic"] = boost::any(*cdnTraffic);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CdnTraffic") != m.end() && !m["CdnTraffic"].empty()) {
      cdnTraffic = make_shared<long>(boost::any_cast<long>(m["CdnTraffic"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
  }


  virtual ~QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage() = default;
};
class QuerySpaceUsageResponseBodySpaceUsageDataList : public Darabonba::Model {
public:
  shared_ptr<QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage> csUsage{};
  shared_ptr<QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage> dbUsage{};
  shared_ptr<bool> effectiveBillFlag{};
  shared_ptr<QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage> fcUsage{};
  shared_ptr<string> timestamp{};
  shared_ptr<QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage> whUsage{};

  QuerySpaceUsageResponseBodySpaceUsageDataList() {}

  explicit QuerySpaceUsageResponseBodySpaceUsageDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csUsage) {
      res["CsUsage"] = csUsage ? boost::any(csUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dbUsage) {
      res["DbUsage"] = dbUsage ? boost::any(dbUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (effectiveBillFlag) {
      res["EffectiveBillFlag"] = boost::any(*effectiveBillFlag);
    }
    if (fcUsage) {
      res["FcUsage"] = fcUsage ? boost::any(fcUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    if (whUsage) {
      res["WhUsage"] = whUsage ? boost::any(whUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsUsage") != m.end() && !m["CsUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["CsUsage"].type()) {
        QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CsUsage"]));
        csUsage = make_shared<QuerySpaceUsageResponseBodySpaceUsageDataListCsUsage>(model1);
      }
    }
    if (m.find("DbUsage") != m.end() && !m["DbUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["DbUsage"].type()) {
        QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DbUsage"]));
        dbUsage = make_shared<QuerySpaceUsageResponseBodySpaceUsageDataListDbUsage>(model1);
      }
    }
    if (m.find("EffectiveBillFlag") != m.end() && !m["EffectiveBillFlag"].empty()) {
      effectiveBillFlag = make_shared<bool>(boost::any_cast<bool>(m["EffectiveBillFlag"]));
    }
    if (m.find("FcUsage") != m.end() && !m["FcUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["FcUsage"].type()) {
        QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FcUsage"]));
        fcUsage = make_shared<QuerySpaceUsageResponseBodySpaceUsageDataListFcUsage>(model1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
    if (m.find("WhUsage") != m.end() && !m["WhUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["WhUsage"].type()) {
        QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WhUsage"]));
        whUsage = make_shared<QuerySpaceUsageResponseBodySpaceUsageDataListWhUsage>(model1);
      }
    }
  }


  virtual ~QuerySpaceUsageResponseBodySpaceUsageDataList() = default;
};
class QuerySpaceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> spaceId{};
  shared_ptr<vector<QuerySpaceUsageResponseBodySpaceUsageDataList>> spaceUsageDataList{};
  shared_ptr<string> startTime{};

  QuerySpaceUsageResponseBody() {}

  explicit QuerySpaceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (spaceUsageDataList) {
      vector<boost::any> temp1;
      for(auto item1:*spaceUsageDataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpaceUsageDataList"] = boost::any(temp1);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("SpaceUsageDataList") != m.end() && !m["SpaceUsageDataList"].empty()) {
      if (typeid(vector<boost::any>) == m["SpaceUsageDataList"].type()) {
        vector<QuerySpaceUsageResponseBodySpaceUsageDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpaceUsageDataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySpaceUsageResponseBodySpaceUsageDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        spaceUsageDataList = make_shared<vector<QuerySpaceUsageResponseBodySpaceUsageDataList>>(expect1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QuerySpaceUsageResponseBody() = default;
};
class QuerySpaceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySpaceUsageResponseBody> body{};

  QuerySpaceUsageResponse() {}

  explicit QuerySpaceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySpaceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySpaceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySpaceUsageResponse() = default;
};
class RefreshWebHostingCustomDomainCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> spaceId{};

  RefreshWebHostingCustomDomainCacheRequest() {}

  explicit RefreshWebHostingCustomDomainCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~RefreshWebHostingCustomDomainCacheRequest() = default;
};
class RefreshWebHostingCustomDomainCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefreshWebHostingCustomDomainCacheResponseBody() {}

  explicit RefreshWebHostingCustomDomainCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefreshWebHostingCustomDomainCacheResponseBody() = default;
};
class RefreshWebHostingCustomDomainCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshWebHostingCustomDomainCacheResponseBody> body{};

  RefreshWebHostingCustomDomainCacheResponse() {}

  explicit RefreshWebHostingCustomDomainCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshWebHostingCustomDomainCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshWebHostingCustomDomainCacheResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshWebHostingCustomDomainCacheResponse() = default;
};
class RegisterFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> spaceId{};

  RegisterFileRequest() {}

  explicit RegisterFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~RegisterFileRequest() = default;
};
class RegisterFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RegisterFileResponseBody() {}

  explicit RegisterFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RegisterFileResponseBody() = default;
};
class RegisterFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterFileResponseBody> body{};

  RegisterFileResponse() {}

  explicit RegisterFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterFileResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterFileResponse() = default;
};
class RenameDBCollectionRequest : public Darabonba::Model {
public:
  shared_ptr<string> newCollection{};
  shared_ptr<string> originCollection{};
  shared_ptr<string> spaceId{};

  RenameDBCollectionRequest() {}

  explicit RenameDBCollectionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newCollection) {
      res["NewCollection"] = boost::any(*newCollection);
    }
    if (originCollection) {
      res["OriginCollection"] = boost::any(*originCollection);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewCollection") != m.end() && !m["NewCollection"].empty()) {
      newCollection = make_shared<string>(boost::any_cast<string>(m["NewCollection"]));
    }
    if (m.find("OriginCollection") != m.end() && !m["OriginCollection"].empty()) {
      originCollection = make_shared<string>(boost::any_cast<string>(m["OriginCollection"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~RenameDBCollectionRequest() = default;
};
class RenameDBCollectionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RenameDBCollectionResponseBody() {}

  explicit RenameDBCollectionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RenameDBCollectionResponseBody() = default;
};
class RenameDBCollectionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameDBCollectionResponseBody> body{};

  RenameDBCollectionResponse() {}

  explicit RenameDBCollectionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenameDBCollectionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameDBCollectionResponseBody>(model1);
      }
    }
  }


  virtual ~RenameDBCollectionResponse() = default;
};
class ResetServerSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> spaceId{};

  ResetServerSecretRequest() {}

  explicit ResetServerSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~ResetServerSecretRequest() = default;
};
class ResetServerSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetServerSecretResponseBody() {}

  explicit ResetServerSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResetServerSecretResponseBody() = default;
};
class ResetServerSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetServerSecretResponseBody> body{};

  ResetServerSecretResponse() {}

  explicit ResetServerSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetServerSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetServerSecretResponseBody>(model1);
      }
    }
  }


  virtual ~ResetServerSecretResponse() = default;
};
class RunDBCommandRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> spaceId{};

  RunDBCommandRequest() {}

  explicit RunDBCommandRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~RunDBCommandRequest() = default;
};
class RunDBCommandResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> affectedDocs{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};

  RunDBCommandResponseBody() {}

  explicit RunDBCommandResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectedDocs) {
      res["AffectedDocs"] = boost::any(*affectedDocs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectedDocs") != m.end() && !m["AffectedDocs"].empty()) {
      affectedDocs = make_shared<long>(boost::any_cast<long>(m["AffectedDocs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
  }


  virtual ~RunDBCommandResponseBody() = default;
};
class RunDBCommandResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunDBCommandResponseBody> body{};

  RunDBCommandResponse() {}

  explicit RunDBCommandResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunDBCommandResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunDBCommandResponseBody>(model1);
      }
    }
  }


  virtual ~RunDBCommandResponse() = default;
};
class RunFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<string> spaceId{};

  RunFunctionRequest() {}

  explicit RunFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~RunFunctionRequest() = default;
};
class RunFunctionResponseBodyRuntimeMeta : public Darabonba::Model {
public:
  shared_ptr<long> billingDuration{};
  shared_ptr<long> invocationDuration{};
  shared_ptr<long> maxMemoryUsage{};
  shared_ptr<string> requestId{};

  RunFunctionResponseBodyRuntimeMeta() {}

  explicit RunFunctionResponseBodyRuntimeMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingDuration) {
      res["BillingDuration"] = boost::any(*billingDuration);
    }
    if (invocationDuration) {
      res["InvocationDuration"] = boost::any(*invocationDuration);
    }
    if (maxMemoryUsage) {
      res["MaxMemoryUsage"] = boost::any(*maxMemoryUsage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingDuration") != m.end() && !m["BillingDuration"].empty()) {
      billingDuration = make_shared<long>(boost::any_cast<long>(m["BillingDuration"]));
    }
    if (m.find("InvocationDuration") != m.end() && !m["InvocationDuration"].empty()) {
      invocationDuration = make_shared<long>(boost::any_cast<long>(m["InvocationDuration"]));
    }
    if (m.find("MaxMemoryUsage") != m.end() && !m["MaxMemoryUsage"].empty()) {
      maxMemoryUsage = make_shared<long>(boost::any_cast<long>(m["MaxMemoryUsage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunFunctionResponseBodyRuntimeMeta() = default;
};
class RunFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<RunFunctionResponseBodyRuntimeMeta> runtimeMeta{};

  RunFunctionResponseBody() {}

  explicit RunFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (runtimeMeta) {
      res["RuntimeMeta"] = runtimeMeta ? boost::any(runtimeMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("RuntimeMeta") != m.end() && !m["RuntimeMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeMeta"].type()) {
        RunFunctionResponseBodyRuntimeMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeMeta"]));
        runtimeMeta = make_shared<RunFunctionResponseBodyRuntimeMeta>(model1);
      }
    }
  }


  virtual ~RunFunctionResponseBody() = default;
};
class RunFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunFunctionResponseBody> body{};

  RunFunctionResponse() {}

  explicit RunFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~RunFunctionResponse() = default;
};
class SaveAntOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCert{};
  shared_ptr<string> appId{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> publicCert{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> rootCert{};
  shared_ptr<string> signMode{};
  shared_ptr<string> spaceId{};

  SaveAntOpenPlatformConfigRequest() {}

  explicit SaveAntOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCert) {
      res["AppCert"] = boost::any(*appCert);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (publicCert) {
      res["PublicCert"] = boost::any(*publicCert);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (rootCert) {
      res["RootCert"] = boost::any(*rootCert);
    }
    if (signMode) {
      res["SignMode"] = boost::any(*signMode);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCert") != m.end() && !m["AppCert"].empty()) {
      appCert = make_shared<string>(boost::any_cast<string>(m["AppCert"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("PublicCert") != m.end() && !m["PublicCert"].empty()) {
      publicCert = make_shared<string>(boost::any_cast<string>(m["PublicCert"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("RootCert") != m.end() && !m["RootCert"].empty()) {
      rootCert = make_shared<string>(boost::any_cast<string>(m["RootCert"]));
    }
    if (m.find("SignMode") != m.end() && !m["SignMode"].empty()) {
      signMode = make_shared<string>(boost::any_cast<string>(m["SignMode"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~SaveAntOpenPlatformConfigRequest() = default;
};
class SaveAntOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveAntOpenPlatformConfigResponseBody() {}

  explicit SaveAntOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveAntOpenPlatformConfigResponseBody() = default;
};
class SaveAntOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveAntOpenPlatformConfigResponseBody> body{};

  SaveAntOpenPlatformConfigResponse() {}

  explicit SaveAntOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveAntOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveAntOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveAntOpenPlatformConfigResponse() = default;
};
class SaveAppAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appAuthToken{};
  shared_ptr<string> appId{};
  shared_ptr<string> isvAppId{};
  shared_ptr<string> spaceId{};

  SaveAppAuthTokenRequest() {}

  explicit SaveAppAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appAuthToken) {
      res["AppAuthToken"] = boost::any(*appAuthToken);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (isvAppId) {
      res["IsvAppId"] = boost::any(*isvAppId);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppAuthToken") != m.end() && !m["AppAuthToken"].empty()) {
      appAuthToken = make_shared<string>(boost::any_cast<string>(m["AppAuthToken"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("IsvAppId") != m.end() && !m["IsvAppId"].empty()) {
      isvAppId = make_shared<string>(boost::any_cast<string>(m["IsvAppId"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~SaveAppAuthTokenRequest() = default;
};
class SaveAppAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveAppAuthTokenResponseBody() {}

  explicit SaveAppAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveAppAuthTokenResponseBody() = default;
};
class SaveAppAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveAppAuthTokenResponseBody> body{};

  SaveAppAuthTokenResponse() {}

  explicit SaveAppAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveAppAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveAppAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~SaveAppAuthTokenResponse() = default;
};
class SaveCdnDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> authConfig{};
  shared_ptr<string> corsConfig{};
  shared_ptr<string> ipConfig{};
  shared_ptr<string> refererConfig{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> tenantId{};
  shared_ptr<string> type{};
  shared_ptr<string> uaConfig{};

  SaveCdnDomainConfigRequest() {}

  explicit SaveCdnDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authConfig) {
      res["AuthConfig"] = boost::any(*authConfig);
    }
    if (corsConfig) {
      res["CorsConfig"] = boost::any(*corsConfig);
    }
    if (ipConfig) {
      res["IpConfig"] = boost::any(*ipConfig);
    }
    if (refererConfig) {
      res["RefererConfig"] = boost::any(*refererConfig);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uaConfig) {
      res["UaConfig"] = boost::any(*uaConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthConfig") != m.end() && !m["AuthConfig"].empty()) {
      authConfig = make_shared<string>(boost::any_cast<string>(m["AuthConfig"]));
    }
    if (m.find("CorsConfig") != m.end() && !m["CorsConfig"].empty()) {
      corsConfig = make_shared<string>(boost::any_cast<string>(m["CorsConfig"]));
    }
    if (m.find("IpConfig") != m.end() && !m["IpConfig"].empty()) {
      ipConfig = make_shared<string>(boost::any_cast<string>(m["IpConfig"]));
    }
    if (m.find("RefererConfig") != m.end() && !m["RefererConfig"].empty()) {
      refererConfig = make_shared<string>(boost::any_cast<string>(m["RefererConfig"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<string>(boost::any_cast<string>(m["TenantId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UaConfig") != m.end() && !m["UaConfig"].empty()) {
      uaConfig = make_shared<string>(boost::any_cast<string>(m["UaConfig"]));
    }
  }


  virtual ~SaveCdnDomainConfigRequest() = default;
};
class SaveCdnDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveCdnDomainConfigResponseBody() {}

  explicit SaveCdnDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveCdnDomainConfigResponseBody() = default;
};
class SaveCdnDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveCdnDomainConfigResponseBody> body{};

  SaveCdnDomainConfigResponse() {}

  explicit SaveCdnDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveCdnDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveCdnDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveCdnDomainConfigResponse() = default;
};
class SaveWebHostingCustomDomainConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> forceRedirectType{};
  shared_ptr<string> spaceId{};

  SaveWebHostingCustomDomainConfigRequest() {}

  explicit SaveWebHostingCustomDomainConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (forceRedirectType) {
      res["ForceRedirectType"] = boost::any(*forceRedirectType);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("ForceRedirectType") != m.end() && !m["ForceRedirectType"].empty()) {
      forceRedirectType = make_shared<string>(boost::any_cast<string>(m["ForceRedirectType"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~SaveWebHostingCustomDomainConfigRequest() = default;
};
class SaveWebHostingCustomDomainConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveWebHostingCustomDomainConfigResponseBody() {}

  explicit SaveWebHostingCustomDomainConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveWebHostingCustomDomainConfigResponseBody() = default;
};
class SaveWebHostingCustomDomainConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveWebHostingCustomDomainConfigResponseBody> body{};

  SaveWebHostingCustomDomainConfigResponse() {}

  explicit SaveWebHostingCustomDomainConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveWebHostingCustomDomainConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveWebHostingCustomDomainConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveWebHostingCustomDomainConfigResponse() = default;
};
class SaveWebHostingCustomDomainCorsConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessControlAllowOrigin{};
  shared_ptr<bool> accessOriginControl{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> enableCors{};
  shared_ptr<string> spaceId{};

  SaveWebHostingCustomDomainCorsConfigRequest() {}

  explicit SaveWebHostingCustomDomainCorsConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlAllowOrigin) {
      res["AccessControlAllowOrigin"] = boost::any(*accessControlAllowOrigin);
    }
    if (accessOriginControl) {
      res["AccessOriginControl"] = boost::any(*accessOriginControl);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (enableCors) {
      res["EnableCors"] = boost::any(*enableCors);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlAllowOrigin") != m.end() && !m["AccessControlAllowOrigin"].empty()) {
      accessControlAllowOrigin = make_shared<string>(boost::any_cast<string>(m["AccessControlAllowOrigin"]));
    }
    if (m.find("AccessOriginControl") != m.end() && !m["AccessOriginControl"].empty()) {
      accessOriginControl = make_shared<bool>(boost::any_cast<bool>(m["AccessOriginControl"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("EnableCors") != m.end() && !m["EnableCors"].empty()) {
      enableCors = make_shared<bool>(boost::any_cast<bool>(m["EnableCors"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~SaveWebHostingCustomDomainCorsConfigRequest() = default;
};
class SaveWebHostingCustomDomainCorsConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SaveWebHostingCustomDomainCorsConfigResponseBody() {}

  explicit SaveWebHostingCustomDomainCorsConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
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


  virtual ~SaveWebHostingCustomDomainCorsConfigResponseBody() = default;
};
class SaveWebHostingCustomDomainCorsConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveWebHostingCustomDomainCorsConfigResponseBody> body{};

  SaveWebHostingCustomDomainCorsConfigResponse() {}

  explicit SaveWebHostingCustomDomainCorsConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveWebHostingCustomDomainCorsConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveWebHostingCustomDomainCorsConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveWebHostingCustomDomainCorsConfigResponse() = default;
};
class SaveWechatOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> spaceId{};

  SaveWechatOpenPlatformConfigRequest() {}

  explicit SaveWechatOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~SaveWechatOpenPlatformConfigRequest() = default;
};
class SaveWechatOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveWechatOpenPlatformConfigResponseBody() {}

  explicit SaveWechatOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveWechatOpenPlatformConfigResponseBody() = default;
};
class SaveWechatOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveWechatOpenPlatformConfigResponseBody> body{};

  SaveWechatOpenPlatformConfigResponse() {}

  explicit SaveWechatOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveWechatOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveWechatOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~SaveWechatOpenPlatformConfigResponse() = default;
};
class UnbindWebHostingCustomDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> customDomain{};
  shared_ptr<string> spaceId{};

  UnbindWebHostingCustomDomainRequest() {}

  explicit UnbindWebHostingCustomDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = boost::any(*customDomain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomain = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~UnbindWebHostingCustomDomainRequest() = default;
};
class UnbindWebHostingCustomDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  UnbindWebHostingCustomDomainResponseBody() {}

  explicit UnbindWebHostingCustomDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnbindWebHostingCustomDomainResponseBody() = default;
};
class UnbindWebHostingCustomDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindWebHostingCustomDomainResponseBody> body{};

  UnbindWebHostingCustomDomainResponse() {}

  explicit UnbindWebHostingCustomDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindWebHostingCustomDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindWebHostingCustomDomainResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindWebHostingCustomDomainResponse() = default;
};
class UpdateDingtalkOpenPlatformConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> spaceId{};

  UpdateDingtalkOpenPlatformConfigRequest() {}

  explicit UpdateDingtalkOpenPlatformConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~UpdateDingtalkOpenPlatformConfigRequest() = default;
};
class UpdateDingtalkOpenPlatformConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDingtalkOpenPlatformConfigResponseBody() {}

  explicit UpdateDingtalkOpenPlatformConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDingtalkOpenPlatformConfigResponseBody() = default;
};
class UpdateDingtalkOpenPlatformConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDingtalkOpenPlatformConfigResponseBody> body{};

  UpdateDingtalkOpenPlatformConfigResponse() {}

  explicit UpdateDingtalkOpenPlatformConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDingtalkOpenPlatformConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDingtalkOpenPlatformConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDingtalkOpenPlatformConfigResponse() = default;
};
class UpdateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> httpTriggerPath{};
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<long> memory{};
  shared_ptr<string> name{};
  shared_ptr<string> runtime{};
  shared_ptr<string> spaceId{};
  shared_ptr<long> timeout{};
  shared_ptr<string> timingTriggerConfig{};
  shared_ptr<string> timingTriggerUserPayload{};

  UpdateFunctionRequest() {}

  explicit UpdateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (httpTriggerPath) {
      res["HttpTriggerPath"] = boost::any(*httpTriggerPath);
    }
    if (instanceConcurrency) {
      res["InstanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    if (timingTriggerConfig) {
      res["TimingTriggerConfig"] = boost::any(*timingTriggerConfig);
    }
    if (timingTriggerUserPayload) {
      res["TimingTriggerUserPayload"] = boost::any(*timingTriggerUserPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("HttpTriggerPath") != m.end() && !m["HttpTriggerPath"].empty()) {
      httpTriggerPath = make_shared<string>(boost::any_cast<string>(m["HttpTriggerPath"]));
    }
    if (m.find("InstanceConcurrency") != m.end() && !m["InstanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["InstanceConcurrency"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<long>(boost::any_cast<long>(m["Memory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
    if (m.find("TimingTriggerConfig") != m.end() && !m["TimingTriggerConfig"].empty()) {
      timingTriggerConfig = make_shared<string>(boost::any_cast<string>(m["TimingTriggerConfig"]));
    }
    if (m.find("TimingTriggerUserPayload") != m.end() && !m["TimingTriggerUserPayload"].empty()) {
      timingTriggerUserPayload = make_shared<string>(boost::any_cast<string>(m["TimingTriggerUserPayload"]));
    }
  }


  virtual ~UpdateFunctionRequest() = default;
};
class UpdateFunctionResponseBodySpec : public Darabonba::Model {
public:
  shared_ptr<long> instanceConcurrency{};
  shared_ptr<string> memory{};
  shared_ptr<string> runtime{};
  shared_ptr<string> timeout{};

  UpdateFunctionResponseBodySpec() {}

  explicit UpdateFunctionResponseBodySpec(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceConcurrency) {
      res["InstanceConcurrency"] = boost::any(*instanceConcurrency);
    }
    if (memory) {
      res["Memory"] = boost::any(*memory);
    }
    if (runtime) {
      res["Runtime"] = boost::any(*runtime);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceConcurrency") != m.end() && !m["InstanceConcurrency"].empty()) {
      instanceConcurrency = make_shared<long>(boost::any_cast<long>(m["InstanceConcurrency"]));
    }
    if (m.find("Memory") != m.end() && !m["Memory"].empty()) {
      memory = make_shared<string>(boost::any_cast<string>(m["Memory"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      runtime = make_shared<string>(boost::any_cast<string>(m["Runtime"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<string>(boost::any_cast<string>(m["Timeout"]));
    }
  }


  virtual ~UpdateFunctionResponseBodySpec() = default;
};
class UpdateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> desc{};
  shared_ptr<string> httpTriggerPath{};
  shared_ptr<string> modifiedAt{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<UpdateFunctionResponseBodySpec> spec{};
  shared_ptr<string> timingTriggerConfig{};
  shared_ptr<string> timingTriggerUserPayload{};

  UpdateFunctionResponseBody() {}

  explicit UpdateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["CreatedAt"] = boost::any(*createdAt);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (httpTriggerPath) {
      res["HttpTriggerPath"] = boost::any(*httpTriggerPath);
    }
    if (modifiedAt) {
      res["ModifiedAt"] = boost::any(*modifiedAt);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (spec) {
      res["Spec"] = spec ? boost::any(spec->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (timingTriggerConfig) {
      res["TimingTriggerConfig"] = boost::any(*timingTriggerConfig);
    }
    if (timingTriggerUserPayload) {
      res["TimingTriggerUserPayload"] = boost::any(*timingTriggerUserPayload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedAt") != m.end() && !m["CreatedAt"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["CreatedAt"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("HttpTriggerPath") != m.end() && !m["HttpTriggerPath"].empty()) {
      httpTriggerPath = make_shared<string>(boost::any_cast<string>(m["HttpTriggerPath"]));
    }
    if (m.find("ModifiedAt") != m.end() && !m["ModifiedAt"].empty()) {
      modifiedAt = make_shared<string>(boost::any_cast<string>(m["ModifiedAt"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      if (typeid(map<string, boost::any>) == m["Spec"].type()) {
        UpdateFunctionResponseBodySpec model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Spec"]));
        spec = make_shared<UpdateFunctionResponseBodySpec>(model1);
      }
    }
    if (m.find("TimingTriggerConfig") != m.end() && !m["TimingTriggerConfig"].empty()) {
      timingTriggerConfig = make_shared<string>(boost::any_cast<string>(m["TimingTriggerConfig"]));
    }
    if (m.find("TimingTriggerUserPayload") != m.end() && !m["TimingTriggerUserPayload"].empty()) {
      timingTriggerUserPayload = make_shared<string>(boost::any_cast<string>(m["TimingTriggerUserPayload"]));
    }
  }


  virtual ~UpdateFunctionResponseBody() = default;
};
class UpdateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFunctionResponseBody> body{};

  UpdateFunctionResponse() {}

  explicit UpdateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFunctionResponse() = default;
};
class UpdateHttpTriggerConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> customDomain{};
  shared_ptr<string> customDomainCertificate{};
  shared_ptr<string> customDomainPrivateKey{};
  shared_ptr<bool> enableService{};
  shared_ptr<string> spaceId{};

  UpdateHttpTriggerConfigRequest() {}

  explicit UpdateHttpTriggerConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = boost::any(*customDomain);
    }
    if (customDomainCertificate) {
      res["CustomDomainCertificate"] = boost::any(*customDomainCertificate);
    }
    if (customDomainPrivateKey) {
      res["CustomDomainPrivateKey"] = boost::any(*customDomainPrivateKey);
    }
    if (enableService) {
      res["EnableService"] = boost::any(*enableService);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomain = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
    if (m.find("CustomDomainCertificate") != m.end() && !m["CustomDomainCertificate"].empty()) {
      customDomainCertificate = make_shared<string>(boost::any_cast<string>(m["CustomDomainCertificate"]));
    }
    if (m.find("CustomDomainPrivateKey") != m.end() && !m["CustomDomainPrivateKey"].empty()) {
      customDomainPrivateKey = make_shared<string>(boost::any_cast<string>(m["CustomDomainPrivateKey"]));
    }
    if (m.find("EnableService") != m.end() && !m["EnableService"].empty()) {
      enableService = make_shared<bool>(boost::any_cast<bool>(m["EnableService"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~UpdateHttpTriggerConfigRequest() = default;
};
class UpdateHttpTriggerConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> customDomain{};
  shared_ptr<string> customDomainCertificateInfo{};
  shared_ptr<string> customDomainCname{};
  shared_ptr<string> defaultEndpoint{};
  shared_ptr<bool> enableService{};
  shared_ptr<string> requestId{};

  UpdateHttpTriggerConfigResponseBody() {}

  explicit UpdateHttpTriggerConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customDomain) {
      res["CustomDomain"] = boost::any(*customDomain);
    }
    if (customDomainCertificateInfo) {
      res["CustomDomainCertificateInfo"] = boost::any(*customDomainCertificateInfo);
    }
    if (customDomainCname) {
      res["CustomDomainCname"] = boost::any(*customDomainCname);
    }
    if (defaultEndpoint) {
      res["DefaultEndpoint"] = boost::any(*defaultEndpoint);
    }
    if (enableService) {
      res["EnableService"] = boost::any(*enableService);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomDomain") != m.end() && !m["CustomDomain"].empty()) {
      customDomain = make_shared<string>(boost::any_cast<string>(m["CustomDomain"]));
    }
    if (m.find("CustomDomainCertificateInfo") != m.end() && !m["CustomDomainCertificateInfo"].empty()) {
      customDomainCertificateInfo = make_shared<string>(boost::any_cast<string>(m["CustomDomainCertificateInfo"]));
    }
    if (m.find("CustomDomainCname") != m.end() && !m["CustomDomainCname"].empty()) {
      customDomainCname = make_shared<string>(boost::any_cast<string>(m["CustomDomainCname"]));
    }
    if (m.find("DefaultEndpoint") != m.end() && !m["DefaultEndpoint"].empty()) {
      defaultEndpoint = make_shared<string>(boost::any_cast<string>(m["DefaultEndpoint"]));
    }
    if (m.find("EnableService") != m.end() && !m["EnableService"].empty()) {
      enableService = make_shared<bool>(boost::any_cast<bool>(m["EnableService"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateHttpTriggerConfigResponseBody() = default;
};
class UpdateHttpTriggerConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateHttpTriggerConfigResponseBody> body{};

  UpdateHttpTriggerConfigResponse() {}

  explicit UpdateHttpTriggerConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateHttpTriggerConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateHttpTriggerConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateHttpTriggerConfigResponse() = default;
};
class UpdateServicePolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<string> policy{};
  shared_ptr<string> policyName{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spaceId{};

  UpdateServicePolicyRequest() {}

  explicit UpdateServicePolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~UpdateServicePolicyRequest() = default;
};
class UpdateServicePolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> collectionName{};
  shared_ptr<string> policy{};
  shared_ptr<string> policyName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> spaceId{};

  UpdateServicePolicyResponseBody() {}

  explicit UpdateServicePolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (collectionName) {
      res["CollectionName"] = boost::any(*collectionName);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (policyName) {
      res["PolicyName"] = boost::any(*policyName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CollectionName") != m.end() && !m["CollectionName"].empty()) {
      collectionName = make_shared<string>(boost::any_cast<string>(m["CollectionName"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("PolicyName") != m.end() && !m["PolicyName"].empty()) {
      policyName = make_shared<string>(boost::any_cast<string>(m["PolicyName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
  }


  virtual ~UpdateServicePolicyResponseBody() = default;
};
class UpdateServicePolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateServicePolicyResponseBody> body{};

  UpdateServicePolicyResponse() {}

  explicit UpdateServicePolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateServicePolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateServicePolicyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateServicePolicyResponse() = default;
};
class UpdateSpaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> status{};

  UpdateSpaceRequest() {}

  explicit UpdateSpaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateSpaceRequest() = default;
};
class UpdateSpaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSpaceResponseBody() {}

  explicit UpdateSpaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSpaceResponseBody() = default;
};
class UpdateSpaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSpaceResponseBody> body{};

  UpdateSpaceResponse() {}

  explicit UpdateSpaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSpaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSpaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSpaceResponse() = default;
};
class VerifyWebHostingDomainOwnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> spaceId{};
  shared_ptr<string> verifyType{};

  VerifyWebHostingDomainOwnerRequest() {}

  explicit VerifyWebHostingDomainOwnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (spaceId) {
      res["SpaceId"] = boost::any(*spaceId);
    }
    if (verifyType) {
      res["VerifyType"] = boost::any(*verifyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("SpaceId") != m.end() && !m["SpaceId"].empty()) {
      spaceId = make_shared<string>(boost::any_cast<string>(m["SpaceId"]));
    }
    if (m.find("VerifyType") != m.end() && !m["VerifyType"].empty()) {
      verifyType = make_shared<string>(boost::any_cast<string>(m["VerifyType"]));
    }
  }


  virtual ~VerifyWebHostingDomainOwnerRequest() = default;
};
class VerifyWebHostingDomainOwnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyWebHostingDomainOwnerResponseBody() {}

  explicit VerifyWebHostingDomainOwnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyWebHostingDomainOwnerResponseBody() = default;
};
class VerifyWebHostingDomainOwnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyWebHostingDomainOwnerResponseBody> body{};

  VerifyWebHostingDomainOwnerResponse() {}

  explicit VerifyWebHostingDomainOwnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyWebHostingDomainOwnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyWebHostingDomainOwnerResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyWebHostingDomainOwnerResponse() = default;
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
  AddCorsDomainResponse addCorsDomainWithOptions(shared_ptr<AddCorsDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCorsDomainResponse addCorsDomain(shared_ptr<AddCorsDomainRequest> request);
  AddDingtalkOpenPlatformConfigResponse addDingtalkOpenPlatformConfigWithOptions(shared_ptr<AddDingtalkOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddDingtalkOpenPlatformConfigResponse addDingtalkOpenPlatformConfig(shared_ptr<AddDingtalkOpenPlatformConfigRequest> request);
  AttachWebHostingCertificateResponse attachWebHostingCertificateWithOptions(shared_ptr<AttachWebHostingCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachWebHostingCertificateResponse attachWebHostingCertificate(shared_ptr<AttachWebHostingCertificateRequest> request);
  BatchDeleteWebHostingFilesResponse batchDeleteWebHostingFilesWithOptions(shared_ptr<BatchDeleteWebHostingFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteWebHostingFilesResponse batchDeleteWebHostingFiles(shared_ptr<BatchDeleteWebHostingFilesRequest> request);
  BindWebHostingCustomDomainResponse bindWebHostingCustomDomainWithOptions(shared_ptr<BindWebHostingCustomDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindWebHostingCustomDomainResponse bindWebHostingCustomDomain(shared_ptr<BindWebHostingCustomDomainRequest> request);
  CheckMpServerlessRoleExistsResponse checkMpServerlessRoleExistsWithOptions(shared_ptr<CheckMpServerlessRoleExistsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMpServerlessRoleExistsResponse checkMpServerlessRoleExists(shared_ptr<CheckMpServerlessRoleExistsRequest> request);
  CreateDBExportTaskResponse createDBExportTaskWithOptions(shared_ptr<CreateDBExportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBExportTaskResponse createDBExportTask(shared_ptr<CreateDBExportTaskRequest> request);
  CreateDBImportTaskResponse createDBImportTaskWithOptions(shared_ptr<CreateDBImportTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBImportTaskResponse createDBImportTask(shared_ptr<CreateDBImportTaskRequest> request);
  CreateDBRestoreTaskResponse createDBRestoreTaskWithOptions(shared_ptr<CreateDBRestoreTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDBRestoreTaskResponse createDBRestoreTask(shared_ptr<CreateDBRestoreTaskRequest> request);
  CreateFunctionResponse createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionResponse createFunction(shared_ptr<CreateFunctionRequest> request);
  CreateFunctionDeploymentResponse createFunctionDeploymentWithOptions(shared_ptr<CreateFunctionDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionDeploymentResponse createFunctionDeployment(shared_ptr<CreateFunctionDeploymentRequest> request);
  CreateSpaceResponse createSpaceWithOptions(shared_ptr<CreateSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSpaceResponse createSpace(shared_ptr<CreateSpaceRequest> request);
  CreateSpaceWithOrderResponse createSpaceWithOrderWithOptions(shared_ptr<CreateSpaceWithOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSpaceWithOrderResponse createSpaceWithOrder(shared_ptr<CreateSpaceWithOrderRequest> request);
  DeleteAntOpenPlatformConfigResponse deleteAntOpenPlatformConfigWithOptions(shared_ptr<DeleteAntOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAntOpenPlatformConfigResponse deleteAntOpenPlatformConfig(shared_ptr<DeleteAntOpenPlatformConfigRequest> request);
  DeleteCorsDomainResponse deleteCorsDomainWithOptions(shared_ptr<DeleteCorsDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCorsDomainResponse deleteCorsDomain(shared_ptr<DeleteCorsDomainRequest> request);
  DeleteDBCollectionResponse deleteDBCollectionWithOptions(shared_ptr<DeleteDBCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDBCollectionResponse deleteDBCollection(shared_ptr<DeleteDBCollectionRequest> request);
  DeleteDingtalkOpenPlatformConfigResponse deleteDingtalkOpenPlatformConfigWithOptions(shared_ptr<DeleteDingtalkOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDingtalkOpenPlatformConfigResponse deleteDingtalkOpenPlatformConfig(shared_ptr<DeleteDingtalkOpenPlatformConfigRequest> request);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<DeleteFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<DeleteFileRequest> request);
  DeleteFunctionResponse deleteFunctionWithOptions(shared_ptr<DeleteFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionResponse deleteFunction(shared_ptr<DeleteFunctionRequest> request);
  DeleteSpaceResponse deleteSpaceWithOptions(shared_ptr<DeleteSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSpaceResponse deleteSpace(shared_ptr<DeleteSpaceRequest> request);
  DeleteWebHostingCertificateResponse deleteWebHostingCertificateWithOptions(shared_ptr<DeleteWebHostingCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWebHostingCertificateResponse deleteWebHostingCertificate(shared_ptr<DeleteWebHostingCertificateRequest> request);
  DeleteWebHostingFileResponse deleteWebHostingFileWithOptions(shared_ptr<DeleteWebHostingFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWebHostingFileResponse deleteWebHostingFile(shared_ptr<DeleteWebHostingFileRequest> request);
  DeleteWechatOpenPlatformConfigResponse deleteWechatOpenPlatformConfigWithOptions(shared_ptr<DeleteWechatOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWechatOpenPlatformConfigResponse deleteWechatOpenPlatformConfig(shared_ptr<DeleteWechatOpenPlatformConfigRequest> request);
  DeployFunctionResponse deployFunctionWithOptions(shared_ptr<DeployFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployFunctionResponse deployFunction(shared_ptr<DeployFunctionRequest> request);
  DescribeCdnDomainResponse describeCdnDomainWithOptions(shared_ptr<DescribeCdnDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCdnDomainResponse describeCdnDomain(shared_ptr<DescribeCdnDomainRequest> request);
  DescribeFCOpenStatusResponse describeFCOpenStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFCOpenStatusResponse describeFCOpenStatus();
  DescribeFileUploadSignedUrlResponse describeFileUploadSignedUrlWithOptions(shared_ptr<DescribeFileUploadSignedUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileUploadSignedUrlResponse describeFileUploadSignedUrl(shared_ptr<DescribeFileUploadSignedUrlRequest> request);
  DescribeFunctionResponse describeFunctionWithOptions(shared_ptr<DescribeFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFunctionResponse describeFunction(shared_ptr<DescribeFunctionRequest> request);
  DescribeHttpTriggerConfigResponse describeHttpTriggerConfigWithOptions(shared_ptr<DescribeHttpTriggerConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHttpTriggerConfigResponse describeHttpTriggerConfig(shared_ptr<DescribeHttpTriggerConfigRequest> request);
  DescribeResourceQuotaResponse describeResourceQuotaWithOptions(shared_ptr<DescribeResourceQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceQuotaResponse describeResourceQuota(shared_ptr<DescribeResourceQuotaRequest> request);
  DescribeResourceUsageResponse describeResourceUsageWithOptions(shared_ptr<DescribeResourceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeResourceUsageResponse describeResourceUsage(shared_ptr<DescribeResourceUsageRequest> request);
  DescribeServicePolicyResponse describeServicePolicyWithOptions(shared_ptr<DescribeServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServicePolicyResponse describeServicePolicy(shared_ptr<DescribeServicePolicyRequest> request);
  DescribeSpaceClientConfigResponse describeSpaceClientConfigWithOptions(shared_ptr<DescribeSpaceClientConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSpaceClientConfigResponse describeSpaceClientConfig(shared_ptr<DescribeSpaceClientConfigRequest> request);
  DescribeSpacesResponse describeSpacesWithOptions(shared_ptr<DescribeSpacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSpacesResponse describeSpaces(shared_ptr<DescribeSpacesRequest> request);
  DescribeWebHostingFileResponse describeWebHostingFileWithOptions(shared_ptr<DescribeWebHostingFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebHostingFileResponse describeWebHostingFile(shared_ptr<DescribeWebHostingFileRequest> request);
  EnableExtensionResponse enableExtensionWithOptions(shared_ptr<EnableExtensionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableExtensionResponse enableExtension(shared_ptr<EnableExtensionRequest> request);
  GetWebHostingCertificateDetailResponse getWebHostingCertificateDetailWithOptions(shared_ptr<GetWebHostingCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebHostingCertificateDetailResponse getWebHostingCertificateDetail(shared_ptr<GetWebHostingCertificateDetailRequest> request);
  GetWebHostingConfigResponse getWebHostingConfigWithOptions(shared_ptr<GetWebHostingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebHostingConfigResponse getWebHostingConfig(shared_ptr<GetWebHostingConfigRequest> request);
  GetWebHostingDomainVerificationContentResponse getWebHostingDomainVerificationContentWithOptions(shared_ptr<GetWebHostingDomainVerificationContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebHostingDomainVerificationContentResponse getWebHostingDomainVerificationContent(shared_ptr<GetWebHostingDomainVerificationContentRequest> request);
  GetWebHostingStatusResponse getWebHostingStatusWithOptions(shared_ptr<GetWebHostingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebHostingStatusResponse getWebHostingStatus(shared_ptr<GetWebHostingStatusRequest> request);
  GetWebHostingUploadCredentialResponse getWebHostingUploadCredentialWithOptions(shared_ptr<GetWebHostingUploadCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebHostingUploadCredentialResponse getWebHostingUploadCredential(shared_ptr<GetWebHostingUploadCredentialRequest> request);
  ListAvailableCertificatesResponse listAvailableCertificatesWithOptions(shared_ptr<ListAvailableCertificatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAvailableCertificatesResponse listAvailableCertificates(shared_ptr<ListAvailableCertificatesRequest> request);
  ListCorsDomainsResponse listCorsDomainsWithOptions(shared_ptr<ListCorsDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCorsDomainsResponse listCorsDomains(shared_ptr<ListCorsDomainsRequest> request);
  ListDingtalkOpenPlatformConfigsResponse listDingtalkOpenPlatformConfigsWithOptions(shared_ptr<ListDingtalkOpenPlatformConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDingtalkOpenPlatformConfigsResponse listDingtalkOpenPlatformConfigs(shared_ptr<ListDingtalkOpenPlatformConfigsRequest> request);
  ListExtensionsResponse listExtensionsWithOptions(shared_ptr<ListExtensionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListExtensionsResponse listExtensions(shared_ptr<ListExtensionsRequest> request);
  ListFileResponse listFileWithOptions(shared_ptr<ListFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFileResponse listFile(shared_ptr<ListFileRequest> request);
  ListFunctionResponse listFunctionWithOptions(shared_ptr<ListFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionResponse listFunction(shared_ptr<ListFunctionRequest> request);
  ListFunctionDeploymentResponse listFunctionDeploymentWithOptions(shared_ptr<ListFunctionDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionDeploymentResponse listFunctionDeployment(shared_ptr<ListFunctionDeploymentRequest> request);
  ListFunctionLogResponse listFunctionLogWithOptions(shared_ptr<ListFunctionLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionLogResponse listFunctionLog(shared_ptr<ListFunctionLogRequest> request);
  ListOpenPlatformConfigResponse listOpenPlatformConfigWithOptions(shared_ptr<ListOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOpenPlatformConfigResponse listOpenPlatformConfig(shared_ptr<ListOpenPlatformConfigRequest> request);
  ListSpaceResponse listSpaceWithOptions(shared_ptr<ListSpaceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSpaceResponse listSpace(shared_ptr<ListSpaceRequest> request);
  ListWebHostingCustomDomainsResponse listWebHostingCustomDomainsWithOptions(shared_ptr<ListWebHostingCustomDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWebHostingCustomDomainsResponse listWebHostingCustomDomains(shared_ptr<ListWebHostingCustomDomainsRequest> request);
  ListWebHostingFilesResponse listWebHostingFilesWithOptions(shared_ptr<ListWebHostingFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWebHostingFilesResponse listWebHostingFiles(shared_ptr<ListWebHostingFilesRequest> request);
  ModifyWebHostingConfigResponse modifyWebHostingConfigWithOptions(shared_ptr<ModifyWebHostingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyWebHostingConfigResponse modifyWebHostingConfig(shared_ptr<ModifyWebHostingConfigRequest> request);
  OpenServiceResponse openServiceWithOptions(shared_ptr<OpenServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenServiceResponse openService(shared_ptr<OpenServiceRequest> request);
  OpenWebHostingServiceResponse openWebHostingServiceWithOptions(shared_ptr<OpenWebHostingServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenWebHostingServiceResponse openWebHostingService(shared_ptr<OpenWebHostingServiceRequest> request);
  QueryDBBackupCollectionsResponse queryDBBackupCollectionsWithOptions(shared_ptr<QueryDBBackupCollectionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDBBackupCollectionsResponse queryDBBackupCollections(shared_ptr<QueryDBBackupCollectionsRequest> request);
  QueryDBBackupDumpTimesResponse queryDBBackupDumpTimesWithOptions(shared_ptr<QueryDBBackupDumpTimesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDBBackupDumpTimesResponse queryDBBackupDumpTimes(shared_ptr<QueryDBBackupDumpTimesRequest> request);
  QueryDBExportTaskStatusResponse queryDBExportTaskStatusWithOptions(shared_ptr<QueryDBExportTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDBExportTaskStatusResponse queryDBExportTaskStatus(shared_ptr<QueryDBExportTaskStatusRequest> request);
  QueryDBImportTaskStatusResponse queryDBImportTaskStatusWithOptions(shared_ptr<QueryDBImportTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDBImportTaskStatusResponse queryDBImportTaskStatus(shared_ptr<QueryDBImportTaskStatusRequest> request);
  QueryDBRestoreTaskStatusResponse queryDBRestoreTaskStatusWithOptions(shared_ptr<QueryDBRestoreTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDBRestoreTaskStatusResponse queryDBRestoreTaskStatus(shared_ptr<QueryDBRestoreTaskStatusRequest> request);
  QueryServiceStatusResponse queryServiceStatusWithOptions(shared_ptr<QueryServiceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryServiceStatusResponse queryServiceStatus(shared_ptr<QueryServiceStatusRequest> request);
  QuerySpaceConsumptionResponse querySpaceConsumptionWithOptions(shared_ptr<QuerySpaceConsumptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySpaceConsumptionResponse querySpaceConsumption(shared_ptr<QuerySpaceConsumptionRequest> request);
  QuerySpaceSpecDetailResponse querySpaceSpecDetailWithOptions(shared_ptr<QuerySpaceSpecDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySpaceSpecDetailResponse querySpaceSpecDetail(shared_ptr<QuerySpaceSpecDetailRequest> request);
  QuerySpaceUsageResponse querySpaceUsageWithOptions(shared_ptr<QuerySpaceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySpaceUsageResponse querySpaceUsage(shared_ptr<QuerySpaceUsageRequest> request);
  RefreshWebHostingCustomDomainCacheResponse refreshWebHostingCustomDomainCacheWithOptions(shared_ptr<RefreshWebHostingCustomDomainCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshWebHostingCustomDomainCacheResponse refreshWebHostingCustomDomainCache(shared_ptr<RefreshWebHostingCustomDomainCacheRequest> request);
  RegisterFileResponse registerFileWithOptions(shared_ptr<RegisterFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterFileResponse registerFile(shared_ptr<RegisterFileRequest> request);
  RenameDBCollectionResponse renameDBCollectionWithOptions(shared_ptr<RenameDBCollectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameDBCollectionResponse renameDBCollection(shared_ptr<RenameDBCollectionRequest> request);
  ResetServerSecretResponse resetServerSecretWithOptions(shared_ptr<ResetServerSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetServerSecretResponse resetServerSecret(shared_ptr<ResetServerSecretRequest> request);
  RunDBCommandResponse runDBCommandWithOptions(shared_ptr<RunDBCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunDBCommandResponse runDBCommand(shared_ptr<RunDBCommandRequest> request);
  RunFunctionResponse runFunctionWithOptions(shared_ptr<RunFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunFunctionResponse runFunction(shared_ptr<RunFunctionRequest> request);
  SaveAntOpenPlatformConfigResponse saveAntOpenPlatformConfigWithOptions(shared_ptr<SaveAntOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveAntOpenPlatformConfigResponse saveAntOpenPlatformConfig(shared_ptr<SaveAntOpenPlatformConfigRequest> request);
  SaveAppAuthTokenResponse saveAppAuthTokenWithOptions(shared_ptr<SaveAppAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveAppAuthTokenResponse saveAppAuthToken(shared_ptr<SaveAppAuthTokenRequest> request);
  SaveCdnDomainConfigResponse saveCdnDomainConfigWithOptions(shared_ptr<SaveCdnDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveCdnDomainConfigResponse saveCdnDomainConfig(shared_ptr<SaveCdnDomainConfigRequest> request);
  SaveWebHostingCustomDomainConfigResponse saveWebHostingCustomDomainConfigWithOptions(shared_ptr<SaveWebHostingCustomDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveWebHostingCustomDomainConfigResponse saveWebHostingCustomDomainConfig(shared_ptr<SaveWebHostingCustomDomainConfigRequest> request);
  SaveWebHostingCustomDomainCorsConfigResponse saveWebHostingCustomDomainCorsConfigWithOptions(shared_ptr<SaveWebHostingCustomDomainCorsConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveWebHostingCustomDomainCorsConfigResponse saveWebHostingCustomDomainCorsConfig(shared_ptr<SaveWebHostingCustomDomainCorsConfigRequest> request);
  SaveWechatOpenPlatformConfigResponse saveWechatOpenPlatformConfigWithOptions(shared_ptr<SaveWechatOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveWechatOpenPlatformConfigResponse saveWechatOpenPlatformConfig(shared_ptr<SaveWechatOpenPlatformConfigRequest> request);
  UnbindWebHostingCustomDomainResponse unbindWebHostingCustomDomainWithOptions(shared_ptr<UnbindWebHostingCustomDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindWebHostingCustomDomainResponse unbindWebHostingCustomDomain(shared_ptr<UnbindWebHostingCustomDomainRequest> request);
  UpdateDingtalkOpenPlatformConfigResponse updateDingtalkOpenPlatformConfigWithOptions(shared_ptr<UpdateDingtalkOpenPlatformConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDingtalkOpenPlatformConfigResponse updateDingtalkOpenPlatformConfig(shared_ptr<UpdateDingtalkOpenPlatformConfigRequest> request);
  UpdateFunctionResponse updateFunctionWithOptions(shared_ptr<UpdateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionResponse updateFunction(shared_ptr<UpdateFunctionRequest> request);
  UpdateHttpTriggerConfigResponse updateHttpTriggerConfigWithOptions(shared_ptr<UpdateHttpTriggerConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateHttpTriggerConfigResponse updateHttpTriggerConfig(shared_ptr<UpdateHttpTriggerConfigRequest> request);
  UpdateServicePolicyResponse updateServicePolicyWithOptions(shared_ptr<UpdateServicePolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateServicePolicyResponse updateServicePolicy(shared_ptr<UpdateServicePolicyRequest> request);
  UpdateSpaceResponse updateSpaceWithOptions(shared_ptr<UpdateSpaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSpaceResponse updateSpace(shared_ptr<UpdateSpaceRequest> request);
  VerifyWebHostingDomainOwnerResponse verifyWebHostingDomainOwnerWithOptions(shared_ptr<VerifyWebHostingDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyWebHostingDomainOwnerResponse verifyWebHostingDomainOwner(shared_ptr<VerifyWebHostingDomainOwnerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_MPServerless20190615

#endif
