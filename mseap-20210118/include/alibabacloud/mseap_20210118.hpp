// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MSEAP20210118_H_
#define ALIBABACLOUD_MSEAP20210118_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Mseap20210118 {
class ActivateLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> licensePublisher{};
  shared_ptr<string> licenseCode{};

  ActivateLicenseRequest() {}

  explicit ActivateLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (licensePublisher) {
      res["LicensePublisher"] = boost::any(*licensePublisher);
    }
    if (licenseCode) {
      res["LicenseCode"] = boost::any(*licenseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("LicensePublisher") != m.end() && !m["LicensePublisher"].empty()) {
      licensePublisher = make_shared<string>(boost::any_cast<string>(m["LicensePublisher"]));
    }
    if (m.find("LicenseCode") != m.end() && !m["LicenseCode"].empty()) {
      licenseCode = make_shared<string>(boost::any_cast<string>(m["LicenseCode"]));
    }
  }


  virtual ~ActivateLicenseRequest() = default;
};
class ActivateLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> data{};

  ActivateLicenseResponseBody() {}

  explicit ActivateLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
  }


  virtual ~ActivateLicenseResponseBody() = default;
};
class ActivateLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActivateLicenseResponseBody> body{};

  ActivateLicenseResponse() {}

  explicit ActivateLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateLicenseResponse() = default;
};
class BusinessLicenseOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> bizCode{};
  shared_ptr<string> fileInfo{};
  shared_ptr<string> fileStoreType{};

  BusinessLicenseOcrRequest() {}

  explicit BusinessLicenseOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (fileInfo) {
      res["FileInfo"] = boost::any(*fileInfo);
    }
    if (fileStoreType) {
      res["FileStoreType"] = boost::any(*fileStoreType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("FileInfo") != m.end() && !m["FileInfo"].empty()) {
      fileInfo = make_shared<string>(boost::any_cast<string>(m["FileInfo"]));
    }
    if (m.find("FileStoreType") != m.end() && !m["FileStoreType"].empty()) {
      fileStoreType = make_shared<string>(boost::any_cast<string>(m["FileStoreType"]));
    }
  }


  virtual ~BusinessLicenseOcrRequest() = default;
};
class BusinessLicenseOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> registerNumber{};
  shared_ptr<string> type{};
  shared_ptr<string> validPeriod{};
  shared_ptr<string> requestId{};
  shared_ptr<string> address{};
  shared_ptr<string> capital{};
  shared_ptr<string> legalPerson{};
  shared_ptr<string> establishDate{};
  shared_ptr<string> nationality{};
  shared_ptr<string> name{};
  shared_ptr<string> business{};
  shared_ptr<string> trackId{};

  BusinessLicenseOcrResponseBody() {}

  explicit BusinessLicenseOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registerNumber) {
      res["RegisterNumber"] = boost::any(*registerNumber);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (validPeriod) {
      res["ValidPeriod"] = boost::any(*validPeriod);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (capital) {
      res["Capital"] = boost::any(*capital);
    }
    if (legalPerson) {
      res["LegalPerson"] = boost::any(*legalPerson);
    }
    if (establishDate) {
      res["EstablishDate"] = boost::any(*establishDate);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (trackId) {
      res["TrackId"] = boost::any(*trackId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegisterNumber") != m.end() && !m["RegisterNumber"].empty()) {
      registerNumber = make_shared<string>(boost::any_cast<string>(m["RegisterNumber"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ValidPeriod") != m.end() && !m["ValidPeriod"].empty()) {
      validPeriod = make_shared<string>(boost::any_cast<string>(m["ValidPeriod"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Capital") != m.end() && !m["Capital"].empty()) {
      capital = make_shared<string>(boost::any_cast<string>(m["Capital"]));
    }
    if (m.find("LegalPerson") != m.end() && !m["LegalPerson"].empty()) {
      legalPerson = make_shared<string>(boost::any_cast<string>(m["LegalPerson"]));
    }
    if (m.find("EstablishDate") != m.end() && !m["EstablishDate"].empty()) {
      establishDate = make_shared<string>(boost::any_cast<string>(m["EstablishDate"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("TrackId") != m.end() && !m["TrackId"].empty()) {
      trackId = make_shared<string>(boost::any_cast<string>(m["TrackId"]));
    }
  }


  virtual ~BusinessLicenseOcrResponseBody() = default;
};
class BusinessLicenseOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BusinessLicenseOcrResponseBody> body{};

  BusinessLicenseOcrResponse() {}

  explicit BusinessLicenseOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BusinessLicenseOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BusinessLicenseOcrResponseBody>(model1);
      }
    }
  }


  virtual ~BusinessLicenseOcrResponse() = default;
};
class CertificateQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> bizCode{};
  shared_ptr<string> fileInfo{};
  shared_ptr<string> fileStoreType{};
  shared_ptr<string> certificateType{};

  CertificateQualityRequest() {}

  explicit CertificateQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (fileInfo) {
      res["FileInfo"] = boost::any(*fileInfo);
    }
    if (fileStoreType) {
      res["FileStoreType"] = boost::any(*fileStoreType);
    }
    if (certificateType) {
      res["CertificateType"] = boost::any(*certificateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("FileInfo") != m.end() && !m["FileInfo"].empty()) {
      fileInfo = make_shared<string>(boost::any_cast<string>(m["FileInfo"]));
    }
    if (m.find("FileStoreType") != m.end() && !m["FileStoreType"].empty()) {
      fileStoreType = make_shared<string>(boost::any_cast<string>(m["FileStoreType"]));
    }
    if (m.find("CertificateType") != m.end() && !m["CertificateType"].empty()) {
      certificateType = make_shared<string>(boost::any_cast<string>(m["CertificateType"]));
    }
  }


  virtual ~CertificateQualityRequest() = default;
};
class CertificateQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> containSeal{};
  shared_ptr<string> containWatermark{};
  shared_ptr<string> requestId{};
  shared_ptr<string> copy{};
  shared_ptr<string> complete{};
  shared_ptr<string> nationalEmblem{};
  shared_ptr<string> targetType{};
  shared_ptr<string> reflection{};
  shared_ptr<string> electronic{};
  shared_ptr<string> containFront{};
  shared_ptr<string> textClarity{};

  CertificateQualityResponseBody() {}

  explicit CertificateQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containSeal) {
      res["ContainSeal"] = boost::any(*containSeal);
    }
    if (containWatermark) {
      res["ContainWatermark"] = boost::any(*containWatermark);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (copy) {
      res["Copy"] = boost::any(*copy);
    }
    if (complete) {
      res["Complete"] = boost::any(*complete);
    }
    if (nationalEmblem) {
      res["NationalEmblem"] = boost::any(*nationalEmblem);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (reflection) {
      res["Reflection"] = boost::any(*reflection);
    }
    if (electronic) {
      res["Electronic"] = boost::any(*electronic);
    }
    if (containFront) {
      res["ContainFront"] = boost::any(*containFront);
    }
    if (textClarity) {
      res["TextClarity"] = boost::any(*textClarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainSeal") != m.end() && !m["ContainSeal"].empty()) {
      containSeal = make_shared<string>(boost::any_cast<string>(m["ContainSeal"]));
    }
    if (m.find("ContainWatermark") != m.end() && !m["ContainWatermark"].empty()) {
      containWatermark = make_shared<string>(boost::any_cast<string>(m["ContainWatermark"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Copy") != m.end() && !m["Copy"].empty()) {
      copy = make_shared<string>(boost::any_cast<string>(m["Copy"]));
    }
    if (m.find("Complete") != m.end() && !m["Complete"].empty()) {
      complete = make_shared<string>(boost::any_cast<string>(m["Complete"]));
    }
    if (m.find("NationalEmblem") != m.end() && !m["NationalEmblem"].empty()) {
      nationalEmblem = make_shared<string>(boost::any_cast<string>(m["NationalEmblem"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("Reflection") != m.end() && !m["Reflection"].empty()) {
      reflection = make_shared<string>(boost::any_cast<string>(m["Reflection"]));
    }
    if (m.find("Electronic") != m.end() && !m["Electronic"].empty()) {
      electronic = make_shared<string>(boost::any_cast<string>(m["Electronic"]));
    }
    if (m.find("ContainFront") != m.end() && !m["ContainFront"].empty()) {
      containFront = make_shared<string>(boost::any_cast<string>(m["ContainFront"]));
    }
    if (m.find("TextClarity") != m.end() && !m["TextClarity"].empty()) {
      textClarity = make_shared<string>(boost::any_cast<string>(m["TextClarity"]));
    }
  }


  virtual ~CertificateQualityResponseBody() = default;
};
class CertificateQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CertificateQualityResponseBody> body{};

  CertificateQualityResponse() {}

  explicit CertificateQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CertificateQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CertificateQualityResponseBody>(model1);
      }
    }
  }


  virtual ~CertificateQualityResponse() = default;
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
  shared_ptr<long> status{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};
  shared_ptr<string> agreementCode{};

  DescribeAgreementStatusResponseBody() {}

  explicit DescribeAgreementStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (agreementCode) {
      res["AgreementCode"] = boost::any(*agreementCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("AgreementCode") != m.end() && !m["AgreementCode"].empty()) {
      agreementCode = make_shared<string>(boost::any_cast<string>(m["AgreementCode"]));
    }
  }


  virtual ~DescribeAgreementStatusResponseBody() = default;
};
class DescribeAgreementStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAgreementStatusResponseBody> body{};

  DescribeAgreementStatusResponse() {}

  explicit DescribeAgreementStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAgreementStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAgreementStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAgreementStatusResponse() = default;
};
class IdentityCardOcrRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> bizCode{};
  shared_ptr<string> fileInfo{};
  shared_ptr<string> fileStoreType{};

  IdentityCardOcrRequest() {}

  explicit IdentityCardOcrRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizCode) {
      res["BizCode"] = boost::any(*bizCode);
    }
    if (fileInfo) {
      res["FileInfo"] = boost::any(*fileInfo);
    }
    if (fileStoreType) {
      res["FileStoreType"] = boost::any(*fileStoreType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizCode") != m.end() && !m["BizCode"].empty()) {
      bizCode = make_shared<string>(boost::any_cast<string>(m["BizCode"]));
    }
    if (m.find("FileInfo") != m.end() && !m["FileInfo"].empty()) {
      fileInfo = make_shared<string>(boost::any_cast<string>(m["FileInfo"]));
    }
    if (m.find("FileStoreType") != m.end() && !m["FileStoreType"].empty()) {
      fileStoreType = make_shared<string>(boost::any_cast<string>(m["FileStoreType"]));
    }
  }


  virtual ~IdentityCardOcrRequest() = default;
};
class IdentityCardOcrResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> issue{};
  shared_ptr<string> validDate{};
  shared_ptr<string> requestId{};
  shared_ptr<string> address{};
  shared_ptr<string> idNumber{};
  shared_ptr<string> gender{};
  shared_ptr<string> nationality{};
  shared_ptr<string> birthDate{};
  shared_ptr<string> trackId{};
  shared_ptr<string> name{};

  IdentityCardOcrResponseBody() {}

  explicit IdentityCardOcrResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issue) {
      res["Issue"] = boost::any(*issue);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (idNumber) {
      res["IdNumber"] = boost::any(*idNumber);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (trackId) {
      res["TrackId"] = boost::any(*trackId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Issue") != m.end() && !m["Issue"].empty()) {
      issue = make_shared<string>(boost::any_cast<string>(m["Issue"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<string>(boost::any_cast<string>(m["ValidDate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("IdNumber") != m.end() && !m["IdNumber"].empty()) {
      idNumber = make_shared<string>(boost::any_cast<string>(m["IdNumber"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("TrackId") != m.end() && !m["TrackId"].empty()) {
      trackId = make_shared<string>(boost::any_cast<string>(m["TrackId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~IdentityCardOcrResponseBody() = default;
};
class IdentityCardOcrResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IdentityCardOcrResponseBody> body{};

  IdentityCardOcrResponse() {}

  explicit IdentityCardOcrResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IdentityCardOcrResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IdentityCardOcrResponseBody>(model1);
      }
    }
  }


  virtual ~IdentityCardOcrResponse() = default;
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
  shared_ptr<UpdateAgreementStatusResponseBody> body{};

  UpdateAgreementStatusResponse() {}

  explicit UpdateAgreementStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  BusinessLicenseOcrResponse businessLicenseOcrWithOptions(shared_ptr<BusinessLicenseOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BusinessLicenseOcrResponse businessLicenseOcr(shared_ptr<BusinessLicenseOcrRequest> request);
  CertificateQualityResponse certificateQualityWithOptions(shared_ptr<CertificateQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CertificateQualityResponse certificateQuality(shared_ptr<CertificateQualityRequest> request);
  DescribeAgreementStatusResponse describeAgreementStatusWithOptions(shared_ptr<DescribeAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAgreementStatusResponse describeAgreementStatus(shared_ptr<DescribeAgreementStatusRequest> request);
  IdentityCardOcrResponse identityCardOcrWithOptions(shared_ptr<IdentityCardOcrRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IdentityCardOcrResponse identityCardOcr(shared_ptr<IdentityCardOcrRequest> request);
  UpdateAgreementStatusResponse updateAgreementStatusWithOptions(shared_ptr<UpdateAgreementStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAgreementStatusResponse updateAgreementStatus(shared_ptr<UpdateAgreementStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mseap20210118

#endif
