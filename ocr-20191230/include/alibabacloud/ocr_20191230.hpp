// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OCR20191230_H_
#define ALIBABACLOUD_OCR20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ocr20191230 {
class RecognizeDrivingLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeDrivingLicenseRequest() {}

  explicit RecognizeDrivingLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDrivingLicenseRequest() = default;
};
class RecognizeDrivingLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeDrivingLicenseAdvanceRequest() {}

  explicit RecognizeDrivingLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDrivingLicenseAdvanceRequest() = default;
};
class RecognizeDrivingLicenseResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> overallDimension{};
  shared_ptr<string> inspectionRecord{};
  shared_ptr<string> unladenMass{};
  shared_ptr<string> fileNumber{};
  shared_ptr<string> tractionMass{};
  shared_ptr<string> grossMass{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> approvedPassengerCapacity{};
  shared_ptr<string> energyType{};
  shared_ptr<string> approvedLoad{};

  RecognizeDrivingLicenseResponseBodyDataBackResult() {}

  explicit RecognizeDrivingLicenseResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (overallDimension) {
      res["OverallDimension"] = boost::any(*overallDimension);
    }
    if (inspectionRecord) {
      res["InspectionRecord"] = boost::any(*inspectionRecord);
    }
    if (unladenMass) {
      res["UnladenMass"] = boost::any(*unladenMass);
    }
    if (fileNumber) {
      res["FileNumber"] = boost::any(*fileNumber);
    }
    if (tractionMass) {
      res["TractionMass"] = boost::any(*tractionMass);
    }
    if (grossMass) {
      res["GrossMass"] = boost::any(*grossMass);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (approvedPassengerCapacity) {
      res["ApprovedPassengerCapacity"] = boost::any(*approvedPassengerCapacity);
    }
    if (energyType) {
      res["EnergyType"] = boost::any(*energyType);
    }
    if (approvedLoad) {
      res["ApprovedLoad"] = boost::any(*approvedLoad);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OverallDimension") != m.end() && !m["OverallDimension"].empty()) {
      overallDimension = make_shared<string>(boost::any_cast<string>(m["OverallDimension"]));
    }
    if (m.find("InspectionRecord") != m.end() && !m["InspectionRecord"].empty()) {
      inspectionRecord = make_shared<string>(boost::any_cast<string>(m["InspectionRecord"]));
    }
    if (m.find("UnladenMass") != m.end() && !m["UnladenMass"].empty()) {
      unladenMass = make_shared<string>(boost::any_cast<string>(m["UnladenMass"]));
    }
    if (m.find("FileNumber") != m.end() && !m["FileNumber"].empty()) {
      fileNumber = make_shared<string>(boost::any_cast<string>(m["FileNumber"]));
    }
    if (m.find("TractionMass") != m.end() && !m["TractionMass"].empty()) {
      tractionMass = make_shared<string>(boost::any_cast<string>(m["TractionMass"]));
    }
    if (m.find("GrossMass") != m.end() && !m["GrossMass"].empty()) {
      grossMass = make_shared<string>(boost::any_cast<string>(m["GrossMass"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("ApprovedPassengerCapacity") != m.end() && !m["ApprovedPassengerCapacity"].empty()) {
      approvedPassengerCapacity = make_shared<string>(boost::any_cast<string>(m["ApprovedPassengerCapacity"]));
    }
    if (m.find("EnergyType") != m.end() && !m["EnergyType"].empty()) {
      energyType = make_shared<string>(boost::any_cast<string>(m["EnergyType"]));
    }
    if (m.find("ApprovedLoad") != m.end() && !m["ApprovedLoad"].empty()) {
      approvedLoad = make_shared<string>(boost::any_cast<string>(m["ApprovedLoad"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyDataBackResult() = default;
};
class RecognizeDrivingLicenseResponseBodyDataFaceResult : public Darabonba::Model {
public:
  shared_ptr<string> issueDate{};
  shared_ptr<string> model{};
  shared_ptr<string> vehicleType{};
  shared_ptr<string> owner{};
  shared_ptr<string> engineNumber{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> address{};
  shared_ptr<string> useCharacter{};
  shared_ptr<string> vin{};
  shared_ptr<string> registerDate{};

  RecognizeDrivingLicenseResponseBodyDataFaceResult() {}

  explicit RecognizeDrivingLicenseResponseBodyDataFaceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (engineNumber) {
      res["EngineNumber"] = boost::any(*engineNumber);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (useCharacter) {
      res["UseCharacter"] = boost::any(*useCharacter);
    }
    if (vin) {
      res["Vin"] = boost::any(*vin);
    }
    if (registerDate) {
      res["RegisterDate"] = boost::any(*registerDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("EngineNumber") != m.end() && !m["EngineNumber"].empty()) {
      engineNumber = make_shared<string>(boost::any_cast<string>(m["EngineNumber"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("UseCharacter") != m.end() && !m["UseCharacter"].empty()) {
      useCharacter = make_shared<string>(boost::any_cast<string>(m["UseCharacter"]));
    }
    if (m.find("Vin") != m.end() && !m["Vin"].empty()) {
      vin = make_shared<string>(boost::any_cast<string>(m["Vin"]));
    }
    if (m.find("RegisterDate") != m.end() && !m["RegisterDate"].empty()) {
      registerDate = make_shared<string>(boost::any_cast<string>(m["RegisterDate"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyDataFaceResult() = default;
};
class RecognizeDrivingLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeDrivingLicenseResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeDrivingLicenseResponseBodyDataFaceResult> faceResult{};

  RecognizeDrivingLicenseResponseBodyData() {}

  explicit RecognizeDrivingLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceResult) {
      res["FaceResult"] = faceResult ? boost::any(faceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeDrivingLicenseResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeDrivingLicenseResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FaceResult") != m.end() && !m["FaceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceResult"].type()) {
        RecognizeDrivingLicenseResponseBodyDataFaceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceResult"]));
        faceResult = make_shared<RecognizeDrivingLicenseResponseBodyDataFaceResult>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyData() = default;
};
class RecognizeDrivingLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeDrivingLicenseResponseBodyData> data{};

  RecognizeDrivingLicenseResponseBody() {}

  explicit RecognizeDrivingLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeDrivingLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeDrivingLicenseResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBody() = default;
};
class RecognizeDrivingLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeDrivingLicenseResponseBody> body{};

  RecognizeDrivingLicenseResponse() {}

  explicit RecognizeDrivingLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDrivingLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDrivingLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponse() = default;
};
class RecognizeChinapassportRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeChinapassportRequest() {}

  explicit RecognizeChinapassportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeChinapassportRequest() = default;
};
class RecognizeChinapassportAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeChinapassportAdvanceRequest() {}

  explicit RecognizeChinapassportAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeChinapassportAdvanceRequest() = default;
};
class RecognizeChinapassportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> sex{};
  shared_ptr<string> authority{};
  shared_ptr<string> issuePlaceRaw{};
  shared_ptr<bool> success{};
  shared_ptr<string> lineOne{};
  shared_ptr<string> expiryDate{};
  shared_ptr<string> birthPlace{};
  shared_ptr<string> passportNo{};
  shared_ptr<string> birthPlaceRaw{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> sourceCountry{};
  shared_ptr<string> birthDate{};
  shared_ptr<string> nameChineseRaw{};
  shared_ptr<string> issuePlace{};
  shared_ptr<string> nameChinese{};
  shared_ptr<string> lineZero{};
  shared_ptr<string> country{};
  shared_ptr<string> birthDay{};
  shared_ptr<string> expiryDay{};
  shared_ptr<string> name{};
  shared_ptr<string> personId{};

  RecognizeChinapassportResponseBodyData() {}

  explicit RecognizeChinapassportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (issuePlaceRaw) {
      res["IssuePlaceRaw"] = boost::any(*issuePlaceRaw);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (lineOne) {
      res["LineOne"] = boost::any(*lineOne);
    }
    if (expiryDate) {
      res["ExpiryDate"] = boost::any(*expiryDate);
    }
    if (birthPlace) {
      res["BirthPlace"] = boost::any(*birthPlace);
    }
    if (passportNo) {
      res["PassportNo"] = boost::any(*passportNo);
    }
    if (birthPlaceRaw) {
      res["BirthPlaceRaw"] = boost::any(*birthPlaceRaw);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (sourceCountry) {
      res["SourceCountry"] = boost::any(*sourceCountry);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (nameChineseRaw) {
      res["NameChineseRaw"] = boost::any(*nameChineseRaw);
    }
    if (issuePlace) {
      res["IssuePlace"] = boost::any(*issuePlace);
    }
    if (nameChinese) {
      res["NameChinese"] = boost::any(*nameChinese);
    }
    if (lineZero) {
      res["LineZero"] = boost::any(*lineZero);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (birthDay) {
      res["BirthDay"] = boost::any(*birthDay);
    }
    if (expiryDay) {
      res["ExpiryDay"] = boost::any(*expiryDay);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (personId) {
      res["PersonId"] = boost::any(*personId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("IssuePlaceRaw") != m.end() && !m["IssuePlaceRaw"].empty()) {
      issuePlaceRaw = make_shared<string>(boost::any_cast<string>(m["IssuePlaceRaw"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("LineOne") != m.end() && !m["LineOne"].empty()) {
      lineOne = make_shared<string>(boost::any_cast<string>(m["LineOne"]));
    }
    if (m.find("ExpiryDate") != m.end() && !m["ExpiryDate"].empty()) {
      expiryDate = make_shared<string>(boost::any_cast<string>(m["ExpiryDate"]));
    }
    if (m.find("BirthPlace") != m.end() && !m["BirthPlace"].empty()) {
      birthPlace = make_shared<string>(boost::any_cast<string>(m["BirthPlace"]));
    }
    if (m.find("PassportNo") != m.end() && !m["PassportNo"].empty()) {
      passportNo = make_shared<string>(boost::any_cast<string>(m["PassportNo"]));
    }
    if (m.find("BirthPlaceRaw") != m.end() && !m["BirthPlaceRaw"].empty()) {
      birthPlaceRaw = make_shared<string>(boost::any_cast<string>(m["BirthPlaceRaw"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("SourceCountry") != m.end() && !m["SourceCountry"].empty()) {
      sourceCountry = make_shared<string>(boost::any_cast<string>(m["SourceCountry"]));
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("NameChineseRaw") != m.end() && !m["NameChineseRaw"].empty()) {
      nameChineseRaw = make_shared<string>(boost::any_cast<string>(m["NameChineseRaw"]));
    }
    if (m.find("IssuePlace") != m.end() && !m["IssuePlace"].empty()) {
      issuePlace = make_shared<string>(boost::any_cast<string>(m["IssuePlace"]));
    }
    if (m.find("NameChinese") != m.end() && !m["NameChinese"].empty()) {
      nameChinese = make_shared<string>(boost::any_cast<string>(m["NameChinese"]));
    }
    if (m.find("LineZero") != m.end() && !m["LineZero"].empty()) {
      lineZero = make_shared<string>(boost::any_cast<string>(m["LineZero"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("BirthDay") != m.end() && !m["BirthDay"].empty()) {
      birthDay = make_shared<string>(boost::any_cast<string>(m["BirthDay"]));
    }
    if (m.find("ExpiryDay") != m.end() && !m["ExpiryDay"].empty()) {
      expiryDay = make_shared<string>(boost::any_cast<string>(m["ExpiryDay"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PersonId") != m.end() && !m["PersonId"].empty()) {
      personId = make_shared<string>(boost::any_cast<string>(m["PersonId"]));
    }
  }


  virtual ~RecognizeChinapassportResponseBodyData() = default;
};
class RecognizeChinapassportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeChinapassportResponseBodyData> data{};

  RecognizeChinapassportResponseBody() {}

  explicit RecognizeChinapassportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeChinapassportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeChinapassportResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeChinapassportResponseBody() = default;
};
class RecognizeChinapassportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeChinapassportResponseBody> body{};

  RecognizeChinapassportResponse() {}

  explicit RecognizeChinapassportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeChinapassportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeChinapassportResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeChinapassportResponse() = default;
};
class TrimDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileURL{};
  shared_ptr<string> fileType{};
  shared_ptr<string> outputType{};

  TrimDocumentRequest() {}

  explicit TrimDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (outputType) {
      res["OutputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("OutputType") != m.end() && !m["OutputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["OutputType"]));
    }
  }


  virtual ~TrimDocumentRequest() = default;
};
class TrimDocumentAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileURLObject{};
  shared_ptr<string> fileType{};
  shared_ptr<string> outputType{};

  TrimDocumentAdvanceRequest() {}

  explicit TrimDocumentAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!fileURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURLObject) {
      res["FileURLObject"] = boost::any(*fileURLObject);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (outputType) {
      res["OutputType"] = boost::any(*outputType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURLObject") != m.end() && !m["FileURLObject"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURLObject"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("OutputType") != m.end() && !m["OutputType"].empty()) {
      outputType = make_shared<string>(boost::any_cast<string>(m["OutputType"]));
    }
  }


  virtual ~TrimDocumentAdvanceRequest() = default;
};
class TrimDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  TrimDocumentResponseBodyData() {}

  explicit TrimDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~TrimDocumentResponseBodyData() = default;
};
class TrimDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<TrimDocumentResponseBodyData> data{};

  TrimDocumentResponseBody() {}

  explicit TrimDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TrimDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TrimDocumentResponseBodyData>(model1);
      }
    }
  }


  virtual ~TrimDocumentResponseBody() = default;
};
class TrimDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TrimDocumentResponseBody> body{};

  TrimDocumentResponse() {}

  explicit TrimDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TrimDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TrimDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~TrimDocumentResponse() = default;
};
class RecognizeTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> outputFormat{};
  shared_ptr<bool> useFinanceModel{};
  shared_ptr<bool> assureDirection{};
  shared_ptr<bool> hasLine{};
  shared_ptr<bool> skipDetection{};

  RecognizeTableRequest() {}

  explicit RecognizeTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (useFinanceModel) {
      res["UseFinanceModel"] = boost::any(*useFinanceModel);
    }
    if (assureDirection) {
      res["AssureDirection"] = boost::any(*assureDirection);
    }
    if (hasLine) {
      res["HasLine"] = boost::any(*hasLine);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("UseFinanceModel") != m.end() && !m["UseFinanceModel"].empty()) {
      useFinanceModel = make_shared<bool>(boost::any_cast<bool>(m["UseFinanceModel"]));
    }
    if (m.find("AssureDirection") != m.end() && !m["AssureDirection"].empty()) {
      assureDirection = make_shared<bool>(boost::any_cast<bool>(m["AssureDirection"]));
    }
    if (m.find("HasLine") != m.end() && !m["HasLine"].empty()) {
      hasLine = make_shared<bool>(boost::any_cast<bool>(m["HasLine"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
  }


  virtual ~RecognizeTableRequest() = default;
};
class RecognizeTableAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> outputFormat{};
  shared_ptr<bool> useFinanceModel{};
  shared_ptr<bool> assureDirection{};
  shared_ptr<bool> hasLine{};
  shared_ptr<bool> skipDetection{};

  RecognizeTableAdvanceRequest() {}

  explicit RecognizeTableAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (useFinanceModel) {
      res["UseFinanceModel"] = boost::any(*useFinanceModel);
    }
    if (assureDirection) {
      res["AssureDirection"] = boost::any(*assureDirection);
    }
    if (hasLine) {
      res["HasLine"] = boost::any(*hasLine);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("UseFinanceModel") != m.end() && !m["UseFinanceModel"].empty()) {
      useFinanceModel = make_shared<bool>(boost::any_cast<bool>(m["UseFinanceModel"]));
    }
    if (m.find("AssureDirection") != m.end() && !m["AssureDirection"].empty()) {
      assureDirection = make_shared<bool>(boost::any_cast<bool>(m["AssureDirection"]));
    }
    if (m.find("HasLine") != m.end() && !m["HasLine"].empty()) {
      hasLine = make_shared<bool>(boost::any_cast<bool>(m["HasLine"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
  }


  virtual ~RecognizeTableAdvanceRequest() = default;
};
class RecognizeTableResponseBodyDataTablesTableRowsTableColumns : public Darabonba::Model {
public:
  shared_ptr<long> endRow{};
  shared_ptr<long> endColumn{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<vector<string>> texts{};
  shared_ptr<long> startRow{};
  shared_ptr<long> startColumn{};

  RecognizeTableResponseBodyDataTablesTableRowsTableColumns() {}

  explicit RecognizeTableResponseBodyDataTablesTableRowsTableColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endRow) {
      res["EndRow"] = boost::any(*endRow);
    }
    if (endColumn) {
      res["EndColumn"] = boost::any(*endColumn);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (texts) {
      res["Texts"] = boost::any(*texts);
    }
    if (startRow) {
      res["StartRow"] = boost::any(*startRow);
    }
    if (startColumn) {
      res["StartColumn"] = boost::any(*startColumn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndRow") != m.end() && !m["EndRow"].empty()) {
      endRow = make_shared<long>(boost::any_cast<long>(m["EndRow"]));
    }
    if (m.find("EndColumn") != m.end() && !m["EndColumn"].empty()) {
      endColumn = make_shared<long>(boost::any_cast<long>(m["EndColumn"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Texts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      texts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartRow") != m.end() && !m["StartRow"].empty()) {
      startRow = make_shared<long>(boost::any_cast<long>(m["StartRow"]));
    }
    if (m.find("StartColumn") != m.end() && !m["StartColumn"].empty()) {
      startColumn = make_shared<long>(boost::any_cast<long>(m["StartColumn"]));
    }
  }


  virtual ~RecognizeTableResponseBodyDataTablesTableRowsTableColumns() = default;
};
class RecognizeTableResponseBodyDataTablesTableRows : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns>> tableColumns{};

  RecognizeTableResponseBodyDataTablesTableRows() {}

  explicit RecognizeTableResponseBodyDataTablesTableRows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableColumns) {
      vector<boost::any> temp1;
      for(auto item1:*tableColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableColumns"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableColumns") != m.end() && !m["TableColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["TableColumns"].type()) {
        vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTablesTableRowsTableColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableColumns = make_shared<vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyDataTablesTableRows() = default;
};
class RecognizeTableResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> head{};
  shared_ptr<vector<string>> tail{};
  shared_ptr<vector<RecognizeTableResponseBodyDataTablesTableRows>> tableRows{};

  RecognizeTableResponseBodyDataTables() {}

  explicit RecognizeTableResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (head) {
      res["Head"] = boost::any(*head);
    }
    if (tail) {
      res["Tail"] = boost::any(*tail);
    }
    if (tableRows) {
      vector<boost::any> temp1;
      for(auto item1:*tableRows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableRows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Head") != m.end() && !m["Head"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Head"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Head"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      head = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Tail") != m.end() && !m["Tail"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tail"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tail"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tail = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TableRows") != m.end() && !m["TableRows"].empty()) {
      if (typeid(vector<boost::any>) == m["TableRows"].type()) {
        vector<RecognizeTableResponseBodyDataTablesTableRows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableRows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTablesTableRows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableRows = make_shared<vector<RecognizeTableResponseBodyDataTablesTableRows>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyDataTables() = default;
};
class RecognizeTableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileContent{};
  shared_ptr<vector<RecognizeTableResponseBodyDataTables>> tables{};

  RecognizeTableResponseBodyData() {}

  explicit RecognizeTableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContent) {
      res["FileContent"] = boost::any(*fileContent);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContent") != m.end() && !m["FileContent"].empty()) {
      fileContent = make_shared<string>(boost::any_cast<string>(m["FileContent"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<RecognizeTableResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<RecognizeTableResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyData() = default;
};
class RecognizeTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeTableResponseBodyData> data{};

  RecognizeTableResponseBody() {}

  explicit RecognizeTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeTableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTableResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeTableResponseBody() = default;
};
class RecognizeTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeTableResponseBody> body{};

  RecognizeTableResponse() {}

  explicit RecognizeTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTableResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTableResponse() = default;
};
class RecognizeIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeIdentityCardRequest() {}

  explicit RecognizeIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeIdentityCardRequest() = default;
};
class RecognizeIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeIdentityCardAdvanceRequest() {}

  explicit RecognizeIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeIdentityCardAdvanceRequest() = default;
};
class RecognizeIdentityCardResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> issue{};
  shared_ptr<string> startDate{};

  RecognizeIdentityCardResponseBodyDataBackResult() {}

  explicit RecognizeIdentityCardResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (issue) {
      res["Issue"] = boost::any(*issue);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Issue") != m.end() && !m["Issue"].empty()) {
      issue = make_shared<string>(boost::any_cast<string>(m["Issue"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataBackResult() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize : public Darabonba::Model {
public:
  shared_ptr<double> width{};
  shared_ptr<double> height{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter : public Darabonba::Model {
public:
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize> size{};
  shared_ptr<double> angle{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter> center{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (size) {
      res["Size"] = size ? boost::any(size->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (center) {
      res["Center"] = center ? boost::any(center->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      if (typeid(map<string, boost::any>) == m["Size"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Size"]));
        size = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize>(model1);
      }
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Center") != m.end() && !m["Center"].empty()) {
      if (typeid(map<string, boost::any>) == m["Center"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Center"]));
        center = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices : public Darabonba::Model {
public:
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultCardAreas : public Darabonba::Model {
public:
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  RecognizeIdentityCardResponseBodyDataFrontResultCardAreas() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultCardAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultCardAreas() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResult : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle> faceRectangle{};
  shared_ptr<string> birthDate{};
  shared_ptr<string> gender{};
  shared_ptr<string> address{};
  shared_ptr<vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>> faceRectVertices{};
  shared_ptr<vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>> cardAreas{};
  shared_ptr<string> nationality{};
  shared_ptr<string> name{};
  shared_ptr<string> IDNumber{};

  RecognizeIdentityCardResponseBodyDataFrontResult() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRectangle) {
      res["FaceRectangle"] = faceRectangle ? boost::any(faceRectangle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (faceRectVertices) {
      vector<boost::any> temp1;
      for(auto item1:*faceRectVertices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceRectVertices"] = boost::any(temp1);
    }
    if (cardAreas) {
      vector<boost::any> temp1;
      for(auto item1:*cardAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardAreas"] = boost::any(temp1);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (IDNumber) {
      res["IDNumber"] = boost::any(*IDNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRectangle") != m.end() && !m["FaceRectangle"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRectangle"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRectangle"]));
        faceRectangle = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle>(model1);
      }
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("FaceRectVertices") != m.end() && !m["FaceRectVertices"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceRectVertices"].type()) {
        vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceRectVertices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceRectVertices = make_shared<vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>>(expect1);
      }
    }
    if (m.find("CardAreas") != m.end() && !m["CardAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["CardAreas"].type()) {
        vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIdentityCardResponseBodyDataFrontResultCardAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardAreas = make_shared<vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>>(expect1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IDNumber") != m.end() && !m["IDNumber"].empty()) {
      IDNumber = make_shared<string>(boost::any_cast<string>(m["IDNumber"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResult() = default;
};
class RecognizeIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResult> frontResult{};

  RecognizeIdentityCardResponseBodyData() {}

  explicit RecognizeIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (frontResult) {
      res["FrontResult"] = frontResult ? boost::any(frontResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeIdentityCardResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeIdentityCardResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FrontResult") != m.end() && !m["FrontResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FrontResult"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FrontResult"]));
        frontResult = make_shared<RecognizeIdentityCardResponseBodyDataFrontResult>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyData() = default;
};
class RecognizeIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeIdentityCardResponseBodyData> data{};

  RecognizeIdentityCardResponseBody() {}

  explicit RecognizeIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeIdentityCardResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBody() = default;
};
class RecognizeIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeIdentityCardResponseBody> body{};

  RecognizeIdentityCardResponse() {}

  explicit RecognizeIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponse() = default;
};
class RecognizeBusinessLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBusinessLicenseRequest() {}

  explicit RecognizeBusinessLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeBusinessLicenseRequest() = default;
};
class RecognizeBusinessLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBusinessLicenseAdvanceRequest() {}

  explicit RecognizeBusinessLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeBusinessLicenseAdvanceRequest() = default;
};
class RecognizeBusinessLicenseResponseBodyDataStamp : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeBusinessLicenseResponseBodyDataStamp() {}

  explicit RecognizeBusinessLicenseResponseBodyDataStamp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataStamp() = default;
};
class RecognizeBusinessLicenseResponseBodyDataTitle : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeBusinessLicenseResponseBodyDataTitle() {}

  explicit RecognizeBusinessLicenseResponseBodyDataTitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataTitle() = default;
};
class RecognizeBusinessLicenseResponseBodyDataEmblem : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeBusinessLicenseResponseBodyDataEmblem() {}

  explicit RecognizeBusinessLicenseResponseBodyDataEmblem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataEmblem() = default;
};
class RecognizeBusinessLicenseResponseBodyDataQRCode : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeBusinessLicenseResponseBodyDataQRCode() {}

  explicit RecognizeBusinessLicenseResponseBodyDataQRCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataQRCode() = default;
};
class RecognizeBusinessLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataStamp> stamp{};
  shared_ptr<string> establishDate{};
  shared_ptr<string> validPeriod{};
  shared_ptr<string> business{};
  shared_ptr<double> angle{};
  shared_ptr<string> registerNumber{};
  shared_ptr<string> address{};
  shared_ptr<string> capital{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataTitle> title{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataEmblem> emblem{};
  shared_ptr<string> name{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataQRCode> QRCode{};
  shared_ptr<string> legalPerson{};

  RecognizeBusinessLicenseResponseBodyData() {}

  explicit RecognizeBusinessLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (stamp) {
      res["Stamp"] = stamp ? boost::any(stamp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (establishDate) {
      res["EstablishDate"] = boost::any(*establishDate);
    }
    if (validPeriod) {
      res["ValidPeriod"] = boost::any(*validPeriod);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (registerNumber) {
      res["RegisterNumber"] = boost::any(*registerNumber);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (capital) {
      res["Capital"] = boost::any(*capital);
    }
    if (title) {
      res["Title"] = title ? boost::any(title->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (emblem) {
      res["Emblem"] = emblem ? boost::any(emblem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (QRCode) {
      res["QRCode"] = QRCode ? boost::any(QRCode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (legalPerson) {
      res["LegalPerson"] = boost::any(*legalPerson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Stamp") != m.end() && !m["Stamp"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stamp"].type()) {
        RecognizeBusinessLicenseResponseBodyDataStamp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stamp"]));
        stamp = make_shared<RecognizeBusinessLicenseResponseBodyDataStamp>(model1);
      }
    }
    if (m.find("EstablishDate") != m.end() && !m["EstablishDate"].empty()) {
      establishDate = make_shared<string>(boost::any_cast<string>(m["EstablishDate"]));
    }
    if (m.find("ValidPeriod") != m.end() && !m["ValidPeriod"].empty()) {
      validPeriod = make_shared<string>(boost::any_cast<string>(m["ValidPeriod"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("RegisterNumber") != m.end() && !m["RegisterNumber"].empty()) {
      registerNumber = make_shared<string>(boost::any_cast<string>(m["RegisterNumber"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Capital") != m.end() && !m["Capital"].empty()) {
      capital = make_shared<string>(boost::any_cast<string>(m["Capital"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      if (typeid(map<string, boost::any>) == m["Title"].type()) {
        RecognizeBusinessLicenseResponseBodyDataTitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Title"]));
        title = make_shared<RecognizeBusinessLicenseResponseBodyDataTitle>(model1);
      }
    }
    if (m.find("Emblem") != m.end() && !m["Emblem"].empty()) {
      if (typeid(map<string, boost::any>) == m["Emblem"].type()) {
        RecognizeBusinessLicenseResponseBodyDataEmblem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Emblem"]));
        emblem = make_shared<RecognizeBusinessLicenseResponseBodyDataEmblem>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      if (typeid(map<string, boost::any>) == m["QRCode"].type()) {
        RecognizeBusinessLicenseResponseBodyDataQRCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QRCode"]));
        QRCode = make_shared<RecognizeBusinessLicenseResponseBodyDataQRCode>(model1);
      }
    }
    if (m.find("LegalPerson") != m.end() && !m["LegalPerson"].empty()) {
      legalPerson = make_shared<string>(boost::any_cast<string>(m["LegalPerson"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyData() = default;
};
class RecognizeBusinessLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyData> data{};

  RecognizeBusinessLicenseResponseBody() {}

  explicit RecognizeBusinessLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeBusinessLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBusinessLicenseResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBody() = default;
};
class RecognizeBusinessLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeBusinessLicenseResponseBody> body{};

  RecognizeBusinessLicenseResponse() {}

  explicit RecognizeBusinessLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessLicenseResponse() = default;
};
class RecognizeBankCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBankCardRequest() {}

  explicit RecognizeBankCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeBankCardRequest() = default;
};
class RecognizeBankCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBankCardAdvanceRequest() {}

  explicit RecognizeBankCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeBankCardAdvanceRequest() = default;
};
class RecognizeBankCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cardNumber{};
  shared_ptr<string> validDate{};
  shared_ptr<string> bankName{};

  RecognizeBankCardResponseBodyData() {}

  explicit RecognizeBankCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    if (bankName) {
      res["BankName"] = boost::any(*bankName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<string>(boost::any_cast<string>(m["ValidDate"]));
    }
    if (m.find("BankName") != m.end() && !m["BankName"].empty()) {
      bankName = make_shared<string>(boost::any_cast<string>(m["BankName"]));
    }
  }


  virtual ~RecognizeBankCardResponseBodyData() = default;
};
class RecognizeBankCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeBankCardResponseBodyData> data{};

  RecognizeBankCardResponseBody() {}

  explicit RecognizeBankCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeBankCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBankCardResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeBankCardResponseBody() = default;
};
class RecognizeBankCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeBankCardResponseBody> body{};

  RecognizeBankCardResponse() {}

  explicit RecognizeBankCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBankCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBankCardResponse() = default;
};
class RecognizeVerificationcodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVerificationcodeRequest() {}

  explicit RecognizeVerificationcodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeVerificationcodeRequest() = default;
};
class RecognizeVerificationcodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVerificationcodeAdvanceRequest() {}

  explicit RecognizeVerificationcodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeVerificationcodeAdvanceRequest() = default;
};
class RecognizeVerificationcodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  RecognizeVerificationcodeResponseBodyData() {}

  explicit RecognizeVerificationcodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeVerificationcodeResponseBodyData() = default;
};
class RecognizeVerificationcodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVerificationcodeResponseBodyData> data{};

  RecognizeVerificationcodeResponseBody() {}

  explicit RecognizeVerificationcodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeVerificationcodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVerificationcodeResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVerificationcodeResponseBody() = default;
};
class RecognizeVerificationcodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVerificationcodeResponseBody> body{};

  RecognizeVerificationcodeResponse() {}

  explicit RecognizeVerificationcodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVerificationcodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVerificationcodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVerificationcodeResponse() = default;
};
class RecognizeAccountPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeAccountPageRequest() {}

  explicit RecognizeAccountPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeAccountPageRequest() = default;
};
class RecognizeAccountPageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeAccountPageAdvanceRequest() {}

  explicit RecognizeAccountPageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeAccountPageAdvanceRequest() = default;
};
class RecognizeAccountPageResponseBodyDataTitleArea : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeAccountPageResponseBodyDataTitleArea() {}

  explicit RecognizeAccountPageResponseBodyDataTitleArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeAccountPageResponseBodyDataTitleArea() = default;
};
class RecognizeAccountPageResponseBodyDataRegisterStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeAccountPageResponseBodyDataRegisterStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataRegisterStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeAccountPageResponseBodyDataRegisterStampAreas() = default;
};
class RecognizeAccountPageResponseBodyDataOtherStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeAccountPageResponseBodyDataOtherStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataOtherStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeAccountPageResponseBodyDataOtherStampAreas() = default;
};
class RecognizeAccountPageResponseBodyDataUndertakeStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeAccountPageResponseBodyDataUndertakeStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataUndertakeStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeAccountPageResponseBodyDataUndertakeStampAreas() = default;
};
class RecognizeAccountPageResponseBodyDataInvalidStampAreas : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeAccountPageResponseBodyDataInvalidStampAreas() {}

  explicit RecognizeAccountPageResponseBodyDataInvalidStampAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeAccountPageResponseBodyDataInvalidStampAreas() = default;
};
class RecognizeAccountPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gender{};
  shared_ptr<RecognizeAccountPageResponseBodyDataTitleArea> titleArea{};
  shared_ptr<double> angle{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataRegisterStampAreas>> registerStampAreas{};
  shared_ptr<string> nationality{};
  shared_ptr<string> birthPlace{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataOtherStampAreas>> otherStampAreas{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataUndertakeStampAreas>> undertakeStampAreas{};
  shared_ptr<string> birthDate{};
  shared_ptr<string> relation{};
  shared_ptr<string> nativePlace{};
  shared_ptr<string> name{};
  shared_ptr<string> IDNumber{};
  shared_ptr<vector<RecognizeAccountPageResponseBodyDataInvalidStampAreas>> invalidStampAreas{};

  RecognizeAccountPageResponseBodyData() {}

  explicit RecognizeAccountPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (titleArea) {
      res["TitleArea"] = titleArea ? boost::any(titleArea->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (registerStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*registerStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RegisterStampAreas"] = boost::any(temp1);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (birthPlace) {
      res["BirthPlace"] = boost::any(*birthPlace);
    }
    if (otherStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*otherStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OtherStampAreas"] = boost::any(temp1);
    }
    if (undertakeStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*undertakeStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UndertakeStampAreas"] = boost::any(temp1);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (nativePlace) {
      res["NativePlace"] = boost::any(*nativePlace);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (IDNumber) {
      res["IDNumber"] = boost::any(*IDNumber);
    }
    if (invalidStampAreas) {
      vector<boost::any> temp1;
      for(auto item1:*invalidStampAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InvalidStampAreas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("TitleArea") != m.end() && !m["TitleArea"].empty()) {
      if (typeid(map<string, boost::any>) == m["TitleArea"].type()) {
        RecognizeAccountPageResponseBodyDataTitleArea model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TitleArea"]));
        titleArea = make_shared<RecognizeAccountPageResponseBodyDataTitleArea>(model1);
      }
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("RegisterStampAreas") != m.end() && !m["RegisterStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["RegisterStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataRegisterStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RegisterStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataRegisterStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        registerStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataRegisterStampAreas>>(expect1);
      }
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("BirthPlace") != m.end() && !m["BirthPlace"].empty()) {
      birthPlace = make_shared<string>(boost::any_cast<string>(m["BirthPlace"]));
    }
    if (m.find("OtherStampAreas") != m.end() && !m["OtherStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["OtherStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataOtherStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OtherStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataOtherStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        otherStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataOtherStampAreas>>(expect1);
      }
    }
    if (m.find("UndertakeStampAreas") != m.end() && !m["UndertakeStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["UndertakeStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataUndertakeStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UndertakeStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataUndertakeStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        undertakeStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataUndertakeStampAreas>>(expect1);
      }
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("NativePlace") != m.end() && !m["NativePlace"].empty()) {
      nativePlace = make_shared<string>(boost::any_cast<string>(m["NativePlace"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IDNumber") != m.end() && !m["IDNumber"].empty()) {
      IDNumber = make_shared<string>(boost::any_cast<string>(m["IDNumber"]));
    }
    if (m.find("InvalidStampAreas") != m.end() && !m["InvalidStampAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["InvalidStampAreas"].type()) {
        vector<RecognizeAccountPageResponseBodyDataInvalidStampAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InvalidStampAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeAccountPageResponseBodyDataInvalidStampAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invalidStampAreas = make_shared<vector<RecognizeAccountPageResponseBodyDataInvalidStampAreas>>(expect1);
      }
    }
  }


  virtual ~RecognizeAccountPageResponseBodyData() = default;
};
class RecognizeAccountPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeAccountPageResponseBodyData> data{};

  RecognizeAccountPageResponseBody() {}

  explicit RecognizeAccountPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeAccountPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeAccountPageResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeAccountPageResponseBody() = default;
};
class RecognizeAccountPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeAccountPageResponseBody> body{};

  RecognizeAccountPageResponse() {}

  explicit RecognizeAccountPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeAccountPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeAccountPageResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeAccountPageResponse() = default;
};
class RecognizeCharacterRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<long> minHeight{};
  shared_ptr<bool> outputProbability{};

  RecognizeCharacterRequest() {}

  explicit RecognizeCharacterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (outputProbability) {
      res["OutputProbability"] = boost::any(*outputProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("OutputProbability") != m.end() && !m["OutputProbability"].empty()) {
      outputProbability = make_shared<bool>(boost::any_cast<bool>(m["OutputProbability"]));
    }
  }


  virtual ~RecognizeCharacterRequest() = default;
};
class RecognizeCharacterAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> minHeight{};
  shared_ptr<bool> outputProbability{};

  RecognizeCharacterAdvanceRequest() {}

  explicit RecognizeCharacterAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (outputProbability) {
      res["OutputProbability"] = boost::any(*outputProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("OutputProbability") != m.end() && !m["OutputProbability"].empty()) {
      outputProbability = make_shared<bool>(boost::any_cast<bool>(m["OutputProbability"]));
    }
  }


  virtual ~RecognizeCharacterAdvanceRequest() = default;
};
class RecognizeCharacterResponseBodyDataResultsTextRectangles : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> angle{};
  shared_ptr<long> left{};

  RecognizeCharacterResponseBodyDataResultsTextRectangles() {}

  explicit RecognizeCharacterResponseBodyDataResultsTextRectangles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeCharacterResponseBodyDataResultsTextRectangles() = default;
};
class RecognizeCharacterResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<RecognizeCharacterResponseBodyDataResultsTextRectangles> textRectangles{};
  shared_ptr<string> text{};
  shared_ptr<double> probability{};

  RecognizeCharacterResponseBodyDataResults() {}

  explicit RecognizeCharacterResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (textRectangles) {
      res["TextRectangles"] = textRectangles ? boost::any(textRectangles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (probability) {
      res["Probability"] = boost::any(*probability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TextRectangles") != m.end() && !m["TextRectangles"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextRectangles"].type()) {
        RecognizeCharacterResponseBodyDataResultsTextRectangles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextRectangles"]));
        textRectangles = make_shared<RecognizeCharacterResponseBodyDataResultsTextRectangles>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Probability") != m.end() && !m["Probability"].empty()) {
      probability = make_shared<double>(boost::any_cast<double>(m["Probability"]));
    }
  }


  virtual ~RecognizeCharacterResponseBodyDataResults() = default;
};
class RecognizeCharacterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeCharacterResponseBodyDataResults>> results{};

  RecognizeCharacterResponseBodyData() {}

  explicit RecognizeCharacterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeCharacterResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeCharacterResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeCharacterResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeCharacterResponseBodyData() = default;
};
class RecognizeCharacterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeCharacterResponseBodyData> data{};

  RecognizeCharacterResponseBody() {}

  explicit RecognizeCharacterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeCharacterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeCharacterResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeCharacterResponseBody() = default;
};
class RecognizeCharacterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeCharacterResponseBody> body{};

  RecognizeCharacterResponse() {}

  explicit RecognizeCharacterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCharacterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCharacterResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCharacterResponse() = default;
};
class GetAsyncJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAsyncJobResultRequest() {}

  explicit GetAsyncJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultRequest() = default;
};
class GetAsyncJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> result{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> jobId{};

  GetAsyncJobResultResponseBodyData() {}

  explicit GetAsyncJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBodyData() = default;
};
class GetAsyncJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAsyncJobResultResponseBodyData> data{};

  GetAsyncJobResultResponseBody() {}

  explicit GetAsyncJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsyncJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncJobResultResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponseBody() = default;
};
class GetAsyncJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAsyncJobResultResponseBody> body{};

  GetAsyncJobResultResponse() {}

  explicit GetAsyncJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class RecognizeTakeoutOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTakeoutOrderRequest() {}

  explicit RecognizeTakeoutOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTakeoutOrderRequest() = default;
};
class RecognizeTakeoutOrderAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTakeoutOrderAdvanceRequest() {}

  explicit RecognizeTakeoutOrderAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTakeoutOrderAdvanceRequest() = default;
};
class RecognizeTakeoutOrderResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<vector<long>> boxes{};
  shared_ptr<double> score{};
  shared_ptr<string> name{};

  RecognizeTakeoutOrderResponseBodyDataElements() {}

  explicit RecognizeTakeoutOrderResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (boxes) {
      res["Boxes"] = boost::any(*boxes);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Boxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      boxes = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~RecognizeTakeoutOrderResponseBodyDataElements() = default;
};
class RecognizeTakeoutOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTakeoutOrderResponseBodyDataElements>> elements{};

  RecognizeTakeoutOrderResponseBodyData() {}

  explicit RecognizeTakeoutOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeTakeoutOrderResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTakeoutOrderResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeTakeoutOrderResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeTakeoutOrderResponseBodyData() = default;
};
class RecognizeTakeoutOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeTakeoutOrderResponseBodyData> data{};

  RecognizeTakeoutOrderResponseBody() {}

  explicit RecognizeTakeoutOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeTakeoutOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTakeoutOrderResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeTakeoutOrderResponseBody() = default;
};
class RecognizeTakeoutOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeTakeoutOrderResponseBody> body{};

  RecognizeTakeoutOrderResponse() {}

  explicit RecognizeTakeoutOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTakeoutOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTakeoutOrderResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTakeoutOrderResponse() = default;
};
class RecognizeBusinessCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBusinessCardRequest() {}

  explicit RecognizeBusinessCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeBusinessCardRequest() = default;
};
class RecognizeBusinessCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBusinessCardAdvanceRequest() {}

  explicit RecognizeBusinessCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeBusinessCardAdvanceRequest() = default;
};
class RecognizeBusinessCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> companies{};
  shared_ptr<vector<string>> titles{};
  shared_ptr<vector<string>> emails{};
  shared_ptr<vector<string>> departments{};
  shared_ptr<vector<string>> officePhoneNumbers{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> cellPhoneNumbers{};
  shared_ptr<vector<string>> addresses{};

  RecognizeBusinessCardResponseBodyData() {}

  explicit RecognizeBusinessCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (companies) {
      res["Companies"] = boost::any(*companies);
    }
    if (titles) {
      res["Titles"] = boost::any(*titles);
    }
    if (emails) {
      res["Emails"] = boost::any(*emails);
    }
    if (departments) {
      res["Departments"] = boost::any(*departments);
    }
    if (officePhoneNumbers) {
      res["OfficePhoneNumbers"] = boost::any(*officePhoneNumbers);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (cellPhoneNumbers) {
      res["CellPhoneNumbers"] = boost::any(*cellPhoneNumbers);
    }
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Companies") != m.end() && !m["Companies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Companies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Companies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      companies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Titles") != m.end() && !m["Titles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Titles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Titles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      titles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Emails") != m.end() && !m["Emails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Emails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Emails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      emails = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Departments") != m.end() && !m["Departments"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Departments"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Departments"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      departments = make_shared<vector<string>>(toVec1);
    }
    if (m.find("OfficePhoneNumbers") != m.end() && !m["OfficePhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficePhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficePhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officePhoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CellPhoneNumbers") != m.end() && !m["CellPhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CellPhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CellPhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cellPhoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeBusinessCardResponseBodyData() = default;
};
class RecognizeBusinessCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeBusinessCardResponseBodyData> data{};

  RecognizeBusinessCardResponseBody() {}

  explicit RecognizeBusinessCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeBusinessCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBusinessCardResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessCardResponseBody() = default;
};
class RecognizeBusinessCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeBusinessCardResponseBody> body{};

  RecognizeBusinessCardResponse() {}

  explicit RecognizeBusinessCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessCardResponse() = default;
};
class DetectCardScreenshotRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  DetectCardScreenshotRequest() {}

  explicit DetectCardScreenshotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~DetectCardScreenshotRequest() = default;
};
class DetectCardScreenshotAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  DetectCardScreenshotAdvanceRequest() {}

  explicit DetectCardScreenshotAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~DetectCardScreenshotAdvanceRequest() = default;
};
class DetectCardScreenshotResponseBodyDataSpoofResultResultMap : public Darabonba::Model {
public:
  shared_ptr<double> screenThreshold{};
  shared_ptr<double> screenScore{};

  DetectCardScreenshotResponseBodyDataSpoofResultResultMap() {}

  explicit DetectCardScreenshotResponseBodyDataSpoofResultResultMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (screenThreshold) {
      res["ScreenThreshold"] = boost::any(*screenThreshold);
    }
    if (screenScore) {
      res["ScreenScore"] = boost::any(*screenScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScreenThreshold") != m.end() && !m["ScreenThreshold"].empty()) {
      screenThreshold = make_shared<double>(boost::any_cast<double>(m["ScreenThreshold"]));
    }
    if (m.find("ScreenScore") != m.end() && !m["ScreenScore"].empty()) {
      screenScore = make_shared<double>(boost::any_cast<double>(m["ScreenScore"]));
    }
  }


  virtual ~DetectCardScreenshotResponseBodyDataSpoofResultResultMap() = default;
};
class DetectCardScreenshotResponseBodyDataSpoofResult : public Darabonba::Model {
public:
  shared_ptr<bool> isSpoof{};
  shared_ptr<DetectCardScreenshotResponseBodyDataSpoofResultResultMap> resultMap{};

  DetectCardScreenshotResponseBodyDataSpoofResult() {}

  explicit DetectCardScreenshotResponseBodyDataSpoofResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isSpoof) {
      res["IsSpoof"] = boost::any(*isSpoof);
    }
    if (resultMap) {
      res["ResultMap"] = resultMap ? boost::any(resultMap->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsSpoof") != m.end() && !m["IsSpoof"].empty()) {
      isSpoof = make_shared<bool>(boost::any_cast<bool>(m["IsSpoof"]));
    }
    if (m.find("ResultMap") != m.end() && !m["ResultMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultMap"].type()) {
        DetectCardScreenshotResponseBodyDataSpoofResultResultMap model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultMap"]));
        resultMap = make_shared<DetectCardScreenshotResponseBodyDataSpoofResultResultMap>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponseBodyDataSpoofResult() = default;
};
class DetectCardScreenshotResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> isBlur{};
  shared_ptr<bool> isCard{};
  shared_ptr<DetectCardScreenshotResponseBodyDataSpoofResult> spoofResult{};

  DetectCardScreenshotResponseBodyData() {}

  explicit DetectCardScreenshotResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isBlur) {
      res["IsBlur"] = boost::any(*isBlur);
    }
    if (isCard) {
      res["IsCard"] = boost::any(*isCard);
    }
    if (spoofResult) {
      res["SpoofResult"] = spoofResult ? boost::any(spoofResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsBlur") != m.end() && !m["IsBlur"].empty()) {
      isBlur = make_shared<bool>(boost::any_cast<bool>(m["IsBlur"]));
    }
    if (m.find("IsCard") != m.end() && !m["IsCard"].empty()) {
      isCard = make_shared<bool>(boost::any_cast<bool>(m["IsCard"]));
    }
    if (m.find("SpoofResult") != m.end() && !m["SpoofResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpoofResult"].type()) {
        DetectCardScreenshotResponseBodyDataSpoofResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpoofResult"]));
        spoofResult = make_shared<DetectCardScreenshotResponseBodyDataSpoofResult>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponseBodyData() = default;
};
class DetectCardScreenshotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DetectCardScreenshotResponseBodyData> data{};

  DetectCardScreenshotResponseBody() {}

  explicit DetectCardScreenshotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectCardScreenshotResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectCardScreenshotResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponseBody() = default;
};
class DetectCardScreenshotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectCardScreenshotResponseBody> body{};

  DetectCardScreenshotResponse() {}

  explicit DetectCardScreenshotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectCardScreenshotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectCardScreenshotResponseBody>(model1);
      }
    }
  }


  virtual ~DetectCardScreenshotResponse() = default;
};
class RecognizeDriverLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeDriverLicenseRequest() {}

  explicit RecognizeDriverLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDriverLicenseRequest() = default;
};
class RecognizeDriverLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeDriverLicenseAdvanceRequest() {}

  explicit RecognizeDriverLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDriverLicenseAdvanceRequest() = default;
};
class RecognizeDriverLicenseResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> archiveNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> record{};

  RecognizeDriverLicenseResponseBodyDataBackResult() {}

  explicit RecognizeDriverLicenseResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveNumber) {
      res["ArchiveNumber"] = boost::any(*archiveNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (record) {
      res["Record"] = boost::any(*record);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveNumber") != m.end() && !m["ArchiveNumber"].empty()) {
      archiveNumber = make_shared<string>(boost::any_cast<string>(m["ArchiveNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      record = make_shared<string>(boost::any_cast<string>(m["Record"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyDataBackResult() = default;
};
class RecognizeDriverLicenseResponseBodyDataFaceResult : public Darabonba::Model {
public:
  shared_ptr<string> vehicleType{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> gender{};
  shared_ptr<string> address{};
  shared_ptr<string> startDate{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> issueUnit{};

  RecognizeDriverLicenseResponseBodyDataFaceResult() {}

  explicit RecognizeDriverLicenseResponseBodyDataFaceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (issueUnit) {
      res["IssueUnit"] = boost::any(*issueUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IssueUnit") != m.end() && !m["IssueUnit"].empty()) {
      issueUnit = make_shared<string>(boost::any_cast<string>(m["IssueUnit"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyDataFaceResult() = default;
};
class RecognizeDriverLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeDriverLicenseResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeDriverLicenseResponseBodyDataFaceResult> faceResult{};

  RecognizeDriverLicenseResponseBodyData() {}

  explicit RecognizeDriverLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceResult) {
      res["FaceResult"] = faceResult ? boost::any(faceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeDriverLicenseResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeDriverLicenseResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FaceResult") != m.end() && !m["FaceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceResult"].type()) {
        RecognizeDriverLicenseResponseBodyDataFaceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceResult"]));
        faceResult = make_shared<RecognizeDriverLicenseResponseBodyDataFaceResult>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyData() = default;
};
class RecognizeDriverLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeDriverLicenseResponseBodyData> data{};

  RecognizeDriverLicenseResponseBody() {}

  explicit RecognizeDriverLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeDriverLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeDriverLicenseResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponseBody() = default;
};
class RecognizeDriverLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeDriverLicenseResponseBody> body{};

  RecognizeDriverLicenseResponse() {}

  explicit RecognizeDriverLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDriverLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDriverLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponse() = default;
};
class RecognizeLicensePlateRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeLicensePlateRequest() {}

  explicit RecognizeLicensePlateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeLicensePlateRequest() = default;
};
class RecognizeLicensePlateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeLicensePlateAdvanceRequest() {}

  explicit RecognizeLicensePlateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeLicensePlateAdvanceRequest() = default;
};
class RecognizeLicensePlateResponseBodyDataPlatesRoi : public Darabonba::Model {
public:
  shared_ptr<long> w{};
  shared_ptr<long> h{};
  shared_ptr<long> y{};
  shared_ptr<long> x{};

  RecognizeLicensePlateResponseBodyDataPlatesRoi() {}

  explicit RecognizeLicensePlateResponseBodyDataPlatesRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<long>(boost::any_cast<long>(m["W"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<long>(boost::any_cast<long>(m["H"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlatesRoi() = default;
};
class RecognizeLicensePlateResponseBodyDataPlatesPositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeLicensePlateResponseBodyDataPlatesPositions() {}

  explicit RecognizeLicensePlateResponseBodyDataPlatesPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlatesPositions() = default;
};
class RecognizeLicensePlateResponseBodyDataPlates : public Darabonba::Model {
public:
  shared_ptr<double> plateTypeConfidence{};
  shared_ptr<string> plateType{};
  shared_ptr<double> confidence{};
  shared_ptr<string> plateNumber{};
  shared_ptr<RecognizeLicensePlateResponseBodyDataPlatesRoi> roi{};
  shared_ptr<vector<RecognizeLicensePlateResponseBodyDataPlatesPositions>> positions{};

  RecognizeLicensePlateResponseBodyDataPlates() {}

  explicit RecognizeLicensePlateResponseBodyDataPlates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plateTypeConfidence) {
      res["PlateTypeConfidence"] = boost::any(*plateTypeConfidence);
    }
    if (plateType) {
      res["PlateType"] = boost::any(*plateType);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (roi) {
      res["Roi"] = roi ? boost::any(roi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlateTypeConfidence") != m.end() && !m["PlateTypeConfidence"].empty()) {
      plateTypeConfidence = make_shared<double>(boost::any_cast<double>(m["PlateTypeConfidence"]));
    }
    if (m.find("PlateType") != m.end() && !m["PlateType"].empty()) {
      plateType = make_shared<string>(boost::any_cast<string>(m["PlateType"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("Roi") != m.end() && !m["Roi"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roi"].type()) {
        RecognizeLicensePlateResponseBodyDataPlatesRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roi"]));
        roi = make_shared<RecognizeLicensePlateResponseBodyDataPlatesRoi>(model1);
      }
    }
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<RecognizeLicensePlateResponseBodyDataPlatesPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLicensePlateResponseBodyDataPlatesPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<RecognizeLicensePlateResponseBodyDataPlatesPositions>>(expect1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlates() = default;
};
class RecognizeLicensePlateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeLicensePlateResponseBodyDataPlates>> plates{};

  RecognizeLicensePlateResponseBodyData() {}

  explicit RecognizeLicensePlateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plates) {
      vector<boost::any> temp1;
      for(auto item1:*plates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Plates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Plates") != m.end() && !m["Plates"].empty()) {
      if (typeid(vector<boost::any>) == m["Plates"].type()) {
        vector<RecognizeLicensePlateResponseBodyDataPlates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Plates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLicensePlateResponseBodyDataPlates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        plates = make_shared<vector<RecognizeLicensePlateResponseBodyDataPlates>>(expect1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyData() = default;
};
class RecognizeLicensePlateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeLicensePlateResponseBodyData> data{};

  RecognizeLicensePlateResponseBody() {}

  explicit RecognizeLicensePlateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeLicensePlateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeLicensePlateResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBody() = default;
};
class RecognizeLicensePlateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeLicensePlateResponseBody> body{};

  RecognizeLicensePlateResponse() {}

  explicit RecognizeLicensePlateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLicensePlateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeLicensePlateResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponse() = default;
};
class RecognizeStampRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeStampRequest() {}

  explicit RecognizeStampRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeStampRequest() = default;
};
class RecognizeStampAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeStampAdvanceRequest() {}

  explicit RecognizeStampAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeStampAdvanceRequest() = default;
};
class RecognizeStampResponseBodyDataResultsText : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};

  RecognizeStampResponseBodyDataResultsText() {}

  explicit RecognizeStampResponseBodyDataResultsText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsText() = default;
};
class RecognizeStampResponseBodyDataResultsRoi : public Darabonba::Model {
public:
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};

  RecognizeStampResponseBodyDataResultsRoi() {}

  explicit RecognizeStampResponseBodyDataResultsRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsRoi() = default;
};
class RecognizeStampResponseBodyDataResultsGeneralText : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};

  RecognizeStampResponseBodyDataResultsGeneralText() {}

  explicit RecognizeStampResponseBodyDataResultsGeneralText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsGeneralText() = default;
};
class RecognizeStampResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<RecognizeStampResponseBodyDataResultsText> text{};
  shared_ptr<RecognizeStampResponseBodyDataResultsRoi> roi{};
  shared_ptr<vector<RecognizeStampResponseBodyDataResultsGeneralText>> generalText{};

  RecognizeStampResponseBodyDataResults() {}

  explicit RecognizeStampResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["Text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (roi) {
      res["Roi"] = roi ? boost::any(roi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (generalText) {
      vector<boost::any> temp1;
      for(auto item1:*generalText){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GeneralText"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        RecognizeStampResponseBodyDataResultsText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<RecognizeStampResponseBodyDataResultsText>(model1);
      }
    }
    if (m.find("Roi") != m.end() && !m["Roi"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roi"].type()) {
        RecognizeStampResponseBodyDataResultsRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roi"]));
        roi = make_shared<RecognizeStampResponseBodyDataResultsRoi>(model1);
      }
    }
    if (m.find("GeneralText") != m.end() && !m["GeneralText"].empty()) {
      if (typeid(vector<boost::any>) == m["GeneralText"].type()) {
        vector<RecognizeStampResponseBodyDataResultsGeneralText> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeneralText"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeStampResponseBodyDataResultsGeneralText model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        generalText = make_shared<vector<RecognizeStampResponseBodyDataResultsGeneralText>>(expect1);
      }
    }
  }


  virtual ~RecognizeStampResponseBodyDataResults() = default;
};
class RecognizeStampResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeStampResponseBodyDataResults>> results{};

  RecognizeStampResponseBodyData() {}

  explicit RecognizeStampResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeStampResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeStampResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeStampResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeStampResponseBodyData() = default;
};
class RecognizeStampResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeStampResponseBodyData> data{};

  RecognizeStampResponseBody() {}

  explicit RecognizeStampResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeStampResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeStampResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeStampResponseBody() = default;
};
class RecognizeStampResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeStampResponseBody> body{};

  RecognizeStampResponse() {}

  explicit RecognizeStampResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeStampResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeStampResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeStampResponse() = default;
};
class RecognizeTaxiInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTaxiInvoiceRequest() {}

  explicit RecognizeTaxiInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceRequest() = default;
};
class RecognizeTaxiInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTaxiInvoiceAdvanceRequest() {}

  explicit RecognizeTaxiInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceAdvanceRequest() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize : public Darabonba::Model {
public:
  shared_ptr<double> w{};
  shared_ptr<double> h{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter : public Darabonba::Model {
public:
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize> size{};
  shared_ptr<double> angle{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter> center{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (size) {
      res["Size"] = size ? boost::any(size->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (center) {
      res["Center"] = center ? boost::any(center->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      if (typeid(map<string, boost::any>) == m["Size"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Size"]));
        size = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize>(model1);
      }
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Center") != m.end() && !m["Center"].empty()) {
      if (typeid(map<string, boost::any>) == m["Center"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Center"]));
        center = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItems : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi> itemRoi{};
  shared_ptr<string> text{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemRoi) {
      res["ItemRoi"] = itemRoi ? boost::any(itemRoi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemRoi") != m.end() && !m["ItemRoi"].empty()) {
      if (typeid(map<string, boost::any>) == m["ItemRoi"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ItemRoi"]));
        itemRoi = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi : public Darabonba::Model {
public:
  shared_ptr<double> w{};
  shared_ptr<double> h{};
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoices : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>> items{};
  shared_ptr<long> rotateType{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi> invoiceRoi{};

  RecognizeTaxiInvoiceResponseBodyDataInvoices() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (rotateType) {
      res["RotateType"] = boost::any(*rotateType);
    }
    if (invoiceRoi) {
      res["InvoiceRoi"] = invoiceRoi ? boost::any(invoiceRoi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTaxiInvoiceResponseBodyDataInvoicesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>>(expect1);
      }
    }
    if (m.find("RotateType") != m.end() && !m["RotateType"].empty()) {
      rotateType = make_shared<long>(boost::any_cast<long>(m["RotateType"]));
    }
    if (m.find("InvoiceRoi") != m.end() && !m["InvoiceRoi"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvoiceRoi"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvoiceRoi"]));
        invoiceRoi = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoices() = default;
};
class RecognizeTaxiInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTaxiInvoiceResponseBodyDataInvoices>> invoices{};

  RecognizeTaxiInvoiceResponseBodyData() {}

  explicit RecognizeTaxiInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoices) {
      vector<boost::any> temp1;
      for(auto item1:*invoices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Invoices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invoices") != m.end() && !m["Invoices"].empty()) {
      if (typeid(vector<boost::any>) == m["Invoices"].type()) {
        vector<RecognizeTaxiInvoiceResponseBodyDataInvoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Invoices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTaxiInvoiceResponseBodyDataInvoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invoices = make_shared<vector<RecognizeTaxiInvoiceResponseBodyDataInvoices>>(expect1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyData() = default;
};
class RecognizeTaxiInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyData> data{};

  RecognizeTaxiInvoiceResponseBody() {}

  explicit RecognizeTaxiInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeTaxiInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTaxiInvoiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBody() = default;
};
class RecognizeTaxiInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeTaxiInvoiceResponseBody> body{};

  RecognizeTaxiInvoiceResponse() {}

  explicit RecognizeTaxiInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTaxiInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTaxiInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponse() = default;
};
class RecognizeVATInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileURL{};
  shared_ptr<string> fileType{};

  RecognizeVATInvoiceRequest() {}

  explicit RecognizeVATInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
  }


  virtual ~RecognizeVATInvoiceRequest() = default;
};
class RecognizeVATInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileURLObject{};
  shared_ptr<string> fileType{};

  RecognizeVATInvoiceAdvanceRequest() {}

  explicit RecognizeVATInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!fileURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURLObject) {
      res["FileURLObject"] = boost::any(*fileURLObject);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURLObject") != m.end() && !m["FileURLObject"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURLObject"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
  }


  virtual ~RecognizeVATInvoiceAdvanceRequest() = default;
};
class RecognizeVATInvoiceResponseBodyDataBox : public Darabonba::Model {
public:
  shared_ptr<vector<double>> payerRegisterNoes{};
  shared_ptr<vector<double>> payeeAddresses{};
  shared_ptr<vector<double>> payeeBankNames{};
  shared_ptr<vector<double>> checkers{};
  shared_ptr<vector<double>> taxAmounts{};
  shared_ptr<vector<double>> sumAmounts{};
  shared_ptr<vector<double>> clerks{};
  shared_ptr<vector<double>> invoiceNoes{};
  shared_ptr<vector<double>> invoiceDates{};
  shared_ptr<vector<double>> invoiceCodes{};
  shared_ptr<vector<double>> invoiceFakeCodes{};
  shared_ptr<vector<double>> payerNames{};
  shared_ptr<vector<double>> payerBankNames{};
  shared_ptr<vector<double>> payees{};
  shared_ptr<vector<double>> payeeNames{};
  shared_ptr<vector<double>> invoiceAmounts{};
  shared_ptr<vector<double>> withoutTaxAmounts{};
  shared_ptr<vector<double>> payerAddresses{};
  shared_ptr<vector<double>> payeeRegisterNoes{};

  RecognizeVATInvoiceResponseBodyDataBox() {}

  explicit RecognizeVATInvoiceResponseBodyDataBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payerRegisterNoes) {
      res["PayerRegisterNoes"] = boost::any(*payerRegisterNoes);
    }
    if (payeeAddresses) {
      res["PayeeAddresses"] = boost::any(*payeeAddresses);
    }
    if (payeeBankNames) {
      res["PayeeBankNames"] = boost::any(*payeeBankNames);
    }
    if (checkers) {
      res["Checkers"] = boost::any(*checkers);
    }
    if (taxAmounts) {
      res["TaxAmounts"] = boost::any(*taxAmounts);
    }
    if (sumAmounts) {
      res["SumAmounts"] = boost::any(*sumAmounts);
    }
    if (clerks) {
      res["Clerks"] = boost::any(*clerks);
    }
    if (invoiceNoes) {
      res["InvoiceNoes"] = boost::any(*invoiceNoes);
    }
    if (invoiceDates) {
      res["InvoiceDates"] = boost::any(*invoiceDates);
    }
    if (invoiceCodes) {
      res["InvoiceCodes"] = boost::any(*invoiceCodes);
    }
    if (invoiceFakeCodes) {
      res["InvoiceFakeCodes"] = boost::any(*invoiceFakeCodes);
    }
    if (payerNames) {
      res["PayerNames"] = boost::any(*payerNames);
    }
    if (payerBankNames) {
      res["PayerBankNames"] = boost::any(*payerBankNames);
    }
    if (payees) {
      res["Payees"] = boost::any(*payees);
    }
    if (payeeNames) {
      res["PayeeNames"] = boost::any(*payeeNames);
    }
    if (invoiceAmounts) {
      res["InvoiceAmounts"] = boost::any(*invoiceAmounts);
    }
    if (withoutTaxAmounts) {
      res["WithoutTaxAmounts"] = boost::any(*withoutTaxAmounts);
    }
    if (payerAddresses) {
      res["PayerAddresses"] = boost::any(*payerAddresses);
    }
    if (payeeRegisterNoes) {
      res["PayeeRegisterNoes"] = boost::any(*payeeRegisterNoes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayerRegisterNoes") != m.end() && !m["PayerRegisterNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerRegisterNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerRegisterNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerRegisterNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeAddresses") != m.end() && !m["PayeeAddresses"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeAddresses = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeBankNames") != m.end() && !m["PayeeBankNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeBankNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeBankNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeBankNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Checkers") != m.end() && !m["Checkers"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Checkers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Checkers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      checkers = make_shared<vector<double>>(toVec1);
    }
    if (m.find("TaxAmounts") != m.end() && !m["TaxAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["TaxAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaxAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      taxAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("SumAmounts") != m.end() && !m["SumAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["SumAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SumAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      sumAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Clerks") != m.end() && !m["Clerks"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Clerks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clerks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      clerks = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceNoes") != m.end() && !m["InvoiceNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceDates") != m.end() && !m["InvoiceDates"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceDates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceDates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceDates = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceCodes") != m.end() && !m["InvoiceCodes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceCodes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceFakeCodes") != m.end() && !m["InvoiceFakeCodes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceFakeCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceFakeCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceFakeCodes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerNames") != m.end() && !m["PayerNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerBankNames") != m.end() && !m["PayerBankNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerBankNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerBankNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerBankNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Payees") != m.end() && !m["Payees"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Payees"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payees"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payees = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeNames") != m.end() && !m["PayeeNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceAmounts") != m.end() && !m["InvoiceAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("WithoutTaxAmounts") != m.end() && !m["WithoutTaxAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["WithoutTaxAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WithoutTaxAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      withoutTaxAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerAddresses") != m.end() && !m["PayerAddresses"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerAddresses = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeRegisterNoes") != m.end() && !m["PayeeRegisterNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeRegisterNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeRegisterNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeRegisterNoes = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyDataBox() = default;
};
class RecognizeVATInvoiceResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> payerAddress{};
  shared_ptr<string> payeeRegisterNo{};
  shared_ptr<string> payeeBankName{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> payerRegisterNo{};
  shared_ptr<string> checker{};
  shared_ptr<string> taxAmount{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<string> withoutTaxAmount{};
  shared_ptr<string> invoiceAmount{};
  shared_ptr<string> antiFakeCode{};
  shared_ptr<string> payerName{};
  shared_ptr<string> payee{};
  shared_ptr<string> sumAmount{};
  shared_ptr<string> payerBankName{};
  shared_ptr<string> clerk{};
  shared_ptr<string> payeeName{};
  shared_ptr<string> payeeAddress{};
  shared_ptr<string> invoiceCode{};

  RecognizeVATInvoiceResponseBodyDataContent() {}

  explicit RecognizeVATInvoiceResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payerAddress) {
      res["PayerAddress"] = boost::any(*payerAddress);
    }
    if (payeeRegisterNo) {
      res["PayeeRegisterNo"] = boost::any(*payeeRegisterNo);
    }
    if (payeeBankName) {
      res["PayeeBankName"] = boost::any(*payeeBankName);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (payerRegisterNo) {
      res["PayerRegisterNo"] = boost::any(*payerRegisterNo);
    }
    if (checker) {
      res["Checker"] = boost::any(*checker);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (withoutTaxAmount) {
      res["WithoutTaxAmount"] = boost::any(*withoutTaxAmount);
    }
    if (invoiceAmount) {
      res["InvoiceAmount"] = boost::any(*invoiceAmount);
    }
    if (antiFakeCode) {
      res["AntiFakeCode"] = boost::any(*antiFakeCode);
    }
    if (payerName) {
      res["PayerName"] = boost::any(*payerName);
    }
    if (payee) {
      res["Payee"] = boost::any(*payee);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    if (payerBankName) {
      res["PayerBankName"] = boost::any(*payerBankName);
    }
    if (clerk) {
      res["Clerk"] = boost::any(*clerk);
    }
    if (payeeName) {
      res["PayeeName"] = boost::any(*payeeName);
    }
    if (payeeAddress) {
      res["PayeeAddress"] = boost::any(*payeeAddress);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayerAddress") != m.end() && !m["PayerAddress"].empty()) {
      payerAddress = make_shared<string>(boost::any_cast<string>(m["PayerAddress"]));
    }
    if (m.find("PayeeRegisterNo") != m.end() && !m["PayeeRegisterNo"].empty()) {
      payeeRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayeeRegisterNo"]));
    }
    if (m.find("PayeeBankName") != m.end() && !m["PayeeBankName"].empty()) {
      payeeBankName = make_shared<string>(boost::any_cast<string>(m["PayeeBankName"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("PayerRegisterNo") != m.end() && !m["PayerRegisterNo"].empty()) {
      payerRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayerRegisterNo"]));
    }
    if (m.find("Checker") != m.end() && !m["Checker"].empty()) {
      checker = make_shared<string>(boost::any_cast<string>(m["Checker"]));
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<string>(boost::any_cast<string>(m["TaxAmount"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("WithoutTaxAmount") != m.end() && !m["WithoutTaxAmount"].empty()) {
      withoutTaxAmount = make_shared<string>(boost::any_cast<string>(m["WithoutTaxAmount"]));
    }
    if (m.find("InvoiceAmount") != m.end() && !m["InvoiceAmount"].empty()) {
      invoiceAmount = make_shared<string>(boost::any_cast<string>(m["InvoiceAmount"]));
    }
    if (m.find("AntiFakeCode") != m.end() && !m["AntiFakeCode"].empty()) {
      antiFakeCode = make_shared<string>(boost::any_cast<string>(m["AntiFakeCode"]));
    }
    if (m.find("PayerName") != m.end() && !m["PayerName"].empty()) {
      payerName = make_shared<string>(boost::any_cast<string>(m["PayerName"]));
    }
    if (m.find("Payee") != m.end() && !m["Payee"].empty()) {
      payee = make_shared<string>(boost::any_cast<string>(m["Payee"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
    if (m.find("PayerBankName") != m.end() && !m["PayerBankName"].empty()) {
      payerBankName = make_shared<string>(boost::any_cast<string>(m["PayerBankName"]));
    }
    if (m.find("Clerk") != m.end() && !m["Clerk"].empty()) {
      clerk = make_shared<string>(boost::any_cast<string>(m["Clerk"]));
    }
    if (m.find("PayeeName") != m.end() && !m["PayeeName"].empty()) {
      payeeName = make_shared<string>(boost::any_cast<string>(m["PayeeName"]));
    }
    if (m.find("PayeeAddress") != m.end() && !m["PayeeAddress"].empty()) {
      payeeAddress = make_shared<string>(boost::any_cast<string>(m["PayeeAddress"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyDataContent() = default;
};
class RecognizeVATInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeVATInvoiceResponseBodyDataBox> box{};
  shared_ptr<RecognizeVATInvoiceResponseBodyDataContent> content{};

  RecognizeVATInvoiceResponseBodyData() {}

  explicit RecognizeVATInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        RecognizeVATInvoiceResponseBodyDataBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<RecognizeVATInvoiceResponseBodyDataBox>(model1);
      }
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeVATInvoiceResponseBodyDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeVATInvoiceResponseBodyDataContent>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyData() = default;
};
class RecognizeVATInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVATInvoiceResponseBodyData> data{};

  RecognizeVATInvoiceResponseBody() {}

  explicit RecognizeVATInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeVATInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVATInvoiceResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponseBody() = default;
};
class RecognizeVATInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVATInvoiceResponseBody> body{};

  RecognizeVATInvoiceResponse() {}

  explicit RecognizeVATInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVATInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVATInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponse() = default;
};
class RecognizePassportMRZRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizePassportMRZRequest() {}

  explicit RecognizePassportMRZRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizePassportMRZRequest() = default;
};
class RecognizePassportMRZAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizePassportMRZAdvanceRequest() {}

  explicit RecognizePassportMRZAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizePassportMRZAdvanceRequest() = default;
};
class RecognizePassportMRZResponseBodyDataRegions : public Darabonba::Model {
public:
  shared_ptr<double> recognitionScore{};
  shared_ptr<double> detectionScore{};
  shared_ptr<string> name{};
  shared_ptr<string> content{};
  shared_ptr<vector<double>> bandBoxes{};

  RecognizePassportMRZResponseBodyDataRegions() {}

  explicit RecognizePassportMRZResponseBodyDataRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (recognitionScore) {
      res["RecognitionScore"] = boost::any(*recognitionScore);
    }
    if (detectionScore) {
      res["DetectionScore"] = boost::any(*detectionScore);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (bandBoxes) {
      res["BandBoxes"] = boost::any(*bandBoxes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RecognitionScore") != m.end() && !m["RecognitionScore"].empty()) {
      recognitionScore = make_shared<double>(boost::any_cast<double>(m["RecognitionScore"]));
    }
    if (m.find("DetectionScore") != m.end() && !m["DetectionScore"].empty()) {
      detectionScore = make_shared<double>(boost::any_cast<double>(m["DetectionScore"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("BandBoxes") != m.end() && !m["BandBoxes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["BandBoxes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BandBoxes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      bandBoxes = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~RecognizePassportMRZResponseBodyDataRegions() = default;
};
class RecognizePassportMRZResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePassportMRZResponseBodyDataRegions>> regions{};

  RecognizePassportMRZResponseBodyData() {}

  explicit RecognizePassportMRZResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<RecognizePassportMRZResponseBodyDataRegions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePassportMRZResponseBodyDataRegions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<RecognizePassportMRZResponseBodyDataRegions>>(expect1);
      }
    }
  }


  virtual ~RecognizePassportMRZResponseBodyData() = default;
};
class RecognizePassportMRZResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizePassportMRZResponseBodyData> data{};

  RecognizePassportMRZResponseBody() {}

  explicit RecognizePassportMRZResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizePassportMRZResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePassportMRZResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizePassportMRZResponseBody() = default;
};
class RecognizePassportMRZResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizePassportMRZResponseBody> body{};

  RecognizePassportMRZResponse() {}

  explicit RecognizePassportMRZResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePassportMRZResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePassportMRZResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePassportMRZResponse() = default;
};
class RecognizeTrainTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTrainTicketRequest() {}

  explicit RecognizeTrainTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeTrainTicketRequest() = default;
};
class RecognizeTrainTicketAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTrainTicketAdvanceRequest() {}

  explicit RecognizeTrainTicketAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeTrainTicketAdvanceRequest() = default;
};
class RecognizeTrainTicketResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> price{};
  shared_ptr<string> destination{};
  shared_ptr<string> departureStation{};
  shared_ptr<string> date{};
  shared_ptr<string> number{};
  shared_ptr<string> seat{};
  shared_ptr<string> name{};
  shared_ptr<string> level{};

  RecognizeTrainTicketResponseBodyData() {}

  explicit RecognizeTrainTicketResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (departureStation) {
      res["DepartureStation"] = boost::any(*departureStation);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("DepartureStation") != m.end() && !m["DepartureStation"].empty()) {
      departureStation = make_shared<string>(boost::any_cast<string>(m["DepartureStation"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
  }


  virtual ~RecognizeTrainTicketResponseBodyData() = default;
};
class RecognizeTrainTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeTrainTicketResponseBodyData> data{};

  RecognizeTrainTicketResponseBody() {}

  explicit RecognizeTrainTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeTrainTicketResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTrainTicketResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeTrainTicketResponseBody() = default;
};
class RecognizeTrainTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeTrainTicketResponseBody> body{};

  RecognizeTrainTicketResponse() {}

  explicit RecognizeTrainTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTrainTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTrainTicketResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTrainTicketResponse() = default;
};
class RecognizePoiNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizePoiNameRequest() {}

  explicit RecognizePoiNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizePoiNameRequest() = default;
};
class RecognizePoiNameAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizePoiNameAdvanceRequest() {}

  explicit RecognizePoiNameAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizePoiNameAdvanceRequest() = default;
};
class RecognizePoiNameResponseBodyDataSummary : public Darabonba::Model {
public:
  shared_ptr<string> brand{};
  shared_ptr<double> score{};

  RecognizePoiNameResponseBodyDataSummary() {}

  explicit RecognizePoiNameResponseBodyDataSummary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~RecognizePoiNameResponseBodyDataSummary() = default;
};
class RecognizePoiNameResponseBodyDataSignboardsTexts : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<double> score{};
  shared_ptr<string> tag{};
  shared_ptr<string> label{};
  shared_ptr<vector<long>> points{};

  RecognizePoiNameResponseBodyDataSignboardsTexts() {}

  explicit RecognizePoiNameResponseBodyDataSignboardsTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (points) {
      res["Points"] = boost::any(*points);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Points") != m.end() && !m["Points"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Points"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Points"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      points = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RecognizePoiNameResponseBodyDataSignboardsTexts() = default;
};
class RecognizePoiNameResponseBodyDataSignboards : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizePoiNameResponseBodyDataSignboardsTexts>> texts{};

  RecognizePoiNameResponseBodyDataSignboards() {}

  explicit RecognizePoiNameResponseBodyDataSignboards(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (texts) {
      vector<boost::any> temp1;
      for(auto item1:*texts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Texts"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<RecognizePoiNameResponseBodyDataSignboardsTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Texts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePoiNameResponseBodyDataSignboardsTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        texts = make_shared<vector<RecognizePoiNameResponseBodyDataSignboardsTexts>>(expect1);
      }
    }
  }


  virtual ~RecognizePoiNameResponseBodyDataSignboards() = default;
};
class RecognizePoiNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizePoiNameResponseBodyDataSummary> summary{};
  shared_ptr<vector<RecognizePoiNameResponseBodyDataSignboards>> signboards{};

  RecognizePoiNameResponseBodyData() {}

  explicit RecognizePoiNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summary) {
      res["Summary"] = summary ? boost::any(summary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (signboards) {
      vector<boost::any> temp1;
      for(auto item1:*signboards){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Signboards"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Summary"].type()) {
        RecognizePoiNameResponseBodyDataSummary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Summary"]));
        summary = make_shared<RecognizePoiNameResponseBodyDataSummary>(model1);
      }
    }
    if (m.find("Signboards") != m.end() && !m["Signboards"].empty()) {
      if (typeid(vector<boost::any>) == m["Signboards"].type()) {
        vector<RecognizePoiNameResponseBodyDataSignboards> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Signboards"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePoiNameResponseBodyDataSignboards model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        signboards = make_shared<vector<RecognizePoiNameResponseBodyDataSignboards>>(expect1);
      }
    }
  }


  virtual ~RecognizePoiNameResponseBodyData() = default;
};
class RecognizePoiNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizePoiNameResponseBodyData> data{};

  RecognizePoiNameResponseBody() {}

  explicit RecognizePoiNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizePoiNameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePoiNameResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizePoiNameResponseBody() = default;
};
class RecognizePoiNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizePoiNameResponseBody> body{};

  RecognizePoiNameResponse() {}

  explicit RecognizePoiNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePoiNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePoiNameResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePoiNameResponse() = default;
};
class RecognizeQrCodeRequestTasks : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeQrCodeRequestTasks() {}

  explicit RecognizeQrCodeRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeQrCodeRequestTasks() = default;
};
class RecognizeQrCodeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeRequestTasks>> tasks{};

  RecognizeQrCodeRequest() {}

  explicit RecognizeQrCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<RecognizeQrCodeRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<RecognizeQrCodeRequestTasks>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeRequest() = default;
};
class RecognizeQrCodeResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> suggestion{};
  shared_ptr<vector<string>> qrCodesData{};
  shared_ptr<string> label{};
  shared_ptr<double> rate{};

  RecognizeQrCodeResponseBodyDataElementsResults() {}

  explicit RecognizeQrCodeResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (qrCodesData) {
      res["QrCodesData"] = boost::any(*qrCodesData);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("QrCodesData") != m.end() && !m["QrCodesData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QrCodesData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QrCodesData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qrCodesData = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBodyDataElementsResults() = default;
};
class RecognizeQrCodeResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> taskId{};
  shared_ptr<vector<RecognizeQrCodeResponseBodyDataElementsResults>> results{};

  RecognizeQrCodeResponseBodyDataElements() {}

  explicit RecognizeQrCodeResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeQrCodeResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeQrCodeResponseBodyDataElementsResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponseBodyDataElements() = default;
};
class RecognizeQrCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeResponseBodyDataElements>> elements{};

  RecognizeQrCodeResponseBodyData() {}

  explicit RecognizeQrCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeQrCodeResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeQrCodeResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponseBodyData() = default;
};
class RecognizeQrCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeQrCodeResponseBodyData> data{};

  RecognizeQrCodeResponseBody() {}

  explicit RecognizeQrCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeQrCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeQrCodeResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponseBody() = default;
};
class RecognizeQrCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeQrCodeResponseBody> body{};

  RecognizeQrCodeResponse() {}

  explicit RecognizeQrCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQrCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeQrCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponse() = default;
};
class RecognizeVINCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVINCodeRequest() {}

  explicit RecognizeVINCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeVINCodeRequest() = default;
};
class RecognizeVINCodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVINCodeAdvanceRequest() {}

  explicit RecognizeVINCodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RecognizeVINCodeAdvanceRequest() = default;
};
class RecognizeVINCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vinCode{};

  RecognizeVINCodeResponseBodyData() {}

  explicit RecognizeVINCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vinCode) {
      res["VinCode"] = boost::any(*vinCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VinCode") != m.end() && !m["VinCode"].empty()) {
      vinCode = make_shared<string>(boost::any_cast<string>(m["VinCode"]));
    }
  }


  virtual ~RecognizeVINCodeResponseBodyData() = default;
};
class RecognizeVINCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecognizeVINCodeResponseBodyData> data{};

  RecognizeVINCodeResponseBody() {}

  explicit RecognizeVINCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeVINCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVINCodeResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecognizeVINCodeResponseBody() = default;
};
class RecognizeVINCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecognizeVINCodeResponseBody> body{};

  RecognizeVINCodeResponse() {}

  explicit RecognizeVINCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVINCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVINCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVINCodeResponse() = default;
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
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseWithOptions(shared_ptr<RecognizeDrivingLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDrivingLicenseResponse recognizeDrivingLicense(shared_ptr<RecognizeDrivingLicenseRequest> request);
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseAdvance(shared_ptr<RecognizeDrivingLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeChinapassportResponse recognizeChinapassportWithOptions(shared_ptr<RecognizeChinapassportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeChinapassportResponse recognizeChinapassport(shared_ptr<RecognizeChinapassportRequest> request);
  RecognizeChinapassportResponse recognizeChinapassportAdvance(shared_ptr<RecognizeChinapassportAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrimDocumentResponse trimDocumentWithOptions(shared_ptr<TrimDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TrimDocumentResponse trimDocument(shared_ptr<TrimDocumentRequest> request);
  TrimDocumentResponse trimDocumentAdvance(shared_ptr<TrimDocumentAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableResponse recognizeTableWithOptions(shared_ptr<RecognizeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableResponse recognizeTable(shared_ptr<RecognizeTableRequest> request);
  RecognizeTableResponse recognizeTableAdvance(shared_ptr<RecognizeTableAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdentityCardResponse recognizeIdentityCardWithOptions(shared_ptr<RecognizeIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdentityCardResponse recognizeIdentityCard(shared_ptr<RecognizeIdentityCardRequest> request);
  RecognizeIdentityCardResponse recognizeIdentityCardAdvance(shared_ptr<RecognizeIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseWithOptions(shared_ptr<RecognizeBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicense(shared_ptr<RecognizeBusinessLicenseRequest> request);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseAdvance(shared_ptr<RecognizeBusinessLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankCardResponse recognizeBankCardWithOptions(shared_ptr<RecognizeBankCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankCardResponse recognizeBankCard(shared_ptr<RecognizeBankCardRequest> request);
  RecognizeBankCardResponse recognizeBankCardAdvance(shared_ptr<RecognizeBankCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVerificationcodeResponse recognizeVerificationcodeWithOptions(shared_ptr<RecognizeVerificationcodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVerificationcodeResponse recognizeVerificationcode(shared_ptr<RecognizeVerificationcodeRequest> request);
  RecognizeVerificationcodeResponse recognizeVerificationcodeAdvance(shared_ptr<RecognizeVerificationcodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAccountPageResponse recognizeAccountPageWithOptions(shared_ptr<RecognizeAccountPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeAccountPageResponse recognizeAccountPage(shared_ptr<RecognizeAccountPageRequest> request);
  RecognizeAccountPageResponse recognizeAccountPageAdvance(shared_ptr<RecognizeAccountPageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCharacterResponse recognizeCharacterWithOptions(shared_ptr<RecognizeCharacterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCharacterResponse recognizeCharacter(shared_ptr<RecognizeCharacterRequest> request);
  RecognizeCharacterResponse recognizeCharacterAdvance(shared_ptr<RecognizeCharacterAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  RecognizeTakeoutOrderResponse recognizeTakeoutOrderWithOptions(shared_ptr<RecognizeTakeoutOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTakeoutOrderResponse recognizeTakeoutOrder(shared_ptr<RecognizeTakeoutOrderRequest> request);
  RecognizeTakeoutOrderResponse recognizeTakeoutOrderAdvance(shared_ptr<RecognizeTakeoutOrderAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessCardResponse recognizeBusinessCardWithOptions(shared_ptr<RecognizeBusinessCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessCardResponse recognizeBusinessCard(shared_ptr<RecognizeBusinessCardRequest> request);
  RecognizeBusinessCardResponse recognizeBusinessCardAdvance(shared_ptr<RecognizeBusinessCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCardScreenshotResponse detectCardScreenshotWithOptions(shared_ptr<DetectCardScreenshotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectCardScreenshotResponse detectCardScreenshot(shared_ptr<DetectCardScreenshotRequest> request);
  DetectCardScreenshotResponse detectCardScreenshotAdvance(shared_ptr<DetectCardScreenshotAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDriverLicenseResponse recognizeDriverLicenseWithOptions(shared_ptr<RecognizeDriverLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDriverLicenseResponse recognizeDriverLicense(shared_ptr<RecognizeDriverLicenseRequest> request);
  RecognizeDriverLicenseResponse recognizeDriverLicenseAdvance(shared_ptr<RecognizeDriverLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLicensePlateResponse recognizeLicensePlateWithOptions(shared_ptr<RecognizeLicensePlateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLicensePlateResponse recognizeLicensePlate(shared_ptr<RecognizeLicensePlateRequest> request);
  RecognizeLicensePlateResponse recognizeLicensePlateAdvance(shared_ptr<RecognizeLicensePlateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeStampResponse recognizeStampWithOptions(shared_ptr<RecognizeStampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeStampResponse recognizeStamp(shared_ptr<RecognizeStampRequest> request);
  RecognizeStampResponse recognizeStampAdvance(shared_ptr<RecognizeStampAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceWithOptions(shared_ptr<RecognizeTaxiInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoice(shared_ptr<RecognizeTaxiInvoiceRequest> request);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceAdvance(shared_ptr<RecognizeTaxiInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVATInvoiceResponse recognizeVATInvoiceWithOptions(shared_ptr<RecognizeVATInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVATInvoiceResponse recognizeVATInvoice(shared_ptr<RecognizeVATInvoiceRequest> request);
  RecognizeVATInvoiceResponse recognizeVATInvoiceAdvance(shared_ptr<RecognizeVATInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePassportMRZResponse recognizePassportMRZWithOptions(shared_ptr<RecognizePassportMRZRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePassportMRZResponse recognizePassportMRZ(shared_ptr<RecognizePassportMRZRequest> request);
  RecognizePassportMRZResponse recognizePassportMRZAdvance(shared_ptr<RecognizePassportMRZAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainTicketResponse recognizeTrainTicketWithOptions(shared_ptr<RecognizeTrainTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainTicketResponse recognizeTrainTicket(shared_ptr<RecognizeTrainTicketRequest> request);
  RecognizeTrainTicketResponse recognizeTrainTicketAdvance(shared_ptr<RecognizeTrainTicketAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePoiNameResponse recognizePoiNameWithOptions(shared_ptr<RecognizePoiNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePoiNameResponse recognizePoiName(shared_ptr<RecognizePoiNameRequest> request);
  RecognizePoiNameResponse recognizePoiNameAdvance(shared_ptr<RecognizePoiNameAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQrCodeResponse recognizeQrCodeWithOptions(shared_ptr<RecognizeQrCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQrCodeResponse recognizeQrCode(shared_ptr<RecognizeQrCodeRequest> request);
  RecognizeVINCodeResponse recognizeVINCodeWithOptions(shared_ptr<RecognizeVINCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVINCodeResponse recognizeVINCode(shared_ptr<RecognizeVINCodeRequest> request);
  RecognizeVINCodeResponse recognizeVINCodeAdvance(shared_ptr<RecognizeVINCodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ocr20191230

#endif
