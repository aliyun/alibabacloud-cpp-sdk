// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAS20200630_H_
#define ALIBABACLOUD_CAS20200630_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cas20200630 {
class CreateClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> afterTime{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeTime{};
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<long> days{};
  shared_ptr<long> enableCrl{};
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

  CreateClientCertificateRequest() {}

  explicit CreateClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (enableCrl) {
      res["EnableCrl"] = boost::any(*enableCrl);
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
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("EnableCrl") != m.end() && !m["EnableCrl"].empty()) {
      enableCrl = make_shared<long>(boost::any_cast<long>(m["EnableCrl"]));
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


  virtual ~CreateClientCertificateRequest() = default;
};
class CreateClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> x509Certificate{};

  CreateClientCertificateResponseBody() {}

  explicit CreateClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~CreateClientCertificateResponseBody() = default;
};
class CreateClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClientCertificateResponseBody> body{};

  CreateClientCertificateResponse() {}

  explicit CreateClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClientCertificateResponse() = default;
};
class CreateClientCertificateWithCsrRequest : public Darabonba::Model {
public:
  shared_ptr<long> afterTime{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeTime{};
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<string> csr{};
  shared_ptr<long> days{};
  shared_ptr<long> enableCrl{};
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

  CreateClientCertificateWithCsrRequest() {}

  explicit CreateClientCertificateWithCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (enableCrl) {
      res["EnableCrl"] = boost::any(*enableCrl);
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
    if (m.find("EnableCrl") != m.end() && !m["EnableCrl"].empty()) {
      enableCrl = make_shared<long>(boost::any_cast<long>(m["EnableCrl"]));
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


  virtual ~CreateClientCertificateWithCsrRequest() = default;
};
class CreateClientCertificateWithCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> x509Certificate{};

  CreateClientCertificateWithCsrResponseBody() {}

  explicit CreateClientCertificateWithCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~CreateClientCertificateWithCsrResponseBody() = default;
};
class CreateClientCertificateWithCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClientCertificateWithCsrResponseBody> body{};

  CreateClientCertificateWithCsrResponse() {}

  explicit CreateClientCertificateWithCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateClientCertificateWithCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClientCertificateWithCsrResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClientCertificateWithCsrResponse() = default;
};
class CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage : public Darabonba::Model {
public:
  shared_ptr<bool> contentCommitment{};
  shared_ptr<bool> dataEncipherment{};
  shared_ptr<bool> decipherOnly{};
  shared_ptr<bool> digitalSignature{};
  shared_ptr<bool> encipherOnly{};
  shared_ptr<bool> keyAgreement{};
  shared_ptr<bool> keyEncipherment{};
  shared_ptr<bool> nonRepudiation{};

  CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage() {}

  explicit CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentCommitment) {
      res["ContentCommitment"] = boost::any(*contentCommitment);
    }
    if (dataEncipherment) {
      res["DataEncipherment"] = boost::any(*dataEncipherment);
    }
    if (decipherOnly) {
      res["DecipherOnly"] = boost::any(*decipherOnly);
    }
    if (digitalSignature) {
      res["DigitalSignature"] = boost::any(*digitalSignature);
    }
    if (encipherOnly) {
      res["EncipherOnly"] = boost::any(*encipherOnly);
    }
    if (keyAgreement) {
      res["KeyAgreement"] = boost::any(*keyAgreement);
    }
    if (keyEncipherment) {
      res["KeyEncipherment"] = boost::any(*keyEncipherment);
    }
    if (nonRepudiation) {
      res["NonRepudiation"] = boost::any(*nonRepudiation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentCommitment") != m.end() && !m["ContentCommitment"].empty()) {
      contentCommitment = make_shared<bool>(boost::any_cast<bool>(m["ContentCommitment"]));
    }
    if (m.find("DataEncipherment") != m.end() && !m["DataEncipherment"].empty()) {
      dataEncipherment = make_shared<bool>(boost::any_cast<bool>(m["DataEncipherment"]));
    }
    if (m.find("DecipherOnly") != m.end() && !m["DecipherOnly"].empty()) {
      decipherOnly = make_shared<bool>(boost::any_cast<bool>(m["DecipherOnly"]));
    }
    if (m.find("DigitalSignature") != m.end() && !m["DigitalSignature"].empty()) {
      digitalSignature = make_shared<bool>(boost::any_cast<bool>(m["DigitalSignature"]));
    }
    if (m.find("EncipherOnly") != m.end() && !m["EncipherOnly"].empty()) {
      encipherOnly = make_shared<bool>(boost::any_cast<bool>(m["EncipherOnly"]));
    }
    if (m.find("KeyAgreement") != m.end() && !m["KeyAgreement"].empty()) {
      keyAgreement = make_shared<bool>(boost::any_cast<bool>(m["KeyAgreement"]));
    }
    if (m.find("KeyEncipherment") != m.end() && !m["KeyEncipherment"].empty()) {
      keyEncipherment = make_shared<bool>(boost::any_cast<bool>(m["KeyEncipherment"]));
    }
    if (m.find("NonRepudiation") != m.end() && !m["NonRepudiation"].empty()) {
      nonRepudiation = make_shared<bool>(boost::any_cast<bool>(m["NonRepudiation"]));
    }
  }


  virtual ~CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage() = default;
};
class CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames() {}

  explicit CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames() = default;
};
class CreateCustomCertificateRequestApiPassthroughExtensions : public Darabonba::Model {
public:
  shared_ptr<vector<string>> criticals{};
  shared_ptr<vector<string>> extendedKeyUsages{};
  shared_ptr<CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage> keyUsage{};
  shared_ptr<vector<CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames>> subjectAlternativeNames{};

  CreateCustomCertificateRequestApiPassthroughExtensions() {}

