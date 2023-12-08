// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALICLOUDPROC20240104_H_
#define ALIBABACLOUD_ALICLOUDPROC20240104_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Alicloudproc20240104 {
class Address : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> detail{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> provinceCode{};

  Address() {}

  explicit Address(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["cityCode"] = boost::any(*cityCode);
    }
    if (detail) {
      res["detail"] = boost::any(*detail);
    }
    if (districtCode) {
      res["districtCode"] = boost::any(*districtCode);
    }
    if (provinceCode) {
      res["provinceCode"] = boost::any(*provinceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cityCode") != m.end() && !m["cityCode"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["cityCode"]));
    }
    if (m.find("detail") != m.end() && !m["detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["detail"]));
    }
    if (m.find("districtCode") != m.end() && !m["districtCode"].empty()) {
      districtCode = make_shared<string>(boost::any_cast<string>(m["districtCode"]));
    }
    if (m.find("provinceCode") != m.end() && !m["provinceCode"].empty()) {
      provinceCode = make_shared<string>(boost::any_cast<string>(m["provinceCode"]));
    }
  }


  virtual ~Address() = default;
};
class Company : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> uscc{};

  Company() {}

  explicit Company(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (uscc) {
      res["uscc"] = boost::any(*uscc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("uscc") != m.end() && !m["uscc"].empty()) {
      uscc = make_shared<string>(boost::any_cast<string>(m["uscc"]));
    }
  }


  virtual ~Company() = default;
};
class Contact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> name{};
  shared_ptr<string> phone{};

  Contact() {}

  explicit Contact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["email"] = boost::any(*email);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (phone) {
      res["phone"] = boost::any(*phone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("email") != m.end() && !m["email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["email"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("phone") != m.end() && !m["phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["phone"]));
    }
  }


  virtual ~Contact() = default;
};
class ExtendInfo : public Darabonba::Model {
public:
  shared_ptr<double> depositAmount{};
  shared_ptr<string> desc{};

  ExtendInfo() {}

