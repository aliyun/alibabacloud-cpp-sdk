// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20190307_H_
#define ALIBABACLOUD_CLOUDAUTH20190307_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth20190307 {
class VerifyMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> name{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> userId{};

  VerifyMaterialRequest() {}

  explicit VerifyMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardBackImageUrl) {
      res["IdCardBackImageUrl"] = boost::any(*idCardBackImageUrl);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardFrontImageUrl) {
      res["IdCardFrontImageUrl"] = boost::any(*idCardFrontImageUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardBackImageUrl") != m.end() && !m["IdCardBackImageUrl"].empty()) {
      idCardBackImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardBackImageUrl"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardFrontImageUrl") != m.end() && !m["IdCardFrontImageUrl"].empty()) {
      idCardFrontImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardFrontImageUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~VerifyMaterialRequest() = default;
};
class VerifyMaterialResponseBodyMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> authority{};
  shared_ptr<string> address{};
  shared_ptr<string> number{};
  shared_ptr<string> startDate{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> nationality{};
  shared_ptr<string> birth{};
  shared_ptr<string> name{};
  shared_ptr<string> frontImageUrl{};

  VerifyMaterialResponseBodyMaterialIdCardInfo() {}

  explicit VerifyMaterialResponseBodyMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
  }


  virtual ~VerifyMaterialResponseBodyMaterialIdCardInfo() = default;
};
class VerifyMaterialResponseBodyMaterial : public Darabonba::Model {
public:
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> faceMask{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> faceQuality{};
  shared_ptr<VerifyMaterialResponseBodyMaterialIdCardInfo> idCardInfo{};

  VerifyMaterialResponseBodyMaterial() {}

  explicit VerifyMaterialResponseBodyMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (faceGlobalUrl) {
      res["FaceGlobalUrl"] = boost::any(*faceGlobalUrl);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (faceMask) {
      res["FaceMask"] = boost::any(*faceMask);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("FaceGlobalUrl") != m.end() && !m["FaceGlobalUrl"].empty()) {
      faceGlobalUrl = make_shared<string>(boost::any_cast<string>(m["FaceGlobalUrl"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("FaceMask") != m.end() && !m["FaceMask"].empty()) {
      faceMask = make_shared<string>(boost::any_cast<string>(m["FaceMask"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        VerifyMaterialResponseBodyMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<VerifyMaterialResponseBodyMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponseBodyMaterial() = default;
};
class VerifyMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<long> verifyStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyToken{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<VerifyMaterialResponseBodyMaterial> material{};

  VerifyMaterialResponseBody() {}

  explicit VerifyMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorityComparisionScore) {
      res["AuthorityComparisionScore"] = boost::any(*authorityComparisionScore);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorityComparisionScore") != m.end() && !m["AuthorityComparisionScore"].empty()) {
      authorityComparisionScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisionScore"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<long>(boost::any_cast<long>(m["VerifyStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        VerifyMaterialResponseBodyMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<VerifyMaterialResponseBodyMaterial>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponseBody() = default;
};
class VerifyMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifyMaterialResponseBody> body{};

  VerifyMaterialResponse() {}

  explicit VerifyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponse() = default;
};
class DescribeWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> validStartDate{};
  shared_ptr<string> validEndDate{};
  shared_ptr<string> valid{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  DescribeWhitelistRequest() {}

  explicit DescribeWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~DescribeWhitelistRequest() = default;
};
class DescribeWhitelistResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> endDate{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<string> bizId{};
  shared_ptr<long> startDate{};
  shared_ptr<string> idCardNum{};
  shared_ptr<long> gmtModified{};
  shared_ptr<long> valid{};
  shared_ptr<long> id{};
  shared_ptr<string> bizType{};
  shared_ptr<long> uid{};

  DescribeWhitelistResponseBodyItems() {}

  explicit DescribeWhitelistResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<long>(boost::any_cast<long>(m["Valid"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~DescribeWhitelistResponseBodyItems() = default;
};
class DescribeWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeWhitelistResponseBodyItems>> items{};

  DescribeWhitelistResponseBody() {}

  explicit DescribeWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeWhitelistResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhitelistResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeWhitelistResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeWhitelistResponseBody() = default;
};
class DescribeWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeWhitelistResponseBody> body{};

  DescribeWhitelistResponse() {}

  explicit DescribeWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWhitelistResponse() = default;
};
class UpdateAppPackageRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> platform{};
  shared_ptr<bool> debug{};

  UpdateAppPackageRequest() {}

  explicit UpdateAppPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
  }


  virtual ~UpdateAppPackageRequest() = default;
};
class UpdateAppPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};

  UpdateAppPackageResponseBody() {}

  explicit UpdateAppPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAppPackageResponseBody() = default;
};
class UpdateAppPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateAppPackageResponseBody> body{};

  UpdateAppPackageResponse() {}

  explicit UpdateAppPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppPackageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppPackageResponse() = default;
};
class DescribeVerifyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> bizType{};
  shared_ptr<string> failedRedirectUrl{};
  shared_ptr<string> faceRetainedImageUrl{};
  shared_ptr<string> callbackSeed{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> bizId{};
  shared_ptr<string> name{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> passedRedirectUrl{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> userIp{};
  shared_ptr<string> userPhoneNumber{};
  shared_ptr<long> userRegistTime{};

  DescribeVerifyTokenRequest() {}

  explicit DescribeVerifyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardBackImageUrl) {
      res["IdCardBackImageUrl"] = boost::any(*idCardBackImageUrl);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (failedRedirectUrl) {
      res["FailedRedirectUrl"] = boost::any(*failedRedirectUrl);
    }
    if (faceRetainedImageUrl) {
      res["FaceRetainedImageUrl"] = boost::any(*faceRetainedImageUrl);
    }
    if (callbackSeed) {
      res["CallbackSeed"] = boost::any(*callbackSeed);
    }
    if (idCardFrontImageUrl) {
      res["IdCardFrontImageUrl"] = boost::any(*idCardFrontImageUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (passedRedirectUrl) {
      res["PassedRedirectUrl"] = boost::any(*passedRedirectUrl);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (userIp) {
      res["UserIp"] = boost::any(*userIp);
    }
    if (userPhoneNumber) {
      res["UserPhoneNumber"] = boost::any(*userPhoneNumber);
    }
    if (userRegistTime) {
      res["UserRegistTime"] = boost::any(*userRegistTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardBackImageUrl") != m.end() && !m["IdCardBackImageUrl"].empty()) {
      idCardBackImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardBackImageUrl"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("FailedRedirectUrl") != m.end() && !m["FailedRedirectUrl"].empty()) {
      failedRedirectUrl = make_shared<string>(boost::any_cast<string>(m["FailedRedirectUrl"]));
    }
    if (m.find("FaceRetainedImageUrl") != m.end() && !m["FaceRetainedImageUrl"].empty()) {
      faceRetainedImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceRetainedImageUrl"]));
    }
    if (m.find("CallbackSeed") != m.end() && !m["CallbackSeed"].empty()) {
      callbackSeed = make_shared<string>(boost::any_cast<string>(m["CallbackSeed"]));
    }
    if (m.find("IdCardFrontImageUrl") != m.end() && !m["IdCardFrontImageUrl"].empty()) {
      idCardFrontImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardFrontImageUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("PassedRedirectUrl") != m.end() && !m["PassedRedirectUrl"].empty()) {
      passedRedirectUrl = make_shared<string>(boost::any_cast<string>(m["PassedRedirectUrl"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("UserIp") != m.end() && !m["UserIp"].empty()) {
      userIp = make_shared<string>(boost::any_cast<string>(m["UserIp"]));
    }
    if (m.find("UserPhoneNumber") != m.end() && !m["UserPhoneNumber"].empty()) {
      userPhoneNumber = make_shared<string>(boost::any_cast<string>(m["UserPhoneNumber"]));
    }
    if (m.find("UserRegistTime") != m.end() && !m["UserRegistTime"].empty()) {
      userRegistTime = make_shared<long>(boost::any_cast<long>(m["UserRegistTime"]));
    }
  }


  virtual ~DescribeVerifyTokenRequest() = default;
};
class DescribeVerifyTokenResponseBodyOssUploadToken : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> token{};
  shared_ptr<string> secret{};
  shared_ptr<long> expired{};
  shared_ptr<string> path{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> bucket{};

  DescribeVerifyTokenResponseBodyOssUploadToken() {}

  explicit DescribeVerifyTokenResponseBodyOssUploadToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
  }


  virtual ~DescribeVerifyTokenResponseBodyOssUploadToken() = default;
};
class DescribeVerifyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> verifyPageUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyToken{};
  shared_ptr<DescribeVerifyTokenResponseBodyOssUploadToken> ossUploadToken{};

  DescribeVerifyTokenResponseBody() {}

  explicit DescribeVerifyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyPageUrl) {
      res["VerifyPageUrl"] = boost::any(*verifyPageUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    if (ossUploadToken) {
      res["OssUploadToken"] = ossUploadToken ? boost::any(ossUploadToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyPageUrl") != m.end() && !m["VerifyPageUrl"].empty()) {
      verifyPageUrl = make_shared<string>(boost::any_cast<string>(m["VerifyPageUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
    if (m.find("OssUploadToken") != m.end() && !m["OssUploadToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssUploadToken"].type()) {
        DescribeVerifyTokenResponseBodyOssUploadToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssUploadToken"]));
        ossUploadToken = make_shared<DescribeVerifyTokenResponseBodyOssUploadToken>(model1);
      }
    }
  }


  virtual ~DescribeVerifyTokenResponseBody() = default;
};
class DescribeVerifyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVerifyTokenResponseBody> body{};

  DescribeVerifyTokenResponse() {}

  explicit DescribeVerifyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifyTokenResponse() = default;
};
class DescribeRPSDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> taskId{};

  DescribeRPSDKRequest() {}

  explicit DescribeRPSDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeRPSDKRequest() = default;
};
class DescribeRPSDKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> requestId{};

  DescribeRPSDKResponseBody() {}

  explicit DescribeRPSDKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRPSDKResponseBody() = default;
};
class DescribeRPSDKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRPSDKResponseBody> body{};

  DescribeRPSDKResponse() {}

  explicit DescribeRPSDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRPSDKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRPSDKResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRPSDKResponse() = default;
};
class DescribeFaceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  DescribeFaceUsageRequest() {}

  explicit DescribeFaceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~DescribeFaceUsageRequest() = default;
};
class DescribeFaceUsageResponseBodyFaceUsageList : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> date{};

  DescribeFaceUsageResponseBodyFaceUsageList() {}

  explicit DescribeFaceUsageResponseBodyFaceUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
  }


  virtual ~DescribeFaceUsageResponseBodyFaceUsageList() = default;
};
class DescribeFaceUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFaceUsageResponseBodyFaceUsageList>> faceUsageList{};

  DescribeFaceUsageResponseBody() {}

  explicit DescribeFaceUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (faceUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*faceUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceUsageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("FaceUsageList") != m.end() && !m["FaceUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceUsageList"].type()) {
        vector<DescribeFaceUsageResponseBodyFaceUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaceUsageResponseBodyFaceUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceUsageList = make_shared<vector<DescribeFaceUsageResponseBodyFaceUsageList>>(expect1);
      }
    }
  }


  virtual ~DescribeFaceUsageResponseBody() = default;
};
class DescribeFaceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFaceUsageResponseBody> body{};

  DescribeFaceUsageResponse() {}

  explicit DescribeFaceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaceUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaceUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaceUsageResponse() = default;
};
class DescribeVerifyUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  DescribeVerifyUsageRequest() {}

  explicit DescribeVerifyUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~DescribeVerifyUsageRequest() = default;
};
class DescribeVerifyUsageResponseBodyVerifyUsageList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> passCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> failCount{};
  shared_ptr<string> bizType{};

  DescribeVerifyUsageResponseBodyVerifyUsageList() {}

  explicit DescribeVerifyUsageResponseBodyVerifyUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (passCount) {
      res["PassCount"] = boost::any(*passCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("PassCount") != m.end() && !m["PassCount"].empty()) {
      passCount = make_shared<long>(boost::any_cast<long>(m["PassCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DescribeVerifyUsageResponseBodyVerifyUsageList() = default;
};
class DescribeVerifyUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVerifyUsageResponseBodyVerifyUsageList>> verifyUsageList{};

  DescribeVerifyUsageResponseBody() {}

  explicit DescribeVerifyUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*verifyUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VerifyUsageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyUsageList") != m.end() && !m["VerifyUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["VerifyUsageList"].type()) {
        vector<DescribeVerifyUsageResponseBodyVerifyUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VerifyUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVerifyUsageResponseBodyVerifyUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        verifyUsageList = make_shared<vector<DescribeVerifyUsageResponseBodyVerifyUsageList>>(expect1);
      }
    }
  }


  virtual ~DescribeVerifyUsageResponseBody() = default;
};
class DescribeVerifyUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVerifyUsageResponseBody> body{};

  DescribeVerifyUsageResponse() {}

  explicit DescribeVerifyUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifyUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifyUsageResponse() = default;
};
class DescribeUpdatePackageResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DescribeUpdatePackageResultRequest() {}

