// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAS20200619_H_
#define ALIBABACLOUD_CAS20200619_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cas20200619 {
class CreateSSLCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> privateKey{};

  CreateSSLCertificateRequest() {}

  explicit CreateSSLCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
  }


  virtual ~CreateSSLCertificateRequest() = default;
};
class CreateSSLCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> requestId{};

  CreateSSLCertificateResponseBody() {}

  explicit CreateSSLCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSSLCertificateResponseBody() = default;
};
class CreateSSLCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSSLCertificateResponseBody> body{};

  CreateSSLCertificateResponse() {}

  explicit CreateSSLCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSSLCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSSLCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSSLCertificateResponse() = default;
};
class CreateSSLCertificateWithNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certificate{};
  shared_ptr<string> privateKey{};

  CreateSSLCertificateWithNameRequest() {}

  explicit CreateSSLCertificateWithNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
  }


  virtual ~CreateSSLCertificateWithNameRequest() = default;
};
class CreateSSLCertificateWithNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> requestId{};

  CreateSSLCertificateWithNameResponseBody() {}

  explicit CreateSSLCertificateWithNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSSLCertificateWithNameResponseBody() = default;
};
class CreateSSLCertificateWithNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSSLCertificateWithNameResponseBody> body{};

  CreateSSLCertificateWithNameResponse() {}

  explicit CreateSSLCertificateWithNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSSLCertificateWithNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSSLCertificateWithNameResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSSLCertificateWithNameResponse() = default;
};
class DeleteSSLCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};

  DeleteSSLCertificateRequest() {}

  explicit DeleteSSLCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
  }


  virtual ~DeleteSSLCertificateRequest() = default;
};
class DeleteSSLCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSSLCertificateResponseBody() {}

  explicit DeleteSSLCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSSLCertificateResponseBody() = default;
};
class DeleteSSLCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSSLCertificateResponseBody> body{};

  DeleteSSLCertificateResponse() {}

  explicit DeleteSSLCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSSLCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSSLCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSSLCertificateResponse() = default;
};
class DescribeSSLCertificateCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> searchValue{};

  DescribeSSLCertificateCountRequest() {}

  explicit DescribeSSLCertificateCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (searchValue) {
      res["SearchValue"] = boost::any(*searchValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SearchValue") != m.end() && !m["SearchValue"].empty()) {
      searchValue = make_shared<string>(boost::any_cast<string>(m["SearchValue"]));
    }
  }


  virtual ~DescribeSSLCertificateCountRequest() = default;
};
class DescribeSSLCertificateCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeSSLCertificateCountResponseBody() {}

  explicit DescribeSSLCertificateCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSSLCertificateCountResponseBody() = default;
};
class DescribeSSLCertificateCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSSLCertificateCountResponseBody> body{};

  DescribeSSLCertificateCountResponse() {}

  explicit DescribeSSLCertificateCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSSLCertificateCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSSLCertificateCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSSLCertificateCountResponse() = default;
};
class DescribeSSLCertificateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> searchValue{};
  shared_ptr<long> showSize{};

  DescribeSSLCertificateListRequest() {}

  explicit DescribeSSLCertificateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (searchValue) {
      res["SearchValue"] = boost::any(*searchValue);
    }
    if (showSize) {
      res["ShowSize"] = boost::any(*showSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("SearchValue") != m.end() && !m["SearchValue"].empty()) {
      searchValue = make_shared<string>(boost::any_cast<string>(m["SearchValue"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~DescribeSSLCertificateListRequest() = default;
};
class DescribeSSLCertificateListResponseBodyCertMetaList : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> issuer{};
  shared_ptr<long> keySize{};
  shared_ptr<string> md5{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};

  DescribeSSLCertificateListResponseBodyCertMetaList() {}

  explicit DescribeSSLCertificateListResponseBodyCertMetaList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
  }


  virtual ~DescribeSSLCertificateListResponseBodyCertMetaList() = default;
};
class DescribeSSLCertificateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSSLCertificateListResponseBodyCertMetaList>> certMetaList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  DescribeSSLCertificateListResponseBody() {}

  explicit DescribeSSLCertificateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certMetaList) {
      vector<boost::any> temp1;
      for(auto item1:*certMetaList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertMetaList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
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
    if (m.find("CertMetaList") != m.end() && !m["CertMetaList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertMetaList"].type()) {
        vector<DescribeSSLCertificateListResponseBodyCertMetaList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertMetaList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSSLCertificateListResponseBodyCertMetaList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certMetaList = make_shared<vector<DescribeSSLCertificateListResponseBodyCertMetaList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
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


  virtual ~DescribeSSLCertificateListResponseBody() = default;
};
class DescribeSSLCertificateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSSLCertificateListResponseBody> body{};

  DescribeSSLCertificateListResponse() {}

  explicit DescribeSSLCertificateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSSLCertificateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSSLCertificateListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSSLCertificateListResponse() = default;
};
class DescribeSSLCertificateMatchDomainListRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> domain{};
  shared_ptr<string> matchType{};
  shared_ptr<long> showSize{};

  DescribeSSLCertificateMatchDomainListRequest() {}

  explicit DescribeSSLCertificateMatchDomainListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
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
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~DescribeSSLCertificateMatchDomainListRequest() = default;
};
class DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<bool> domainMatchCert{};
  shared_ptr<string> issuer{};
  shared_ptr<long> keySize{};
  shared_ptr<string> md5{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};

  DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList() {}

  explicit DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (domainMatchCert) {
      res["DomainMatchCert"] = boost::any(*domainMatchCert);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("DomainMatchCert") != m.end() && !m["DomainMatchCert"].empty()) {
      domainMatchCert = make_shared<bool>(boost::any_cast<bool>(m["DomainMatchCert"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
  }


  virtual ~DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList() = default;
};
class DescribeSSLCertificateMatchDomainListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList>> certMetaList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  DescribeSSLCertificateMatchDomainListResponseBody() {}

  explicit DescribeSSLCertificateMatchDomainListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certMetaList) {
      vector<boost::any> temp1;
      for(auto item1:*certMetaList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertMetaList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
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
    if (m.find("CertMetaList") != m.end() && !m["CertMetaList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertMetaList"].type()) {
        vector<DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertMetaList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certMetaList = make_shared<vector<DescribeSSLCertificateMatchDomainListResponseBodyCertMetaList>>(expect1);
      }
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
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


  virtual ~DescribeSSLCertificateMatchDomainListResponseBody() = default;
};
class DescribeSSLCertificateMatchDomainListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSSLCertificateMatchDomainListResponseBody> body{};

  DescribeSSLCertificateMatchDomainListResponse() {}

  explicit DescribeSSLCertificateMatchDomainListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSSLCertificateMatchDomainListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSSLCertificateMatchDomainListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSSLCertificateMatchDomainListResponse() = default;
};
class DescribeSSLCertificatePrivateKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> encryptedCode{};

  DescribeSSLCertificatePrivateKeyRequest() {}

  explicit DescribeSSLCertificatePrivateKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (encryptedCode) {
      res["EncryptedCode"] = boost::any(*encryptedCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("EncryptedCode") != m.end() && !m["EncryptedCode"].empty()) {
      encryptedCode = make_shared<string>(boost::any_cast<string>(m["EncryptedCode"]));
    }
  }


  virtual ~DescribeSSLCertificatePrivateKeyRequest() = default;
};
class DescribeSSLCertificatePrivateKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> encryptPrivateKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signPrivateKey{};
  shared_ptr<string> x509PrivateKey{};

  DescribeSSLCertificatePrivateKeyResponseBody() {}

  explicit DescribeSSLCertificatePrivateKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptPrivateKey) {
      res["EncryptPrivateKey"] = boost::any(*encryptPrivateKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signPrivateKey) {
      res["SignPrivateKey"] = boost::any(*signPrivateKey);
    }
    if (x509PrivateKey) {
      res["X509PrivateKey"] = boost::any(*x509PrivateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptPrivateKey") != m.end() && !m["EncryptPrivateKey"].empty()) {
      encryptPrivateKey = make_shared<string>(boost::any_cast<string>(m["EncryptPrivateKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignPrivateKey") != m.end() && !m["SignPrivateKey"].empty()) {
      signPrivateKey = make_shared<string>(boost::any_cast<string>(m["SignPrivateKey"]));
    }
    if (m.find("X509PrivateKey") != m.end() && !m["X509PrivateKey"].empty()) {
      x509PrivateKey = make_shared<string>(boost::any_cast<string>(m["X509PrivateKey"]));
    }
  }


  virtual ~DescribeSSLCertificatePrivateKeyResponseBody() = default;
};
class DescribeSSLCertificatePrivateKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSSLCertificatePrivateKeyResponseBody> body{};

  DescribeSSLCertificatePrivateKeyResponse() {}

  explicit DescribeSSLCertificatePrivateKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSSLCertificatePrivateKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSSLCertificatePrivateKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSSLCertificatePrivateKeyResponse() = default;
};
class DescribeSSLCertificatePublicKeyDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};

  DescribeSSLCertificatePublicKeyDetailRequest() {}

  explicit DescribeSSLCertificatePublicKeyDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
  }


  virtual ~DescribeSSLCertificatePublicKeyDetailRequest() = default;
};
class DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> certName{};
  shared_ptr<string> commonName{};
  shared_ptr<string> issuer{};
  shared_ptr<long> keySize{};
  shared_ptr<string> md5{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNo{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};

  DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo() {}

  explicit DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterDate) {
      res["AfterDate"] = boost::any(*afterDate);
    }
    if (algorithm) {
      res["Algorithm"] = boost::any(*algorithm);
    }
    if (beforeDate) {
      res["BeforeDate"] = boost::any(*beforeDate);
    }
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (issuer) {
      res["Issuer"] = boost::any(*issuer);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<long>(boost::any_cast<long>(m["AfterDate"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<long>(boost::any_cast<long>(m["BeforeDate"]));
    }
    if (m.find("CertIdentifier") != m.end() && !m["CertIdentifier"].empty()) {
      certIdentifier = make_shared<string>(boost::any_cast<string>(m["CertIdentifier"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Issuer") != m.end() && !m["Issuer"].empty()) {
      issuer = make_shared<string>(boost::any_cast<string>(m["Issuer"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
  }


  virtual ~DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo() = default;
};
class DescribeSSLCertificatePublicKeyDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo> certificateInfo{};
  shared_ptr<string> encryptCertificate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signCertificate{};
  shared_ptr<string> x509Certificate{};

  DescribeSSLCertificatePublicKeyDetailResponseBody() {}

  explicit DescribeSSLCertificatePublicKeyDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateInfo) {
      res["CertificateInfo"] = certificateInfo ? boost::any(certificateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (encryptCertificate) {
      res["EncryptCertificate"] = boost::any(*encryptCertificate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signCertificate) {
      res["SignCertificate"] = boost::any(*signCertificate);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateInfo") != m.end() && !m["CertificateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["CertificateInfo"].type()) {
        DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CertificateInfo"]));
        certificateInfo = make_shared<DescribeSSLCertificatePublicKeyDetailResponseBodyCertificateInfo>(model1);
      }
    }
    if (m.find("EncryptCertificate") != m.end() && !m["EncryptCertificate"].empty()) {
      encryptCertificate = make_shared<string>(boost::any_cast<string>(m["EncryptCertificate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignCertificate") != m.end() && !m["SignCertificate"].empty()) {
      signCertificate = make_shared<string>(boost::any_cast<string>(m["SignCertificate"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~DescribeSSLCertificatePublicKeyDetailResponseBody() = default;
};
class DescribeSSLCertificatePublicKeyDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSSLCertificatePublicKeyDetailResponseBody> body{};

  DescribeSSLCertificatePublicKeyDetailResponse() {}

  explicit DescribeSSLCertificatePublicKeyDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSSLCertificatePublicKeyDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSSLCertificatePublicKeyDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSSLCertificatePublicKeyDetailResponse() = default;
};
class UploadSSLCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certificate{};
  shared_ptr<string> encryptCertificate{};
  shared_ptr<string> encryptPrivateKey{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> signCertificate{};
  shared_ptr<string> signPrivateKey{};

  UploadSSLCertificateRequest() {}

  explicit UploadSSLCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (encryptCertificate) {
      res["EncryptCertificate"] = boost::any(*encryptCertificate);
    }
    if (encryptPrivateKey) {
      res["EncryptPrivateKey"] = boost::any(*encryptPrivateKey);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (signCertificate) {
      res["SignCertificate"] = boost::any(*signCertificate);
    }
    if (signPrivateKey) {
      res["SignPrivateKey"] = boost::any(*signPrivateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("EncryptCertificate") != m.end() && !m["EncryptCertificate"].empty()) {
      encryptCertificate = make_shared<string>(boost::any_cast<string>(m["EncryptCertificate"]));
    }
    if (m.find("EncryptPrivateKey") != m.end() && !m["EncryptPrivateKey"].empty()) {
      encryptPrivateKey = make_shared<string>(boost::any_cast<string>(m["EncryptPrivateKey"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("SignCertificate") != m.end() && !m["SignCertificate"].empty()) {
      signCertificate = make_shared<string>(boost::any_cast<string>(m["SignCertificate"]));
    }
    if (m.find("SignPrivateKey") != m.end() && !m["SignPrivateKey"].empty()) {
      signPrivateKey = make_shared<string>(boost::any_cast<string>(m["SignPrivateKey"]));
    }
  }


  virtual ~UploadSSLCertificateRequest() = default;
};
class UploadSSLCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certIdentifier{};
  shared_ptr<string> requestId{};

  UploadSSLCertificateResponseBody() {}

  explicit UploadSSLCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certIdentifier) {
      res["CertIdentifier"] = boost::any(*certIdentifier);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UploadSSLCertificateResponseBody() = default;
};
class UploadSSLCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadSSLCertificateResponseBody> body{};

  UploadSSLCertificateResponse() {}

  explicit UploadSSLCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadSSLCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadSSLCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~UploadSSLCertificateResponse() = default;
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
  CreateSSLCertificateResponse createSSLCertificateWithOptions(shared_ptr<CreateSSLCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSSLCertificateResponse createSSLCertificate(shared_ptr<CreateSSLCertificateRequest> request);
  CreateSSLCertificateWithNameResponse createSSLCertificateWithNameWithOptions(shared_ptr<CreateSSLCertificateWithNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSSLCertificateWithNameResponse createSSLCertificateWithName(shared_ptr<CreateSSLCertificateWithNameRequest> request);
  DeleteSSLCertificateResponse deleteSSLCertificateWithOptions(shared_ptr<DeleteSSLCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSSLCertificateResponse deleteSSLCertificate(shared_ptr<DeleteSSLCertificateRequest> request);
  DescribeSSLCertificateCountResponse describeSSLCertificateCountWithOptions(shared_ptr<DescribeSSLCertificateCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSSLCertificateCountResponse describeSSLCertificateCount(shared_ptr<DescribeSSLCertificateCountRequest> request);
  DescribeSSLCertificateListResponse describeSSLCertificateListWithOptions(shared_ptr<DescribeSSLCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSSLCertificateListResponse describeSSLCertificateList(shared_ptr<DescribeSSLCertificateListRequest> request);
  DescribeSSLCertificateMatchDomainListResponse describeSSLCertificateMatchDomainListWithOptions(shared_ptr<DescribeSSLCertificateMatchDomainListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSSLCertificateMatchDomainListResponse describeSSLCertificateMatchDomainList(shared_ptr<DescribeSSLCertificateMatchDomainListRequest> request);
  DescribeSSLCertificatePrivateKeyResponse describeSSLCertificatePrivateKeyWithOptions(shared_ptr<DescribeSSLCertificatePrivateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSSLCertificatePrivateKeyResponse describeSSLCertificatePrivateKey(shared_ptr<DescribeSSLCertificatePrivateKeyRequest> request);
  DescribeSSLCertificatePublicKeyDetailResponse describeSSLCertificatePublicKeyDetailWithOptions(shared_ptr<DescribeSSLCertificatePublicKeyDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSSLCertificatePublicKeyDetailResponse describeSSLCertificatePublicKeyDetail(shared_ptr<DescribeSSLCertificatePublicKeyDetailRequest> request);
  UploadSSLCertificateResponse uploadSSLCertificateWithOptions(shared_ptr<UploadSSLCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadSSLCertificateResponse uploadSSLCertificate(shared_ptr<UploadSSLCertificateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cas20200619

#endif
