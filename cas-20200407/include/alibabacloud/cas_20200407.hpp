// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAS20200407_H_
#define ALIBABACLOUD_CAS20200407_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

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
  shared_ptr<CancelCertificateForPackageRequestResponseBody> body{};

  CancelCertificateForPackageRequestResponse() {}

  explicit CancelCertificateForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CancelOrderRequestResponseBody> body{};

  CancelOrderRequestResponse() {}

  explicit CancelOrderRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CreateCertificateForPackageRequestResponseBody> body{};

  CreateCertificateForPackageRequestResponse() {}

  explicit CreateCertificateForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CreateCertificateRequestResponseBody> body{};

  CreateCertificateRequestResponse() {}

  explicit CreateCertificateRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<CreateCertificateWithCsrRequestResponseBody> body{};

  CreateCertificateWithCsrRequestResponse() {}

  explicit CreateCertificateWithCsrRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DeleteCertificateRequestResponseBody> body{};

  DeleteCertificateRequestResponse() {}

  explicit DeleteCertificateRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DescribeCertificateStateResponseBody> body{};

  DescribeCertificateStateResponse() {}

  explicit DescribeCertificateStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<DescribePackageStateResponseBody> body{};

  DescribePackageStateResponse() {}

  explicit DescribePackageStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  shared_ptr<RenewCertificateOrderForPackageRequestResponseBody> body{};

  RenewCertificateOrderForPackageRequestResponse() {}

  explicit RenewCertificateOrderForPackageRequestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
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
  DeleteCertificateRequestResponse deleteCertificateRequestWithOptions(shared_ptr<DeleteCertificateRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCertificateRequestResponse deleteCertificateRequest(shared_ptr<DeleteCertificateRequestRequest> request);
  DescribeCertificateStateResponse describeCertificateStateWithOptions(shared_ptr<DescribeCertificateStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificateStateResponse describeCertificateState(shared_ptr<DescribeCertificateStateRequest> request);
  DescribePackageStateResponse describePackageStateWithOptions(shared_ptr<DescribePackageStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePackageStateResponse describePackageState(shared_ptr<DescribePackageStateRequest> request);
  RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequestWithOptions(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequest(shared_ptr<RenewCertificateOrderForPackageRequestRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cas20200407

#endif