  explicit DescribeUpdatePackageResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeUpdatePackageResultRequest() = default;
};
class DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo() {}

  explicit DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo() = default;
};
class DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo() {}

  explicit DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo() = default;
};
class DescribeUpdatePackageResultResponseBodyAppInfo : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> endDate{};
  shared_ptr<string> packageName{};
  shared_ptr<string> icon{};
  shared_ptr<string> startDate{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo> packageInfo{};
  shared_ptr<DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo> debugPackageInfo{};

  DescribeUpdatePackageResultResponseBodyAppInfo() {}

  explicit DescribeUpdatePackageResultResponseBodyAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (packageInfo) {
      res["PackageInfo"] = packageInfo ? boost::any(packageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (debugPackageInfo) {
      res["DebugPackageInfo"] = debugPackageInfo ? boost::any(debugPackageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PackageInfo") != m.end() && !m["PackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageInfo"].type()) {
        DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageInfo"]));
        packageInfo = make_shared<DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo>(model1);
      }
    }
    if (m.find("DebugPackageInfo") != m.end() && !m["DebugPackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DebugPackageInfo"].type()) {
        DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DebugPackageInfo"]));
        debugPackageInfo = make_shared<DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo>(model1);
      }
    }
  }


  virtual ~DescribeUpdatePackageResultResponseBodyAppInfo() = default;
};
class DescribeUpdatePackageResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeUpdatePackageResultResponseBodyAppInfo> appInfo{};

  DescribeUpdatePackageResultResponseBody() {}

  explicit DescribeUpdatePackageResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (appInfo) {
      res["AppInfo"] = appInfo ? boost::any(appInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInfo"].type()) {
        DescribeUpdatePackageResultResponseBodyAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInfo"]));
        appInfo = make_shared<DescribeUpdatePackageResultResponseBodyAppInfo>(model1);
      }
    }
  }


  virtual ~DescribeUpdatePackageResultResponseBody() = default;
};
class DescribeUpdatePackageResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUpdatePackageResultResponseBody> body{};

  DescribeUpdatePackageResultResponse() {}

  explicit DescribeUpdatePackageResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUpdatePackageResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUpdatePackageResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUpdatePackageResultResponse() = default;
};
class CreateWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> validDay{};

  CreateWhitelistRequest() {}

  explicit CreateWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (validDay) {
      res["ValidDay"] = boost::any(*validDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("ValidDay") != m.end() && !m["ValidDay"].empty()) {
      validDay = make_shared<string>(boost::any_cast<string>(m["ValidDay"]));
    }
  }


  virtual ~CreateWhitelistRequest() = default;
};
class CreateWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateWhitelistResponseBody() {}

  explicit CreateWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateWhitelistResponseBody() = default;
};
class CreateWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWhitelistResponseBody> body{};

  CreateWhitelistResponse() {}

  explicit CreateWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWhitelistResponse() = default;
};
class DeleteWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> ids{};

  DeleteWhitelistRequest() {}

  explicit DeleteWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~DeleteWhitelistRequest() = default;
};
class DeleteWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWhitelistResponseBody() {}

  explicit DeleteWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteWhitelistResponseBody() = default;
};
class DeleteWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteWhitelistResponseBody> body{};

  DeleteWhitelistResponse() {}

  explicit DeleteWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWhitelistResponse() = default;
};
class CreateAuthKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<bool> test{};
  shared_ptr<long> authYears{};

  CreateAuthKeyRequest() {}

  explicit CreateAuthKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (authYears) {
      res["AuthYears"] = boost::any(*authYears);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<bool>(boost::any_cast<bool>(m["Test"]));
    }
    if (m.find("AuthYears") != m.end() && !m["AuthYears"].empty()) {
      authYears = make_shared<long>(boost::any_cast<long>(m["AuthYears"]));
    }
  }


  virtual ~CreateAuthKeyRequest() = default;
};
class CreateAuthKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authKey{};
  shared_ptr<string> requestId{};

  CreateAuthKeyResponseBody() {}

  explicit CreateAuthKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAuthKeyResponseBody() = default;
};
class CreateAuthKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateAuthKeyResponseBody> body{};

  CreateAuthKeyResponse() {}

  explicit CreateAuthKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuthKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuthKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuthKeyResponse() = default;
};
class DescribeUploadInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> biz{};

  DescribeUploadInfoRequest() {}

  explicit DescribeUploadInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (biz) {
      res["Biz"] = boost::any(*biz);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      biz = make_shared<string>(boost::any_cast<string>(m["Biz"]));
    }
  }


  virtual ~DescribeUploadInfoRequest() = default;
};
class DescribeUploadInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> signature{};
  shared_ptr<string> host{};
  shared_ptr<string> requestId{};
  shared_ptr<string> policy{};
  shared_ptr<string> accessid{};
  shared_ptr<string> folder{};
  shared_ptr<long> expire{};

  DescribeUploadInfoResponseBody() {}

  explicit DescribeUploadInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (folder) {
      res["Folder"] = boost::any(*folder);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      folder = make_shared<string>(boost::any_cast<string>(m["Folder"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
  }


  virtual ~DescribeUploadInfoResponseBody() = default;
};
class DescribeUploadInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUploadInfoResponseBody> body{};

  DescribeUploadInfoResponse() {}

  explicit DescribeUploadInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUploadInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUploadInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUploadInfoResponse() = default;
};
class DescribeVerifySettingResponseBodyVerifySettingList : public Darabonba::Model {
public:
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<string> bizType{};
  shared_ptr<vector<string>> stepList{};

  DescribeVerifySettingResponseBodyVerifySettingList() {}

  explicit DescribeVerifySettingResponseBodyVerifySettingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVerifySettingResponseBodyVerifySettingList() = default;
};
class DescribeVerifySettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVerifySettingResponseBodyVerifySettingList>> verifySettingList{};

  DescribeVerifySettingResponseBody() {}

  explicit DescribeVerifySettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifySettingList) {
      vector<boost::any> temp1;
      for(auto item1:*verifySettingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VerifySettingList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifySettingList") != m.end() && !m["VerifySettingList"].empty()) {
      if (typeid(vector<boost::any>) == m["VerifySettingList"].type()) {
        vector<DescribeVerifySettingResponseBodyVerifySettingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VerifySettingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVerifySettingResponseBodyVerifySettingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        verifySettingList = make_shared<vector<DescribeVerifySettingResponseBodyVerifySettingList>>(expect1);
      }
    }
  }


  virtual ~DescribeVerifySettingResponseBody() = default;
};
class DescribeVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVerifySettingResponseBody> body{};

  DescribeVerifySettingResponse() {}

  explicit DescribeVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifySettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifySettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifySettingResponse() = default;
};
class DescribeVerifyRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> bizType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> bizId{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> statusList{};
  shared_ptr<string> queryId{};

