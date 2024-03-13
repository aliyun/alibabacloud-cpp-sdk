// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAS20200407_H_
#define ALIBABACLOUD_CAS20200407_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cas20200407 {
class CancelCertificateForPackageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  CancelCertificateForPackageRequestRequest() {}

  explicit CancelCertificateForPackageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CancelCertificateForPackageRequestRequest() = default;
};
class CancelCertificateForPackageRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelCertificateForPackageRequestResponseBody() {}

  explicit CancelCertificateForPackageRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelCertificateForPackageRequestResponseBody() = default;
};
class CancelCertificateForPackageRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelCertificateForPackageRequestResponseBody> body{};

  CancelCertificateForPackageRequestResponse() {}

  explicit CancelCertificateForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelCertificateForPackageRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelCertificateForPackageRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CancelCertificateForPackageRequestResponse() = default;
};
class CancelOrderRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  CancelOrderRequestRequest() {}

  explicit CancelOrderRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~CancelOrderRequestRequest() = default;
};
class CancelOrderRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CancelOrderRequestResponseBody() {}

  explicit CancelOrderRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CancelOrderRequestResponseBody() = default;
};
class CancelOrderRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelOrderRequestResponseBody> body{};

  CancelOrderRequestResponse() {}

  explicit CancelOrderRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelOrderRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelOrderRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CancelOrderRequestResponse() = default;
};
class CreateCertificateForPackageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> companyName{};
  shared_ptr<string> csr{};
  shared_ptr<string> domain{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<string> productCode{};
  shared_ptr<string> username{};
  shared_ptr<string> validateType{};

  CreateCertificateForPackageRequestRequest() {}

  explicit CreateCertificateForPackageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companyName) {
      res["CompanyName"] = boost::any(*companyName);
    }
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompanyName") != m.end() && !m["CompanyName"].empty()) {
      companyName = make_shared<string>(boost::any_cast<string>(m["CompanyName"]));
    }
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~CreateCertificateForPackageRequestRequest() = default;
};
class CreateCertificateForPackageRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateCertificateForPackageRequestResponseBody() {}

  explicit CreateCertificateForPackageRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateForPackageRequestResponseBody() = default;
};
class CreateCertificateForPackageRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateForPackageRequestResponseBody> body{};

  CreateCertificateForPackageRequestResponse() {}

  explicit CreateCertificateForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateForPackageRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateForPackageRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateForPackageRequestResponse() = default;
};
class CreateCertificateRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<string> productCode{};
  shared_ptr<string> username{};
  shared_ptr<string> validateType{};

  CreateCertificateRequestRequest() {}

  explicit CreateCertificateRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~CreateCertificateRequestRequest() = default;
};
class CreateCertificateRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateCertificateRequestResponseBody() {}

  explicit CreateCertificateRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateRequestResponseBody() = default;
};
class CreateCertificateRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateRequestResponseBody> body{};

  CreateCertificateRequestResponse() {}

  explicit CreateCertificateRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateRequestResponse() = default;
};
class CreateCertificateWithCsrRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<string> productCode{};
  shared_ptr<string> username{};
  shared_ptr<string> validateType{};

  CreateCertificateWithCsrRequestRequest() {}

  explicit CreateCertificateWithCsrRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~CreateCertificateWithCsrRequestRequest() = default;
};
class CreateCertificateWithCsrRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  CreateCertificateWithCsrRequestResponseBody() {}

  explicit CreateCertificateWithCsrRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCertificateWithCsrRequestResponseBody() = default;
};
class CreateCertificateWithCsrRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCertificateWithCsrRequestResponseBody> body{};

  CreateCertificateWithCsrRequestResponse() {}

  explicit CreateCertificateWithCsrRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCertificateWithCsrRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCertificateWithCsrRequestResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCertificateWithCsrRequestResponse() = default;
};
class CreateCsrRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> commonName{};
  shared_ptr<string> corpName{};
  shared_ptr<string> countryCode{};
  shared_ptr<string> department{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> name{};
  shared_ptr<string> province{};
  shared_ptr<string> sans{};

  CreateCsrRequest() {}

  explicit CreateCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
  }


  virtual ~CreateCsrRequest() = default;
};
class CreateCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<long> csrId{};
  shared_ptr<string> requestId{};

  CreateCsrResponseBody() {}

  explicit CreateCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (csrId) {
      res["CsrId"] = boost::any(*csrId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("CsrId") != m.end() && !m["CsrId"].empty()) {
      csrId = make_shared<long>(boost::any_cast<long>(m["CsrId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCsrResponseBody() = default;
};
class CreateCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCsrResponseBody> body{};

  CreateCsrResponse() {}

  explicit CreateCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCsrResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCsrResponse() = default;
};
class CreateDeploymentJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIds{};
  shared_ptr<string> contactIds{};
  shared_ptr<string> jobType{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceIds{};
  shared_ptr<long> scheduleTime{};

  CreateDeploymentJobRequest() {}

  explicit CreateDeploymentJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIds) {
      res["CertIds"] = boost::any(*certIds);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIds") != m.end() && !m["CertIds"].empty()) {
      certIds = make_shared<string>(boost::any_cast<string>(m["CertIds"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      contactIds = make_shared<string>(boost::any_cast<string>(m["ContactIds"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<long>(boost::any_cast<long>(m["ScheduleTime"]));
    }
  }


  virtual ~CreateDeploymentJobRequest() = default;
};
class CreateDeploymentJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<string> requestId{};

  CreateDeploymentJobResponseBody() {}

  explicit CreateDeploymentJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeploymentJobResponseBody() = default;
};
class CreateDeploymentJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeploymentJobResponseBody> body{};

  CreateDeploymentJobResponse() {}

  explicit CreateDeploymentJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDeploymentJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeploymentJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeploymentJobResponse() = default;
};
class CreateWHClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> afterTime{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeTime{};
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<string> csr{};
  shared_ptr<long> days{};
  shared_ptr<long> immediately{};
  shared_ptr<string> locality{};
  shared_ptr<long> months{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<long> sanType{};
  shared_ptr<string> sanValue{};
  shared_ptr<string> state{};
  shared_ptr<long> years{};

  CreateWHClientCertificateRequest() {}

  explicit CreateWHClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterTime) {
      res["AfterTime"] = boost::any(*afterTime);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (beforeTime) {
      res["BeforeTime"] = boost::any(*beforeTime);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (immediately) {
      res["Immediately"] = boost::any(*immediately);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (months) {
      res["Months"] = boost::any(*months);
    }
    if (organization) {
      res["Organization"] = boost::any(*organization);
    }
    if (organizationUnit) {
      res["OrganizationUnit"] = boost::any(*organizationUnit);
    }
    if (parentIdentifier) {
      res["ParentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (sanType) {
      res["SanType"] = boost::any(*sanType);
    }
    if (sanValue) {
      res["SanValue"] = boost::any(*sanValue);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (years) {
      res["Years"] = boost::any(*years);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterTime") != m.end() && !m["AfterTime"].empty()) {
      afterTime = make_shared<long>(boost::any_cast<long>(m["AfterTime"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeTime") != m.end() && !m["BeforeTime"].empty()) {
      beforeTime = make_shared<long>(boost::any_cast<long>(m["BeforeTime"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("Immediately") != m.end() && !m["Immediately"].empty()) {
      immediately = make_shared<long>(boost::any_cast<long>(m["Immediately"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Months") != m.end() && !m["Months"].empty()) {
      months = make_shared<long>(boost::any_cast<long>(m["Months"]));
    }
    if (m.find("Organization") != m.end() && !m["Organization"].empty()) {
      organization = make_shared<string>(boost::any_cast<string>(m["Organization"]));
    }
    if (m.find("OrganizationUnit") != m.end() && !m["OrganizationUnit"].empty()) {
      organizationUnit = make_shared<string>(boost::any_cast<string>(m["OrganizationUnit"]));
    }
    if (m.find("ParentIdentifier") != m.end() && !m["ParentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["ParentIdentifier"]));
    }
    if (m.find("SanType") != m.end() && !m["SanType"].empty()) {
      sanType = make_shared<long>(boost::any_cast<long>(m["SanType"]));
    }
    if (m.find("SanValue") != m.end() && !m["SanValue"].empty()) {
      sanValue = make_shared<string>(boost::any_cast<string>(m["SanValue"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~CreateWHClientCertificateRequest() = default;
};
class CreateWHClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> parentX509Certificate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rootX509Certificate{};
  shared_ptr<string> x509Certificate{};

  CreateWHClientCertificateResponseBody() {}

  explicit CreateWHClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (parentX509Certificate) {
      res["ParentX509Certificate"] = boost::any(*parentX509Certificate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rootX509Certificate) {
      res["RootX509Certificate"] = boost::any(*rootX509Certificate);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("ParentX509Certificate") != m.end() && !m["ParentX509Certificate"].empty()) {
      parentX509Certificate = make_shared<string>(boost::any_cast<string>(m["ParentX509Certificate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RootX509Certificate") != m.end() && !m["RootX509Certificate"].empty()) {
      rootX509Certificate = make_shared<string>(boost::any_cast<string>(m["RootX509Certificate"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~CreateWHClientCertificateResponseBody() = default;
};
class CreateWHClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWHClientCertificateResponseBody> body{};

  CreateWHClientCertificateResponse() {}

  explicit CreateWHClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWHClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWHClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWHClientCertificateResponse() = default;
};
class DecryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> messageType{};

  DecryptRequest() {}

  explicit DecryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
  }


  virtual ~DecryptRequest() = default;
};
class DecryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> plaintext{};
  shared_ptr<string> requestId{};

  DecryptResponseBody() {}

  explicit DecryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DecryptResponseBody() = default;
};
class DecryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DecryptResponseBody> body{};

  DecryptResponse() {}

  explicit DecryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DecryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DecryptResponseBody>(model1);
      }
    }
  }


  virtual ~DecryptResponse() = default;
};
class DeleteCertificateRequestRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  DeleteCertificateRequestRequest() {}

  explicit DeleteCertificateRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~DeleteCertificateRequestRequest() = default;
};
class DeleteCertificateRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCertificateRequestResponseBody() {}

  explicit DeleteCertificateRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCertificateRequestResponseBody() = default;
};
class DeleteCertificateRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCertificateRequestResponseBody> body{};

  DeleteCertificateRequestResponse() {}

  explicit DeleteCertificateRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCertificateRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCertificateRequestResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCertificateRequestResponse() = default;
};
class DeleteCsrRequest : public Darabonba::Model {
public:
  shared_ptr<long> csrId{};

  DeleteCsrRequest() {}

  explicit DeleteCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csrId) {
      res["CsrId"] = boost::any(*csrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsrId") != m.end() && !m["CsrId"].empty()) {
      csrId = make_shared<long>(boost::any_cast<long>(m["CsrId"]));
    }
  }


  virtual ~DeleteCsrRequest() = default;
};
class DeleteCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCsrResponseBody() {}

  explicit DeleteCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCsrResponseBody() = default;
};
class DeleteCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCsrResponseBody> body{};

  DeleteCsrResponse() {}

  explicit DeleteCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCsrResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCsrResponse() = default;
};
class DeleteDeploymentJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  DeleteDeploymentJobRequest() {}

  explicit DeleteDeploymentJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~DeleteDeploymentJobRequest() = default;
};
class DeleteDeploymentJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDeploymentJobResponseBody() {}

  explicit DeleteDeploymentJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDeploymentJobResponseBody() = default;
};
class DeleteDeploymentJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeploymentJobResponseBody> body{};

  DeleteDeploymentJobResponse() {}

  explicit DeleteDeploymentJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeploymentJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeploymentJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeploymentJobResponse() = default;
};
class DeletePCACertRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DeletePCACertRequest() {}

  explicit DeletePCACertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
  }


  virtual ~DeletePCACertRequest() = default;
};
class DeletePCACertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePCACertResponseBody() {}

  explicit DeletePCACertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeletePCACertResponseBody() = default;
};
class DeletePCACertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePCACertResponseBody> body{};

  DeletePCACertResponse() {}

  explicit DeletePCACertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePCACertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePCACertResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePCACertResponse() = default;
};
class DeleteUserCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> certId{};

  DeleteUserCertificateRequest() {}

  explicit DeleteUserCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
  }


  virtual ~DeleteUserCertificateRequest() = default;
};
class DeleteUserCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserCertificateResponseBody() {}

  explicit DeleteUserCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserCertificateResponseBody() = default;
};
class DeleteUserCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserCertificateResponseBody> body{};

  DeleteUserCertificateResponse() {}

  explicit DeleteUserCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserCertificateResponse() = default;
};
class DeleteWorkerResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<long> workerId{};

  DeleteWorkerResourceRequest() {}

  explicit DeleteWorkerResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (workerId) {
      res["WorkerId"] = boost::any(*workerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("WorkerId") != m.end() && !m["WorkerId"].empty()) {
      workerId = make_shared<long>(boost::any_cast<long>(m["WorkerId"]));
    }
  }


  virtual ~DeleteWorkerResourceRequest() = default;
};
class DeleteWorkerResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWorkerResourceResponseBody() {}

  explicit DeleteWorkerResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWorkerResourceResponseBody() = default;
};
class DeleteWorkerResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkerResourceResponseBody> body{};

  DeleteWorkerResourceResponse() {}

  explicit DeleteWorkerResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWorkerResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkerResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkerResourceResponse() = default;
};
class DescribeCertificateStateRequest : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};

  DescribeCertificateStateRequest() {}

  explicit DescribeCertificateStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~DescribeCertificateStateRequest() = default;
};
class DescribeCertificateStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> content{};
  shared_ptr<string> domain{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> recordDomain{};
  shared_ptr<string> recordType{};
  shared_ptr<string> recordValue{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};
  shared_ptr<string> validateType{};

  DescribeCertificateStateResponseBody() {}

  explicit DescribeCertificateStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (recordDomain) {
      res["RecordDomain"] = boost::any(*recordDomain);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (recordValue) {
      res["RecordValue"] = boost::any(*recordValue);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (validateType) {
      res["ValidateType"] = boost::any(*validateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("RecordDomain") != m.end() && !m["RecordDomain"].empty()) {
      recordDomain = make_shared<string>(boost::any_cast<string>(m["RecordDomain"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<string>(boost::any_cast<string>(m["RecordType"]));
    }
    if (m.find("RecordValue") != m.end() && !m["RecordValue"].empty()) {
      recordValue = make_shared<string>(boost::any_cast<string>(m["RecordValue"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("ValidateType") != m.end() && !m["ValidateType"].empty()) {
      validateType = make_shared<string>(boost::any_cast<string>(m["ValidateType"]));
    }
  }


  virtual ~DescribeCertificateStateResponseBody() = default;
};
class DescribeCertificateStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCertificateStateResponseBody> body{};

  DescribeCertificateStateResponse() {}

  explicit DescribeCertificateStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCertificateStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertificateStateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertificateStateResponse() = default;
};
class DescribeDeploymentJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  DescribeDeploymentJobStatusRequest() {}

  explicit DescribeDeploymentJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~DescribeDeploymentJobStatusRequest() = default;
};
class DescribeDeploymentJobStatusResponseBodyProductWorkerCount : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> productName{};

  DescribeDeploymentJobStatusResponseBodyProductWorkerCount() {}

  explicit DescribeDeploymentJobStatusResponseBodyProductWorkerCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
  }


  virtual ~DescribeDeploymentJobStatusResponseBodyProductWorkerCount() = default;
};
class DescribeDeploymentJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> buyCount{};
  shared_ptr<long> certCount{};
  shared_ptr<long> costCount{};
  shared_ptr<long> failedCount{};
  shared_ptr<long> matchWorkerCount{};
  shared_ptr<vector<DescribeDeploymentJobStatusResponseBodyProductWorkerCount>> productWorkerCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> resourceCount{};
  shared_ptr<long> rollbackCount{};
  shared_ptr<long> rollbackFailedCount{};
  shared_ptr<long> rollbackSuccessCount{};
  shared_ptr<long> successCount{};
  shared_ptr<long> useCount{};
  shared_ptr<long> workerCount{};

  DescribeDeploymentJobStatusResponseBody() {}

  explicit DescribeDeploymentJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyCount) {
      res["BuyCount"] = boost::any(*buyCount);
    }
    if (certCount) {
      res["CertCount"] = boost::any(*certCount);
    }
    if (costCount) {
      res["CostCount"] = boost::any(*costCount);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (matchWorkerCount) {
      res["MatchWorkerCount"] = boost::any(*matchWorkerCount);
    }
    if (productWorkerCount) {
      vector<boost::any> temp1;
      for(auto item1:*productWorkerCount){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductWorkerCount"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceCount) {
      res["ResourceCount"] = boost::any(*resourceCount);
    }
    if (rollbackCount) {
      res["RollbackCount"] = boost::any(*rollbackCount);
    }
    if (rollbackFailedCount) {
      res["RollbackFailedCount"] = boost::any(*rollbackFailedCount);
    }
    if (rollbackSuccessCount) {
      res["RollbackSuccessCount"] = boost::any(*rollbackSuccessCount);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (useCount) {
      res["UseCount"] = boost::any(*useCount);
    }
    if (workerCount) {
      res["WorkerCount"] = boost::any(*workerCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyCount") != m.end() && !m["BuyCount"].empty()) {
      buyCount = make_shared<long>(boost::any_cast<long>(m["BuyCount"]));
    }
    if (m.find("CertCount") != m.end() && !m["CertCount"].empty()) {
      certCount = make_shared<long>(boost::any_cast<long>(m["CertCount"]));
    }
    if (m.find("CostCount") != m.end() && !m["CostCount"].empty()) {
      costCount = make_shared<long>(boost::any_cast<long>(m["CostCount"]));
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<long>(boost::any_cast<long>(m["FailedCount"]));
    }
    if (m.find("MatchWorkerCount") != m.end() && !m["MatchWorkerCount"].empty()) {
      matchWorkerCount = make_shared<long>(boost::any_cast<long>(m["MatchWorkerCount"]));
    }
    if (m.find("ProductWorkerCount") != m.end() && !m["ProductWorkerCount"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductWorkerCount"].type()) {
        vector<DescribeDeploymentJobStatusResponseBodyProductWorkerCount> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductWorkerCount"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeploymentJobStatusResponseBodyProductWorkerCount model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productWorkerCount = make_shared<vector<DescribeDeploymentJobStatusResponseBodyProductWorkerCount>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceCount") != m.end() && !m["ResourceCount"].empty()) {
      resourceCount = make_shared<long>(boost::any_cast<long>(m["ResourceCount"]));
    }
    if (m.find("RollbackCount") != m.end() && !m["RollbackCount"].empty()) {
      rollbackCount = make_shared<long>(boost::any_cast<long>(m["RollbackCount"]));
    }
    if (m.find("RollbackFailedCount") != m.end() && !m["RollbackFailedCount"].empty()) {
      rollbackFailedCount = make_shared<long>(boost::any_cast<long>(m["RollbackFailedCount"]));
    }
    if (m.find("RollbackSuccessCount") != m.end() && !m["RollbackSuccessCount"].empty()) {
      rollbackSuccessCount = make_shared<long>(boost::any_cast<long>(m["RollbackSuccessCount"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("UseCount") != m.end() && !m["UseCount"].empty()) {
      useCount = make_shared<long>(boost::any_cast<long>(m["UseCount"]));
    }
    if (m.find("WorkerCount") != m.end() && !m["WorkerCount"].empty()) {
      workerCount = make_shared<long>(boost::any_cast<long>(m["WorkerCount"]));
    }
  }


  virtual ~DescribeDeploymentJobStatusResponseBody() = default;
};
class DescribeDeploymentJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeploymentJobStatusResponseBody> body{};

  DescribeDeploymentJobStatusResponse() {}

  explicit DescribeDeploymentJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeploymentJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeploymentJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeploymentJobStatusResponse() = default;
};
class DescribePackageStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};

  DescribePackageStateRequest() {}

  explicit DescribePackageStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
  }


  virtual ~DescribePackageStateRequest() = default;
};
class DescribePackageStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> issuedCount{};
  shared_ptr<string> productCode{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> usedCount{};

  DescribePackageStateResponseBody() {}

  explicit DescribePackageStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issuedCount) {
      res["IssuedCount"] = boost::any(*issuedCount);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (usedCount) {
      res["UsedCount"] = boost::any(*usedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssuedCount") != m.end() && !m["IssuedCount"].empty()) {
      issuedCount = make_shared<long>(boost::any_cast<long>(m["IssuedCount"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UsedCount") != m.end() && !m["UsedCount"].empty()) {
      usedCount = make_shared<long>(boost::any_cast<long>(m["UsedCount"]));
    }
  }


  virtual ~DescribePackageStateResponseBody() = default;
};
class DescribePackageStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePackageStateResponseBody> body{};

  DescribePackageStateResponse() {}

  explicit DescribePackageStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePackageStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePackageStateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePackageStateResponse() = default;
};
class EncryptRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> messageType{};
  shared_ptr<string> plaintext{};

  EncryptRequest() {}

  explicit EncryptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (plaintext) {
      res["Plaintext"] = boost::any(*plaintext);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Plaintext") != m.end() && !m["Plaintext"].empty()) {
      plaintext = make_shared<string>(boost::any_cast<string>(m["Plaintext"]));
    }
  }


  virtual ~EncryptRequest() = default;
};
class EncryptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> ciphertextBlob{};
  shared_ptr<string> requestId{};

  EncryptResponseBody() {}

  explicit EncryptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (ciphertextBlob) {
      res["CiphertextBlob"] = boost::any(*ciphertextBlob);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CiphertextBlob") != m.end() && !m["CiphertextBlob"].empty()) {
      ciphertextBlob = make_shared<string>(boost::any_cast<string>(m["CiphertextBlob"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EncryptResponseBody() = default;
};
class EncryptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EncryptResponseBody> body{};

  EncryptResponse() {}

  explicit EncryptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EncryptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EncryptResponseBody>(model1);
      }
    }
  }


  virtual ~EncryptResponse() = default;
};
class GetCertWarehouseQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalQuota{};
  shared_ptr<long> useCount{};

  GetCertWarehouseQuotaResponseBody() {}

  explicit GetCertWarehouseQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalQuota) {
      res["TotalQuota"] = boost::any(*totalQuota);
    }
    if (useCount) {
      res["UseCount"] = boost::any(*useCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalQuota") != m.end() && !m["TotalQuota"].empty()) {
      totalQuota = make_shared<long>(boost::any_cast<long>(m["TotalQuota"]));
    }
    if (m.find("UseCount") != m.end() && !m["UseCount"].empty()) {
      useCount = make_shared<long>(boost::any_cast<long>(m["UseCount"]));
    }
  }


  virtual ~GetCertWarehouseQuotaResponseBody() = default;
};
class GetCertWarehouseQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCertWarehouseQuotaResponseBody> body{};

  GetCertWarehouseQuotaResponse() {}

  explicit GetCertWarehouseQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCertWarehouseQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCertWarehouseQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetCertWarehouseQuotaResponse() = default;
};
class GetCsrDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> csrId{};

  GetCsrDetailRequest() {}

  explicit GetCsrDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csrId) {
      res["CsrId"] = boost::any(*csrId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsrId") != m.end() && !m["CsrId"].empty()) {
      csrId = make_shared<long>(boost::any_cast<long>(m["CsrId"]));
    }
  }


  virtual ~GetCsrDetailRequest() = default;
};
class GetCsrDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<string> requestId{};

  GetCsrDetailResponseBody() {}

  explicit GetCsrDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCsrDetailResponseBody() = default;
};
class GetCsrDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCsrDetailResponseBody> body{};

  GetCsrDetailResponse() {}

  explicit GetCsrDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCsrDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCsrDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetCsrDetailResponse() = default;
};
class GetUserCertificateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<bool> certFilter{};
  shared_ptr<long> certId{};

  GetUserCertificateDetailRequest() {}

  explicit GetUserCertificateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certFilter) {
      res["CertFilter"] = boost::any(*certFilter);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertFilter") != m.end() && !m["CertFilter"].empty()) {
      certFilter = make_shared<bool>(boost::any_cast<bool>(m["CertFilter"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
  }


  virtual ~GetUserCertificateDetailRequest() = default;
};
class GetUserCertificateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<bool> buyInAliyun{};
  shared_ptr<string> cert{};
  shared_ptr<string> city{};
  shared_ptr<string> common{};
  shared_ptr<string> country{};
  shared_ptr<string> encryptCert{};
  shared_ptr<string> encryptPrivateKey{};
  shared_ptr<string> endDate{};
  shared_ptr<bool> expired{};
  shared_ptr<string> fingerprint{};
  shared_ptr<long> id{};
  shared_ptr<string> issuer{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<long> orderId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> province{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> sans{};
  shared_ptr<string> signCert{};
  shared_ptr<string> signPrivateKey{};
  shared_ptr<string> startDate{};

  GetUserCertificateDetailResponseBody() {}

  explicit GetUserCertificateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (buyInAliyun) {
      res["BuyInAliyun"] = boost::any(*buyInAliyun);
    }
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (common) {
      res["Common"] = boost::any(*common);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (encryptCert) {
      res["EncryptCert"] = boost::any(*encryptCert);
    }
    if (encryptPrivateKey) {
      res["EncryptPrivateKey"] = boost::any(*encryptPrivateKey);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (signCert) {
      res["SignCert"] = boost::any(*signCert);
    }
    if (signPrivateKey) {
      res["SignPrivateKey"] = boost::any(*signPrivateKey);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BuyInAliyun") != m.end() && !m["BuyInAliyun"].empty()) {
      buyInAliyun = make_shared<bool>(boost::any_cast<bool>(m["BuyInAliyun"]));
    }
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Common") != m.end() && !m["Common"].empty()) {
      common = make_shared<string>(boost::any_cast<string>(m["Common"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("EncryptCert") != m.end() && !m["EncryptCert"].empty()) {
      encryptCert = make_shared<string>(boost::any_cast<string>(m["EncryptCert"]));
    }
    if (m.find("EncryptPrivateKey") != m.end() && !m["EncryptPrivateKey"].empty()) {
      encryptPrivateKey = make_shared<string>(boost::any_cast<string>(m["EncryptPrivateKey"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SignCert") != m.end() && !m["SignCert"].empty()) {
      signCert = make_shared<string>(boost::any_cast<string>(m["SignCert"]));
    }
    if (m.find("SignPrivateKey") != m.end() && !m["SignPrivateKey"].empty()) {
      signPrivateKey = make_shared<string>(boost::any_cast<string>(m["SignPrivateKey"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetUserCertificateDetailResponseBody() = default;
};
class GetUserCertificateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserCertificateDetailResponseBody> body{};

  GetUserCertificateDetailResponse() {}

  explicit GetUserCertificateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserCertificateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserCertificateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserCertificateDetailResponse() = default;
};
class ListCertRequest : public Darabonba::Model {
public:
  shared_ptr<string> certType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> showSize{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> status{};
  shared_ptr<long> warehouseId{};

  ListCertRequest() {}

  explicit ListCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (warehouseId) {
      res["WarehouseId"] = boost::any(*warehouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WarehouseId") != m.end() && !m["WarehouseId"].empty()) {
      warehouseId = make_shared<long>(boost::any_cast<long>(m["WarehouseId"]));
    }
  }


  virtual ~ListCertRequest() = default;
};
class ListCertResponseBodyCertList : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certType{};
  shared_ptr<string> commonName{};
  shared_ptr<bool> existPrivateKey{};
  shared_ptr<string> identifier{};
  shared_ptr<string> issuer{};
  shared_ptr<string> sans{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> status{};
  shared_ptr<long> whId{};
  shared_ptr<string> whInstanceId{};

  ListCertResponseBodyCertList() {}

  explicit ListCertResponseBodyCertList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (existPrivateKey) {
      res["ExistPrivateKey"] = boost::any(*existPrivateKey);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (whId) {
      res["WhId"] = boost::any(*whId);
    }
    if (whInstanceId) {
      res["WhInstanceId"] = boost::any(*whInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("ExistPrivateKey") != m.end() && !m["ExistPrivateKey"].empty()) {
      existPrivateKey = make_shared<bool>(boost::any_cast<bool>(m["ExistPrivateKey"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WhId") != m.end() && !m["WhId"].empty()) {
      whId = make_shared<long>(boost::any_cast<long>(m["WhId"]));
    }
    if (m.find("WhInstanceId") != m.end() && !m["WhInstanceId"].empty()) {
      whInstanceId = make_shared<string>(boost::any_cast<string>(m["WhInstanceId"]));
    }
  }


  virtual ~ListCertResponseBodyCertList() = default;
};
class ListCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCertResponseBodyCertList>> certList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListCertResponseBody() {}

  explicit ListCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certList) {
      vector<boost::any> temp1;
      for(auto item1:*certList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertList") != m.end() && !m["CertList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertList"].type()) {
        vector<ListCertResponseBodyCertList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCertResponseBodyCertList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certList = make_shared<vector<ListCertResponseBodyCertList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCertResponseBody() = default;
};
class ListCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCertResponseBody> body{};

  ListCertResponse() {}

  explicit ListCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCertResponseBody>(model1);
      }
    }
  }


  virtual ~ListCertResponse() = default;
};
class ListCertWarehouseRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> showSize{};
  shared_ptr<string> type{};

  ListCertWarehouseRequest() {}

  explicit ListCertWarehouseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListCertWarehouseRequest() = default;
};
class ListCertWarehouseResponseBodyCertWarehouseList : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> isExpired{};
  shared_ptr<string> name{};
  shared_ptr<string> pcaInstanceId{};
  shared_ptr<long> qps{};
  shared_ptr<string> type{};
  shared_ptr<long> whId{};

  ListCertWarehouseResponseBodyCertWarehouseList() {}

  explicit ListCertWarehouseResponseBodyCertWarehouseList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isExpired) {
      res["IsExpired"] = boost::any(*isExpired);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pcaInstanceId) {
      res["PcaInstanceId"] = boost::any(*pcaInstanceId);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (whId) {
      res["WhId"] = boost::any(*whId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsExpired") != m.end() && !m["IsExpired"].empty()) {
      isExpired = make_shared<bool>(boost::any_cast<bool>(m["IsExpired"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PcaInstanceId") != m.end() && !m["PcaInstanceId"].empty()) {
      pcaInstanceId = make_shared<string>(boost::any_cast<string>(m["PcaInstanceId"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["Qps"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WhId") != m.end() && !m["WhId"].empty()) {
      whId = make_shared<long>(boost::any_cast<long>(m["WhId"]));
    }
  }


  virtual ~ListCertWarehouseResponseBodyCertWarehouseList() = default;
};
class ListCertWarehouseResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCertWarehouseResponseBodyCertWarehouseList>> certWarehouseList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListCertWarehouseResponseBody() {}

  explicit ListCertWarehouseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certWarehouseList) {
      vector<boost::any> temp1;
      for(auto item1:*certWarehouseList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertWarehouseList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertWarehouseList") != m.end() && !m["CertWarehouseList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertWarehouseList"].type()) {
        vector<ListCertWarehouseResponseBodyCertWarehouseList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertWarehouseList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCertWarehouseResponseBodyCertWarehouseList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certWarehouseList = make_shared<vector<ListCertWarehouseResponseBodyCertWarehouseList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCertWarehouseResponseBody() = default;
};
class ListCertWarehouseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCertWarehouseResponseBody> body{};

  ListCertWarehouseResponse() {}

  explicit ListCertWarehouseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCertWarehouseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCertWarehouseResponseBody>(model1);
      }
    }
  }


  virtual ~ListCertWarehouseResponse() = default;
};
class ListCloudResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudName{};
  shared_ptr<string> cloudProduct{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyword{};
  shared_ptr<string> secretId{};
  shared_ptr<long> showSize{};

  ListCloudResourcesRequest() {}

  explicit ListCloudResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudName) {
      res["CloudName"] = boost::any(*cloudName);
    }
    if (cloudProduct) {
      res["CloudProduct"] = boost::any(*cloudProduct);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (secretId) {
      res["SecretId"] = boost::any(*secretId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudName") != m.end() && !m["CloudName"].empty()) {
      cloudName = make_shared<string>(boost::any_cast<string>(m["CloudName"]));
    }
    if (m.find("CloudProduct") != m.end() && !m["CloudProduct"].empty()) {
      cloudProduct = make_shared<string>(boost::any_cast<string>(m["CloudProduct"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("SecretId") != m.end() && !m["SecretId"].empty()) {
      secretId = make_shared<string>(boost::any_cast<string>(m["SecretId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~ListCloudResourcesRequest() = default;
};
class ListCloudResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certEndTime{};
  shared_ptr<long> certId{};
  shared_ptr<string> certName{};
  shared_ptr<string> certStartTime{};
  shared_ptr<string> cloudAccessId{};
  shared_ptr<string> cloudName{};
  shared_ptr<string> cloudProduct{};
  shared_ptr<string> cloudRegion{};
  shared_ptr<long> defaultResource{};
  shared_ptr<string> domain{};
  shared_ptr<long> enableHttps{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> listenerPort{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<long> useSsl{};
  shared_ptr<long> userId{};

  ListCloudResourcesResponseBodyData() {}

  explicit ListCloudResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certEndTime) {
      res["CertEndTime"] = boost::any(*certEndTime);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certStartTime) {
      res["CertStartTime"] = boost::any(*certStartTime);
    }
    if (cloudAccessId) {
      res["CloudAccessId"] = boost::any(*cloudAccessId);
    }
    if (cloudName) {
      res["CloudName"] = boost::any(*cloudName);
    }
    if (cloudProduct) {
      res["CloudProduct"] = boost::any(*cloudProduct);
    }
    if (cloudRegion) {
      res["CloudRegion"] = boost::any(*cloudRegion);
    }
    if (defaultResource) {
      res["DefaultResource"] = boost::any(*defaultResource);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enableHttps) {
      res["EnableHttps"] = boost::any(*enableHttps);
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (useSsl) {
      res["UseSsl"] = boost::any(*useSsl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertEndTime") != m.end() && !m["CertEndTime"].empty()) {
      certEndTime = make_shared<string>(boost::any_cast<string>(m["CertEndTime"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertStartTime") != m.end() && !m["CertStartTime"].empty()) {
      certStartTime = make_shared<string>(boost::any_cast<string>(m["CertStartTime"]));
    }
    if (m.find("CloudAccessId") != m.end() && !m["CloudAccessId"].empty()) {
      cloudAccessId = make_shared<string>(boost::any_cast<string>(m["CloudAccessId"]));
    }
    if (m.find("CloudName") != m.end() && !m["CloudName"].empty()) {
      cloudName = make_shared<string>(boost::any_cast<string>(m["CloudName"]));
    }
    if (m.find("CloudProduct") != m.end() && !m["CloudProduct"].empty()) {
      cloudProduct = make_shared<string>(boost::any_cast<string>(m["CloudProduct"]));
    }
    if (m.find("CloudRegion") != m.end() && !m["CloudRegion"].empty()) {
      cloudRegion = make_shared<string>(boost::any_cast<string>(m["CloudRegion"]));
    }
    if (m.find("DefaultResource") != m.end() && !m["DefaultResource"].empty()) {
      defaultResource = make_shared<long>(boost::any_cast<long>(m["DefaultResource"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnableHttps") != m.end() && !m["EnableHttps"].empty()) {
      enableHttps = make_shared<long>(boost::any_cast<long>(m["EnableHttps"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<string>(boost::any_cast<string>(m["ListenerPort"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UseSsl") != m.end() && !m["UseSsl"].empty()) {
      useSsl = make_shared<long>(boost::any_cast<long>(m["UseSsl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListCloudResourcesResponseBodyData() = default;
};
class ListCloudResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListCloudResourcesResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> total{};

  ListCloudResourcesResponseBody() {}

  explicit ListCloudResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
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
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListCloudResourcesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCloudResourcesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListCloudResourcesResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListCloudResourcesResponseBody() = default;
};
class ListCloudResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCloudResourcesResponseBody> body{};

  ListCloudResourcesResponse() {}

  explicit ListCloudResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCloudResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCloudResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListCloudResourcesResponse() = default;
};
class ListCsrRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyWord{};
  shared_ptr<long> showSize{};

  ListCsrRequest() {}

  explicit ListCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyWord) {
      res["KeyWord"] = boost::any(*keyWord);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("KeyWord") != m.end() && !m["KeyWord"].empty()) {
      keyWord = make_shared<string>(boost::any_cast<string>(m["KeyWord"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~ListCsrRequest() = default;
};
class ListCsrResponseBodyCsrList : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> commonName{};
  shared_ptr<string> corpName{};
  shared_ptr<string> countryCode{};
  shared_ptr<long> csrId{};
  shared_ptr<string> department{};
  shared_ptr<bool> hasPrivateKey{};
  shared_ptr<string> keySha2{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> name{};
  shared_ptr<string> province{};
  shared_ptr<string> sans{};

  ListCsrResponseBodyCsrList() {}

  explicit ListCsrResponseBodyCsrList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (corpName) {
      res["CorpName"] = boost::any(*corpName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (csrId) {
      res["CsrId"] = boost::any(*csrId);
    }
    if (department) {
      res["Department"] = boost::any(*department);
    }
    if (hasPrivateKey) {
      res["HasPrivateKey"] = boost::any(*hasPrivateKey);
    }
    if (keySha2) {
      res["KeySha2"] = boost::any(*keySha2);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CorpName") != m.end() && !m["CorpName"].empty()) {
      corpName = make_shared<string>(boost::any_cast<string>(m["CorpName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("CsrId") != m.end() && !m["CsrId"].empty()) {
      csrId = make_shared<long>(boost::any_cast<long>(m["CsrId"]));
    }
    if (m.find("Department") != m.end() && !m["Department"].empty()) {
      department = make_shared<string>(boost::any_cast<string>(m["Department"]));
    }
    if (m.find("HasPrivateKey") != m.end() && !m["HasPrivateKey"].empty()) {
      hasPrivateKey = make_shared<bool>(boost::any_cast<bool>(m["HasPrivateKey"]));
    }
    if (m.find("KeySha2") != m.end() && !m["KeySha2"].empty()) {
      keySha2 = make_shared<string>(boost::any_cast<string>(m["KeySha2"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
  }


  virtual ~ListCsrResponseBodyCsrList() = default;
};
class ListCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCsrResponseBodyCsrList>> csrList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListCsrResponseBody() {}

  explicit ListCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csrList) {
      vector<boost::any> temp1;
      for(auto item1:*csrList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CsrList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsrList") != m.end() && !m["CsrList"].empty()) {
      if (typeid(vector<boost::any>) == m["CsrList"].type()) {
        vector<ListCsrResponseBodyCsrList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CsrList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCsrResponseBodyCsrList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        csrList = make_shared<vector<ListCsrResponseBodyCsrList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCsrResponseBody() = default;
};
class ListCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCsrResponseBody> body{};

  ListCsrResponse() {}

  explicit ListCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCsrResponseBody>(model1);
      }
    }
  }


  virtual ~ListCsrResponse() = default;
};
class ListDeploymentJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> jobType{};
  shared_ptr<long> showSize{};
  shared_ptr<string> status{};

  ListDeploymentJobRequest() {}

  explicit ListDeploymentJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeploymentJobRequest() = default;
};
class ListDeploymentJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certDomain{};
  shared_ptr<string> certType{};
  shared_ptr<long> del{};
  shared_ptr<string> endTime{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> name{};
  shared_ptr<string> productName{};
  shared_ptr<long> rollback{};
  shared_ptr<string> scheduleTime{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<long> userId{};

  ListDeploymentJobResponseBodyData() {}

  explicit ListDeploymentJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certDomain) {
      res["CertDomain"] = boost::any(*certDomain);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (del) {
      res["Del"] = boost::any(*del);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (rollback) {
      res["Rollback"] = boost::any(*rollback);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
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
    if (m.find("CertDomain") != m.end() && !m["CertDomain"].empty()) {
      certDomain = make_shared<string>(boost::any_cast<string>(m["CertDomain"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("Del") != m.end() && !m["Del"].empty()) {
      del = make_shared<long>(boost::any_cast<long>(m["Del"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Rollback") != m.end() && !m["Rollback"].empty()) {
      rollback = make_shared<long>(boost::any_cast<long>(m["Rollback"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<string>(boost::any_cast<string>(m["ScheduleTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListDeploymentJobResponseBodyData() = default;
};
class ListDeploymentJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<ListDeploymentJobResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> total{};

  ListDeploymentJobResponseBody() {}

  explicit ListDeploymentJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
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
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListDeploymentJobResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentJobResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeploymentJobResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDeploymentJobResponseBody() = default;
};
class ListDeploymentJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentJobResponseBody> body{};

  ListDeploymentJobResponse() {}

  explicit ListDeploymentJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentJobResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentJobResponse() = default;
};
class ListDeploymentJobCertRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  ListDeploymentJobCertRequest() {}

  explicit ListDeploymentJobCertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~ListDeploymentJobCertRequest() = default;
};
class ListDeploymentJobCertResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> certId{};
  shared_ptr<string> certInstanceId{};
  shared_ptr<string> certName{};
  shared_ptr<string> certOrderType{};
  shared_ptr<string> certType{};
  shared_ptr<string> commonName{};
  shared_ptr<bool> isTrustee{};
  shared_ptr<long> month{};
  shared_ptr<long> notAfterTime{};
  shared_ptr<long> notBeforeTime{};
  shared_ptr<long> orderId{};
  shared_ptr<vector<string>> sans{};
  shared_ptr<string> statusCode{};

  ListDeploymentJobCertResponseBodyData() {}

  explicit ListDeploymentJobCertResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (certInstanceId) {
      res["CertInstanceId"] = boost::any(*certInstanceId);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certOrderType) {
      res["CertOrderType"] = boost::any(*certOrderType);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (isTrustee) {
      res["IsTrustee"] = boost::any(*isTrustee);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (notAfterTime) {
      res["NotAfterTime"] = boost::any(*notAfterTime);
    }
    if (notBeforeTime) {
      res["NotBeforeTime"] = boost::any(*notBeforeTime);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (statusCode) {
      res["StatusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("CertInstanceId") != m.end() && !m["CertInstanceId"].empty()) {
      certInstanceId = make_shared<string>(boost::any_cast<string>(m["CertInstanceId"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertOrderType") != m.end() && !m["CertOrderType"].empty()) {
      certOrderType = make_shared<string>(boost::any_cast<string>(m["CertOrderType"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("IsTrustee") != m.end() && !m["IsTrustee"].empty()) {
      isTrustee = make_shared<bool>(boost::any_cast<bool>(m["IsTrustee"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["Month"]));
    }
    if (m.find("NotAfterTime") != m.end() && !m["NotAfterTime"].empty()) {
      notAfterTime = make_shared<long>(boost::any_cast<long>(m["NotAfterTime"]));
    }
    if (m.find("NotBeforeTime") != m.end() && !m["NotBeforeTime"].empty()) {
      notBeforeTime = make_shared<long>(boost::any_cast<long>(m["NotBeforeTime"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Sans"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Sans"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sans = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StatusCode") != m.end() && !m["StatusCode"].empty()) {
      statusCode = make_shared<string>(boost::any_cast<string>(m["StatusCode"]));
    }
  }


  virtual ~ListDeploymentJobCertResponseBodyData() = default;
};
class ListDeploymentJobCertResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeploymentJobCertResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListDeploymentJobCertResponseBody() {}

  explicit ListDeploymentJobCertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListDeploymentJobCertResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentJobCertResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeploymentJobCertResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeploymentJobCertResponseBody() = default;
};
class ListDeploymentJobCertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentJobCertResponseBody> body{};

  ListDeploymentJobCertResponse() {}

  explicit ListDeploymentJobCertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentJobCertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentJobCertResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentJobCertResponse() = default;
};
class ListDeploymentJobResourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};

  ListDeploymentJobResourceRequest() {}

  explicit ListDeploymentJobResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
  }


  virtual ~ListDeploymentJobResourceRequest() = default;
};
class ListDeploymentJobResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> certEndTime{};
  shared_ptr<long> certId{};
  shared_ptr<string> certName{};
  shared_ptr<string> certStartTime{};
  shared_ptr<string> cloudAccessId{};
  shared_ptr<string> cloudName{};
  shared_ptr<string> cloudProduct{};
  shared_ptr<string> cloudRegion{};
  shared_ptr<long> defaultResource{};
  shared_ptr<string> domain{};
  shared_ptr<long> enableHttps{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> listenerId{};
  shared_ptr<string> listenerPort{};
  shared_ptr<string> regionId{};
  shared_ptr<string> remark{};
  shared_ptr<string> status{};
  shared_ptr<long> useSsl{};
  shared_ptr<long> userId{};

  ListDeploymentJobResourceResponseBodyData() {}

  explicit ListDeploymentJobResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certEndTime) {
      res["CertEndTime"] = boost::any(*certEndTime);
    }
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certStartTime) {
      res["CertStartTime"] = boost::any(*certStartTime);
    }
    if (cloudAccessId) {
      res["CloudAccessId"] = boost::any(*cloudAccessId);
    }
    if (cloudName) {
      res["CloudName"] = boost::any(*cloudName);
    }
    if (cloudProduct) {
      res["CloudProduct"] = boost::any(*cloudProduct);
    }
    if (cloudRegion) {
      res["CloudRegion"] = boost::any(*cloudRegion);
    }
    if (defaultResource) {
      res["DefaultResource"] = boost::any(*defaultResource);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enableHttps) {
      res["EnableHttps"] = boost::any(*enableHttps);
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (listenerId) {
      res["ListenerId"] = boost::any(*listenerId);
    }
    if (listenerPort) {
      res["ListenerPort"] = boost::any(*listenerPort);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (useSsl) {
      res["UseSsl"] = boost::any(*useSsl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertEndTime") != m.end() && !m["CertEndTime"].empty()) {
      certEndTime = make_shared<string>(boost::any_cast<string>(m["CertEndTime"]));
    }
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertStartTime") != m.end() && !m["CertStartTime"].empty()) {
      certStartTime = make_shared<string>(boost::any_cast<string>(m["CertStartTime"]));
    }
    if (m.find("CloudAccessId") != m.end() && !m["CloudAccessId"].empty()) {
      cloudAccessId = make_shared<string>(boost::any_cast<string>(m["CloudAccessId"]));
    }
    if (m.find("CloudName") != m.end() && !m["CloudName"].empty()) {
      cloudName = make_shared<string>(boost::any_cast<string>(m["CloudName"]));
    }
    if (m.find("CloudProduct") != m.end() && !m["CloudProduct"].empty()) {
      cloudProduct = make_shared<string>(boost::any_cast<string>(m["CloudProduct"]));
    }
    if (m.find("CloudRegion") != m.end() && !m["CloudRegion"].empty()) {
      cloudRegion = make_shared<string>(boost::any_cast<string>(m["CloudRegion"]));
    }
    if (m.find("DefaultResource") != m.end() && !m["DefaultResource"].empty()) {
      defaultResource = make_shared<long>(boost::any_cast<long>(m["DefaultResource"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnableHttps") != m.end() && !m["EnableHttps"].empty()) {
      enableHttps = make_shared<long>(boost::any_cast<long>(m["EnableHttps"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ListenerId") != m.end() && !m["ListenerId"].empty()) {
      listenerId = make_shared<string>(boost::any_cast<string>(m["ListenerId"]));
    }
    if (m.find("ListenerPort") != m.end() && !m["ListenerPort"].empty()) {
      listenerPort = make_shared<string>(boost::any_cast<string>(m["ListenerPort"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UseSsl") != m.end() && !m["UseSsl"].empty()) {
      useSsl = make_shared<long>(boost::any_cast<long>(m["UseSsl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
  }


  virtual ~ListDeploymentJobResourceResponseBodyData() = default;
};
class ListDeploymentJobResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeploymentJobResourceResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListDeploymentJobResourceResponseBody() {}

  explicit ListDeploymentJobResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListDeploymentJobResourceResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentJobResourceResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListDeploymentJobResourceResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeploymentJobResourceResponseBody() = default;
};
class ListDeploymentJobResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentJobResourceResponseBody> body{};

  ListDeploymentJobResourceResponse() {}

  explicit ListDeploymentJobResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeploymentJobResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentJobResourceResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentJobResourceResponse() = default;
};
class ListUserCertificateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyword{};
  shared_ptr<string> orderType{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<long> showSize{};
  shared_ptr<string> status{};

  ListUserCertificateOrderRequest() {}

  explicit ListUserCertificateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListUserCertificateOrderRequest() = default;
};
class ListUserCertificateOrderResponseBodyCertificateOrderList : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> aliyunOrderId{};
  shared_ptr<long> buyDate{};
  shared_ptr<long> certEndTime{};
  shared_ptr<long> certStartTime{};
  shared_ptr<string> certType{};
  shared_ptr<long> certificateId{};
  shared_ptr<string> city{};
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<string> domain{};
  shared_ptr<long> domainCount{};
  shared_ptr<string> domainType{};
  shared_ptr<string> endDate{};
  shared_ptr<bool> expired{};
  shared_ptr<string> fingerprint{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> issuer{};
  shared_ptr<string> name{};
  shared_ptr<long> orderId{};
  shared_ptr<string> orgName{};
  shared_ptr<string> partnerOrderId{};
  shared_ptr<string> productCode{};
  shared_ptr<string> productName{};
  shared_ptr<string> province{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> rootBrand{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> sha2{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> trusteeStatus{};
  shared_ptr<bool> upload{};
  shared_ptr<long> wildDomainCount{};

  ListUserCertificateOrderResponseBodyCertificateOrderList() {}

  explicit ListUserCertificateOrderResponseBodyCertificateOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (aliyunOrderId) {
      res["AliyunOrderId"] = boost::any(*aliyunOrderId);
    }
    if (buyDate) {
      res["BuyDate"] = boost::any(*buyDate);
    }
    if (certEndTime) {
      res["CertEndTime"] = boost::any(*certEndTime);
    }
    if (certStartTime) {
      res["CertStartTime"] = boost::any(*certStartTime);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainCount) {
      res["DomainCount"] = boost::any(*domainCount);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (fingerprint) {
      res["Fingerprint"] = boost::any(*fingerprint);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orgName) {
      res["OrgName"] = boost::any(*orgName);
    }
    if (partnerOrderId) {
      res["PartnerOrderId"] = boost::any(*partnerOrderId);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (rootBrand) {
      res["RootBrand"] = boost::any(*rootBrand);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (sha2) {
      res["Sha2"] = boost::any(*sha2);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trusteeStatus) {
      res["TrusteeStatus"] = boost::any(*trusteeStatus);
    }
    if (upload) {
      res["Upload"] = boost::any(*upload);
    }
    if (wildDomainCount) {
      res["WildDomainCount"] = boost::any(*wildDomainCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("AliyunOrderId") != m.end() && !m["AliyunOrderId"].empty()) {
      aliyunOrderId = make_shared<long>(boost::any_cast<long>(m["AliyunOrderId"]));
    }
    if (m.find("BuyDate") != m.end() && !m["BuyDate"].empty()) {
      buyDate = make_shared<long>(boost::any_cast<long>(m["BuyDate"]));
    }
    if (m.find("CertEndTime") != m.end() && !m["CertEndTime"].empty()) {
      certEndTime = make_shared<long>(boost::any_cast<long>(m["CertEndTime"]));
    }
    if (m.find("CertStartTime") != m.end() && !m["CertStartTime"].empty()) {
      certStartTime = make_shared<long>(boost::any_cast<long>(m["CertStartTime"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<long>(boost::any_cast<long>(m["CertificateId"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainCount") != m.end() && !m["DomainCount"].empty()) {
      domainCount = make_shared<long>(boost::any_cast<long>(m["DomainCount"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<bool>(boost::any_cast<bool>(m["Expired"]));
    }
    if (m.find("Fingerprint") != m.end() && !m["Fingerprint"].empty()) {
      fingerprint = make_shared<string>(boost::any_cast<string>(m["Fingerprint"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("OrgName") != m.end() && !m["OrgName"].empty()) {
      orgName = make_shared<string>(boost::any_cast<string>(m["OrgName"]));
    }
    if (m.find("PartnerOrderId") != m.end() && !m["PartnerOrderId"].empty()) {
      partnerOrderId = make_shared<string>(boost::any_cast<string>(m["PartnerOrderId"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("RootBrand") != m.end() && !m["RootBrand"].empty()) {
      rootBrand = make_shared<string>(boost::any_cast<string>(m["RootBrand"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("Sha2") != m.end() && !m["Sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["Sha2"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrusteeStatus") != m.end() && !m["TrusteeStatus"].empty()) {
      trusteeStatus = make_shared<string>(boost::any_cast<string>(m["TrusteeStatus"]));
    }
    if (m.find("Upload") != m.end() && !m["Upload"].empty()) {
      upload = make_shared<bool>(boost::any_cast<bool>(m["Upload"]));
    }
    if (m.find("WildDomainCount") != m.end() && !m["WildDomainCount"].empty()) {
      wildDomainCount = make_shared<long>(boost::any_cast<long>(m["WildDomainCount"]));
    }
  }


  virtual ~ListUserCertificateOrderResponseBodyCertificateOrderList() = default;
};
class ListUserCertificateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserCertificateOrderResponseBodyCertificateOrderList>> certificateOrderList{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListUserCertificateOrderResponseBody() {}

  explicit ListUserCertificateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateOrderList) {
      vector<boost::any> temp1;
      for(auto item1:*certificateOrderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateOrderList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateOrderList") != m.end() && !m["CertificateOrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateOrderList"].type()) {
        vector<ListUserCertificateOrderResponseBodyCertificateOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateOrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserCertificateOrderResponseBodyCertificateOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateOrderList = make_shared<vector<ListUserCertificateOrderResponseBodyCertificateOrderList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListUserCertificateOrderResponseBody() = default;
};
class ListUserCertificateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserCertificateOrderResponseBody> body{};

  ListUserCertificateOrderResponse() {}

  explicit ListUserCertificateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserCertificateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserCertificateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserCertificateOrderResponse() = default;
};
class RenewCertificateOrderForPackageRequestRequest : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<long> orderId{};

  RenewCertificateOrderForPackageRequestRequest() {}

  explicit RenewCertificateOrderForPackageRequestRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
  }


  virtual ~RenewCertificateOrderForPackageRequestRequest() = default;
};
class RenewCertificateOrderForPackageRequestResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> orderId{};
  shared_ptr<string> requestId{};

  RenewCertificateOrderForPackageRequestResponseBody() {}

  explicit RenewCertificateOrderForPackageRequestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<long>(boost::any_cast<long>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewCertificateOrderForPackageRequestResponseBody() = default;
};
class RenewCertificateOrderForPackageRequestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewCertificateOrderForPackageRequestResponseBody> body{};

  RenewCertificateOrderForPackageRequestResponse() {}

  explicit RenewCertificateOrderForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewCertificateOrderForPackageRequestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewCertificateOrderForPackageRequestResponseBody>(model1);
      }
    }
  }


  virtual ~RenewCertificateOrderForPackageRequestResponse() = default;
};
class RevokeWHClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  RevokeWHClientCertificateRequest() {}

  explicit RevokeWHClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
  }


  virtual ~RevokeWHClientCertificateRequest() = default;
};
class RevokeWHClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeWHClientCertificateResponseBody() {}

  explicit RevokeWHClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeWHClientCertificateResponseBody() = default;
};
class RevokeWHClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeWHClientCertificateResponseBody> body{};

  RevokeWHClientCertificateResponse() {}

  explicit RevokeWHClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeWHClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeWHClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeWHClientCertificateResponse() = default;
};
class SignRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> message{};
  shared_ptr<string> messageType{};
  shared_ptr<string> signingAlgorithm{};

  SignRequest() {}

  explicit SignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (signingAlgorithm) {
      res["SigningAlgorithm"] = boost::any(*signingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("SigningAlgorithm") != m.end() && !m["SigningAlgorithm"].empty()) {
      signingAlgorithm = make_shared<string>(boost::any_cast<string>(m["SigningAlgorithm"]));
    }
  }


  virtual ~SignRequest() = default;
};
class SignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  SignResponseBody() {}

  explicit SignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~SignResponseBody() = default;
};
class SignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SignResponseBody> body{};

  SignResponse() {}

  explicit SignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SignResponseBody>(model1);
      }
    }
  }


  virtual ~SignResponse() = default;
};
class UpdateCsrRequest : public Darabonba::Model {
public:
  shared_ptr<long> csrId{};
  shared_ptr<string> key{};

  UpdateCsrRequest() {}

  explicit UpdateCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csrId) {
      res["CsrId"] = boost::any(*csrId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsrId") != m.end() && !m["CsrId"].empty()) {
      csrId = make_shared<long>(boost::any_cast<long>(m["CsrId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~UpdateCsrRequest() = default;
};
class UpdateCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCsrResponseBody() {}

  explicit UpdateCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCsrResponseBody() = default;
};
class UpdateCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCsrResponseBody> body{};

  UpdateCsrResponse() {}

  explicit UpdateCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCsrResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCsrResponse() = default;
};
class UpdateDeploymentJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIds{};
  shared_ptr<string> contactIds{};
  shared_ptr<long> jobId{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceIds{};
  shared_ptr<long> scheduleTime{};

  UpdateDeploymentJobRequest() {}

  explicit UpdateDeploymentJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIds) {
      res["CertIds"] = boost::any(*certIds);
    }
    if (contactIds) {
      res["ContactIds"] = boost::any(*contactIds);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceIds) {
      res["ResourceIds"] = boost::any(*resourceIds);
    }
    if (scheduleTime) {
      res["ScheduleTime"] = boost::any(*scheduleTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIds") != m.end() && !m["CertIds"].empty()) {
      certIds = make_shared<string>(boost::any_cast<string>(m["CertIds"]));
    }
    if (m.find("ContactIds") != m.end() && !m["ContactIds"].empty()) {
      contactIds = make_shared<string>(boost::any_cast<string>(m["ContactIds"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceIds") != m.end() && !m["ResourceIds"].empty()) {
      resourceIds = make_shared<string>(boost::any_cast<string>(m["ResourceIds"]));
    }
    if (m.find("ScheduleTime") != m.end() && !m["ScheduleTime"].empty()) {
      scheduleTime = make_shared<long>(boost::any_cast<long>(m["ScheduleTime"]));
    }
  }


  virtual ~UpdateDeploymentJobRequest() = default;
};
class UpdateDeploymentJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDeploymentJobResponseBody() {}

  explicit UpdateDeploymentJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDeploymentJobResponseBody() = default;
};
class UpdateDeploymentJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeploymentJobResponseBody> body{};

  UpdateDeploymentJobResponse() {}

  explicit UpdateDeploymentJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeploymentJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeploymentJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentJobResponse() = default;
};
class UpdateDeploymentJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<string> status{};

  UpdateDeploymentJobStatusRequest() {}

  explicit UpdateDeploymentJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateDeploymentJobStatusRequest() = default;
};
class UpdateDeploymentJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<string> requestId{};

  UpdateDeploymentJobStatusResponseBody() {}

  explicit UpdateDeploymentJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDeploymentJobStatusResponseBody() = default;
};
class UpdateDeploymentJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDeploymentJobStatusResponseBody> body{};

  UpdateDeploymentJobStatusResponse() {}

  explicit UpdateDeploymentJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDeploymentJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDeploymentJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDeploymentJobStatusResponse() = default;
};
class UpdateWorkerResourceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> jobId{};
  shared_ptr<string> status{};
  shared_ptr<long> workerId{};

  UpdateWorkerResourceStatusRequest() {}

  explicit UpdateWorkerResourceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (workerId) {
      res["WorkerId"] = boost::any(*workerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<long>(boost::any_cast<long>(m["JobId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WorkerId") != m.end() && !m["WorkerId"].empty()) {
      workerId = make_shared<long>(boost::any_cast<long>(m["WorkerId"]));
    }
  }


  virtual ~UpdateWorkerResourceStatusRequest() = default;
};
class UpdateWorkerResourceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<boost::any> data{};
  shared_ptr<string> requestId{};

  UpdateWorkerResourceStatusResponseBody() {}

  explicit UpdateWorkerResourceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateWorkerResourceStatusResponseBody() = default;
};
class UpdateWorkerResourceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkerResourceStatusResponseBody> body{};

  UpdateWorkerResourceStatusResponse() {}

  explicit UpdateWorkerResourceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWorkerResourceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkerResourceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkerResourceStatusResponse() = default;
};
class UploadCsrRequest : public Darabonba::Model {
public:
  shared_ptr<string> csr{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};

  UploadCsrRequest() {}

  explicit UploadCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UploadCsrRequest() = default;
};
class UploadCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> csrId{};
  shared_ptr<string> requestId{};

  UploadCsrResponseBody() {}

  explicit UploadCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (csrId) {
      res["CsrId"] = boost::any(*csrId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CsrId") != m.end() && !m["CsrId"].empty()) {
      csrId = make_shared<long>(boost::any_cast<long>(m["CsrId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadCsrResponseBody() = default;
};
class UploadCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadCsrResponseBody> body{};

  UploadCsrResponse() {}

  explicit UploadCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadCsrResponseBody>(model1);
      }
    }
  }


  virtual ~UploadCsrResponse() = default;
};
class UploadPCACertRequest : public Darabonba::Model {
public:
  shared_ptr<string> cert{};
  shared_ptr<string> name{};
  shared_ptr<string> privateKey{};
  shared_ptr<long> warehouseId{};

  UploadPCACertRequest() {}

  explicit UploadPCACertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (warehouseId) {
      res["WarehouseId"] = boost::any(*warehouseId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("WarehouseId") != m.end() && !m["WarehouseId"].empty()) {
      warehouseId = make_shared<long>(boost::any_cast<long>(m["WarehouseId"]));
    }
  }


  virtual ~UploadPCACertRequest() = default;
};
class UploadPCACertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};

  UploadPCACertResponseBody() {}

  explicit UploadPCACertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadPCACertResponseBody() = default;
};
class UploadPCACertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadPCACertResponseBody> body{};

  UploadPCACertResponse() {}

  explicit UploadPCACertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadPCACertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadPCACertResponseBody>(model1);
      }
    }
  }


  virtual ~UploadPCACertResponse() = default;
};
class UploadUserCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> cert{};
  shared_ptr<string> encryptCert{};
  shared_ptr<string> encryptPrivateKey{};
  shared_ptr<string> key{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> signCert{};
  shared_ptr<string> signPrivateKey{};

  UploadUserCertificateRequest() {}

  explicit UploadUserCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cert) {
      res["Cert"] = boost::any(*cert);
    }
    if (encryptCert) {
      res["EncryptCert"] = boost::any(*encryptCert);
    }
    if (encryptPrivateKey) {
      res["EncryptPrivateKey"] = boost::any(*encryptPrivateKey);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (signCert) {
      res["SignCert"] = boost::any(*signCert);
    }
    if (signPrivateKey) {
      res["SignPrivateKey"] = boost::any(*signPrivateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cert") != m.end() && !m["Cert"].empty()) {
      cert = make_shared<string>(boost::any_cast<string>(m["Cert"]));
    }
    if (m.find("EncryptCert") != m.end() && !m["EncryptCert"].empty()) {
      encryptCert = make_shared<string>(boost::any_cast<string>(m["EncryptCert"]));
    }
    if (m.find("EncryptPrivateKey") != m.end() && !m["EncryptPrivateKey"].empty()) {
      encryptPrivateKey = make_shared<string>(boost::any_cast<string>(m["EncryptPrivateKey"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SignCert") != m.end() && !m["SignCert"].empty()) {
      signCert = make_shared<string>(boost::any_cast<string>(m["SignCert"]));
    }
    if (m.find("SignPrivateKey") != m.end() && !m["SignPrivateKey"].empty()) {
      signPrivateKey = make_shared<string>(boost::any_cast<string>(m["SignPrivateKey"]));
    }
  }


  virtual ~UploadUserCertificateRequest() = default;
};
class UploadUserCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> certId{};
  shared_ptr<string> requestId{};

  UploadUserCertificateResponseBody() {}

  explicit UploadUserCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certId) {
      res["CertId"] = boost::any(*certId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertId") != m.end() && !m["CertId"].empty()) {
      certId = make_shared<long>(boost::any_cast<long>(m["CertId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadUserCertificateResponseBody() = default;
};
class UploadUserCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadUserCertificateResponseBody> body{};

  UploadUserCertificateResponse() {}

  explicit UploadUserCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadUserCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadUserCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~UploadUserCertificateResponse() = default;
};
class VerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> message{};
  shared_ptr<string> messageType{};
  shared_ptr<string> signatureValue{};
  shared_ptr<string> signingAlgorithm{};

  VerifyRequest() {}

  explicit VerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (signatureValue) {
      res["SignatureValue"] = boost::any(*signatureValue);
    }
    if (signingAlgorithm) {
      res["SigningAlgorithm"] = boost::any(*signingAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("SignatureValue") != m.end() && !m["SignatureValue"].empty()) {
      signatureValue = make_shared<string>(boost::any_cast<string>(m["SignatureValue"]));
    }
    if (m.find("SigningAlgorithm") != m.end() && !m["SigningAlgorithm"].empty()) {
      signingAlgorithm = make_shared<string>(boost::any_cast<string>(m["SigningAlgorithm"]));
    }
  }


  virtual ~VerifyRequest() = default;
};
class VerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> signatureValid{};

  VerifyResponseBody() {}

  explicit VerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signatureValid) {
      res["SignatureValid"] = boost::any(*signatureValid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignatureValid") != m.end() && !m["SignatureValid"].empty()) {
      signatureValid = make_shared<bool>(boost::any_cast<bool>(m["SignatureValid"]));
    }
  }


  virtual ~VerifyResponseBody() = default;
};
class VerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyResponseBody> body{};

  VerifyResponse() {}

  explicit VerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyResponse() = default;
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
  CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequestWithOptions(shared_ptr<CancelCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequest(shared_ptr<CancelCertificateForPackageRequestRequest> request);
  CancelOrderRequestResponse cancelOrderRequestWithOptions(shared_ptr<CancelOrderRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelOrderRequestResponse cancelOrderRequest(shared_ptr<CancelOrderRequestRequest> request);
  CreateCertificateForPackageRequestResponse createCertificateForPackageRequestWithOptions(shared_ptr<CreateCertificateForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateForPackageRequestResponse createCertificateForPackageRequest(shared_ptr<CreateCertificateForPackageRequestRequest> request);
  CreateCertificateRequestResponse createCertificateRequestWithOptions(shared_ptr<CreateCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateRequestResponse createCertificateRequest(shared_ptr<CreateCertificateRequestRequest> request);
  CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequestWithOptions(shared_ptr<CreateCertificateWithCsrRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequest(shared_ptr<CreateCertificateWithCsrRequestRequest> request);
  CreateCsrResponse createCsrWithOptions(shared_ptr<CreateCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCsrResponse createCsr(shared_ptr<CreateCsrRequest> request);
  CreateDeploymentJobResponse createDeploymentJobWithOptions(shared_ptr<CreateDeploymentJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeploymentJobResponse createDeploymentJob(shared_ptr<CreateDeploymentJobRequest> request);
  CreateWHClientCertificateResponse createWHClientCertificateWithOptions(shared_ptr<CreateWHClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWHClientCertificateResponse createWHClientCertificate(shared_ptr<CreateWHClientCertificateRequest> request);
  DecryptResponse decryptWithOptions(shared_ptr<DecryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecryptResponse decrypt(shared_ptr<DecryptRequest> request);
  DeleteCertificateRequestResponse deleteCertificateRequestWithOptions(shared_ptr<DeleteCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCertificateRequestResponse deleteCertificateRequest(shared_ptr<DeleteCertificateRequestRequest> request);
  DeleteCsrResponse deleteCsrWithOptions(shared_ptr<DeleteCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCsrResponse deleteCsr(shared_ptr<DeleteCsrRequest> request);
  DeleteDeploymentJobResponse deleteDeploymentJobWithOptions(shared_ptr<DeleteDeploymentJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeploymentJobResponse deleteDeploymentJob(shared_ptr<DeleteDeploymentJobRequest> request);
  DeletePCACertResponse deletePCACertWithOptions(shared_ptr<DeletePCACertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePCACertResponse deletePCACert(shared_ptr<DeletePCACertRequest> request);
  DeleteUserCertificateResponse deleteUserCertificateWithOptions(shared_ptr<DeleteUserCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserCertificateResponse deleteUserCertificate(shared_ptr<DeleteUserCertificateRequest> request);
  DeleteWorkerResourceResponse deleteWorkerResourceWithOptions(shared_ptr<DeleteWorkerResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkerResourceResponse deleteWorkerResource(shared_ptr<DeleteWorkerResourceRequest> request);
  DescribeCertificateStateResponse describeCertificateStateWithOptions(shared_ptr<DescribeCertificateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificateStateResponse describeCertificateState(shared_ptr<DescribeCertificateStateRequest> request);
  DescribeDeploymentJobStatusResponse describeDeploymentJobStatusWithOptions(shared_ptr<DescribeDeploymentJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeploymentJobStatusResponse describeDeploymentJobStatus(shared_ptr<DescribeDeploymentJobStatusRequest> request);
  DescribePackageStateResponse describePackageStateWithOptions(shared_ptr<DescribePackageStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackageStateResponse describePackageState(shared_ptr<DescribePackageStateRequest> request);
  EncryptResponse encryptWithOptions(shared_ptr<EncryptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EncryptResponse encrypt(shared_ptr<EncryptRequest> request);
  GetCertWarehouseQuotaResponse getCertWarehouseQuotaWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCertWarehouseQuotaResponse getCertWarehouseQuota();
  GetCsrDetailResponse getCsrDetailWithOptions(shared_ptr<GetCsrDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCsrDetailResponse getCsrDetail(shared_ptr<GetCsrDetailRequest> request);
  GetUserCertificateDetailResponse getUserCertificateDetailWithOptions(shared_ptr<GetUserCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserCertificateDetailResponse getUserCertificateDetail(shared_ptr<GetUserCertificateDetailRequest> request);
  ListCertResponse listCertWithOptions(shared_ptr<ListCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCertResponse listCert(shared_ptr<ListCertRequest> request);
  ListCertWarehouseResponse listCertWarehouseWithOptions(shared_ptr<ListCertWarehouseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCertWarehouseResponse listCertWarehouse(shared_ptr<ListCertWarehouseRequest> request);
  ListCloudResourcesResponse listCloudResourcesWithOptions(shared_ptr<ListCloudResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCloudResourcesResponse listCloudResources(shared_ptr<ListCloudResourcesRequest> request);
  ListCsrResponse listCsrWithOptions(shared_ptr<ListCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCsrResponse listCsr(shared_ptr<ListCsrRequest> request);
  ListDeploymentJobResponse listDeploymentJobWithOptions(shared_ptr<ListDeploymentJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentJobResponse listDeploymentJob(shared_ptr<ListDeploymentJobRequest> request);
  ListDeploymentJobCertResponse listDeploymentJobCertWithOptions(shared_ptr<ListDeploymentJobCertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentJobCertResponse listDeploymentJobCert(shared_ptr<ListDeploymentJobCertRequest> request);
  ListDeploymentJobResourceResponse listDeploymentJobResourceWithOptions(shared_ptr<ListDeploymentJobResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentJobResourceResponse listDeploymentJobResource(shared_ptr<ListDeploymentJobResourceRequest> request);
  ListUserCertificateOrderResponse listUserCertificateOrderWithOptions(shared_ptr<ListUserCertificateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserCertificateOrderResponse listUserCertificateOrder(shared_ptr<ListUserCertificateOrderRequest> request);
  RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequestWithOptions(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequest(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request);
  RevokeWHClientCertificateResponse revokeWHClientCertificateWithOptions(shared_ptr<RevokeWHClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeWHClientCertificateResponse revokeWHClientCertificate(shared_ptr<RevokeWHClientCertificateRequest> request);
  SignResponse signWithOptions(shared_ptr<SignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SignResponse sign(shared_ptr<SignRequest> request);
  UpdateCsrResponse updateCsrWithOptions(shared_ptr<UpdateCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCsrResponse updateCsr(shared_ptr<UpdateCsrRequest> request);
  UpdateDeploymentJobResponse updateDeploymentJobWithOptions(shared_ptr<UpdateDeploymentJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeploymentJobResponse updateDeploymentJob(shared_ptr<UpdateDeploymentJobRequest> request);
  UpdateDeploymentJobStatusResponse updateDeploymentJobStatusWithOptions(shared_ptr<UpdateDeploymentJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDeploymentJobStatusResponse updateDeploymentJobStatus(shared_ptr<UpdateDeploymentJobStatusRequest> request);
  UpdateWorkerResourceStatusResponse updateWorkerResourceStatusWithOptions(shared_ptr<UpdateWorkerResourceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkerResourceStatusResponse updateWorkerResourceStatus(shared_ptr<UpdateWorkerResourceStatusRequest> request);
  UploadCsrResponse uploadCsrWithOptions(shared_ptr<UploadCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadCsrResponse uploadCsr(shared_ptr<UploadCsrRequest> request);
  UploadPCACertResponse uploadPCACertWithOptions(shared_ptr<UploadPCACertRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadPCACertResponse uploadPCACert(shared_ptr<UploadPCACertRequest> request);
  UploadUserCertificateResponse uploadUserCertificateWithOptions(shared_ptr<UploadUserCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadUserCertificateResponse uploadUserCertificate(shared_ptr<UploadUserCertificateRequest> request);
  VerifyResponse verifyWithOptions(shared_ptr<VerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyResponse verify(shared_ptr<VerifyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cas20200407

#endif
