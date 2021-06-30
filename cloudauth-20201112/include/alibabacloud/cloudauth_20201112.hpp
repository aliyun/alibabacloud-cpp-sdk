// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20201112_H_
#define ALIBABACLOUD_CLOUDAUTH20201112_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth20201112 {
class CompareFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceImageUrl{};
  shared_ptr<string> sourceImageBase64{};
  shared_ptr<string> targetImageUrl{};
  shared_ptr<string> targetImageBase64{};
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};

  CompareFacesRequest() {}

  explicit CompareFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceImageUrl) {
      res["SourceImageUrl"] = boost::any(*sourceImageUrl);
    }
    if (sourceImageBase64) {
      res["SourceImageBase64"] = boost::any(*sourceImageBase64);
    }
    if (targetImageUrl) {
      res["TargetImageUrl"] = boost::any(*targetImageUrl);
    }
    if (targetImageBase64) {
      res["TargetImageBase64"] = boost::any(*targetImageBase64);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceImageUrl") != m.end() && !m["SourceImageUrl"].empty()) {
      sourceImageUrl = make_shared<string>(boost::any_cast<string>(m["SourceImageUrl"]));
    }
    if (m.find("SourceImageBase64") != m.end() && !m["SourceImageBase64"].empty()) {
      sourceImageBase64 = make_shared<string>(boost::any_cast<string>(m["SourceImageBase64"]));
    }
    if (m.find("TargetImageUrl") != m.end() && !m["TargetImageUrl"].empty()) {
      targetImageUrl = make_shared<string>(boost::any_cast<string>(m["TargetImageUrl"]));
    }
    if (m.find("TargetImageBase64") != m.end() && !m["TargetImageBase64"].empty()) {
      targetImageBase64 = make_shared<string>(boost::any_cast<string>(m["TargetImageBase64"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~CompareFacesRequest() = default;
};
class CompareFacesResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<double> similarityScore{};
  shared_ptr<string> confidenceThresholds{};

  CompareFacesResponseBodyResultObject() {}

  explicit CompareFacesResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CompareFacesResponseBodyResultObject() = default;
};
class CompareFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CompareFacesResponseBodyResultObject> resultObject{};

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
        CompareFacesResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CompareFacesResponseBodyResultObject>(model1);
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
class DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> sex{};
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

  DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo() {}

  explicit DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
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
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
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


  virtual ~DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo() = default;
};
class DescribeVerifyResultResponseBodyResultObjectMaterial : public Darabonba::Model {
public:
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<bool> faceMask{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> faceQuality{};
  shared_ptr<vector<string>> videoUrls{};
  shared_ptr<DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo> idCardInfo{};

  DescribeVerifyResultResponseBodyResultObjectMaterial() {}

  explicit DescribeVerifyResultResponseBodyResultObjectMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<DescribeVerifyResultResponseBodyResultObjectMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponseBodyResultObjectMaterial() = default;
};
class DescribeVerifyResultResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<long> verifyStatus{};
  shared_ptr<double> faceComparisonScore{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<DescribeVerifyResultResponseBodyResultObjectMaterial> material{};

  DescribeVerifyResultResponseBodyResultObject() {}

  explicit DescribeVerifyResultResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("FaceComparisonScore") != m.end() && !m["FaceComparisonScore"].empty()) {
      faceComparisonScore = make_shared<double>(boost::any_cast<double>(m["FaceComparisonScore"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        DescribeVerifyResultResponseBodyResultObjectMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<DescribeVerifyResultResponseBodyResultObjectMaterial>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponseBodyResultObject() = default;
};
class DescribeVerifyResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVerifyResultResponseBodyResultObject> resultObject{};

  DescribeVerifyResultResponseBody() {}

  explicit DescribeVerifyResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyResultResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeVerifyResultResponseBodyResultObject>(model1);
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
class DescribeVerifyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> bizType{};
  shared_ptr<string> faceRetainedImageUrl{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> bizId{};
  shared_ptr<string> name{};
  shared_ptr<string> idCardNumber{};
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
    if (faceRetainedImageUrl) {
      res["FaceRetainedImageUrl"] = boost::any(*faceRetainedImageUrl);
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
    if (m.find("FaceRetainedImageUrl") != m.end() && !m["FaceRetainedImageUrl"].empty()) {
      faceRetainedImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceRetainedImageUrl"]));
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
class DescribeVerifyTokenResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> verifyPageUrl{};
  shared_ptr<string> verifyToken{};

  DescribeVerifyTokenResponseBodyResultObject() {}

  explicit DescribeVerifyTokenResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (verifyPageUrl) {
      res["VerifyPageUrl"] = boost::any(*verifyPageUrl);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VerifyPageUrl") != m.end() && !m["VerifyPageUrl"].empty()) {
      verifyPageUrl = make_shared<string>(boost::any_cast<string>(m["VerifyPageUrl"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
  }


  virtual ~DescribeVerifyTokenResponseBodyResultObject() = default;
};
class DescribeVerifyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeVerifyTokenResponseBodyResultObject> resultObject{};

  DescribeVerifyTokenResponseBody() {}

  explicit DescribeVerifyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVerifyTokenResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeVerifyTokenResponseBodyResultObject>(model1);
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
class DetectFaceAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> imageFile{};

  DetectFaceAttributesRequest() {}

  explicit DetectFaceAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (imageFile) {
      res["ImageFile"] = boost::any(*imageFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ImageFile") != m.end() && !m["ImageFile"].empty()) {
      imageFile = make_shared<string>(boost::any_cast<string>(m["ImageFile"]));
    }
  }


  virtual ~DetectFaceAttributesRequest() = default;
};
class DetectFaceAttributesAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageFileObject{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> imageUrl{};

  DetectFaceAttributesAdvanceRequest() {}

  explicit DetectFaceAttributesAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageFileObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageFileObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageFileObject) {
      res["ImageFileObject"] = boost::any(*imageFileObject);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageFileObject") != m.end() && !m["ImageFileObject"].empty()) {
      imageFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageFileObject"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~DetectFaceAttributesAdvanceRequest() = default;
};
class DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect : public Darabonba::Model {
public:
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect() {}

  explicit DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect() = default;
};
class DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling : public Darabonba::Model {
public:
  shared_ptr<double> value{};
  shared_ptr<double> threshold{};

  DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() {}

  explicit DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() = default;
};
class DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose : public Darabonba::Model {
public:
  shared_ptr<double> pitchAngle{};
  shared_ptr<double> rollAngle{};
  shared_ptr<double> yawAngle{};

  DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() {}

  explicit DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() = default;
};
class DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> glasses{};
  shared_ptr<double> facequal{};
  shared_ptr<long> integrity{};
  shared_ptr<string> facetype{};
  shared_ptr<string> respirator{};
  shared_ptr<double> appearanceScore{};
  shared_ptr<double> blur{};
  shared_ptr<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling> smiling{};
  shared_ptr<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose> headpose{};

  DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes() {}

  explicit DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (appearanceScore) {
      res["AppearanceScore"] = boost::any(*appearanceScore);
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
    if (m.find("AppearanceScore") != m.end() && !m["AppearanceScore"].empty()) {
      appearanceScore = make_shared<double>(boost::any_cast<double>(m["AppearanceScore"]));
    }
    if (m.find("Blur") != m.end() && !m["Blur"].empty()) {
      blur = make_shared<double>(boost::any_cast<double>(m["Blur"]));
    }
    if (m.find("Smiling") != m.end() && !m["Smiling"].empty()) {
      if (typeid(map<string, boost::any>) == m["Smiling"].type()) {
        DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Smiling"]));
        smiling = make_shared<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling>(model1);
      }
    }
    if (m.find("Headpose") != m.end() && !m["Headpose"].empty()) {
      if (typeid(map<string, boost::any>) == m["Headpose"].type()) {
        DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Headpose"]));
        headpose = make_shared<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes() = default;
};
class DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo : public Darabonba::Model {
public:
  shared_ptr<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect> faceRect{};
  shared_ptr<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes> faceAttributes{};

  DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo() {}

  explicit DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRect"]));
        faceRect = make_shared<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceRect>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfoFaceAttributes>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo() = default;
};
class DetectFaceAttributesResponseBodyResultObjectFaceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo>> faceAttributesDetectInfo{};

  DetectFaceAttributesResponseBodyResultObjectFaceInfos() {}

  explicit DetectFaceAttributesResponseBodyResultObjectFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceAttributesDetectInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceAttributesDetectInfo = make_shared<vector<DetectFaceAttributesResponseBodyResultObjectFaceInfosFaceAttributesDetectInfo>>(expect1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyResultObjectFaceInfos() = default;
};
class DetectFaceAttributesResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<long> imgHeight{};
  shared_ptr<long> imgWidth{};
  shared_ptr<DetectFaceAttributesResponseBodyResultObjectFaceInfos> faceInfos{};

  DetectFaceAttributesResponseBodyResultObject() {}

  explicit DetectFaceAttributesResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectFaceAttributesResponseBodyResultObjectFaceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceInfos"]));
        faceInfos = make_shared<DetectFaceAttributesResponseBodyResultObjectFaceInfos>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseBodyResultObject() = default;
};
class DetectFaceAttributesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DetectFaceAttributesResponseBodyResultObject> resultObject{};

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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DetectFaceAttributesResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DetectFaceAttributesResponseBodyResultObject>(model1);
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
class LivenessDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> mediaCategory{};
  shared_ptr<string> mediaUrl{};
  shared_ptr<string> mediaFile{};

  LivenessDetectRequest() {}

  explicit LivenessDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (mediaCategory) {
      res["MediaCategory"] = boost::any(*mediaCategory);
    }
    if (mediaUrl) {
      res["MediaUrl"] = boost::any(*mediaUrl);
    }
    if (mediaFile) {
      res["MediaFile"] = boost::any(*mediaFile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("MediaCategory") != m.end() && !m["MediaCategory"].empty()) {
      mediaCategory = make_shared<string>(boost::any_cast<string>(m["MediaCategory"]));
    }
    if (m.find("MediaUrl") != m.end() && !m["MediaUrl"].empty()) {
      mediaUrl = make_shared<string>(boost::any_cast<string>(m["MediaUrl"]));
    }
    if (m.find("MediaFile") != m.end() && !m["MediaFile"].empty()) {
      mediaFile = make_shared<string>(boost::any_cast<string>(m["MediaFile"]));
    }
  }


  virtual ~LivenessDetectRequest() = default;
};
class LivenessDetectAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> mediaFileObject{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> mediaCategory{};
  shared_ptr<string> mediaUrl{};

  LivenessDetectAdvanceRequest() {}

  explicit LivenessDetectAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!mediaFileObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("mediaFileObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaFileObject) {
      res["MediaFileObject"] = boost::any(*mediaFileObject);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (mediaCategory) {
      res["MediaCategory"] = boost::any(*mediaCategory);
    }
    if (mediaUrl) {
      res["MediaUrl"] = boost::any(*mediaUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaFileObject") != m.end() && !m["MediaFileObject"].empty()) {
      mediaFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["MediaFileObject"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("MediaCategory") != m.end() && !m["MediaCategory"].empty()) {
      mediaCategory = make_shared<string>(boost::any_cast<string>(m["MediaCategory"]));
    }
    if (m.find("MediaUrl") != m.end() && !m["MediaUrl"].empty()) {
      mediaUrl = make_shared<string>(boost::any_cast<string>(m["MediaUrl"]));
    }
  }


  virtual ~LivenessDetectAdvanceRequest() = default;
};
class LivenessDetectResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> frameUrl{};
  shared_ptr<string> passed{};

  LivenessDetectResponseBodyResultObject() {}

  explicit LivenessDetectResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (frameUrl) {
      res["FrameUrl"] = boost::any(*frameUrl);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("FrameUrl") != m.end() && !m["FrameUrl"].empty()) {
      frameUrl = make_shared<string>(boost::any_cast<string>(m["FrameUrl"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~LivenessDetectResponseBodyResultObject() = default;
};
class LivenessDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<LivenessDetectResponseBodyResultObject> resultObject{};

  LivenessDetectResponseBody() {}

  explicit LivenessDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivenessDetectResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<LivenessDetectResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~LivenessDetectResponseBody() = default;
};
class LivenessDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<LivenessDetectResponseBody> body{};

  LivenessDetectResponse() {}

  explicit LivenessDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LivenessDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LivenessDetectResponseBody>(model1);
      }
    }
  }


  virtual ~LivenessDetectResponse() = default;
};
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
class VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> sex{};
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

  VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo() {}

  explicit VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
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
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
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


  virtual ~VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo() = default;
};
class VerifyMaterialResponseBodyResultObjectMaterial : public Darabonba::Model {
public:
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> faceMask{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> faceQuality{};
  shared_ptr<VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo> idCardInfo{};

  VerifyMaterialResponseBodyResultObjectMaterial() {}

  explicit VerifyMaterialResponseBodyResultObjectMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<VerifyMaterialResponseBodyResultObjectMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponseBodyResultObjectMaterial() = default;
};
class VerifyMaterialResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<long> verifyStatus{};
  shared_ptr<string> verifyToken{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<VerifyMaterialResponseBodyResultObjectMaterial> material{};

  VerifyMaterialResponseBodyResultObject() {}

  explicit VerifyMaterialResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        VerifyMaterialResponseBodyResultObjectMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<VerifyMaterialResponseBodyResultObjectMaterial>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponseBodyResultObject() = default;
};
class VerifyMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyMaterialResponseBodyResultObject> resultObject{};

  VerifyMaterialResponseBody() {}

  explicit VerifyMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyMaterialResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VerifyMaterialResponseBodyResultObject>(model1);
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
  CompareFacesResponse compareFacesWithOptions(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFacesResponse compareFaces(shared_ptr<CompareFacesRequest> request);
  DescribeVerifyResultResponse describeVerifyResultWithOptions(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyResultResponse describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request);
  DescribeVerifyTokenResponse describeVerifyTokenWithOptions(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyTokenResponse describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request);
  DetectFaceAttributesResponse detectFaceAttributesWithOptions(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFaceAttributesResponse detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request);
  DetectFaceAttributesResponse detectFaceAttributesAdvance(shared_ptr<DetectFaceAttributesAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivenessDetectResponse livenessDetectWithOptions(shared_ptr<LivenessDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivenessDetectResponse livenessDetect(shared_ptr<LivenessDetectRequest> request);
  LivenessDetectResponse livenessDetectAdvance(shared_ptr<LivenessDetectAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMaterialResponse verifyMaterialWithOptions(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMaterialResponse verifyMaterial(shared_ptr<VerifyMaterialRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20201112

#endif