  DescribeVerifyRecordsRequest() {}

  explicit DescribeVerifyRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["StatusList"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~DescribeVerifyRecordsRequest() = default;
};
class DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> sex{};
  shared_ptr<string> authority{};
  shared_ptr<string> address{};
  shared_ptr<string> number{};
  shared_ptr<string> startDate{};
  shared_ptr<string> nationality{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> birth{};
  shared_ptr<string> name{};
  shared_ptr<string> frontImageUrl{};

  DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo() {}

  explicit DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
  }


  virtual ~DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo() = default;
};
class DescribeVerifyRecordsResponseBodyRecordsListMaterial : public Darabonba::Model {
public:
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> idCardName{};
  shared_ptr<DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo> idCardInfo{};

  DescribeVerifyRecordsResponseBodyRecordsListMaterial() {}

  explicit DescribeVerifyRecordsResponseBodyRecordsListMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<DescribeVerifyRecordsResponseBodyRecordsListMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponseBodyRecordsListMaterial() = default;
};
class DescribeVerifyRecordsResponseBodyRecordsList : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<long> finishTime{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<string> bizId{};
  shared_ptr<string> verifyId{};
  shared_ptr<double> authorityComparisonScore{};
  shared_ptr<string> dataStats{};
  shared_ptr<string> bizType{};
  shared_ptr<DescribeVerifyRecordsResponseBodyRecordsListMaterial> material{};

  DescribeVerifyRecordsResponseBodyRecordsList() {}

  explicit DescribeVerifyRecordsResponseBodyRecordsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (verifyId) {
      res["VerifyId"] = boost::any(*verifyId);
    }
    if (authorityComparisonScore) {
      res["AuthorityComparisonScore"] = boost::any(*authorityComparisonScore);
    }
    if (dataStats) {
      res["DataStats"] = boost::any(*dataStats);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("VerifyId") != m.end() && !m["VerifyId"].empty()) {
      verifyId = make_shared<string>(boost::any_cast<string>(m["VerifyId"]));
    }
    if (m.find("AuthorityComparisonScore") != m.end() && !m["AuthorityComparisonScore"].empty()) {
      authorityComparisonScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisonScore"]));
    }
    if (m.find("DataStats") != m.end() && !m["DataStats"].empty()) {
      dataStats = make_shared<string>(boost::any_cast<string>(m["DataStats"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        DescribeVerifyRecordsResponseBodyRecordsListMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<DescribeVerifyRecordsResponseBodyRecordsListMaterial>(model1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponseBodyRecordsList() = default;
};
class DescribeVerifyRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> queryId{};
  shared_ptr<vector<DescribeVerifyRecordsResponseBodyRecordsList>> recordsList{};

  DescribeVerifyRecordsResponseBody() {}

  explicit DescribeVerifyRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (recordsList) {
      vector<boost::any> temp1;
      for(auto item1:*recordsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
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
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("RecordsList") != m.end() && !m["RecordsList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordsList"].type()) {
        vector<DescribeVerifyRecordsResponseBodyRecordsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVerifyRecordsResponseBodyRecordsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordsList = make_shared<vector<DescribeVerifyRecordsResponseBodyRecordsList>>(expect1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponseBody() = default;
};
class DescribeVerifyRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVerifyRecordsResponseBody> body{};

  DescribeVerifyRecordsResponse() {}

  explicit DescribeVerifyRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifyRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponse() = default;
};
class DescribeWhitelistSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> certNo{};
  shared_ptr<long> validStartDate{};
  shared_ptr<long> validEndDate{};
  shared_ptr<string> status{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};

  DescribeWhitelistSettingRequest() {}

  explicit DescribeWhitelistSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<long>(boost::any_cast<long>(m["ValidStartDate"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<long>(boost::any_cast<long>(m["ValidEndDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
  }


  virtual ~DescribeWhitelistSettingRequest() = default;
};
class DescribeWhitelistSettingResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> status{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> certNo{};
  shared_ptr<string> validStartDate{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> validEndDate{};
  shared_ptr<long> id{};

  DescribeWhitelistSettingResponseBodyItems() {}

  explicit DescribeWhitelistSettingResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DescribeWhitelistSettingResponseBodyItems() = default;
};
class DescribeWhitelistSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeWhitelistSettingResponseBodyItems>> items{};

  DescribeWhitelistSettingResponseBody() {}

  explicit DescribeWhitelistSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
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
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeWhitelistSettingResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhitelistSettingResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeWhitelistSettingResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeWhitelistSettingResponseBody() = default;
};
class DescribeWhitelistSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeWhitelistSettingResponseBody> body{};

  DescribeWhitelistSettingResponse() {}

  explicit DescribeWhitelistSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWhitelistSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWhitelistSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWhitelistSettingResponse() = default;
};
class CreateRPSDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> appUrl{};
  shared_ptr<string> platform{};

  CreateRPSDKRequest() {}

  explicit CreateRPSDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (appUrl) {
      res["AppUrl"] = boost::any(*appUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("AppUrl") != m.end() && !m["AppUrl"].empty()) {
      appUrl = make_shared<string>(boost::any_cast<string>(m["AppUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~CreateRPSDKRequest() = default;
};
class CreateRPSDKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};

  CreateRPSDKResponseBody() {}

  explicit CreateRPSDKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRPSDKResponseBody() = default;
};
class CreateRPSDKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateRPSDKResponseBody> body{};

  CreateRPSDKResponse() {}

  explicit CreateRPSDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRPSDKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRPSDKResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRPSDKResponse() = default;
};
class UpdateFaceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};

  UpdateFaceConfigRequest() {}

  explicit UpdateFaceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
  }


  virtual ~UpdateFaceConfigRequest() = default;
};
class UpdateFaceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFaceConfigResponseBody() {}

  explicit UpdateFaceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFaceConfigResponseBody() = default;
};
class UpdateFaceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFaceConfigResponseBody> body{};

  UpdateFaceConfigResponse() {}

  explicit UpdateFaceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFaceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaceConfigResponse() = default;
};
class DescribeFaceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};

  DescribeFaceConfigRequest() {}

  explicit DescribeFaceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeFaceConfigRequest() = default;
};
class DescribeFaceConfigResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bizName{};
  shared_ptr<string> bizType{};
  shared_ptr<long> gmtUpdated{};

  DescribeFaceConfigResponseBodyItems() {}

  explicit DescribeFaceConfigResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (gmtUpdated) {
      res["GmtUpdated"] = boost::any(*gmtUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("GmtUpdated") != m.end() && !m["GmtUpdated"].empty()) {
      gmtUpdated = make_shared<long>(boost::any_cast<long>(m["GmtUpdated"]));
    }
  }


  virtual ~DescribeFaceConfigResponseBodyItems() = default;
};
class DescribeFaceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFaceConfigResponseBodyItems>> items{};

  DescribeFaceConfigResponseBody() {}

  explicit DescribeFaceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeFaceConfigResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaceConfigResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeFaceConfigResponseBodyItems>>(expect1);
      }
    }
  }


  virtual ~DescribeFaceConfigResponseBody() = default;
};
class DescribeFaceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFaceConfigResponseBody> body{};

  DescribeFaceConfigResponse() {}

  explicit DescribeFaceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaceConfigResponse() = default;
};
class LivenessFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> crop{};

  LivenessFaceVerifyRequest() {}

  explicit LivenessFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~LivenessFaceVerifyRequest() = default;
};
class LivenessFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};

  LivenessFaceVerifyResponseBodyResultObject() {}

  explicit LivenessFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~LivenessFaceVerifyResponseBodyResultObject() = default;
};
class LivenessFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<LivenessFaceVerifyResponseBodyResultObject> resultObject{};

  LivenessFaceVerifyResponseBody() {}

  explicit LivenessFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        LivenessFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<LivenessFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~LivenessFaceVerifyResponseBody() = default;
};
class LivenessFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LivenessFaceVerifyResponseBody> body{};

  LivenessFaceVerifyResponse() {}

  explicit LivenessFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivenessFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LivenessFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~LivenessFaceVerifyResponse() = default;
};
class DescribeAppInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> platform{};

  DescribeAppInfoRequest() {}

  explicit DescribeAppInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~DescribeAppInfoRequest() = default;
};
class DescribeAppInfoResponseBodyAppInfoListPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeAppInfoResponseBodyAppInfoListPackageInfo() {}

  explicit DescribeAppInfoResponseBodyAppInfoListPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAppInfoResponseBodyAppInfoListPackageInfo() = default;
};
class DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo() {}

  explicit DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo() = default;
};
class DescribeAppInfoResponseBodyAppInfoList : public Darabonba::Model {
public:
  shared_ptr<long> type{};
  shared_ptr<string> endDate{};
  shared_ptr<string> packageName{};
  shared_ptr<string> icon{};
  shared_ptr<string> startDate{};
  shared_ptr<string> name{};
  shared_ptr<long> id{};
  shared_ptr<DescribeAppInfoResponseBodyAppInfoListPackageInfo> packageInfo{};
  shared_ptr<DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo> debugPackageInfo{};

  DescribeAppInfoResponseBodyAppInfoList() {}

  explicit DescribeAppInfoResponseBodyAppInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (packageInfo) {
      res["PackageInfo"] = packageInfo ? boost::any(packageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (debugPackageInfo) {
      res["DebugPackageInfo"] = debugPackageInfo ? boost::any(debugPackageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PackageInfo") != m.end() && !m["PackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageInfo"].type()) {
        DescribeAppInfoResponseBodyAppInfoListPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageInfo"]));
        packageInfo = make_shared<DescribeAppInfoResponseBodyAppInfoListPackageInfo>(model1);
      }
    }
    if (m.find("DebugPackageInfo") != m.end() && !m["DebugPackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DebugPackageInfo"].type()) {
        DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DebugPackageInfo"]));
        debugPackageInfo = make_shared<DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo>(model1);
      }
    }
  }