  explicit ExtendInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (depositAmount) {
      res["depositAmount"] = boost::any(*depositAmount);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("depositAmount") != m.end() && !m["depositAmount"].empty()) {
      depositAmount = make_shared<double>(boost::any_cast<double>(m["depositAmount"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
  }


  virtual ~ExtendInfo() = default;
};
class SubjectExtendInfo : public Darabonba::Model {
public:
  shared_ptr<string> deliveryDesc{};
  shared_ptr<string> desc{};

  SubjectExtendInfo() {}

  explicit SubjectExtendInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryDesc) {
      res["deliveryDesc"] = boost::any(*deliveryDesc);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deliveryDesc") != m.end() && !m["deliveryDesc"].empty()) {
      deliveryDesc = make_shared<string>(boost::any_cast<string>(m["deliveryDesc"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
  }


  virtual ~SubjectExtendInfo() = default;
};
class CreateSourcingProjectRequestAddress : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> detail{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> provinceCode{};

  CreateSourcingProjectRequestAddress() {}

  explicit CreateSourcingProjectRequestAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["CityCode"] = boost::any(*cityCode);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (districtCode) {
      res["DistrictCode"] = boost::any(*districtCode);
    }
    if (provinceCode) {
      res["ProvinceCode"] = boost::any(*provinceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityCode") != m.end() && !m["CityCode"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["CityCode"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("DistrictCode") != m.end() && !m["DistrictCode"].empty()) {
      districtCode = make_shared<string>(boost::any_cast<string>(m["DistrictCode"]));
    }
    if (m.find("ProvinceCode") != m.end() && !m["ProvinceCode"].empty()) {
      provinceCode = make_shared<string>(boost::any_cast<string>(m["ProvinceCode"]));
    }
  }


  virtual ~CreateSourcingProjectRequestAddress() = default;
};
class CreateSourcingProjectRequestCompany : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> uscc{};

  CreateSourcingProjectRequestCompany() {}

  explicit CreateSourcingProjectRequestCompany(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uscc) {
      res["Uscc"] = boost::any(*uscc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Uscc") != m.end() && !m["Uscc"].empty()) {
      uscc = make_shared<string>(boost::any_cast<string>(m["Uscc"]));
    }
  }


  virtual ~CreateSourcingProjectRequestCompany() = default;
};
class CreateSourcingProjectRequestContact : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> name{};
  shared_ptr<string> phone{};

  CreateSourcingProjectRequestContact() {}

  explicit CreateSourcingProjectRequestContact(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (name) {
      res["Name"] = boost::any(*name);
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
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
  }


  virtual ~CreateSourcingProjectRequestContact() = default;
};
class CreateSourcingProjectRequestSubjectsAddress : public Darabonba::Model {
public:
  shared_ptr<string> cityCode{};
  shared_ptr<string> detail{};
  shared_ptr<string> districtCode{};
  shared_ptr<string> provinceCode{};

  CreateSourcingProjectRequestSubjectsAddress() {}

  explicit CreateSourcingProjectRequestSubjectsAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cityCode) {
      res["CityCode"] = boost::any(*cityCode);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (districtCode) {
      res["DistrictCode"] = boost::any(*districtCode);
    }
    if (provinceCode) {
      res["ProvinceCode"] = boost::any(*provinceCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CityCode") != m.end() && !m["CityCode"].empty()) {
      cityCode = make_shared<string>(boost::any_cast<string>(m["CityCode"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("DistrictCode") != m.end() && !m["DistrictCode"].empty()) {
      districtCode = make_shared<string>(boost::any_cast<string>(m["DistrictCode"]));
    }
    if (m.find("ProvinceCode") != m.end() && !m["ProvinceCode"].empty()) {
      provinceCode = make_shared<string>(boost::any_cast<string>(m["ProvinceCode"]));
    }
  }


  virtual ~CreateSourcingProjectRequestSubjectsAddress() = default;
};
class CreateSourcingProjectRequestSubjects : public Darabonba::Model {
public:
  shared_ptr<CreateSourcingProjectRequestSubjectsAddress> address{};
  shared_ptr<string> code{};
  shared_ptr<map<string, string>> extendInfo{};
  shared_ptr<string> name{};
  shared_ptr<double> quantity{};
  shared_ptr<string> spec{};
  shared_ptr<string> unit{};

  CreateSourcingProjectRequestSubjects() {}

  explicit CreateSourcingProjectRequestSubjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    if (unit) {
      res["Unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        CreateSourcingProjectRequestSubjectsAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<CreateSourcingProjectRequestSubjectsAddress>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["Quantity"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
    if (m.find("Unit") != m.end() && !m["Unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["Unit"]));
    }
  }


  virtual ~CreateSourcingProjectRequestSubjects() = default;
};
class CreateSourcingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<CreateSourcingProjectRequestAddress> address{};
  shared_ptr<string> bizId{};
  shared_ptr<string> bizNo{};
  shared_ptr<string> bizType{};
  shared_ptr<CreateSourcingProjectRequestCompany> company{};
  shared_ptr<CreateSourcingProjectRequestContact> contact{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<map<string, string>> extendInfo{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> subBizType{};
  shared_ptr<vector<CreateSourcingProjectRequestSubjects>> subjects{};
  shared_ptr<string> title{};

  CreateSourcingProjectRequest() {}

  explicit CreateSourcingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizNo) {
      res["BizNo"] = boost::any(*bizNo);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (company) {
      res["Company"] = company ? boost::any(company->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (contact) {
      res["Contact"] = contact ? boost::any(contact->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (subBizType) {
      res["SubBizType"] = boost::any(*subBizType);
    }
    if (subjects) {
      vector<boost::any> temp1;
      for(auto item1:*subjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subjects"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        CreateSourcingProjectRequestAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<CreateSourcingProjectRequestAddress>(model1);
      }
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizNo") != m.end() && !m["BizNo"].empty()) {
      bizNo = make_shared<string>(boost::any_cast<string>(m["BizNo"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Company") != m.end() && !m["Company"].empty()) {
      if (typeid(map<string, boost::any>) == m["Company"].type()) {
        CreateSourcingProjectRequestCompany model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Company"]));
        company = make_shared<CreateSourcingProjectRequestCompany>(model1);
      }
    }
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      if (typeid(map<string, boost::any>) == m["Contact"].type()) {
        CreateSourcingProjectRequestContact model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Contact"]));
        contact = make_shared<CreateSourcingProjectRequestContact>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendInfo"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendInfo = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("SubBizType") != m.end() && !m["SubBizType"].empty()) {
      subBizType = make_shared<string>(boost::any_cast<string>(m["SubBizType"]));
    }
    if (m.find("Subjects") != m.end() && !m["Subjects"].empty()) {
      if (typeid(vector<boost::any>) == m["Subjects"].type()) {
        vector<CreateSourcingProjectRequestSubjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateSourcingProjectRequestSubjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subjects = make_shared<vector<CreateSourcingProjectRequestSubjects>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateSourcingProjectRequest() = default;
};
class CreateSourcingProjectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressShrink{};
  shared_ptr<string> bizId{};
  shared_ptr<string> bizNo{};
  shared_ptr<string> bizType{};
  shared_ptr<string> companyShrink{};
  shared_ptr<string> contactShrink{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> extendInfoShrink{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> subBizType{};
  shared_ptr<string> subjectsShrink{};
  shared_ptr<string> title{};

  CreateSourcingProjectShrinkRequest() {}

  explicit CreateSourcingProjectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressShrink) {
      res["Address"] = boost::any(*addressShrink);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizNo) {
      res["BizNo"] = boost::any(*bizNo);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (companyShrink) {
      res["Company"] = boost::any(*companyShrink);
    }
    if (contactShrink) {
      res["Contact"] = boost::any(*contactShrink);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (extendInfoShrink) {
      res["ExtendInfo"] = boost::any(*extendInfoShrink);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (subBizType) {
      res["SubBizType"] = boost::any(*subBizType);
    }
    if (subjectsShrink) {
      res["Subjects"] = boost::any(*subjectsShrink);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      addressShrink = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizNo") != m.end() && !m["BizNo"].empty()) {
      bizNo = make_shared<string>(boost::any_cast<string>(m["BizNo"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Company") != m.end() && !m["Company"].empty()) {
      companyShrink = make_shared<string>(boost::any_cast<string>(m["Company"]));
    }
    if (m.find("Contact") != m.end() && !m["Contact"].empty()) {
      contactShrink = make_shared<string>(boost::any_cast<string>(m["Contact"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfoShrink = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("SubBizType") != m.end() && !m["SubBizType"].empty()) {
      subBizType = make_shared<string>(boost::any_cast<string>(m["SubBizType"]));
    }
    if (m.find("Subjects") != m.end() && !m["Subjects"].empty()) {
      subjectsShrink = make_shared<string>(boost::any_cast<string>(m["Subjects"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateSourcingProjectShrinkRequest() = default;
};
class CreateSourcingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateSourcingProjectResponseBody() {}

  explicit CreateSourcingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~CreateSourcingProjectResponseBody() = default;
};
class CreateSourcingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSourcingProjectResponseBody> body{};

  CreateSourcingProjectResponse() {}

  explicit CreateSourcingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSourcingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSourcingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSourcingProjectResponse() = default;
};
class UpdateSourcingProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  UpdateSourcingProjectRequest() {}

  explicit UpdateSourcingProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
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
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~UpdateSourcingProjectRequest() = default;
};
class UpdateSourcingProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateSourcingProjectResponseBody() {}

  explicit UpdateSourcingProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~UpdateSourcingProjectResponseBody() = default;
};
class UpdateSourcingProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSourcingProjectResponseBody> body{};

  UpdateSourcingProjectResponse() {}

  explicit UpdateSourcingProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSourcingProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSourcingProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSourcingProjectResponse() = default;
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
  CreateSourcingProjectResponse createSourcingProjectWithOptions(shared_ptr<CreateSourcingProjectRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSourcingProjectResponse createSourcingProject(shared_ptr<CreateSourcingProjectRequest> request);
  UpdateSourcingProjectResponse updateSourcingProjectWithOptions(shared_ptr<UpdateSourcingProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSourcingProjectResponse updateSourcingProject(shared_ptr<UpdateSourcingProjectRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Alicloudproc20240104

#endif