  explicit CreateCustomCertificateRequestApiPassthroughExtensions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (criticals) {
      res["Criticals"] = boost::any(*criticals);
    }
    if (extendedKeyUsages) {
      res["ExtendedKeyUsages"] = boost::any(*extendedKeyUsages);
    }
    if (keyUsage) {
      res["KeyUsage"] = keyUsage ? boost::any(keyUsage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (subjectAlternativeNames) {
      vector<boost::any> temp1;
      for(auto item1:*subjectAlternativeNames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubjectAlternativeNames"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Criticals") != m.end() && !m["Criticals"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Criticals"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Criticals"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      criticals = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ExtendedKeyUsages") != m.end() && !m["ExtendedKeyUsages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedKeyUsages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedKeyUsages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedKeyUsages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KeyUsage") != m.end() && !m["KeyUsage"].empty()) {
      if (typeid(map<string, boost::any>) == m["KeyUsage"].type()) {
        CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KeyUsage"]));
        keyUsage = make_shared<CreateCustomCertificateRequestApiPassthroughExtensionsKeyUsage>(model1);
      }
    }
    if (m.find("SubjectAlternativeNames") != m.end() && !m["SubjectAlternativeNames"].empty()) {
      if (typeid(vector<boost::any>) == m["SubjectAlternativeNames"].type()) {
        vector<CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubjectAlternativeNames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subjectAlternativeNames = make_shared<vector<CreateCustomCertificateRequestApiPassthroughExtensionsSubjectAlternativeNames>>(expect1);
      }
    }
  }


  virtual ~CreateCustomCertificateRequestApiPassthroughExtensions() = default;
};
class CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes : public Darabonba::Model {
public:
  shared_ptr<string> objectIdentifier{};
  shared_ptr<string> value{};

  CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes() {}

  explicit CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectIdentifier) {
      res["ObjectIdentifier"] = boost::any(*objectIdentifier);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectIdentifier") != m.end() && !m["ObjectIdentifier"].empty()) {
      objectIdentifier = make_shared<string>(boost::any_cast<string>(m["ObjectIdentifier"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes() = default;
};
class CreateCustomCertificateRequestApiPassthroughSubject : public Darabonba::Model {
public:
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<vector<CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes>> customAttributes{};
  shared_ptr<string> locality{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> state{};

  CreateCustomCertificateRequestApiPassthroughSubject() {}

  explicit CreateCustomCertificateRequestApiPassthroughSubject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (customAttributes) {
      vector<boost::any> temp1;
      for(auto item1:*customAttributes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomAttributes"] = boost::any(temp1);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (organization) {
      res["Organization"] = boost::any(*organization);
    }
    if (organizationUnit) {
      res["OrganizationUnit"] = boost::any(*organizationUnit);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("CustomAttributes") != m.end() && !m["CustomAttributes"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomAttributes"].type()) {
        vector<CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomAttributes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customAttributes = make_shared<vector<CreateCustomCertificateRequestApiPassthroughSubjectCustomAttributes>>(expect1);
      }
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Organization") != m.end() && !m["Organization"].empty()) {
      organization = make_shared<string>(boost::any_cast<string>(m["Organization"]));
    }
    if (m.find("OrganizationUnit") != m.end() && !m["OrganizationUnit"].empty()) {
      organizationUnit = make_shared<string>(boost::any_cast<string>(m["OrganizationUnit"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
  }


  virtual ~CreateCustomCertificateRequestApiPassthroughSubject() = default;
};
class CreateCustomCertificateRequestApiPassthrough : public Darabonba::Model {
public:
  shared_ptr<CreateCustomCertificateRequestApiPassthroughExtensions> extensions{};
  shared_ptr<string> serialNumber{};
  shared_ptr<CreateCustomCertificateRequestApiPassthroughSubject> subject{};

  CreateCustomCertificateRequestApiPassthrough() {}

  explicit CreateCustomCertificateRequestApiPassthrough(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extensions) {
      res["Extensions"] = extensions ? boost::any(extensions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (subject) {
      res["Subject"] = subject ? boost::any(subject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Extensions") != m.end() && !m["Extensions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Extensions"].type()) {
        CreateCustomCertificateRequestApiPassthroughExtensions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Extensions"]));
        extensions = make_shared<CreateCustomCertificateRequestApiPassthroughExtensions>(model1);
      }
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Subject") != m.end() && !m["Subject"].empty()) {
      if (typeid(map<string, boost::any>) == m["Subject"].type()) {
        CreateCustomCertificateRequestApiPassthroughSubject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Subject"]));
        subject = make_shared<CreateCustomCertificateRequestApiPassthroughSubject>(model1);
      }
    }
  }


  virtual ~CreateCustomCertificateRequestApiPassthrough() = default;
};
class CreateCustomCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<CreateCustomCertificateRequestApiPassthrough> apiPassthrough{};
  shared_ptr<string> csr{};
  shared_ptr<long> enableCrl{};
  shared_ptr<long> immediately{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> validity{};

  CreateCustomCertificateRequest() {}

  explicit CreateCustomCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiPassthrough) {
      res["ApiPassthrough"] = apiPassthrough ? boost::any(apiPassthrough->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (csr) {
      res["Csr"] = boost::any(*csr);
    }
    if (enableCrl) {
      res["EnableCrl"] = boost::any(*enableCrl);
    }
    if (immediately) {
      res["Immediately"] = boost::any(*immediately);
    }
    if (parentIdentifier) {
      res["ParentIdentifier"] = boost::any(*parentIdentifier);
    }
    if (validity) {
      res["Validity"] = boost::any(*validity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiPassthrough") != m.end() && !m["ApiPassthrough"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiPassthrough"].type()) {
        CreateCustomCertificateRequestApiPassthrough model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiPassthrough"]));
        apiPassthrough = make_shared<CreateCustomCertificateRequestApiPassthrough>(model1);
      }
    }
    if (m.find("Csr") != m.end() && !m["Csr"].empty()) {
      csr = make_shared<string>(boost::any_cast<string>(m["Csr"]));
    }
    if (m.find("EnableCrl") != m.end() && !m["EnableCrl"].empty()) {
      enableCrl = make_shared<long>(boost::any_cast<long>(m["EnableCrl"]));
    }
    if (m.find("Immediately") != m.end() && !m["Immediately"].empty()) {
      immediately = make_shared<long>(boost::any_cast<long>(m["Immediately"]));
    }
    if (m.find("ParentIdentifier") != m.end() && !m["ParentIdentifier"].empty()) {
      parentIdentifier = make_shared<string>(boost::any_cast<string>(m["ParentIdentifier"]));
    }
    if (m.find("Validity") != m.end() && !m["Validity"].empty()) {
      validity = make_shared<string>(boost::any_cast<string>(m["Validity"]));
    }
  }


  virtual ~CreateCustomCertificateRequest() = default;
};
class CreateCustomCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serialNumber{};

  CreateCustomCertificateResponseBody() {}

  explicit CreateCustomCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~CreateCustomCertificateResponseBody() = default;
};
class CreateCustomCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomCertificateResponseBody> body{};

  CreateCustomCertificateResponse() {}

  explicit CreateCustomCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomCertificateResponse() = default;
};
class CreateRevokeClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  CreateRevokeClientCertificateRequest() {}

  explicit CreateRevokeClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateRevokeClientCertificateRequest() = default;
};
class CreateRevokeClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateRevokeClientCertificateResponseBody() {}

  explicit CreateRevokeClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateRevokeClientCertificateResponseBody() = default;
};
class CreateRevokeClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRevokeClientCertificateResponseBody> body{};

  CreateRevokeClientCertificateResponse() {}

  explicit CreateRevokeClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRevokeClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRevokeClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRevokeClientCertificateResponse() = default;
};
class CreateRootCACertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<string> locality{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> state{};
  shared_ptr<long> years{};

  CreateRootCACertificateRequest() {}

  explicit CreateRootCACertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (organization) {
      res["Organization"] = boost::any(*organization);
    }
    if (organizationUnit) {
      res["OrganizationUnit"] = boost::any(*organizationUnit);
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
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Organization") != m.end() && !m["Organization"].empty()) {
      organization = make_shared<string>(boost::any_cast<string>(m["Organization"]));
    }
    if (m.find("OrganizationUnit") != m.end() && !m["OrganizationUnit"].empty()) {
      organizationUnit = make_shared<string>(boost::any_cast<string>(m["OrganizationUnit"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~CreateRootCACertificateRequest() = default;
};
class CreateRootCACertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};

  CreateRootCACertificateResponseBody() {}

  explicit CreateRootCACertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRootCACertificateResponseBody() = default;
};
class CreateRootCACertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRootCACertificateResponseBody> body{};

  CreateRootCACertificateResponse() {}

  explicit CreateRootCACertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRootCACertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRootCACertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRootCACertificateResponse() = default;
};
class CreateServerCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> afterTime{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeTime{};
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<long> days{};
  shared_ptr<string> domain{};
  shared_ptr<long> enableCrl{};
  shared_ptr<long> immediately{};
  shared_ptr<string> locality{};
  shared_ptr<long> months{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> state{};
  shared_ptr<long> years{};

  CreateServerCertificateRequest() {}

  explicit CreateServerCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enableCrl) {
      res["EnableCrl"] = boost::any(*enableCrl);
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
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnableCrl") != m.end() && !m["EnableCrl"].empty()) {
      enableCrl = make_shared<long>(boost::any_cast<long>(m["EnableCrl"]));
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
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~CreateServerCertificateRequest() = default;
};
class CreateServerCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> x509Certificate{};

  CreateServerCertificateResponseBody() {}

  explicit CreateServerCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~CreateServerCertificateResponseBody() = default;
};
class CreateServerCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServerCertificateResponseBody> body{};

  CreateServerCertificateResponse() {}

  explicit CreateServerCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServerCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServerCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServerCertificateResponse() = default;
};
class CreateServerCertificateWithCsrRequest : public Darabonba::Model {
public:
  shared_ptr<long> afterTime{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeTime{};
  shared_ptr<string> commonName{};
  shared_ptr<string> country{};
  shared_ptr<string> csr{};
  shared_ptr<long> days{};
  shared_ptr<string> domain{};
  shared_ptr<long> enableCrl{};
  shared_ptr<long> immediately{};
  shared_ptr<string> locality{};
  shared_ptr<long> months{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> state{};
  shared_ptr<long> years{};

  CreateServerCertificateWithCsrRequest() {}

  explicit CreateServerCertificateWithCsrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (enableCrl) {
      res["EnableCrl"] = boost::any(*enableCrl);
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
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnableCrl") != m.end() && !m["EnableCrl"].empty()) {
      enableCrl = make_shared<long>(boost::any_cast<long>(m["EnableCrl"]));
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
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~CreateServerCertificateWithCsrRequest() = default;
};
class CreateServerCertificateWithCsrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> x509Certificate{};

  CreateServerCertificateWithCsrResponseBody() {}

  explicit CreateServerCertificateWithCsrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~CreateServerCertificateWithCsrResponseBody() = default;
};
class CreateServerCertificateWithCsrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServerCertificateWithCsrResponseBody> body{};

  CreateServerCertificateWithCsrResponse() {}

  explicit CreateServerCertificateWithCsrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServerCertificateWithCsrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServerCertificateWithCsrResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServerCertificateWithCsrResponse() = default;
};
class CreateSubCACertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> algorithm{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<long> crlDay{};
  shared_ptr<bool> enableCrl{};
  shared_ptr<vector<string>> extendedKeyUsages{};
  shared_ptr<string> locality{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<long> pathLenConstraint{};
  shared_ptr<string> state{};
  shared_ptr<long> years{};

  CreateSubCACertificateRequest() {}

  explicit CreateSubCACertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (crlDay) {
      res["CrlDay"] = boost::any(*crlDay);
    }
    if (enableCrl) {
      res["EnableCrl"] = boost::any(*enableCrl);
    }
    if (extendedKeyUsages) {
      res["ExtendedKeyUsages"] = boost::any(*extendedKeyUsages);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
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
    if (pathLenConstraint) {
      res["PathLenConstraint"] = boost::any(*pathLenConstraint);
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
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("CrlDay") != m.end() && !m["CrlDay"].empty()) {
      crlDay = make_shared<long>(boost::any_cast<long>(m["CrlDay"]));
    }
    if (m.find("EnableCrl") != m.end() && !m["EnableCrl"].empty()) {
      enableCrl = make_shared<bool>(boost::any_cast<bool>(m["EnableCrl"]));
    }
    if (m.find("ExtendedKeyUsages") != m.end() && !m["ExtendedKeyUsages"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ExtendedKeyUsages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ExtendedKeyUsages"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      extendedKeyUsages = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
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
    if (m.find("PathLenConstraint") != m.end() && !m["PathLenConstraint"].empty()) {
      pathLenConstraint = make_shared<long>(boost::any_cast<long>(m["PathLenConstraint"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~CreateSubCACertificateRequest() = default;
};
class CreateSubCACertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificate{};
  shared_ptr<string> certificateChain{};
  shared_ptr<string> identifier{};
  shared_ptr<string> requestId{};

  CreateSubCACertificateResponseBody() {}

  explicit CreateSubCACertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (certificateChain) {
      res["CertificateChain"] = boost::any(*certificateChain);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      certificate = make_shared<string>(boost::any_cast<string>(m["Certificate"]));
    }
    if (m.find("CertificateChain") != m.end() && !m["CertificateChain"].empty()) {
      certificateChain = make_shared<string>(boost::any_cast<string>(m["CertificateChain"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateSubCACertificateResponseBody() = default;
};
class CreateSubCACertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSubCACertificateResponseBody> body{};

  CreateSubCACertificateResponse() {}

  explicit CreateSubCACertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSubCACertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSubCACertificateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSubCACertificateResponse() = default;
};
class DeleteClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DeleteClientCertificateRequest() {}

  explicit DeleteClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClientCertificateRequest() = default;
};
class DeleteClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteClientCertificateResponseBody() {}

  explicit DeleteClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteClientCertificateResponseBody() = default;
};
class DeleteClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteClientCertificateResponseBody> body{};

  DeleteClientCertificateResponse() {}

  explicit DeleteClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteClientCertificateResponse() = default;
};
class DescribeCACertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DescribeCACertificateRequest() {}

  explicit DescribeCACertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeCACertificateRequest() = default;
};
class DescribeCACertificateResponseBodyCertificate : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> caCertChain{};
  shared_ptr<long> certIssuedCount{};
  shared_ptr<long> certRemainingCount{};
  shared_ptr<long> certTotalCount{};
  shared_ptr<string> certificateType{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<long> crlDay{};
  shared_ptr<string> crlStatus{};
  shared_ptr<string> crlUrl{};
  shared_ptr<string> identifier{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> md5{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<string> subjectDN{};
  shared_ptr<string> x509Certificate{};

  DescribeCACertificateResponseBodyCertificate() {}

  explicit DescribeCACertificateResponseBodyCertificate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (caCertChain) {
      res["CaCertChain"] = boost::any(*caCertChain);
    }
    if (certIssuedCount) {
      res["CertIssuedCount"] = boost::any(*certIssuedCount);
    }
    if (certRemainingCount) {
      res["CertRemainingCount"] = boost::any(*certRemainingCount);
    }
    if (certTotalCount) {
      res["CertTotalCount"] = boost::any(*certTotalCount);
    }
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (crlDay) {
      res["CrlDay"] = boost::any(*crlDay);
    }
    if (crlStatus) {
      res["CrlStatus"] = boost::any(*crlStatus);
    }
    if (crlUrl) {
      res["CrlUrl"] = boost::any(*crlUrl);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (sha2) {
      res["Sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subjectDN) {
      res["SubjectDN"] = boost::any(*subjectDN);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
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
    if (m.find("CaCertChain") != m.end() && !m["CaCertChain"].empty()) {
      caCertChain = make_shared<string>(boost::any_cast<string>(m["CaCertChain"]));
    }
    if (m.find("CertIssuedCount") != m.end() && !m["CertIssuedCount"].empty()) {
      certIssuedCount = make_shared<long>(boost::any_cast<long>(m["CertIssuedCount"]));
    }
    if (m.find("CertRemainingCount") != m.end() && !m["CertRemainingCount"].empty()) {
      certRemainingCount = make_shared<long>(boost::any_cast<long>(m["CertRemainingCount"]));
    }
    if (m.find("CertTotalCount") != m.end() && !m["CertTotalCount"].empty()) {
      certTotalCount = make_shared<long>(boost::any_cast<long>(m["CertTotalCount"]));
    }
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("CrlDay") != m.end() && !m["CrlDay"].empty()) {
      crlDay = make_shared<long>(boost::any_cast<long>(m["CrlDay"]));
    }
    if (m.find("CrlStatus") != m.end() && !m["CrlStatus"].empty()) {
      crlStatus = make_shared<string>(boost::any_cast<string>(m["CrlStatus"]));
    }
    if (m.find("CrlUrl") != m.end() && !m["CrlUrl"].empty()) {
      crlUrl = make_shared<string>(boost::any_cast<string>(m["CrlUrl"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Sha2") != m.end() && !m["Sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["Sha2"]));
    }
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubjectDN") != m.end() && !m["SubjectDN"].empty()) {
      subjectDN = make_shared<string>(boost::any_cast<string>(m["SubjectDN"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~DescribeCACertificateResponseBodyCertificate() = default;
};
class DescribeCACertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCACertificateResponseBodyCertificate> certificate{};
  shared_ptr<string> requestId{};
  shared_ptr<long> years{};

  DescribeCACertificateResponseBody() {}

  explicit DescribeCACertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = certificate ? boost::any(certificate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (years) {
      res["Years"] = boost::any(*years);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      if (typeid(map<string, boost::any>) == m["Certificate"].type()) {
        DescribeCACertificateResponseBodyCertificate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Certificate"]));
        certificate = make_shared<DescribeCACertificateResponseBodyCertificate>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~DescribeCACertificateResponseBody() = default;
};
class DescribeCACertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCACertificateResponseBody> body{};

  DescribeCACertificateResponse() {}

  explicit DescribeCACertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCACertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCACertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCACertificateResponse() = default;
};
class DescribeCACertificateCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCACertificateCountResponseBody() {}

  explicit DescribeCACertificateCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeCACertificateCountResponseBody() = default;
};
class DescribeCACertificateCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCACertificateCountResponseBody> body{};

  DescribeCACertificateCountResponse() {}

  explicit DescribeCACertificateCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCACertificateCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCACertificateCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCACertificateCountResponse() = default;
};
class DescribeCACertificateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> identifier{};
  shared_ptr<long> showSize{};

  DescribeCACertificateListRequest() {}

  explicit DescribeCACertificateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
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
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~DescribeCACertificateListRequest() = default;
};
class DescribeCACertificateListResponseBodyCertificateList : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certificateType{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<string> identifier{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> md5{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<string> subjectDN{};
  shared_ptr<string> x509Certificate{};
  shared_ptr<long> years{};

  DescribeCACertificateListResponseBodyCertificateList() {}

  explicit DescribeCACertificateListResponseBodyCertificateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (sha2) {
      res["Sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subjectDN) {
      res["SubjectDN"] = boost::any(*subjectDN);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
    }
    if (years) {
      res["Years"] = boost::any(*years);
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
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Sha2") != m.end() && !m["Sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["Sha2"]));
    }
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubjectDN") != m.end() && !m["SubjectDN"].empty()) {
      subjectDN = make_shared<string>(boost::any_cast<string>(m["SubjectDN"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
    if (m.find("Years") != m.end() && !m["Years"].empty()) {
      years = make_shared<long>(boost::any_cast<long>(m["Years"]));
    }
  }


  virtual ~DescribeCACertificateListResponseBodyCertificateList() = default;
};
class DescribeCACertificateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCACertificateListResponseBodyCertificateList>> certificateList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  DescribeCACertificateListResponseBody() {}

  explicit DescribeCACertificateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateList) {
      vector<boost::any> temp1;
      for(auto item1:*certificateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateList"] = boost::any(temp1);
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
    if (m.find("CertificateList") != m.end() && !m["CertificateList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateList"].type()) {
        vector<DescribeCACertificateListResponseBodyCertificateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCACertificateListResponseBodyCertificateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateList = make_shared<vector<DescribeCACertificateListResponseBodyCertificateList>>(expect1);
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


  virtual ~DescribeCACertificateListResponseBody() = default;
};
class DescribeCACertificateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCACertificateListResponseBody> body{};

  DescribeCACertificateListResponse() {}

  explicit DescribeCACertificateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCACertificateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCACertificateListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCACertificateListResponse() = default;
};
class DescribeCertificatePrivateKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> encryptedCode{};
  shared_ptr<string> identifier{};

  DescribeCertificatePrivateKeyRequest() {}

  explicit DescribeCertificatePrivateKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedCode) {
      res["EncryptedCode"] = boost::any(*encryptedCode);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedCode") != m.end() && !m["EncryptedCode"].empty()) {
      encryptedCode = make_shared<string>(boost::any_cast<string>(m["EncryptedCode"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
  }


  virtual ~DescribeCertificatePrivateKeyRequest() = default;
};
class DescribeCertificatePrivateKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> encryptedData{};
  shared_ptr<string> requestId{};

  DescribeCertificatePrivateKeyResponseBody() {}

  explicit DescribeCertificatePrivateKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encryptedData) {
      res["EncryptedData"] = boost::any(*encryptedData);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EncryptedData") != m.end() && !m["EncryptedData"].empty()) {
      encryptedData = make_shared<string>(boost::any_cast<string>(m["EncryptedData"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCertificatePrivateKeyResponseBody() = default;
};
class DescribeCertificatePrivateKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCertificatePrivateKeyResponseBody> body{};

  DescribeCertificatePrivateKeyResponse() {}

  explicit DescribeCertificatePrivateKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCertificatePrivateKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCertificatePrivateKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCertificatePrivateKeyResponse() = default;
};
class DescribeClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DescribeClientCertificateRequest() {}

  explicit DescribeClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClientCertificateRequest() = default;
};
class DescribeClientCertificateResponseBodyCertificate : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certificateType{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<long> days{};
  shared_ptr<string> identifier{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> md5{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<string> subjectDN{};
  shared_ptr<string> x509Certificate{};

  DescribeClientCertificateResponseBodyCertificate() {}

  explicit DescribeClientCertificateResponseBodyCertificate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (sha2) {
      res["Sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subjectDN) {
      res["SubjectDN"] = boost::any(*subjectDN);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
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
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Sha2") != m.end() && !m["Sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["Sha2"]));
    }
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubjectDN") != m.end() && !m["SubjectDN"].empty()) {
      subjectDN = make_shared<string>(boost::any_cast<string>(m["SubjectDN"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~DescribeClientCertificateResponseBodyCertificate() = default;
};
class DescribeClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeClientCertificateResponseBodyCertificate> certificate{};
  shared_ptr<string> requestId{};

  DescribeClientCertificateResponseBody() {}

  explicit DescribeClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificate) {
      res["Certificate"] = certificate ? boost::any(certificate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      if (typeid(map<string, boost::any>) == m["Certificate"].type()) {
        DescribeClientCertificateResponseBodyCertificate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Certificate"]));
        certificate = make_shared<DescribeClientCertificateResponseBodyCertificate>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClientCertificateResponseBody() = default;
};
class DescribeClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClientCertificateResponseBody> body{};

  DescribeClientCertificateResponse() {}

  explicit DescribeClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClientCertificateResponse() = default;
};
class DescribeClientCertificateStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};

  DescribeClientCertificateStatusRequest() {}

  explicit DescribeClientCertificateStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeClientCertificateStatusRequest() = default;
};
class DescribeClientCertificateStatusResponseBodyCertificateStatus : public Darabonba::Model {
public:
  shared_ptr<long> revokeTime{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> status{};

  DescribeClientCertificateStatusResponseBodyCertificateStatus() {}

  explicit DescribeClientCertificateStatusResponseBodyCertificateStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (revokeTime) {
      res["RevokeTime"] = boost::any(*revokeTime);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RevokeTime") != m.end() && !m["RevokeTime"].empty()) {
      revokeTime = make_shared<long>(boost::any_cast<long>(m["RevokeTime"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeClientCertificateStatusResponseBodyCertificateStatus() = default;
};
class DescribeClientCertificateStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeClientCertificateStatusResponseBodyCertificateStatus>> certificateStatus{};
  shared_ptr<string> requestId{};

  DescribeClientCertificateStatusResponseBody() {}

  explicit DescribeClientCertificateStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateStatus) {
      vector<boost::any> temp1;
      for(auto item1:*certificateStatus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateStatus"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateStatus") != m.end() && !m["CertificateStatus"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateStatus"].type()) {
        vector<DescribeClientCertificateStatusResponseBodyCertificateStatus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateStatus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeClientCertificateStatusResponseBodyCertificateStatus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateStatus = make_shared<vector<DescribeClientCertificateStatusResponseBodyCertificateStatus>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeClientCertificateStatusResponseBody() = default;
};
class DescribeClientCertificateStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeClientCertificateStatusResponseBody> body{};

  DescribeClientCertificateStatusResponse() {}

  explicit DescribeClientCertificateStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeClientCertificateStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeClientCertificateStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeClientCertificateStatusResponse() = default;
};
class GetCAInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> instanceId{};

  GetCAInstanceStatusRequest() {}

  explicit GetCAInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetCAInstanceStatusRequest() = default;
};
class GetCAInstanceStatusResponseBodyInstanceStatusList : public Darabonba::Model {
public:
  shared_ptr<long> afterTime{};
  shared_ptr<long> beforeTime{};
  shared_ptr<long> certIssuedCount{};
  shared_ptr<long> certTotalCount{};
  shared_ptr<string> identifier{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};
  shared_ptr<long> useExpireTime{};

  GetCAInstanceStatusResponseBodyInstanceStatusList() {}

  explicit GetCAInstanceStatusResponseBodyInstanceStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (afterTime) {
      res["AfterTime"] = boost::any(*afterTime);
    }
    if (beforeTime) {
      res["BeforeTime"] = boost::any(*beforeTime);
    }
    if (certIssuedCount) {
      res["CertIssuedCount"] = boost::any(*certIssuedCount);
    }
    if (certTotalCount) {
      res["CertTotalCount"] = boost::any(*certTotalCount);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (useExpireTime) {
      res["UseExpireTime"] = boost::any(*useExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterTime") != m.end() && !m["AfterTime"].empty()) {
      afterTime = make_shared<long>(boost::any_cast<long>(m["AfterTime"]));
    }
    if (m.find("BeforeTime") != m.end() && !m["BeforeTime"].empty()) {
      beforeTime = make_shared<long>(boost::any_cast<long>(m["BeforeTime"]));
    }
    if (m.find("CertIssuedCount") != m.end() && !m["CertIssuedCount"].empty()) {
      certIssuedCount = make_shared<long>(boost::any_cast<long>(m["CertIssuedCount"]));
    }
    if (m.find("CertTotalCount") != m.end() && !m["CertTotalCount"].empty()) {
      certTotalCount = make_shared<long>(boost::any_cast<long>(m["CertTotalCount"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UseExpireTime") != m.end() && !m["UseExpireTime"].empty()) {
      useExpireTime = make_shared<long>(boost::any_cast<long>(m["UseExpireTime"]));
    }
  }


  virtual ~GetCAInstanceStatusResponseBodyInstanceStatusList() = default;
};
class GetCAInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetCAInstanceStatusResponseBodyInstanceStatusList>> instanceStatusList{};
  shared_ptr<string> requestId{};

  GetCAInstanceStatusResponseBody() {}

  explicit GetCAInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStatusList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceStatusList") != m.end() && !m["InstanceStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStatusList"].type()) {
        vector<GetCAInstanceStatusResponseBodyInstanceStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCAInstanceStatusResponseBodyInstanceStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStatusList = make_shared<vector<GetCAInstanceStatusResponseBodyInstanceStatusList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCAInstanceStatusResponseBody() = default;
};
class GetCAInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCAInstanceStatusResponseBody> body{};

  GetCAInstanceStatusResponse() {}

  explicit GetCAInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCAInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCAInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetCAInstanceStatusResponse() = default;
};
class ListClientCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> identifier{};
  shared_ptr<long> showSize{};

  ListClientCertificateRequest() {}

  explicit ListClientCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
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
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~ListClientCertificateRequest() = default;
};
class ListClientCertificateResponseBodyCertificateList : public Darabonba::Model {
public:
  shared_ptr<long> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<long> beforeDate{};
  shared_ptr<string> certificateType{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<long> days{};
  shared_ptr<string> identifier{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> md5{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<string> subjectDN{};
  shared_ptr<string> x509Certificate{};

  ListClientCertificateResponseBodyCertificateList() {}

  explicit ListClientCertificateResponseBodyCertificateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (days) {
      res["Days"] = boost::any(*days);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (sha2) {
      res["Sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subjectDN) {
      res["SubjectDN"] = boost::any(*subjectDN);
    }
    if (x509Certificate) {
      res["X509Certificate"] = boost::any(*x509Certificate);
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
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("Days") != m.end() && !m["Days"].empty()) {
      days = make_shared<long>(boost::any_cast<long>(m["Days"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Sha2") != m.end() && !m["Sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["Sha2"]));
    }
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubjectDN") != m.end() && !m["SubjectDN"].empty()) {
      subjectDN = make_shared<string>(boost::any_cast<string>(m["SubjectDN"]));
    }
    if (m.find("X509Certificate") != m.end() && !m["X509Certificate"].empty()) {
      x509Certificate = make_shared<string>(boost::any_cast<string>(m["X509Certificate"]));
    }
  }


  virtual ~ListClientCertificateResponseBodyCertificateList() = default;
};
class ListClientCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListClientCertificateResponseBodyCertificateList>> certificateList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListClientCertificateResponseBody() {}

  explicit ListClientCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateList) {
      vector<boost::any> temp1;
      for(auto item1:*certificateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateList"] = boost::any(temp1);
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
    if (m.find("CertificateList") != m.end() && !m["CertificateList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateList"].type()) {
        vector<ListClientCertificateResponseBodyCertificateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClientCertificateResponseBodyCertificateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateList = make_shared<vector<ListClientCertificateResponseBodyCertificateList>>(expect1);
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


  virtual ~ListClientCertificateResponseBody() = default;
};
class ListClientCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClientCertificateResponseBody> body{};

  ListClientCertificateResponse() {}

  explicit ListClientCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListClientCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClientCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ListClientCertificateResponse() = default;
};
class ListRevokeCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> showSize{};

  ListRevokeCertificateRequest() {}

  explicit ListRevokeCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (m.find("ShowSize") != m.end() && !m["ShowSize"].empty()) {
      showSize = make_shared<long>(boost::any_cast<long>(m["ShowSize"]));
    }
  }


  virtual ~ListRevokeCertificateRequest() = default;
};
class ListRevokeCertificateResponseBodyCertificateList : public Darabonba::Model {
public:
  shared_ptr<string> afterDate{};
  shared_ptr<string> algorithm{};
  shared_ptr<string> beforeDate{};
  shared_ptr<string> certificateType{};
  shared_ptr<string> commonName{};
  shared_ptr<string> countryCode{};
  shared_ptr<string> identifier{};
  shared_ptr<long> keySize{};
  shared_ptr<string> locality{};
  shared_ptr<string> md5{};
  shared_ptr<string> organization{};
  shared_ptr<string> organizationUnit{};
  shared_ptr<string> parentIdentifier{};
  shared_ptr<string> revokeDate{};
  shared_ptr<string> sans{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> sha2{};
  shared_ptr<string> signAlgorithm{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<string> subjectDN{};

  ListRevokeCertificateResponseBodyCertificateList() {}

  explicit ListRevokeCertificateResponseBodyCertificateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    if (commonName) {
      res["CommonName"] = boost::any(*commonName);
    }
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (keySize) {
      res["KeySize"] = boost::any(*keySize);
    }
    if (locality) {
      res["Locality"] = boost::any(*locality);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
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
    if (revokeDate) {
      res["RevokeDate"] = boost::any(*revokeDate);
    }
    if (sans) {
      res["Sans"] = boost::any(*sans);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (sha2) {
      res["Sha2"] = boost::any(*sha2);
    }
    if (signAlgorithm) {
      res["SignAlgorithm"] = boost::any(*signAlgorithm);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subjectDN) {
      res["SubjectDN"] = boost::any(*subjectDN);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AfterDate") != m.end() && !m["AfterDate"].empty()) {
      afterDate = make_shared<string>(boost::any_cast<string>(m["AfterDate"]));
    }
    if (m.find("Algorithm") != m.end() && !m["Algorithm"].empty()) {
      algorithm = make_shared<string>(boost::any_cast<string>(m["Algorithm"]));
    }
    if (m.find("BeforeDate") != m.end() && !m["BeforeDate"].empty()) {
      beforeDate = make_shared<string>(boost::any_cast<string>(m["BeforeDate"]));
    }
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
    if (m.find("CommonName") != m.end() && !m["CommonName"].empty()) {
      commonName = make_shared<string>(boost::any_cast<string>(m["CommonName"]));
    }
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("KeySize") != m.end() && !m["KeySize"].empty()) {
      keySize = make_shared<long>(boost::any_cast<long>(m["KeySize"]));
    }
    if (m.find("Locality") != m.end() && !m["Locality"].empty()) {
      locality = make_shared<string>(boost::any_cast<string>(m["Locality"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
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
    if (m.find("RevokeDate") != m.end() && !m["RevokeDate"].empty()) {
      revokeDate = make_shared<string>(boost::any_cast<string>(m["RevokeDate"]));
    }
    if (m.find("Sans") != m.end() && !m["Sans"].empty()) {
      sans = make_shared<string>(boost::any_cast<string>(m["Sans"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Sha2") != m.end() && !m["Sha2"].empty()) {
      sha2 = make_shared<string>(boost::any_cast<string>(m["Sha2"]));
    }
    if (m.find("SignAlgorithm") != m.end() && !m["SignAlgorithm"].empty()) {
      signAlgorithm = make_shared<string>(boost::any_cast<string>(m["SignAlgorithm"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubjectDN") != m.end() && !m["SubjectDN"].empty()) {
      subjectDN = make_shared<string>(boost::any_cast<string>(m["SubjectDN"]));
    }
  }


  virtual ~ListRevokeCertificateResponseBodyCertificateList() = default;
};
class ListRevokeCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListRevokeCertificateResponseBodyCertificateList>> certificateList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> showSize{};
  shared_ptr<long> totalCount{};

  ListRevokeCertificateResponseBody() {}

  explicit ListRevokeCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateList) {
      vector<boost::any> temp1;
      for(auto item1:*certificateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CertificateList"] = boost::any(temp1);
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
    if (m.find("CertificateList") != m.end() && !m["CertificateList"].empty()) {
      if (typeid(vector<boost::any>) == m["CertificateList"].type()) {
        vector<ListRevokeCertificateResponseBodyCertificateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CertificateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListRevokeCertificateResponseBodyCertificateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        certificateList = make_shared<vector<ListRevokeCertificateResponseBodyCertificateList>>(expect1);
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


  virtual ~ListRevokeCertificateResponseBody() = default;
};
class ListRevokeCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRevokeCertificateResponseBody> body{};

  ListRevokeCertificateResponse() {}

  explicit ListRevokeCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRevokeCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRevokeCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ListRevokeCertificateResponse() = default;
};
class UpdateCACertificateStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> status{};

  UpdateCACertificateStatusRequest() {}

  explicit UpdateCACertificateStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["Identifier"] = boost::any(*identifier);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Identifier") != m.end() && !m["Identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["Identifier"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateCACertificateStatusRequest() = default;
};
class UpdateCACertificateStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCACertificateStatusResponseBody() {}

  explicit UpdateCACertificateStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCACertificateStatusResponseBody() = default;
};
class UpdateCACertificateStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCACertificateStatusResponseBody> body{};

  UpdateCACertificateStatusResponse() {}

  explicit UpdateCACertificateStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCACertificateStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCACertificateStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCACertificateStatusResponse() = default;
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
  CreateClientCertificateResponse createClientCertificateWithOptions(shared_ptr<CreateClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClientCertificateResponse createClientCertificate(shared_ptr<CreateClientCertificateRequest> request);
  CreateClientCertificateWithCsrResponse createClientCertificateWithCsrWithOptions(shared_ptr<CreateClientCertificateWithCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClientCertificateWithCsrResponse createClientCertificateWithCsr(shared_ptr<CreateClientCertificateWithCsrRequest> request);
  CreateCustomCertificateResponse createCustomCertificateWithOptions(shared_ptr<CreateCustomCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomCertificateResponse createCustomCertificate(shared_ptr<CreateCustomCertificateRequest> request);
  CreateRevokeClientCertificateResponse createRevokeClientCertificateWithOptions(shared_ptr<CreateRevokeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRevokeClientCertificateResponse createRevokeClientCertificate(shared_ptr<CreateRevokeClientCertificateRequest> request);
  CreateRootCACertificateResponse createRootCACertificateWithOptions(shared_ptr<CreateRootCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRootCACertificateResponse createRootCACertificate(shared_ptr<CreateRootCACertificateRequest> request);
  CreateServerCertificateResponse createServerCertificateWithOptions(shared_ptr<CreateServerCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServerCertificateResponse createServerCertificate(shared_ptr<CreateServerCertificateRequest> request);
  CreateServerCertificateWithCsrResponse createServerCertificateWithCsrWithOptions(shared_ptr<CreateServerCertificateWithCsrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServerCertificateWithCsrResponse createServerCertificateWithCsr(shared_ptr<CreateServerCertificateWithCsrRequest> request);
  CreateSubCACertificateResponse createSubCACertificateWithOptions(shared_ptr<CreateSubCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSubCACertificateResponse createSubCACertificate(shared_ptr<CreateSubCACertificateRequest> request);
  DeleteClientCertificateResponse deleteClientCertificateWithOptions(shared_ptr<DeleteClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteClientCertificateResponse deleteClientCertificate(shared_ptr<DeleteClientCertificateRequest> request);
  DescribeCACertificateResponse describeCACertificateWithOptions(shared_ptr<DescribeCACertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCACertificateResponse describeCACertificate(shared_ptr<DescribeCACertificateRequest> request);
  DescribeCACertificateCountResponse describeCACertificateCountWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCACertificateCountResponse describeCACertificateCount();
  DescribeCACertificateListResponse describeCACertificateListWithOptions(shared_ptr<DescribeCACertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCACertificateListResponse describeCACertificateList(shared_ptr<DescribeCACertificateListRequest> request);
  DescribeCertificatePrivateKeyResponse describeCertificatePrivateKeyWithOptions(shared_ptr<DescribeCertificatePrivateKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCertificatePrivateKeyResponse describeCertificatePrivateKey(shared_ptr<DescribeCertificatePrivateKeyRequest> request);
  DescribeClientCertificateResponse describeClientCertificateWithOptions(shared_ptr<DescribeClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClientCertificateResponse describeClientCertificate(shared_ptr<DescribeClientCertificateRequest> request);
  DescribeClientCertificateStatusResponse describeClientCertificateStatusWithOptions(shared_ptr<DescribeClientCertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeClientCertificateStatusResponse describeClientCertificateStatus(shared_ptr<DescribeClientCertificateStatusRequest> request);
  GetCAInstanceStatusResponse getCAInstanceStatusWithOptions(shared_ptr<GetCAInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCAInstanceStatusResponse getCAInstanceStatus(shared_ptr<GetCAInstanceStatusRequest> request);
  ListClientCertificateResponse listClientCertificateWithOptions(shared_ptr<ListClientCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClientCertificateResponse listClientCertificate(shared_ptr<ListClientCertificateRequest> request);
  ListRevokeCertificateResponse listRevokeCertificateWithOptions(shared_ptr<ListRevokeCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRevokeCertificateResponse listRevokeCertificate(shared_ptr<ListRevokeCertificateRequest> request);
  UpdateCACertificateStatusResponse updateCACertificateStatusWithOptions(shared_ptr<UpdateCACertificateStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCACertificateStatusResponse updateCACertificateStatus(shared_ptr<UpdateCACertificateStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cas20200630

#endif