  virtual ~DescribeAppInfoResponseBodyAppInfoList() = default;
};
class DescribeAppInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeAppInfoResponseBodyAppInfoList>> appInfoList{};

  DescribeAppInfoResponseBody() {}

  explicit DescribeAppInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (appInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*appInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("AppInfoList") != m.end() && !m["AppInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfoList"].type()) {
        vector<DescribeAppInfoResponseBodyAppInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppInfoResponseBodyAppInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfoList = make_shared<vector<DescribeAppInfoResponseBodyAppInfoList>>(expect1);
      }
    }
  }


  virtual ~DescribeAppInfoResponseBody() = default;
};
class DescribeAppInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeAppInfoResponseBody> body{};

  DescribeAppInfoResponse() {}

  explicit DescribeAppInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppInfoResponse() = default;
};
class ModifyDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> duration{};
  shared_ptr<string> expiredDay{};

  ModifyDeviceInfoRequest() {}

  explicit ModifyDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
  }


  virtual ~ModifyDeviceInfoRequest() = default;
};
class ModifyDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> expiredDay{};
  shared_ptr<string> beginDay{};
  shared_ptr<string> bizType{};

  ModifyDeviceInfoResponseBody() {}

  explicit ModifyDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (beginDay) {
      res["BeginDay"] = boost::any(*beginDay);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("BeginDay") != m.end() && !m["BeginDay"].empty()) {
      beginDay = make_shared<string>(boost::any_cast<string>(m["BeginDay"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~ModifyDeviceInfoResponseBody() = default;
};
class ModifyDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ModifyDeviceInfoResponseBody> body{};

  ModifyDeviceInfoResponse() {}

  explicit ModifyDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDeviceInfoResponse() = default;
};
class ContrastFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> faceContrastFile{};
  shared_ptr<string> crop{};

  ContrastFaceVerifyRequest() {}

  explicit ContrastFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (faceContrastFile) {
      res["FaceContrastFile"] = boost::any(*faceContrastFile);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("FaceContrastFile") != m.end() && !m["FaceContrastFile"].empty()) {
      faceContrastFile = make_shared<string>(boost::any_cast<string>(m["FaceContrastFile"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~ContrastFaceVerifyRequest() = default;
};
class ContrastFaceVerifyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> faceContrastFileObject{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> crop{};

  ContrastFaceVerifyAdvanceRequest() {}

  explicit ContrastFaceVerifyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceContrastFileObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceContrastFileObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceContrastFileObject) {
      res["FaceContrastFileObject"] = boost::any(*faceContrastFileObject);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceContrastFileObject") != m.end() && !m["FaceContrastFileObject"].empty()) {
      faceContrastFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FaceContrastFileObject"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~ContrastFaceVerifyAdvanceRequest() = default;
};
class ContrastFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> passed{};

  ContrastFaceVerifyResponseBodyResultObject() {}

  explicit ContrastFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~ContrastFaceVerifyResponseBodyResultObject() = default;
};
class ContrastFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ContrastFaceVerifyResponseBodyResultObject> resultObject{};

  ContrastFaceVerifyResponseBody() {}

  explicit ContrastFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        ContrastFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<ContrastFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~ContrastFaceVerifyResponseBody() = default;
};
class ContrastFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ContrastFaceVerifyResponseBody> body{};

  ContrastFaceVerifyResponse() {}

  explicit ContrastFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContrastFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContrastFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~ContrastFaceVerifyResponse() = default;
};
class VerifyDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> certifyData{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> deviceToken{};

  VerifyDeviceRequest() {}

  explicit VerifyDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certifyData) {
      res["CertifyData"] = boost::any(*certifyData);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertifyData") != m.end() && !m["CertifyData"].empty()) {
      certifyData = make_shared<string>(boost::any_cast<string>(m["CertifyData"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
  }


  virtual ~VerifyDeviceRequest() = default;
};
class VerifyDeviceResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> retCodeSub{};
  shared_ptr<string> productRetCode{};
  shared_ptr<string> hasNext{};
  shared_ptr<string> retMessageSub{};
  shared_ptr<string> extParams{};
  shared_ptr<string> validationRetCode{};

  VerifyDeviceResponseBodyResultObject() {}

  explicit VerifyDeviceResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (retCodeSub) {
      res["RetCodeSub"] = boost::any(*retCodeSub);
    }
    if (productRetCode) {
      res["ProductRetCode"] = boost::any(*productRetCode);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (retMessageSub) {
      res["RetMessageSub"] = boost::any(*retMessageSub);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (validationRetCode) {
      res["ValidationRetCode"] = boost::any(*validationRetCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RetCodeSub") != m.end() && !m["RetCodeSub"].empty()) {
      retCodeSub = make_shared<string>(boost::any_cast<string>(m["RetCodeSub"]));
    }
    if (m.find("ProductRetCode") != m.end() && !m["ProductRetCode"].empty()) {
      productRetCode = make_shared<string>(boost::any_cast<string>(m["ProductRetCode"]));
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<string>(boost::any_cast<string>(m["HasNext"]));
    }
    if (m.find("RetMessageSub") != m.end() && !m["RetMessageSub"].empty()) {
      retMessageSub = make_shared<string>(boost::any_cast<string>(m["RetMessageSub"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("ValidationRetCode") != m.end() && !m["ValidationRetCode"].empty()) {
      validationRetCode = make_shared<string>(boost::any_cast<string>(m["ValidationRetCode"]));
    }
  }


  virtual ~VerifyDeviceResponseBodyResultObject() = default;
};
class VerifyDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyDeviceResponseBodyResultObject> resultObject{};

  VerifyDeviceResponseBody() {}

  explicit VerifyDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        VerifyDeviceResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VerifyDeviceResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~VerifyDeviceResponseBody() = default;
};
class VerifyDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<VerifyDeviceResponseBody> body{};

  VerifyDeviceResponse() {}

  explicit VerifyDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyDeviceResponse() = default;
};
class CompareFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> sourceFaceContrastPicture{};
  shared_ptr<string> sourceFaceContrastPictureUrl{};
  shared_ptr<string> sourceCertifyId{};
  shared_ptr<string> sourceOssBucketName{};
  shared_ptr<string> sourceOssObjectName{};
  shared_ptr<string> targetFaceContrastPicture{};
  shared_ptr<string> targetFaceContrastPictureUrl{};
  shared_ptr<string> targetCertifyId{};
  shared_ptr<string> targetOssBucketName{};
  shared_ptr<string> targetOssObjectName{};
  shared_ptr<string> crop{};

  CompareFaceVerifyRequest() {}

  explicit CompareFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sourceFaceContrastPicture) {
      res["SourceFaceContrastPicture"] = boost::any(*sourceFaceContrastPicture);
    }
    if (sourceFaceContrastPictureUrl) {
      res["SourceFaceContrastPictureUrl"] = boost::any(*sourceFaceContrastPictureUrl);
    }
    if (sourceCertifyId) {
      res["SourceCertifyId"] = boost::any(*sourceCertifyId);
    }
    if (sourceOssBucketName) {
      res["SourceOssBucketName"] = boost::any(*sourceOssBucketName);
    }
    if (sourceOssObjectName) {
      res["SourceOssObjectName"] = boost::any(*sourceOssObjectName);
    }
    if (targetFaceContrastPicture) {
      res["TargetFaceContrastPicture"] = boost::any(*targetFaceContrastPicture);
    }
    if (targetFaceContrastPictureUrl) {
      res["TargetFaceContrastPictureUrl"] = boost::any(*targetFaceContrastPictureUrl);
    }
    if (targetCertifyId) {
      res["TargetCertifyId"] = boost::any(*targetCertifyId);
    }
    if (targetOssBucketName) {
      res["TargetOssBucketName"] = boost::any(*targetOssBucketName);
    }
    if (targetOssObjectName) {
      res["TargetOssObjectName"] = boost::any(*targetOssObjectName);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SourceFaceContrastPicture") != m.end() && !m["SourceFaceContrastPicture"].empty()) {
      sourceFaceContrastPicture = make_shared<string>(boost::any_cast<string>(m["SourceFaceContrastPicture"]));
    }
    if (m.find("SourceFaceContrastPictureUrl") != m.end() && !m["SourceFaceContrastPictureUrl"].empty()) {
      sourceFaceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["SourceFaceContrastPictureUrl"]));
    }
    if (m.find("SourceCertifyId") != m.end() && !m["SourceCertifyId"].empty()) {
      sourceCertifyId = make_shared<string>(boost::any_cast<string>(m["SourceCertifyId"]));
    }
    if (m.find("SourceOssBucketName") != m.end() && !m["SourceOssBucketName"].empty()) {
      sourceOssBucketName = make_shared<string>(boost::any_cast<string>(m["SourceOssBucketName"]));
    }
    if (m.find("SourceOssObjectName") != m.end() && !m["SourceOssObjectName"].empty()) {
      sourceOssObjectName = make_shared<string>(boost::any_cast<string>(m["SourceOssObjectName"]));
    }
    if (m.find("TargetFaceContrastPicture") != m.end() && !m["TargetFaceContrastPicture"].empty()) {
      targetFaceContrastPicture = make_shared<string>(boost::any_cast<string>(m["TargetFaceContrastPicture"]));
    }
    if (m.find("TargetFaceContrastPictureUrl") != m.end() && !m["TargetFaceContrastPictureUrl"].empty()) {
      targetFaceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["TargetFaceContrastPictureUrl"]));
    }
    if (m.find("TargetCertifyId") != m.end() && !m["TargetCertifyId"].empty()) {
      targetCertifyId = make_shared<string>(boost::any_cast<string>(m["TargetCertifyId"]));
    }
    if (m.find("TargetOssBucketName") != m.end() && !m["TargetOssBucketName"].empty()) {
      targetOssBucketName = make_shared<string>(boost::any_cast<string>(m["TargetOssBucketName"]));
    }
    if (m.find("TargetOssObjectName") != m.end() && !m["TargetOssObjectName"].empty()) {
      targetOssObjectName = make_shared<string>(boost::any_cast<string>(m["TargetOssObjectName"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~CompareFaceVerifyRequest() = default;
};
class CompareFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<double> verifyScore{};
  shared_ptr<string> passed{};

  CompareFaceVerifyResponseBodyResultObject() {}

  explicit CompareFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (verifyScore) {
      res["VerifyScore"] = boost::any(*verifyScore);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("VerifyScore") != m.end() && !m["VerifyScore"].empty()) {
      verifyScore = make_shared<double>(boost::any_cast<double>(m["VerifyScore"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~CompareFaceVerifyResponseBodyResultObject() = default;
};
class CompareFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CompareFaceVerifyResponseBodyResultObject> resultObject{};

  CompareFaceVerifyResponseBody() {}

  explicit CompareFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        CompareFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CompareFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~CompareFaceVerifyResponseBody() = default;
};
class CompareFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CompareFaceVerifyResponseBody> body{};

  CompareFaceVerifyResponse() {}

  explicit CompareFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~CompareFaceVerifyResponse() = default;
};
class DescribeVerifySDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DescribeVerifySDKRequest() {}

  explicit DescribeVerifySDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeVerifySDKRequest() = default;
};
class DescribeVerifySDKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> requestId{};

  DescribeVerifySDKResponseBody() {}

  explicit DescribeVerifySDKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeVerifySDKResponseBody() = default;
};
class DescribeVerifySDKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVerifySDKResponseBody> body{};

  DescribeVerifySDKResponse() {}

  explicit DescribeVerifySDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifySDKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifySDKResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifySDKResponse() = default;
};
class DescribeDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageSize{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> expiredStartDay{};
  shared_ptr<string> expiredEndDay{};

  DescribeDeviceInfoRequest() {}

  explicit DescribeDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (expiredStartDay) {
      res["ExpiredStartDay"] = boost::any(*expiredStartDay);
    }
    if (expiredEndDay) {
      res["ExpiredEndDay"] = boost::any(*expiredEndDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("ExpiredStartDay") != m.end() && !m["ExpiredStartDay"].empty()) {
      expiredStartDay = make_shared<string>(boost::any_cast<string>(m["ExpiredStartDay"]));
    }
    if (m.find("ExpiredEndDay") != m.end() && !m["ExpiredEndDay"].empty()) {
      expiredEndDay = make_shared<string>(boost::any_cast<string>(m["ExpiredEndDay"]));
    }
  }


  virtual ~DescribeDeviceInfoRequest() = default;
};
class DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> expiredDay{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> beginDay{};
  shared_ptr<string> bizType{};

  DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo() {}

  explicit DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (beginDay) {
      res["BeginDay"] = boost::any(*beginDay);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("BeginDay") != m.end() && !m["BeginDay"].empty()) {
      beginDay = make_shared<string>(boost::any_cast<string>(m["BeginDay"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo() = default;
};
class DescribeDeviceInfoResponseBodyDeviceInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>> deviceInfo{};

  DescribeDeviceInfoResponseBodyDeviceInfoList() {}

  explicit DescribeDeviceInfoResponseBodyDeviceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*deviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceInfo"].type()) {
        vector<DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceInfo = make_shared<vector<DescribeDeviceInfoResponseBodyDeviceInfoListDeviceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponseBodyDeviceInfoList() = default;
};
class DescribeDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeDeviceInfoResponseBodyDeviceInfoList> deviceInfoList{};

  DescribeDeviceInfoResponseBody() {}

  explicit DescribeDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (deviceInfoList) {
      res["DeviceInfoList"] = deviceInfoList ? boost::any(deviceInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("DeviceInfoList") != m.end() && !m["DeviceInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfoList"].type()) {
        DescribeDeviceInfoResponseBodyDeviceInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfoList"]));
        deviceInfoList = make_shared<DescribeDeviceInfoResponseBodyDeviceInfoList>(model1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponseBody() = default;
};
class DescribeDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDeviceInfoResponseBody> body{};

  DescribeDeviceInfoResponse() {}

  explicit DescribeDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponse() = default;
};
class DescribeFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> pictureReturnType{};

  DescribeFaceVerifyRequest() {}

  explicit DescribeFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (pictureReturnType) {
      res["PictureReturnType"] = boost::any(*pictureReturnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("PictureReturnType") != m.end() && !m["PictureReturnType"].empty()) {
      pictureReturnType = make_shared<string>(boost::any_cast<string>(m["PictureReturnType"]));
    }
  }


  virtual ~DescribeFaceVerifyRequest() = default;
};
class DescribeFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> subCode{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> passed{};

  DescribeFaceVerifyResponseBodyResultObject() {}

  explicit DescribeFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~DescribeFaceVerifyResponseBodyResultObject() = default;
};
class DescribeFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFaceVerifyResponseBodyResultObject> resultObject{};

  DescribeFaceVerifyResponseBody() {}

  explicit DescribeFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DescribeFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DescribeFaceVerifyResponseBody() = default;
};
class DescribeFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeFaceVerifyResponseBody> body{};

  DescribeFaceVerifyResponse() {}

  explicit DescribeFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaceVerifyResponse() = default;
};
class DescribeOssUploadTokenResponseBodyOssUploadToken : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> token{};
  shared_ptr<string> secret{};
  shared_ptr<long> expired{};
  shared_ptr<string> path{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> bucket{};

  DescribeOssUploadTokenResponseBodyOssUploadToken() {}

  explicit DescribeOssUploadTokenResponseBodyOssUploadToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
  }


  virtual ~DescribeOssUploadTokenResponseBodyOssUploadToken() = default;
};
class DescribeOssUploadTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeOssUploadTokenResponseBodyOssUploadToken> ossUploadToken{};

  DescribeOssUploadTokenResponseBody() {}

  explicit DescribeOssUploadTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ossUploadToken) {
      res["OssUploadToken"] = ossUploadToken ? boost::any(ossUploadToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OssUploadToken") != m.end() && !m["OssUploadToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssUploadToken"].type()) {
        DescribeOssUploadTokenResponseBodyOssUploadToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssUploadToken"]));
        ossUploadToken = make_shared<DescribeOssUploadTokenResponseBodyOssUploadToken>(model1);
      }
    }
  }


  virtual ~DescribeOssUploadTokenResponseBody() = default;
};
class DescribeOssUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeOssUploadTokenResponseBody> body{};

  DescribeOssUploadTokenResponse() {}

  explicit DescribeOssUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssUploadTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssUploadTokenResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssUploadTokenResponse() = default;
};
class DetectFaceAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> materialValue{};
  shared_ptr<string> bizType{};

  DetectFaceAttributesRequest() {}

  explicit DetectFaceAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialValue) {
      res["MaterialValue"] = boost::any(*materialValue);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialValue") != m.end() && !m["MaterialValue"].empty()) {
      materialValue = make_shared<string>(boost::any_cast<string>(m["MaterialValue"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DetectFaceAttributesRequest() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling : public Darabonba::Model {
public:
  shared_ptr<double> value{};
  shared_ptr<double> threshold{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose : public Darabonba::Model {
public:
  shared_ptr<double> pitchAngle{};
  shared_ptr<double> rollAngle{};
  shared_ptr<double> yawAngle{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitchAngle) {
      res["PitchAngle"] = boost::any(*pitchAngle);
    }
    if (rollAngle) {
      res["RollAngle"] = boost::any(*rollAngle);
    }
    if (yawAngle) {
      res["YawAngle"] = boost::any(*yawAngle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PitchAngle") != m.end() && !m["PitchAngle"].empty()) {
      pitchAngle = make_shared<double>(boost::any_cast<double>(m["PitchAngle"]));
    }
    if (m.find("RollAngle") != m.end() && !m["RollAngle"].empty()) {
      rollAngle = make_shared<double>(boost::any_cast<double>(m["RollAngle"]));
    }
    if (m.find("YawAngle") != m.end() && !m["YawAngle"].empty()) {
      yawAngle = make_shared<double>(boost::any_cast<double>(m["YawAngle"]));
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> glasses{};
  shared_ptr<double> facequal{};
  shared_ptr<long> integrity{};
  shared_ptr<string> facetype{};
  shared_ptr<string> respirator{};
  shared_ptr<double> blur{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling> smiling{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose> headpose{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (facequal) {
      res["Facequal"] = boost::any(*facequal);
    }
    if (integrity) {
      res["Integrity"] = boost::any(*integrity);
    }
    if (facetype) {
      res["Facetype"] = boost::any(*facetype);
    }
    if (respirator) {
      res["Respirator"] = boost::any(*respirator);
    }
    if (blur) {
      res["Blur"] = boost::any(*blur);
    }
    if (smiling) {
      res["Smiling"] = smiling ? boost::any(smiling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headpose) {
      res["Headpose"] = headpose ? boost::any(headpose->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("Facequal") != m.end() && !m["Facequal"].empty()) {
      facequal = make_shared<double>(boost::any_cast<double>(m["Facequal"]));
    }
    if (m.find("Integrity") != m.end() && !m["Integrity"].empty()) {
      integrity = make_shared<long>(boost::any_cast<long>(m["Integrity"]));
    }
    if (m.find("Facetype") != m.end() && !m["Facetype"].empty()) {
      facetype = make_shared<string>(boost::any_cast<string>(m["Facetype"]));
    }
    if (m.find("Respirator") != m.end() && !m["Respirator"].empty()) {
      respirator = make_shared<string>(boost::any_cast<string>(m["Respirator"]));
    }
    if (m.find("Blur") != m.end() && !m["Blur"].empty()) {
      blur = make_shared<double>(boost::any_cast<double>(m["Blur"]));
    }
    if (m.find("Smiling") != m.end() && !m["Smiling"].empty()) {
      if (typeid(map<string, boost::any>) == m["Smiling"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Smiling"]));
        smiling = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling>(model1);
      }
    }
    if (m.find("Headpose") != m.end() && !m["Headpose"].empty()) {
      if (typeid(map<string, boost::any>) == m["Headpose"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Headpose"]));
        headpose = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo : public Darabonba::Model {
public:
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect> faceRect{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes> faceAttributes{};

  DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRect) {
      res["FaceRect"] = faceRect ? boost::any(faceRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRect") != m.end() && !m["FaceRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRect"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRect"]));
        faceRect = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo() = default;
};
class DetectFaceAttributesResponseBodyDataFaceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>> faceAttributesDetectInfo{};

  DetectFaceAttributesResponseBodyDataFaceInfos() {}

  explicit DetectFaceAttributesResponseBodyDataFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttributesDetectInfo) {
      vector<boost::any> temp1;
      for(auto item1:*faceAttributesDetectInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceAttributesDetectInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAttributesDetectInfo") != m.end() && !m["FaceAttributesDetectInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceAttributesDetectInfo"].type()) {
        vector<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceAttributesDetectInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceAttributesDetectInfo = make_shared<vector<DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo>>(expect1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyDataFaceInfos() = default;
};
class DetectFaceAttributesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> imgHeight{};
  shared_ptr<long> imgWidth{};
  shared_ptr<DetectFaceAttributesResponseBodyDataFaceInfos> faceInfos{};

  DetectFaceAttributesResponseBodyData() {}

  explicit DetectFaceAttributesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imgHeight) {
      res["ImgHeight"] = boost::any(*imgHeight);
    }
    if (imgWidth) {
      res["ImgWidth"] = boost::any(*imgWidth);
    }
    if (faceInfos) {
      res["FaceInfos"] = faceInfos ? boost::any(faceInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImgHeight") != m.end() && !m["ImgHeight"].empty()) {
      imgHeight = make_shared<long>(boost::any_cast<long>(m["ImgHeight"]));
    }
    if (m.find("ImgWidth") != m.end() && !m["ImgWidth"].empty()) {
      imgWidth = make_shared<long>(boost::any_cast<long>(m["ImgWidth"]));
    }
    if (m.find("FaceInfos") != m.end() && !m["FaceInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceInfos"].type()) {
        DetectFaceAttributesResponseBodyDataFaceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceInfos"]));
        faceInfos = make_shared<DetectFaceAttributesResponseBodyDataFaceInfos>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyData() = default;
};
class DetectFaceAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DetectFaceAttributesResponseBodyData> data{};

  DetectFaceAttributesResponseBody() {}

  explicit DetectFaceAttributesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectFaceAttributesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectFaceAttributesResponseBodyData>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBody() = default;
};
class DetectFaceAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectFaceAttributesResponseBody> body{};

  DetectFaceAttributesResponse() {}

  explicit DetectFaceAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceAttributesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectFaceAttributesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponse() = default;
};
class DescribeSdkUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<bool> debug{};

  DescribeSdkUrlRequest() {}

  explicit DescribeSdkUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
  }


  virtual ~DescribeSdkUrlRequest() = default;
};
class DescribeSdkUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> requestId{};

  DescribeSdkUrlResponseBody() {}

  explicit DescribeSdkUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeSdkUrlResponseBody() = default;
};
class DescribeSdkUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeSdkUrlResponseBody> body{};

  DescribeSdkUrlResponse() {}

  explicit DescribeSdkUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSdkUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSdkUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSdkUrlResponse() = default;
};
class DeleteWhitelistSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> ids{};

  DeleteWhitelistSettingRequest() {}

  explicit DeleteWhitelistSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~DeleteWhitelistSettingRequest() = default;
};
class DeleteWhitelistSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> resultObject{};
  shared_ptr<string> requestId{};

  DeleteWhitelistSettingResponseBody() {}

  explicit DeleteWhitelistSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultObject) {
      res["ResultObject"] = boost::any(*resultObject);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      resultObject = make_shared<bool>(boost::any_cast<bool>(m["ResultObject"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteWhitelistSettingResponseBody() = default;
};
class DeleteWhitelistSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteWhitelistSettingResponseBody> body{};

  DeleteWhitelistSettingResponse() {}

  explicit DeleteWhitelistSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteWhitelistSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWhitelistSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWhitelistSettingResponse() = default;
};
class UpdateVerifySettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<bool> guideStep{};
  shared_ptr<bool> privacyStep{};
  shared_ptr<bool> resultStep{};

  UpdateVerifySettingRequest() {}

  explicit UpdateVerifySettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (guideStep) {
      res["GuideStep"] = boost::any(*guideStep);
    }
    if (privacyStep) {
      res["PrivacyStep"] = boost::any(*privacyStep);
    }
    if (resultStep) {
      res["ResultStep"] = boost::any(*resultStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("GuideStep") != m.end() && !m["GuideStep"].empty()) {
      guideStep = make_shared<bool>(boost::any_cast<bool>(m["GuideStep"]));
    }
    if (m.find("PrivacyStep") != m.end() && !m["PrivacyStep"].empty()) {
      privacyStep = make_shared<bool>(boost::any_cast<bool>(m["PrivacyStep"]));
    }
    if (m.find("ResultStep") != m.end() && !m["ResultStep"].empty()) {
      resultStep = make_shared<bool>(boost::any_cast<bool>(m["ResultStep"]));
    }
  }


  virtual ~UpdateVerifySettingRequest() = default;
};
class UpdateVerifySettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> solution{};
  shared_ptr<string> bizType{};
  shared_ptr<vector<string>> stepList{};

  UpdateVerifySettingResponseBody() {}

  explicit UpdateVerifySettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateVerifySettingResponseBody() = default;
};
class UpdateVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateVerifySettingResponseBody> body{};

  UpdateVerifySettingResponse() {}

  explicit UpdateVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVerifySettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVerifySettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVerifySettingResponse() = default;
};
class DescribeVerifyResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};

  DescribeVerifyResultRequest() {}

  explicit DescribeVerifyResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DescribeVerifyResultRequest() = default;
};
class DescribeVerifyResultResponseBodyMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> authority{};
  shared_ptr<string> address{};
  shared_ptr<string> number{};
  shared_ptr<string> startDate{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> nationality{};
  shared_ptr<string> birth{};
  shared_ptr<string> name{};
  shared_ptr<string> frontImageUrl{};

  DescribeVerifyResultResponseBodyMaterialIdCardInfo() {}

  explicit DescribeVerifyResultResponseBodyMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
  }


  virtual ~DescribeVerifyResultResponseBodyMaterialIdCardInfo() = default;
};
class DescribeVerifyResultResponseBodyMaterial : public Darabonba::Model {
public:
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<bool> faceMask{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> faceQuality{};
  shared_ptr<vector<string>> videoUrls{};
  shared_ptr<DescribeVerifyResultResponseBodyMaterialIdCardInfo> idCardInfo{};

  DescribeVerifyResultResponseBodyMaterial() {}

  explicit DescribeVerifyResultResponseBodyMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (faceGlobalUrl) {
      res["FaceGlobalUrl"] = boost::any(*faceGlobalUrl);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (faceMask) {
      res["FaceMask"] = boost::any(*faceMask);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (videoUrls) {
      res["VideoUrls"] = boost::any(*videoUrls);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("FaceGlobalUrl") != m.end() && !m["FaceGlobalUrl"].empty()) {
      faceGlobalUrl = make_shared<string>(boost::any_cast<string>(m["FaceGlobalUrl"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("FaceMask") != m.end() && !m["FaceMask"].empty()) {
      faceMask = make_shared<bool>(boost::any_cast<bool>(m["FaceMask"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("VideoUrls") != m.end() && !m["VideoUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VideoUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      videoUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        DescribeVerifyResultResponseBodyMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<DescribeVerifyResultResponseBodyMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponseBodyMaterial() = default;
};
class DescribeVerifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<long> verifyStatus{};
  shared_ptr<string> requestId{};
  shared_ptr<double> faceComparisonScore{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<DescribeVerifyResultResponseBodyMaterial> material{};

  DescribeVerifyResultResponseBody() {}

  explicit DescribeVerifyResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authorityComparisionScore) {
      res["AuthorityComparisionScore"] = boost::any(*authorityComparisionScore);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (faceComparisonScore) {
      res["FaceComparisonScore"] = boost::any(*faceComparisonScore);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthorityComparisionScore") != m.end() && !m["AuthorityComparisionScore"].empty()) {
      authorityComparisionScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisionScore"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<long>(boost::any_cast<long>(m["VerifyStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("FaceComparisonScore") != m.end() && !m["FaceComparisonScore"].empty()) {
      faceComparisonScore = make_shared<double>(boost::any_cast<double>(m["FaceComparisonScore"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        DescribeVerifyResultResponseBodyMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<DescribeVerifyResultResponseBodyMaterial>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponseBody() = default;
};
class DescribeVerifyResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeVerifyResultResponseBody> body{};

  DescribeVerifyResultResponse() {}

  explicit DescribeVerifyResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVerifyResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponse() = default;
};
class CompareFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> targetImageType{};
  shared_ptr<string> sourceImageType{};
  shared_ptr<string> sourceImageValue{};
  shared_ptr<string> targetImageValue{};

  CompareFacesRequest() {}

  explicit CompareFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetImageType) {
      res["TargetImageType"] = boost::any(*targetImageType);
    }
    if (sourceImageType) {
      res["SourceImageType"] = boost::any(*sourceImageType);
    }
    if (sourceImageValue) {
      res["SourceImageValue"] = boost::any(*sourceImageValue);
    }
    if (targetImageValue) {
      res["TargetImageValue"] = boost::any(*targetImageValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetImageType") != m.end() && !m["TargetImageType"].empty()) {
      targetImageType = make_shared<string>(boost::any_cast<string>(m["TargetImageType"]));
    }
    if (m.find("SourceImageType") != m.end() && !m["SourceImageType"].empty()) {
      sourceImageType = make_shared<string>(boost::any_cast<string>(m["SourceImageType"]));
    }
    if (m.find("SourceImageValue") != m.end() && !m["SourceImageValue"].empty()) {
      sourceImageValue = make_shared<string>(boost::any_cast<string>(m["SourceImageValue"]));
    }
    if (m.find("TargetImageValue") != m.end() && !m["TargetImageValue"].empty()) {
      targetImageValue = make_shared<string>(boost::any_cast<string>(m["TargetImageValue"]));
    }
  }


  virtual ~CompareFacesRequest() = default;
};
class CompareFacesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> similarityScore{};
  shared_ptr<string> confidenceThresholds{};

  CompareFacesResponseBodyData() {}

  explicit CompareFacesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (similarityScore) {
      res["SimilarityScore"] = boost::any(*similarityScore);
    }
    if (confidenceThresholds) {
      res["ConfidenceThresholds"] = boost::any(*confidenceThresholds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SimilarityScore") != m.end() && !m["SimilarityScore"].empty()) {
      similarityScore = make_shared<double>(boost::any_cast<double>(m["SimilarityScore"]));
    }
    if (m.find("ConfidenceThresholds") != m.end() && !m["ConfidenceThresholds"].empty()) {
      confidenceThresholds = make_shared<string>(boost::any_cast<string>(m["ConfidenceThresholds"]));
    }
  }


  virtual ~CompareFacesResponseBodyData() = default;
};
class CompareFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<CompareFacesResponseBodyData> data{};

  CompareFacesResponseBody() {}

  explicit CompareFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CompareFacesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompareFacesResponseBodyData>(model1);
      }
    }
  }


  virtual ~CompareFacesResponseBody() = default;
};
class CompareFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CompareFacesResponseBody> body{};

  CompareFacesResponse() {}

  explicit CompareFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareFacesResponseBody>(model1);
      }
    }
  }


  virtual ~CompareFacesResponse() = default;
};
class CreateFaceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};

  CreateFaceConfigRequest() {}

  explicit CreateFaceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
  }


  virtual ~CreateFaceConfigRequest() = default;
};
class CreateFaceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateFaceConfigResponseBody() {}

  explicit CreateFaceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateFaceConfigResponseBody() = default;
};
class CreateFaceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFaceConfigResponseBody> body{};

  CreateFaceConfigResponse() {}

  explicit CreateFaceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFaceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFaceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFaceConfigResponse() = default;
};
class CreateVerifySDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> appUrl{};
  shared_ptr<string> platform{};

  CreateVerifySDKRequest() {}

  explicit CreateVerifySDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUrl) {
      res["AppUrl"] = boost::any(*appUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUrl") != m.end() && !m["AppUrl"].empty()) {
      appUrl = make_shared<string>(boost::any_cast<string>(m["AppUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~CreateVerifySDKRequest() = default;
};
class CreateVerifySDKResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> requestId{};

  CreateVerifySDKResponseBody() {}

  explicit CreateVerifySDKResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateVerifySDKResponseBody() = default;
};
class CreateVerifySDKResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVerifySDKResponseBody> body{};

  CreateVerifySDKResponse() {}

  explicit CreateVerifySDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVerifySDKResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVerifySDKResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVerifySDKResponse() = default;
};
class InitDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> channel{};
  shared_ptr<string> merchant{};
  shared_ptr<string> productName{};
  shared_ptr<string> produceNode{};
  shared_ptr<string> bizData{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> certifyPrincipal{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> uaToken{};
  shared_ptr<string> webUmidToken{};

  InitDeviceRequest() {}

  explicit InitDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (merchant) {
      res["Merchant"] = boost::any(*merchant);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (produceNode) {
      res["ProduceNode"] = boost::any(*produceNode);
    }
    if (bizData) {
      res["BizData"] = boost::any(*bizData);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (certifyPrincipal) {
      res["CertifyPrincipal"] = boost::any(*certifyPrincipal);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (uaToken) {
      res["UaToken"] = boost::any(*uaToken);
    }
    if (webUmidToken) {
      res["WebUmidToken"] = boost::any(*webUmidToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Merchant") != m.end() && !m["Merchant"].empty()) {
      merchant = make_shared<string>(boost::any_cast<string>(m["Merchant"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProduceNode") != m.end() && !m["ProduceNode"].empty()) {
      produceNode = make_shared<string>(boost::any_cast<string>(m["ProduceNode"]));
    }
    if (m.find("BizData") != m.end() && !m["BizData"].empty()) {
      bizData = make_shared<string>(boost::any_cast<string>(m["BizData"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("CertifyPrincipal") != m.end() && !m["CertifyPrincipal"].empty()) {
      certifyPrincipal = make_shared<string>(boost::any_cast<string>(m["CertifyPrincipal"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("UaToken") != m.end() && !m["UaToken"].empty()) {
      uaToken = make_shared<string>(boost::any_cast<string>(m["UaToken"]));
    }
    if (m.find("WebUmidToken") != m.end() && !m["WebUmidToken"].empty()) {
      webUmidToken = make_shared<string>(boost::any_cast<string>(m["WebUmidToken"]));
    }
  }


  virtual ~InitDeviceRequest() = default;
};
class InitDeviceResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> ossEndPoint{};
  shared_ptr<string> retCodeSub{};
  shared_ptr<string> protocol{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> extParams{};
  shared_ptr<string> message{};
  shared_ptr<string> fileName{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> presignedUrl{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> fileNamePrefix{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> retMessageSub{};
  shared_ptr<string> retCode{};

  InitDeviceResponseBodyResultObject() {}

  explicit InitDeviceResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossEndPoint) {
      res["OssEndPoint"] = boost::any(*ossEndPoint);
    }
    if (retCodeSub) {
      res["RetCodeSub"] = boost::any(*retCodeSub);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (presignedUrl) {
      res["PresignedUrl"] = boost::any(*presignedUrl);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (fileNamePrefix) {
      res["FileNamePrefix"] = boost::any(*fileNamePrefix);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (retMessageSub) {
      res["RetMessageSub"] = boost::any(*retMessageSub);
    }
    if (retCode) {
      res["RetCode"] = boost::any(*retCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OssEndPoint") != m.end() && !m["OssEndPoint"].empty()) {
      ossEndPoint = make_shared<string>(boost::any_cast<string>(m["OssEndPoint"]));
    }
    if (m.find("RetCodeSub") != m.end() && !m["RetCodeSub"].empty()) {
      retCodeSub = make_shared<string>(boost::any_cast<string>(m["RetCodeSub"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("PresignedUrl") != m.end() && !m["PresignedUrl"].empty()) {
      presignedUrl = make_shared<string>(boost::any_cast<string>(m["PresignedUrl"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("FileNamePrefix") != m.end() && !m["FileNamePrefix"].empty()) {
      fileNamePrefix = make_shared<string>(boost::any_cast<string>(m["FileNamePrefix"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("RetMessageSub") != m.end() && !m["RetMessageSub"].empty()) {
      retMessageSub = make_shared<string>(boost::any_cast<string>(m["RetMessageSub"]));
    }
    if (m.find("RetCode") != m.end() && !m["RetCode"].empty()) {
      retCode = make_shared<string>(boost::any_cast<string>(m["RetCode"]));
    }
  }


  virtual ~InitDeviceResponseBodyResultObject() = default;
};
class InitDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InitDeviceResponseBodyResultObject> resultObject{};

  InitDeviceResponseBody() {}

  explicit InitDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        InitDeviceResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<InitDeviceResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~InitDeviceResponseBody() = default;
};
class InitDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitDeviceResponseBody> body{};

  InitDeviceResponse() {}

  explicit InitDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~InitDeviceResponse() = default;
};
class CreateWhitelistSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> certNo{};
  shared_ptr<long> validDay{};

  CreateWhitelistSettingRequest() {}

  explicit CreateWhitelistSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (validDay) {
      res["ValidDay"] = boost::any(*validDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ValidDay") != m.end() && !m["ValidDay"].empty()) {
      validDay = make_shared<long>(boost::any_cast<long>(m["ValidDay"]));
    }
  }


  virtual ~CreateWhitelistSettingRequest() = default;
};
class CreateWhitelistSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> resultObject{};
  shared_ptr<string> requestId{};

  CreateWhitelistSettingResponseBody() {}

  explicit CreateWhitelistSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultObject) {
      res["ResultObject"] = boost::any(*resultObject);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      resultObject = make_shared<bool>(boost::any_cast<bool>(m["ResultObject"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateWhitelistSettingResponseBody() = default;
};
class CreateWhitelistSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateWhitelistSettingResponseBody> body{};

  CreateWhitelistSettingResponse() {}

  explicit CreateWhitelistSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWhitelistSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWhitelistSettingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWhitelistSettingResponse() = default;
};
class DescribeUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> enabled{};
  shared_ptr<string> requestId{};

  DescribeUserStatusResponseBody() {}

  explicit DescribeUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserStatusResponseBody() = default;
};
class DescribeUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeUserStatusResponseBody> body{};

  DescribeUserStatusResponse() {}

  explicit DescribeUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserStatusResponse() = default;
};
class CreateVerifySettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<bool> guideStep{};
  shared_ptr<bool> privacyStep{};
  shared_ptr<bool> resultStep{};

  CreateVerifySettingRequest() {}

  explicit CreateVerifySettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (guideStep) {
      res["GuideStep"] = boost::any(*guideStep);
    }
    if (privacyStep) {
      res["PrivacyStep"] = boost::any(*privacyStep);
    }
    if (resultStep) {
      res["ResultStep"] = boost::any(*resultStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("GuideStep") != m.end() && !m["GuideStep"].empty()) {
      guideStep = make_shared<bool>(boost::any_cast<bool>(m["GuideStep"]));
    }
    if (m.find("PrivacyStep") != m.end() && !m["PrivacyStep"].empty()) {
      privacyStep = make_shared<bool>(boost::any_cast<bool>(m["PrivacyStep"]));
    }
    if (m.find("ResultStep") != m.end() && !m["ResultStep"].empty()) {
      resultStep = make_shared<bool>(boost::any_cast<bool>(m["ResultStep"]));
    }
  }


  virtual ~CreateVerifySettingRequest() = default;
};
class CreateVerifySettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> solution{};
  shared_ptr<string> bizType{};
  shared_ptr<vector<string>> stepList{};

  CreateVerifySettingResponseBody() {}

  explicit CreateVerifySettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateVerifySettingResponseBody() = default;
};
class CreateVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVerifySettingResponseBody> body{};

  CreateVerifySettingResponse() {}

  explicit CreateVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVerifySettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVerifySettingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVerifySettingResponse() = default;
};
class InitFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> returnUrl{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> callbackToken{};
  shared_ptr<string> crop{};

  InitFaceVerifyRequest() {}

  explicit InitFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (returnUrl) {
      res["ReturnUrl"] = boost::any(*returnUrl);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (callbackToken) {
      res["CallbackToken"] = boost::any(*callbackToken);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ReturnUrl") != m.end() && !m["ReturnUrl"].empty()) {
      returnUrl = make_shared<string>(boost::any_cast<string>(m["ReturnUrl"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("CallbackToken") != m.end() && !m["CallbackToken"].empty()) {
      callbackToken = make_shared<string>(boost::any_cast<string>(m["CallbackToken"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~InitFaceVerifyRequest() = default;
};
class InitFaceVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> certifyUrl{};

  InitFaceVerifyResponseBodyResultObject() {}

  explicit InitFaceVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certifyUrl) {
      res["CertifyUrl"] = boost::any(*certifyUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertifyUrl") != m.end() && !m["CertifyUrl"].empty()) {
      certifyUrl = make_shared<string>(boost::any_cast<string>(m["CertifyUrl"]));
    }
  }


  virtual ~InitFaceVerifyResponseBodyResultObject() = default;
};
class InitFaceVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InitFaceVerifyResponseBodyResultObject> resultObject{};

  InitFaceVerifyResponseBody() {}

  explicit InitFaceVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        InitFaceVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<InitFaceVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~InitFaceVerifyResponseBody() = default;
};
class InitFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InitFaceVerifyResponseBody> body{};

  InitFaceVerifyResponse() {}

  explicit InitFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitFaceVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitFaceVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~InitFaceVerifyResponse() = default;
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
  VerifyMaterialResponse verifyMaterialWithOptions(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMaterialResponse verifyMaterial(shared_ptr<VerifyMaterialRequest> request);
  DescribeWhitelistResponse describeWhitelistWithOptions(shared_ptr<DescribeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWhitelistResponse describeWhitelist(shared_ptr<DescribeWhitelistRequest> request);
  UpdateAppPackageResponse updateAppPackageWithOptions(shared_ptr<UpdateAppPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppPackageResponse updateAppPackage(shared_ptr<UpdateAppPackageRequest> request);
  DescribeVerifyTokenResponse describeVerifyTokenWithOptions(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyTokenResponse describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request);
  DescribeRPSDKResponse describeRPSDKWithOptions(shared_ptr<DescribeRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRPSDKResponse describeRPSDK(shared_ptr<DescribeRPSDKRequest> request);
  DescribeFaceUsageResponse describeFaceUsageWithOptions(shared_ptr<DescribeFaceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceUsageResponse describeFaceUsage(shared_ptr<DescribeFaceUsageRequest> request);
  DescribeVerifyUsageResponse describeVerifyUsageWithOptions(shared_ptr<DescribeVerifyUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyUsageResponse describeVerifyUsage(shared_ptr<DescribeVerifyUsageRequest> request);
  DescribeUpdatePackageResultResponse describeUpdatePackageResultWithOptions(shared_ptr<DescribeUpdatePackageResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUpdatePackageResultResponse describeUpdatePackageResult(shared_ptr<DescribeUpdatePackageResultRequest> request);
  CreateWhitelistResponse createWhitelistWithOptions(shared_ptr<CreateWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWhitelistResponse createWhitelist(shared_ptr<CreateWhitelistRequest> request);
  DeleteWhitelistResponse deleteWhitelistWithOptions(shared_ptr<DeleteWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWhitelistResponse deleteWhitelist(shared_ptr<DeleteWhitelistRequest> request);
  CreateAuthKeyResponse createAuthKeyWithOptions(shared_ptr<CreateAuthKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthKeyResponse createAuthKey(shared_ptr<CreateAuthKeyRequest> request);
  DescribeUploadInfoResponse describeUploadInfoWithOptions(shared_ptr<DescribeUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUploadInfoResponse describeUploadInfo(shared_ptr<DescribeUploadInfoRequest> request);
  DescribeVerifySettingResponse describeVerifySettingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifySettingResponse describeVerifySetting();
  DescribeVerifyRecordsResponse describeVerifyRecordsWithOptions(shared_ptr<DescribeVerifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyRecordsResponse describeVerifyRecords(shared_ptr<DescribeVerifyRecordsRequest> request);
  DescribeWhitelistSettingResponse describeWhitelistSettingWithOptions(shared_ptr<DescribeWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWhitelistSettingResponse describeWhitelistSetting(shared_ptr<DescribeWhitelistSettingRequest> request);
  CreateRPSDKResponse createRPSDKWithOptions(shared_ptr<CreateRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRPSDKResponse createRPSDK(shared_ptr<CreateRPSDKRequest> request);
  UpdateFaceConfigResponse updateFaceConfigWithOptions(shared_ptr<UpdateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceConfigResponse updateFaceConfig(shared_ptr<UpdateFaceConfigRequest> request);
  DescribeFaceConfigResponse describeFaceConfigWithOptions(shared_ptr<DescribeFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceConfigResponse describeFaceConfig(shared_ptr<DescribeFaceConfigRequest> request);
  LivenessFaceVerifyResponse livenessFaceVerifyWithOptions(shared_ptr<LivenessFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivenessFaceVerifyResponse livenessFaceVerify(shared_ptr<LivenessFaceVerifyRequest> request);
  DescribeAppInfoResponse describeAppInfoWithOptions(shared_ptr<DescribeAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppInfoResponse describeAppInfo(shared_ptr<DescribeAppInfoRequest> request);
  ModifyDeviceInfoResponse modifyDeviceInfoWithOptions(shared_ptr<ModifyDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceInfoResponse modifyDeviceInfo(shared_ptr<ModifyDeviceInfoRequest> request);
  ContrastFaceVerifyResponse contrastFaceVerifyWithOptions(shared_ptr<ContrastFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContrastFaceVerifyResponse contrastFaceVerify(shared_ptr<ContrastFaceVerifyRequest> request);
  ContrastFaceVerifyResponse contrastFaceVerifyAdvance(shared_ptr<ContrastFaceVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyDeviceResponse verifyDeviceWithOptions(shared_ptr<VerifyDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyDeviceResponse verifyDevice(shared_ptr<VerifyDeviceRequest> request);
  CompareFaceVerifyResponse compareFaceVerifyWithOptions(shared_ptr<CompareFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFaceVerifyResponse compareFaceVerify(shared_ptr<CompareFaceVerifyRequest> request);
  DescribeVerifySDKResponse describeVerifySDKWithOptions(shared_ptr<DescribeVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifySDKResponse describeVerifySDK(shared_ptr<DescribeVerifySDKRequest> request);
  DescribeDeviceInfoResponse describeDeviceInfoWithOptions(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceInfoResponse describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request);
  DescribeFaceVerifyResponse describeFaceVerifyWithOptions(shared_ptr<DescribeFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceVerifyResponse describeFaceVerify(shared_ptr<DescribeFaceVerifyRequest> request);
  DescribeOssUploadTokenResponse describeOssUploadTokenWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssUploadTokenResponse describeOssUploadToken();
  DetectFaceAttributesResponse detectFaceAttributesWithOptions(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFaceAttributesResponse detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request);
  DescribeSdkUrlResponse describeSdkUrlWithOptions(shared_ptr<DescribeSdkUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSdkUrlResponse describeSdkUrl(shared_ptr<DescribeSdkUrlRequest> request);
  DeleteWhitelistSettingResponse deleteWhitelistSettingWithOptions(shared_ptr<DeleteWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWhitelistSettingResponse deleteWhitelistSetting(shared_ptr<DeleteWhitelistSettingRequest> request);
  UpdateVerifySettingResponse updateVerifySettingWithOptions(shared_ptr<UpdateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVerifySettingResponse updateVerifySetting(shared_ptr<UpdateVerifySettingRequest> request);
  DescribeVerifyResultResponse describeVerifyResultWithOptions(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyResultResponse describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request);
  CompareFacesResponse compareFacesWithOptions(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFacesResponse compareFaces(shared_ptr<CompareFacesRequest> request);
  CreateFaceConfigResponse createFaceConfigWithOptions(shared_ptr<CreateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFaceConfigResponse createFaceConfig(shared_ptr<CreateFaceConfigRequest> request);
  CreateVerifySDKResponse createVerifySDKWithOptions(shared_ptr<CreateVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVerifySDKResponse createVerifySDK(shared_ptr<CreateVerifySDKRequest> request);
  InitDeviceResponse initDeviceWithOptions(shared_ptr<InitDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitDeviceResponse initDevice(shared_ptr<InitDeviceRequest> request);
  CreateWhitelistSettingResponse createWhitelistSettingWithOptions(shared_ptr<CreateWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWhitelistSettingResponse createWhitelistSetting(shared_ptr<CreateWhitelistSettingRequest> request);
  DescribeUserStatusResponse describeUserStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserStatusResponse describeUserStatus();
  CreateVerifySettingResponse createVerifySettingWithOptions(shared_ptr<CreateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVerifySettingResponse createVerifySetting(shared_ptr<CreateVerifySettingRequest> request);
  InitFaceVerifyResponse initFaceVerifyWithOptions(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitFaceVerifyResponse initFaceVerify(shared_ptr<InitFaceVerifyRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20190307

#endif
