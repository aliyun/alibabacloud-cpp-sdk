// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20200618_H_
#define ALIBABACLOUD_CLOUDAUTH20200618_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth20200618 {
class ContrastSmartVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> facePicFile{};
  shared_ptr<string> facePicString{};
  shared_ptr<string> facePicUrl{};
  shared_ptr<string> ip{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mode{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> userId{};

  ContrastSmartVerifyRequest() {}

  explicit ContrastSmartVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (facePicFile) {
      res["FacePicFile"] = boost::any(*facePicFile);
    }
    if (facePicString) {
      res["FacePicString"] = boost::any(*facePicString);
    }
    if (facePicUrl) {
      res["FacePicUrl"] = boost::any(*facePicUrl);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("FacePicFile") != m.end() && !m["FacePicFile"].empty()) {
      facePicFile = make_shared<string>(boost::any_cast<string>(m["FacePicFile"]));
    }
    if (m.find("FacePicString") != m.end() && !m["FacePicString"].empty()) {
      facePicString = make_shared<string>(boost::any_cast<string>(m["FacePicString"]));
    }
    if (m.find("FacePicUrl") != m.end() && !m["FacePicUrl"].empty()) {
      facePicUrl = make_shared<string>(boost::any_cast<string>(m["FacePicUrl"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ContrastSmartVerifyRequest() = default;
};
class ContrastSmartVerifyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<Darabonba::Stream> facePicFileObject{};
  shared_ptr<string> facePicString{};
  shared_ptr<string> facePicUrl{};
  shared_ptr<string> ip{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mode{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> userId{};

  ContrastSmartVerifyAdvanceRequest() {}

  explicit ContrastSmartVerifyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (facePicFileObject) {
      res["FacePicFile"] = boost::any(*facePicFileObject);
    }
    if (facePicString) {
      res["FacePicString"] = boost::any(*facePicString);
    }
    if (facePicUrl) {
      res["FacePicUrl"] = boost::any(*facePicUrl);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("FacePicFile") != m.end() && !m["FacePicFile"].empty()) {
      facePicFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FacePicFile"]));
    }
    if (m.find("FacePicString") != m.end() && !m["FacePicString"].empty()) {
      facePicString = make_shared<string>(boost::any_cast<string>(m["FacePicString"]));
    }
    if (m.find("FacePicUrl") != m.end() && !m["FacePicUrl"].empty()) {
      facePicUrl = make_shared<string>(boost::any_cast<string>(m["FacePicUrl"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ContrastSmartVerifyAdvanceRequest() = default;
};
class ContrastSmartVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> passed{};
  shared_ptr<string> riskInfo{};
  shared_ptr<string> subCode{};
  shared_ptr<string> verifyInfo{};

  ContrastSmartVerifyResponseBodyResultObject() {}

  explicit ContrastSmartVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (riskInfo) {
      res["RiskInfo"] = boost::any(*riskInfo);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (verifyInfo) {
      res["VerifyInfo"] = boost::any(*verifyInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("RiskInfo") != m.end() && !m["RiskInfo"].empty()) {
      riskInfo = make_shared<string>(boost::any_cast<string>(m["RiskInfo"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("VerifyInfo") != m.end() && !m["VerifyInfo"].empty()) {
      verifyInfo = make_shared<string>(boost::any_cast<string>(m["VerifyInfo"]));
    }
  }


  virtual ~ContrastSmartVerifyResponseBodyResultObject() = default;
};
class ContrastSmartVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ContrastSmartVerifyResponseBodyResultObject> resultObject{};

  ContrastSmartVerifyResponseBody() {}

  explicit ContrastSmartVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContrastSmartVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<ContrastSmartVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~ContrastSmartVerifyResponseBody() = default;
};
class ContrastSmartVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContrastSmartVerifyResponseBody> body{};

  ContrastSmartVerifyResponse() {}

  explicit ContrastSmartVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContrastSmartVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContrastSmartVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~ContrastSmartVerifyResponse() = default;
};
class DescribeSmartVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> pictureReturnType{};
  shared_ptr<long> sceneId{};

  DescribeSmartVerifyRequest() {}

  explicit DescribeSmartVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (pictureReturnType) {
      res["PictureReturnType"] = boost::any(*pictureReturnType);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("PictureReturnType") != m.end() && !m["PictureReturnType"].empty()) {
      pictureReturnType = make_shared<string>(boost::any_cast<string>(m["PictureReturnType"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~DescribeSmartVerifyRequest() = default;
};
class DescribeSmartVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};
  shared_ptr<double> passedScore{};
  shared_ptr<string> subCode{};

  DescribeSmartVerifyResponseBodyResultObject() {}

  explicit DescribeSmartVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (passedScore) {
      res["PassedScore"] = boost::any(*passedScore);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("PassedScore") != m.end() && !m["PassedScore"].empty()) {
      passedScore = make_shared<double>(boost::any_cast<double>(m["PassedScore"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~DescribeSmartVerifyResponseBodyResultObject() = default;
};
class DescribeSmartVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSmartVerifyResponseBodyResultObject> resultObject{};

  DescribeSmartVerifyResponseBody() {}

  explicit DescribeSmartVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSmartVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeSmartVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~DescribeSmartVerifyResponseBody() = default;
};
class DescribeSmartVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSmartVerifyResponseBody> body{};

  DescribeSmartVerifyResponse() {}

  explicit DescribeSmartVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSmartVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSmartVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSmartVerifyResponse() = default;
};
class DescribeSmsDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> mobile{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sendDate{};
  shared_ptr<string> sendStatus{};
  shared_ptr<string> signName{};
  shared_ptr<string> templateCode{};

  DescribeSmsDetailRequest() {}

  explicit DescribeSmsDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
    }
    if (sendStatus) {
      res["SendStatus"] = boost::any(*sendStatus);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
    if (m.find("SendStatus") != m.end() && !m["SendStatus"].empty()) {
      sendStatus = make_shared<string>(boost::any_cast<string>(m["SendStatus"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~DescribeSmsDetailRequest() = default;
};
class DescribeSmsDetailResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> content{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> mobile{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> receiveDate{};
  shared_ptr<string> sendDate{};
  shared_ptr<string> sendStatus{};
  shared_ptr<string> signName{};
  shared_ptr<long> smsSize{};
  shared_ptr<string> taskDate{};
  shared_ptr<string> templateCode{};

  DescribeSmsDetailResponseBodyItems() {}

  explicit DescribeSmsDetailResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (receiveDate) {
      res["ReceiveDate"] = boost::any(*receiveDate);
    }
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
    }
    if (sendStatus) {
      res["SendStatus"] = boost::any(*sendStatus);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (smsSize) {
      res["SmsSize"] = boost::any(*smsSize);
    }
    if (taskDate) {
      res["TaskDate"] = boost::any(*taskDate);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ReceiveDate") != m.end() && !m["ReceiveDate"].empty()) {
      receiveDate = make_shared<string>(boost::any_cast<string>(m["ReceiveDate"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
    if (m.find("SendStatus") != m.end() && !m["SendStatus"].empty()) {
      sendStatus = make_shared<string>(boost::any_cast<string>(m["SendStatus"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SmsSize") != m.end() && !m["SmsSize"].empty()) {
      smsSize = make_shared<long>(boost::any_cast<long>(m["SmsSize"]));
    }
    if (m.find("TaskDate") != m.end() && !m["TaskDate"].empty()) {
      taskDate = make_shared<string>(boost::any_cast<string>(m["TaskDate"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~DescribeSmsDetailResponseBodyItems() = default;
};
class DescribeSmsDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeSmsDetailResponseBodyItems>> items{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalItem{};
  shared_ptr<long> totalPage{};

  DescribeSmsDetailResponseBody() {}

  explicit DescribeSmsDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalItem) {
      res["TotalItem"] = boost::any(*totalItem);
    }
    if (totalPage) {
      res["TotalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeSmsDetailResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSmsDetailResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeSmsDetailResponseBodyItems>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalItem") != m.end() && !m["TotalItem"].empty()) {
      totalItem = make_shared<long>(boost::any_cast<long>(m["TotalItem"]));
    }
    if (m.find("TotalPage") != m.end() && !m["TotalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["TotalPage"]));
    }
  }


  virtual ~DescribeSmsDetailResponseBody() = default;
};
class DescribeSmsDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSmsDetailResponseBody> body{};

  DescribeSmsDetailResponse() {}

  explicit DescribeSmsDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSmsDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSmsDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSmsDetailResponse() = default;
};
class ElementSmartVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> certFile{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNationalEmblemUrl{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> certUrl{};
  shared_ptr<string> mode{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};

  ElementSmartVerifyRequest() {}

  explicit ElementSmartVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certFile) {
      res["CertFile"] = boost::any(*certFile);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNationalEmblemUrl) {
      res["CertNationalEmblemUrl"] = boost::any(*certNationalEmblemUrl);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certUrl) {
      res["CertUrl"] = boost::any(*certUrl);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertFile") != m.end() && !m["CertFile"].empty()) {
      certFile = make_shared<string>(boost::any_cast<string>(m["CertFile"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNationalEmblemUrl") != m.end() && !m["CertNationalEmblemUrl"].empty()) {
      certNationalEmblemUrl = make_shared<string>(boost::any_cast<string>(m["CertNationalEmblemUrl"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertUrl") != m.end() && !m["CertUrl"].empty()) {
      certUrl = make_shared<string>(boost::any_cast<string>(m["CertUrl"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~ElementSmartVerifyRequest() = default;
};
class ElementSmartVerifyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> certFileObject{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNationalEmblemUrl{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> certUrl{};
  shared_ptr<string> mode{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};

  ElementSmartVerifyAdvanceRequest() {}

  explicit ElementSmartVerifyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certFileObject) {
      res["CertFile"] = boost::any(*certFileObject);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNationalEmblemUrl) {
      res["CertNationalEmblemUrl"] = boost::any(*certNationalEmblemUrl);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certUrl) {
      res["CertUrl"] = boost::any(*certUrl);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertFile") != m.end() && !m["CertFile"].empty()) {
      certFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["CertFile"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNationalEmblemUrl") != m.end() && !m["CertNationalEmblemUrl"].empty()) {
      certNationalEmblemUrl = make_shared<string>(boost::any_cast<string>(m["CertNationalEmblemUrl"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertUrl") != m.end() && !m["CertUrl"].empty()) {
      certUrl = make_shared<string>(boost::any_cast<string>(m["CertUrl"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~ElementSmartVerifyAdvanceRequest() = default;
};
class ElementSmartVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};

  ElementSmartVerifyResponseBodyResultObject() {}

  explicit ElementSmartVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~ElementSmartVerifyResponseBodyResultObject() = default;
};
class ElementSmartVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ElementSmartVerifyResponseBodyResultObject> resultObject{};

  ElementSmartVerifyResponseBody() {}

  explicit ElementSmartVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ElementSmartVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<ElementSmartVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~ElementSmartVerifyResponseBody() = default;
};
class ElementSmartVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ElementSmartVerifyResponseBody> body{};

  ElementSmartVerifyResponse() {}

  explicit ElementSmartVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ElementSmartVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ElementSmartVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~ElementSmartVerifyResponse() = default;
};
class InitSmartVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackToken{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certType{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> facePictureBase64{};
  shared_ptr<string> facePictureUrl{};
  shared_ptr<string> idName{};
  shared_ptr<string> idNo{};
  shared_ptr<string> ip{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mode{};
  shared_ptr<string> ocr{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> userId{};

  InitSmartVerifyRequest() {}

  explicit InitSmartVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackToken) {
      res["CallbackToken"] = boost::any(*callbackToken);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (facePictureBase64) {
      res["FacePictureBase64"] = boost::any(*facePictureBase64);
    }
    if (facePictureUrl) {
      res["FacePictureUrl"] = boost::any(*facePictureUrl);
    }
    if (idName) {
      res["IdName"] = boost::any(*idName);
    }
    if (idNo) {
      res["IdNo"] = boost::any(*idNo);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (ocr) {
      res["Ocr"] = boost::any(*ocr);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackToken") != m.end() && !m["CallbackToken"].empty()) {
      callbackToken = make_shared<string>(boost::any_cast<string>(m["CallbackToken"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("FacePictureBase64") != m.end() && !m["FacePictureBase64"].empty()) {
      facePictureBase64 = make_shared<string>(boost::any_cast<string>(m["FacePictureBase64"]));
    }
    if (m.find("FacePictureUrl") != m.end() && !m["FacePictureUrl"].empty()) {
      facePictureUrl = make_shared<string>(boost::any_cast<string>(m["FacePictureUrl"]));
    }
    if (m.find("IdName") != m.end() && !m["IdName"].empty()) {
      idName = make_shared<string>(boost::any_cast<string>(m["IdName"]));
    }
    if (m.find("IdNo") != m.end() && !m["IdNo"].empty()) {
      idNo = make_shared<string>(boost::any_cast<string>(m["IdNo"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Ocr") != m.end() && !m["Ocr"].empty()) {
      ocr = make_shared<string>(boost::any_cast<string>(m["Ocr"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~InitSmartVerifyRequest() = default;
};
class InitSmartVerifyResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};

  InitSmartVerifyResponseBodyResultObject() {}

  explicit InitSmartVerifyResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
  }


  virtual ~InitSmartVerifyResponseBodyResultObject() = default;
};
class InitSmartVerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InitSmartVerifyResponseBodyResultObject> resultObject{};

  InitSmartVerifyResponseBody() {}

  explicit InitSmartVerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitSmartVerifyResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<InitSmartVerifyResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~InitSmartVerifyResponseBody() = default;
};
class InitSmartVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InitSmartVerifyResponseBody> body{};

  InitSmartVerifyResponse() {}

  explicit InitSmartVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InitSmartVerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InitSmartVerifyResponseBody>(model1);
      }
    }
  }


  virtual ~InitSmartVerifyResponse() = default;
};
class SendSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> signName{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParam{};

  SendSmsRequest() {}

  explicit SendSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParam) {
      res["TemplateParam"] = boost::any(*templateParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParam") != m.end() && !m["TemplateParam"].empty()) {
      templateParam = make_shared<string>(boost::any_cast<string>(m["TemplateParam"]));
    }
  }


  virtual ~SendSmsRequest() = default;
};
class SendSmsResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};

  SendSmsResponseBodyResultObject() {}

  explicit SendSmsResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
  }


  virtual ~SendSmsResponseBodyResultObject() = default;
};
class SendSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SendSmsResponseBodyResultObject> resultObject{};

  SendSmsResponseBody() {}

  explicit SendSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendSmsResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<SendSmsResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~SendSmsResponseBody() = default;
};
class SendSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendSmsResponseBody> body{};

  SendSmsResponse() {}

  explicit SendSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendSmsResponseBody>(model1);
      }
    }
  }


  virtual ~SendSmsResponse() = default;
};
class VerifyBankElementRequest : public Darabonba::Model {
public:
  shared_ptr<string> bankCardFile{};
  shared_ptr<string> bankCardNo{};
  shared_ptr<string> bankCardUrl{};
  shared_ptr<string> idName{};
  shared_ptr<string> idNo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mode{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};

  VerifyBankElementRequest() {}

  explicit VerifyBankElementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bankCardFile) {
      res["BankCardFile"] = boost::any(*bankCardFile);
    }
    if (bankCardNo) {
      res["BankCardNo"] = boost::any(*bankCardNo);
    }
    if (bankCardUrl) {
      res["BankCardUrl"] = boost::any(*bankCardUrl);
    }
    if (idName) {
      res["IdName"] = boost::any(*idName);
    }
    if (idNo) {
      res["IdNo"] = boost::any(*idNo);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BankCardFile") != m.end() && !m["BankCardFile"].empty()) {
      bankCardFile = make_shared<string>(boost::any_cast<string>(m["BankCardFile"]));
    }
    if (m.find("BankCardNo") != m.end() && !m["BankCardNo"].empty()) {
      bankCardNo = make_shared<string>(boost::any_cast<string>(m["BankCardNo"]));
    }
    if (m.find("BankCardUrl") != m.end() && !m["BankCardUrl"].empty()) {
      bankCardUrl = make_shared<string>(boost::any_cast<string>(m["BankCardUrl"]));
    }
    if (m.find("IdName") != m.end() && !m["IdName"].empty()) {
      idName = make_shared<string>(boost::any_cast<string>(m["IdName"]));
    }
    if (m.find("IdNo") != m.end() && !m["IdNo"].empty()) {
      idNo = make_shared<string>(boost::any_cast<string>(m["IdNo"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~VerifyBankElementRequest() = default;
};
class VerifyBankElementAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> bankCardFileObject{};
  shared_ptr<string> bankCardNo{};
  shared_ptr<string> bankCardUrl{};
  shared_ptr<string> idName{};
  shared_ptr<string> idNo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> mode{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<long> sceneId{};

  VerifyBankElementAdvanceRequest() {}

  explicit VerifyBankElementAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bankCardFileObject) {
      res["BankCardFile"] = boost::any(*bankCardFileObject);
    }
    if (bankCardNo) {
      res["BankCardNo"] = boost::any(*bankCardNo);
    }
    if (bankCardUrl) {
      res["BankCardUrl"] = boost::any(*bankCardUrl);
    }
    if (idName) {
      res["IdName"] = boost::any(*idName);
    }
    if (idNo) {
      res["IdNo"] = boost::any(*idNo);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BankCardFile") != m.end() && !m["BankCardFile"].empty()) {
      bankCardFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["BankCardFile"]));
    }
    if (m.find("BankCardNo") != m.end() && !m["BankCardNo"].empty()) {
      bankCardNo = make_shared<string>(boost::any_cast<string>(m["BankCardNo"]));
    }
    if (m.find("BankCardUrl") != m.end() && !m["BankCardUrl"].empty()) {
      bankCardUrl = make_shared<string>(boost::any_cast<string>(m["BankCardUrl"]));
    }
    if (m.find("IdName") != m.end() && !m["IdName"].empty()) {
      idName = make_shared<string>(boost::any_cast<string>(m["IdName"]));
    }
    if (m.find("IdNo") != m.end() && !m["IdNo"].empty()) {
      idNo = make_shared<string>(boost::any_cast<string>(m["IdNo"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
  }


  virtual ~VerifyBankElementAdvanceRequest() = default;
};
class VerifyBankElementResponseBodyResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};
  shared_ptr<string> subCode{};

  VerifyBankElementResponseBodyResultObject() {}

  explicit VerifyBankElementResponseBodyResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
  }


  virtual ~VerifyBankElementResponseBodyResultObject() = default;
};
class VerifyBankElementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<VerifyBankElementResponseBodyResultObject> resultObject{};

  VerifyBankElementResponseBody() {}

  explicit VerifyBankElementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyBankElementResponseBodyResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VerifyBankElementResponseBodyResultObject>(model1);
      }
    }
  }


  virtual ~VerifyBankElementResponseBody() = default;
};
class VerifyBankElementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyBankElementResponseBody> body{};

  VerifyBankElementResponse() {}

  explicit VerifyBankElementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyBankElementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyBankElementResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyBankElementResponse() = default;
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
  ContrastSmartVerifyResponse contrastSmartVerifyWithOptions(shared_ptr<ContrastSmartVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContrastSmartVerifyResponse contrastSmartVerify(shared_ptr<ContrastSmartVerifyRequest> request);
  ContrastSmartVerifyResponse contrastSmartVerifyAdvance(shared_ptr<ContrastSmartVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSmartVerifyResponse describeSmartVerifyWithOptions(shared_ptr<DescribeSmartVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSmartVerifyResponse describeSmartVerify(shared_ptr<DescribeSmartVerifyRequest> request);
  DescribeSmsDetailResponse describeSmsDetailWithOptions(shared_ptr<DescribeSmsDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSmsDetailResponse describeSmsDetail(shared_ptr<DescribeSmsDetailRequest> request);
  ElementSmartVerifyResponse elementSmartVerifyWithOptions(shared_ptr<ElementSmartVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ElementSmartVerifyResponse elementSmartVerify(shared_ptr<ElementSmartVerifyRequest> request);
  ElementSmartVerifyResponse elementSmartVerifyAdvance(shared_ptr<ElementSmartVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitSmartVerifyResponse initSmartVerifyWithOptions(shared_ptr<InitSmartVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitSmartVerifyResponse initSmartVerify(shared_ptr<InitSmartVerifyRequest> request);
  SendSmsResponse sendSmsWithOptions(shared_ptr<SendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendSmsResponse sendSms(shared_ptr<SendSmsRequest> request);
  VerifyBankElementResponse verifyBankElementWithOptions(shared_ptr<VerifyBankElementRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyBankElementResponse verifyBankElement(shared_ptr<VerifyBankElementRequest> request);
  VerifyBankElementResponse verifyBankElementAdvance(shared_ptr<VerifyBankElementAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20200618

#endif
