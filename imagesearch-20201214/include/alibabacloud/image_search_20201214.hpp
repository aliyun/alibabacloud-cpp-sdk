// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGESEARCH20201214_H_
#define ALIBABACLOUD_IMAGESEARCH20201214_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ImageSearch20201214 {
class AddImageRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> crop{};
  shared_ptr<string> customContent{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> intAttr{};
  shared_ptr<long> intAttr2{};
  shared_ptr<long> intAttr3{};
  shared_ptr<long> intAttr4{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> strAttr{};
  shared_ptr<string> strAttr2{};
  shared_ptr<string> strAttr3{};
  shared_ptr<string> strAttr4{};

  AddImageRequest() {}

  explicit AddImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (intAttr2) {
      res["IntAttr2"] = boost::any(*intAttr2);
    }
    if (intAttr3) {
      res["IntAttr3"] = boost::any(*intAttr3);
    }
    if (intAttr4) {
      res["IntAttr4"] = boost::any(*intAttr4);
    }
    if (picContent) {
      res["PicContent"] = boost::any(*picContent);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    if (strAttr2) {
      res["StrAttr2"] = boost::any(*strAttr2);
    }
    if (strAttr3) {
      res["StrAttr3"] = boost::any(*strAttr3);
    }
    if (strAttr4) {
      res["StrAttr4"] = boost::any(*strAttr4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<bool>(boost::any_cast<bool>(m["Crop"]));
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("IntAttr2") != m.end() && !m["IntAttr2"].empty()) {
      intAttr2 = make_shared<long>(boost::any_cast<long>(m["IntAttr2"]));
    }
    if (m.find("IntAttr3") != m.end() && !m["IntAttr3"].empty()) {
      intAttr3 = make_shared<long>(boost::any_cast<long>(m["IntAttr3"]));
    }
    if (m.find("IntAttr4") != m.end() && !m["IntAttr4"].empty()) {
      intAttr4 = make_shared<long>(boost::any_cast<long>(m["IntAttr4"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContent = make_shared<string>(boost::any_cast<string>(m["PicContent"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
    if (m.find("StrAttr2") != m.end() && !m["StrAttr2"].empty()) {
      strAttr2 = make_shared<string>(boost::any_cast<string>(m["StrAttr2"]));
    }
    if (m.find("StrAttr3") != m.end() && !m["StrAttr3"].empty()) {
      strAttr3 = make_shared<string>(boost::any_cast<string>(m["StrAttr3"]));
    }
    if (m.find("StrAttr4") != m.end() && !m["StrAttr4"].empty()) {
      strAttr4 = make_shared<string>(boost::any_cast<string>(m["StrAttr4"]));
    }
  }


  virtual ~AddImageRequest() = default;
};
class AddImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> crop{};
  shared_ptr<string> customContent{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> intAttr{};
  shared_ptr<long> intAttr2{};
  shared_ptr<long> intAttr3{};
  shared_ptr<long> intAttr4{};
  shared_ptr<Darabonba::Stream> picContentObject{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> strAttr{};
  shared_ptr<string> strAttr2{};
  shared_ptr<string> strAttr3{};
  shared_ptr<string> strAttr4{};

  AddImageAdvanceRequest() {}

  explicit AddImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (intAttr2) {
      res["IntAttr2"] = boost::any(*intAttr2);
    }
    if (intAttr3) {
      res["IntAttr3"] = boost::any(*intAttr3);
    }
    if (intAttr4) {
      res["IntAttr4"] = boost::any(*intAttr4);
    }
    if (picContentObject) {
      res["PicContent"] = boost::any(*picContentObject);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    if (strAttr2) {
      res["StrAttr2"] = boost::any(*strAttr2);
    }
    if (strAttr3) {
      res["StrAttr3"] = boost::any(*strAttr3);
    }
    if (strAttr4) {
      res["StrAttr4"] = boost::any(*strAttr4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<bool>(boost::any_cast<bool>(m["Crop"]));
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("IntAttr2") != m.end() && !m["IntAttr2"].empty()) {
      intAttr2 = make_shared<long>(boost::any_cast<long>(m["IntAttr2"]));
    }
    if (m.find("IntAttr3") != m.end() && !m["IntAttr3"].empty()) {
      intAttr3 = make_shared<long>(boost::any_cast<long>(m["IntAttr3"]));
    }
    if (m.find("IntAttr4") != m.end() && !m["IntAttr4"].empty()) {
      intAttr4 = make_shared<long>(boost::any_cast<long>(m["IntAttr4"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContentObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicContent"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
    if (m.find("StrAttr2") != m.end() && !m["StrAttr2"].empty()) {
      strAttr2 = make_shared<string>(boost::any_cast<string>(m["StrAttr2"]));
    }
    if (m.find("StrAttr3") != m.end() && !m["StrAttr3"].empty()) {
      strAttr3 = make_shared<string>(boost::any_cast<string>(m["StrAttr3"]));
    }
    if (m.find("StrAttr4") != m.end() && !m["StrAttr4"].empty()) {
      strAttr4 = make_shared<string>(boost::any_cast<string>(m["StrAttr4"]));
    }
  }


  virtual ~AddImageAdvanceRequest() = default;
};
class AddImageResponseBodyPicInfo : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> region{};

  AddImageResponseBodyPicInfo() {}

  explicit AddImageResponseBodyPicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~AddImageResponseBodyPicInfo() = default;
};
class AddImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<AddImageResponseBodyPicInfo> picInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddImageResponseBody() {}

  explicit AddImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (picInfo) {
      res["PicInfo"] = picInfo ? boost::any(picInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PicInfo") != m.end() && !m["PicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PicInfo"].type()) {
        AddImageResponseBodyPicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PicInfo"]));
        picInfo = make_shared<AddImageResponseBodyPicInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddImageResponseBody() = default;
};
class AddImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageResponseBody> body{};

  AddImageResponse() {}

  explicit AddImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageResponse() = default;
};
class CompareSimilarByImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> primaryPicContent{};
  shared_ptr<string> secondaryPicContent{};

  CompareSimilarByImageRequest() {}

  explicit CompareSimilarByImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (primaryPicContent) {
      res["PrimaryPicContent"] = boost::any(*primaryPicContent);
    }
    if (secondaryPicContent) {
      res["SecondaryPicContent"] = boost::any(*secondaryPicContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PrimaryPicContent") != m.end() && !m["PrimaryPicContent"].empty()) {
      primaryPicContent = make_shared<string>(boost::any_cast<string>(m["PrimaryPicContent"]));
    }
    if (m.find("SecondaryPicContent") != m.end() && !m["SecondaryPicContent"].empty()) {
      secondaryPicContent = make_shared<string>(boost::any_cast<string>(m["SecondaryPicContent"]));
    }
  }


  virtual ~CompareSimilarByImageRequest() = default;
};
class CompareSimilarByImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<Darabonba::Stream> primaryPicContentObject{};
  shared_ptr<Darabonba::Stream> secondaryPicContentObject{};

  CompareSimilarByImageAdvanceRequest() {}

  explicit CompareSimilarByImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (primaryPicContentObject) {
      res["PrimaryPicContent"] = boost::any(*primaryPicContentObject);
    }
    if (secondaryPicContentObject) {
      res["SecondaryPicContent"] = boost::any(*secondaryPicContentObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PrimaryPicContent") != m.end() && !m["PrimaryPicContent"].empty()) {
      primaryPicContentObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PrimaryPicContent"]));
    }
    if (m.find("SecondaryPicContent") != m.end() && !m["SecondaryPicContent"].empty()) {
      secondaryPicContentObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["SecondaryPicContent"]));
    }
  }


  virtual ~CompareSimilarByImageAdvanceRequest() = default;
};
class CompareSimilarByImageResponseBodyAccessDeniedDetail : public Darabonba::Model {
public:
  shared_ptr<string> authAction{};
  shared_ptr<string> authPrincipalDisplayName{};
  shared_ptr<string> authPrincipalOwnerId{};
  shared_ptr<string> authPrincipalType{};
  shared_ptr<string> encodedDiagnosticMessage{};
  shared_ptr<string> noPermissionType{};
  shared_ptr<string> policyType{};

  CompareSimilarByImageResponseBodyAccessDeniedDetail() {}

  explicit CompareSimilarByImageResponseBodyAccessDeniedDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authAction) {
      res["AuthAction"] = boost::any(*authAction);
    }
    if (authPrincipalDisplayName) {
      res["AuthPrincipalDisplayName"] = boost::any(*authPrincipalDisplayName);
    }
    if (authPrincipalOwnerId) {
      res["AuthPrincipalOwnerId"] = boost::any(*authPrincipalOwnerId);
    }
    if (authPrincipalType) {
      res["AuthPrincipalType"] = boost::any(*authPrincipalType);
    }
    if (encodedDiagnosticMessage) {
      res["EncodedDiagnosticMessage"] = boost::any(*encodedDiagnosticMessage);
    }
    if (noPermissionType) {
      res["NoPermissionType"] = boost::any(*noPermissionType);
    }
    if (policyType) {
      res["PolicyType"] = boost::any(*policyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthAction") != m.end() && !m["AuthAction"].empty()) {
      authAction = make_shared<string>(boost::any_cast<string>(m["AuthAction"]));
    }
    if (m.find("AuthPrincipalDisplayName") != m.end() && !m["AuthPrincipalDisplayName"].empty()) {
      authPrincipalDisplayName = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalDisplayName"]));
    }
    if (m.find("AuthPrincipalOwnerId") != m.end() && !m["AuthPrincipalOwnerId"].empty()) {
      authPrincipalOwnerId = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalOwnerId"]));
    }
    if (m.find("AuthPrincipalType") != m.end() && !m["AuthPrincipalType"].empty()) {
      authPrincipalType = make_shared<string>(boost::any_cast<string>(m["AuthPrincipalType"]));
    }
    if (m.find("EncodedDiagnosticMessage") != m.end() && !m["EncodedDiagnosticMessage"].empty()) {
      encodedDiagnosticMessage = make_shared<string>(boost::any_cast<string>(m["EncodedDiagnosticMessage"]));
    }
    if (m.find("NoPermissionType") != m.end() && !m["NoPermissionType"].empty()) {
      noPermissionType = make_shared<string>(boost::any_cast<string>(m["NoPermissionType"]));
    }
    if (m.find("PolicyType") != m.end() && !m["PolicyType"].empty()) {
      policyType = make_shared<string>(boost::any_cast<string>(m["PolicyType"]));
    }
  }


  virtual ~CompareSimilarByImageResponseBodyAccessDeniedDetail() = default;
};
class CompareSimilarByImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<CompareSimilarByImageResponseBodyAccessDeniedDetail> accessDeniedDetail{};
  shared_ptr<long> code{};
  shared_ptr<string> msg{};
  shared_ptr<string> requestId{};
  shared_ptr<double> score{};
  shared_ptr<bool> success{};

  CompareSimilarByImageResponseBody() {}

  explicit CompareSimilarByImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = accessDeniedDetail ? boost::any(accessDeniedDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["AccessDeniedDetail"].type()) {
        CompareSimilarByImageResponseBodyAccessDeniedDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AccessDeniedDetail"]));
        accessDeniedDetail = make_shared<CompareSimilarByImageResponseBodyAccessDeniedDetail>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CompareSimilarByImageResponseBody() = default;
};
class CompareSimilarByImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CompareSimilarByImageResponseBody> body{};

  CompareSimilarByImageResponse() {}

  explicit CompareSimilarByImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareSimilarByImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareSimilarByImageResponseBody>(model1);
      }
    }
  }


  virtual ~CompareSimilarByImageResponse() = default;
};
class DeleteImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> filter{};
  shared_ptr<string> instanceName{};
  shared_ptr<bool> isDeleteByFilter{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};

  DeleteImageRequest() {}

  explicit DeleteImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (isDeleteByFilter) {
      res["IsDeleteByFilter"] = boost::any(*isDeleteByFilter);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IsDeleteByFilter") != m.end() && !m["IsDeleteByFilter"].empty()) {
      isDeleteByFilter = make_shared<bool>(boost::any_cast<bool>(m["IsDeleteByFilter"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
  }


  virtual ~DeleteImageRequest() = default;
};
class DeleteImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> picNames{};

  DeleteImageResponseBodyData() {}

  explicit DeleteImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picNames) {
      res["PicNames"] = boost::any(*picNames);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PicNames") != m.end() && !m["PicNames"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PicNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PicNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      picNames = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteImageResponseBodyData() = default;
};
class DeleteImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DeleteImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteImageResponseBody() {}

  explicit DeleteImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteImageResponseBodyData>(model1);
      }
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


  virtual ~DeleteImageResponseBody() = default;
};
class DeleteImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImageResponseBody> body{};

  DeleteImageResponse() {}

  explicit DeleteImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageResponse() = default;
};
class DetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};

  DetailRequest() {}

  explicit DetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~DetailRequest() = default;
};
class DetailResponseBodyInstance : public Darabonba::Model {
public:
  shared_ptr<long> capacity{};
  shared_ptr<string> name{};
  shared_ptr<long> qps{};
  shared_ptr<string> region{};
  shared_ptr<long> serviceType{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> utcCreate{};
  shared_ptr<string> utcExpireTime{};

  DetailResponseBodyInstance() {}

  explicit DetailResponseBodyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (qps) {
      res["Qps"] = boost::any(*qps);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (serviceType) {
      res["ServiceType"] = boost::any(*serviceType);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (utcCreate) {
      res["UtcCreate"] = boost::any(*utcCreate);
    }
    if (utcExpireTime) {
      res["UtcExpireTime"] = boost::any(*utcExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Qps") != m.end() && !m["Qps"].empty()) {
      qps = make_shared<long>(boost::any_cast<long>(m["Qps"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ServiceType") != m.end() && !m["ServiceType"].empty()) {
      serviceType = make_shared<long>(boost::any_cast<long>(m["ServiceType"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UtcCreate") != m.end() && !m["UtcCreate"].empty()) {
      utcCreate = make_shared<string>(boost::any_cast<string>(m["UtcCreate"]));
    }
    if (m.find("UtcExpireTime") != m.end() && !m["UtcExpireTime"].empty()) {
      utcExpireTime = make_shared<string>(boost::any_cast<string>(m["UtcExpireTime"]));
    }
  }


  virtual ~DetailResponseBodyInstance() = default;
};
class DetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetailResponseBodyInstance> instance{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DetailResponseBody() {}

  explicit DetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        DetailResponseBodyInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<DetailResponseBodyInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DetailResponseBody() = default;
};
class DetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetailResponseBody> body{};

  DetailResponse() {}

  explicit DetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetailResponseBody>(model1);
      }
    }
  }


  virtual ~DetailResponse() = default;
};
class DumpMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};

  DumpMetaRequest() {}

  explicit DumpMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
  }


  virtual ~DumpMetaRequest() = default;
};
class DumpMetaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dumpMetaStatus{};
  shared_ptr<string> id{};

  DumpMetaResponseBodyData() {}

  explicit DumpMetaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dumpMetaStatus) {
      res["DumpMetaStatus"] = boost::any(*dumpMetaStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DumpMetaStatus") != m.end() && !m["DumpMetaStatus"].empty()) {
      dumpMetaStatus = make_shared<string>(boost::any_cast<string>(m["DumpMetaStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~DumpMetaResponseBodyData() = default;
};
class DumpMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<DumpMetaResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DumpMetaResponseBody() {}

  explicit DumpMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DumpMetaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DumpMetaResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DumpMetaResponseBody() = default;
};
class DumpMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DumpMetaResponseBody> body{};

  DumpMetaResponse() {}

  explicit DumpMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DumpMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DumpMetaResponseBody>(model1);
      }
    }
  }


  virtual ~DumpMetaResponse() = default;
};
class DumpMetaListRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DumpMetaListRequest() {}

  explicit DumpMetaListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DumpMetaListRequest() = default;
};
class DumpMetaListResponseBodyDataDumpMetaList : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> id{};
  shared_ptr<string> metaUrl{};
  shared_ptr<string> msg{};
  shared_ptr<string> status{};
  shared_ptr<string> utcCreate{};
  shared_ptr<long> utcModified{};

  DumpMetaListResponseBodyDataDumpMetaList() {}

  explicit DumpMetaListResponseBodyDataDumpMetaList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (metaUrl) {
      res["MetaUrl"] = boost::any(*metaUrl);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (utcCreate) {
      res["UtcCreate"] = boost::any(*utcCreate);
    }
    if (utcModified) {
      res["UtcModified"] = boost::any(*utcModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("MetaUrl") != m.end() && !m["MetaUrl"].empty()) {
      metaUrl = make_shared<string>(boost::any_cast<string>(m["MetaUrl"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UtcCreate") != m.end() && !m["UtcCreate"].empty()) {
      utcCreate = make_shared<string>(boost::any_cast<string>(m["UtcCreate"]));
    }
    if (m.find("UtcModified") != m.end() && !m["UtcModified"].empty()) {
      utcModified = make_shared<long>(boost::any_cast<long>(m["UtcModified"]));
    }
  }


  virtual ~DumpMetaListResponseBodyDataDumpMetaList() = default;
};
class DumpMetaListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DumpMetaListResponseBodyDataDumpMetaList>> dumpMetaList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  DumpMetaListResponseBodyData() {}

  explicit DumpMetaListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dumpMetaList) {
      vector<boost::any> temp1;
      for(auto item1:*dumpMetaList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DumpMetaList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DumpMetaList") != m.end() && !m["DumpMetaList"].empty()) {
      if (typeid(vector<boost::any>) == m["DumpMetaList"].type()) {
        vector<DumpMetaListResponseBodyDataDumpMetaList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DumpMetaList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DumpMetaListResponseBodyDataDumpMetaList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dumpMetaList = make_shared<vector<DumpMetaListResponseBodyDataDumpMetaList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DumpMetaListResponseBodyData() = default;
};
class DumpMetaListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DumpMetaListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DumpMetaListResponseBody() {}

  explicit DumpMetaListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DumpMetaListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DumpMetaListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DumpMetaListResponseBody() = default;
};
class DumpMetaListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DumpMetaListResponseBody> body{};

  DumpMetaListResponse() {}

  explicit DumpMetaListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DumpMetaListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DumpMetaListResponseBody>(model1);
      }
    }
  }


  virtual ~DumpMetaListResponse() = default;
};
class IncreaseInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> callbackAddress{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> path{};

  IncreaseInstanceRequest() {}

  explicit IncreaseInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (callbackAddress) {
      res["CallbackAddress"] = boost::any(*callbackAddress);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CallbackAddress") != m.end() && !m["CallbackAddress"].empty()) {
      callbackAddress = make_shared<string>(boost::any_cast<string>(m["CallbackAddress"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~IncreaseInstanceRequest() = default;
};
class IncreaseInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> incrementStatus{};

  IncreaseInstanceResponseBodyData() {}

  explicit IncreaseInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (incrementStatus) {
      res["IncrementStatus"] = boost::any(*incrementStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IncrementStatus") != m.end() && !m["IncrementStatus"].empty()) {
      incrementStatus = make_shared<string>(boost::any_cast<string>(m["IncrementStatus"]));
    }
  }


  virtual ~IncreaseInstanceResponseBodyData() = default;
};
class IncreaseInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<IncreaseInstanceResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  IncreaseInstanceResponseBody() {}

  explicit IncreaseInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        IncreaseInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<IncreaseInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~IncreaseInstanceResponseBody() = default;
};
class IncreaseInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IncreaseInstanceResponseBody> body{};

  IncreaseInstanceResponse() {}

  explicit IncreaseInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IncreaseInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IncreaseInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~IncreaseInstanceResponse() = default;
};
class IncreaseListRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> path{};

  IncreaseListRequest() {}

  explicit IncreaseListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~IncreaseListRequest() = default;
};
class IncreaseListResponseBodyDataIncrementsInstance : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> callbackAddress{};
  shared_ptr<string> code{};
  shared_ptr<string> errorUrl{};
  shared_ptr<long> id{};
  shared_ptr<string> msg{};
  shared_ptr<string> path{};
  shared_ptr<string> status{};
  shared_ptr<string> utcCreate{};
  shared_ptr<long> utcModified{};

  IncreaseListResponseBodyDataIncrementsInstance() {}

  explicit IncreaseListResponseBodyDataIncrementsInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (callbackAddress) {
      res["CallbackAddress"] = boost::any(*callbackAddress);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorUrl) {
      res["ErrorUrl"] = boost::any(*errorUrl);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (utcCreate) {
      res["UtcCreate"] = boost::any(*utcCreate);
    }
    if (utcModified) {
      res["UtcModified"] = boost::any(*utcModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CallbackAddress") != m.end() && !m["CallbackAddress"].empty()) {
      callbackAddress = make_shared<string>(boost::any_cast<string>(m["CallbackAddress"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorUrl") != m.end() && !m["ErrorUrl"].empty()) {
      errorUrl = make_shared<string>(boost::any_cast<string>(m["ErrorUrl"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UtcCreate") != m.end() && !m["UtcCreate"].empty()) {
      utcCreate = make_shared<string>(boost::any_cast<string>(m["UtcCreate"]));
    }
    if (m.find("UtcModified") != m.end() && !m["UtcModified"].empty()) {
      utcModified = make_shared<long>(boost::any_cast<long>(m["UtcModified"]));
    }
  }


  virtual ~IncreaseListResponseBodyDataIncrementsInstance() = default;
};
class IncreaseListResponseBodyDataIncrements : public Darabonba::Model {
public:
  shared_ptr<vector<IncreaseListResponseBodyDataIncrementsInstance>> instance{};

  IncreaseListResponseBodyDataIncrements() {}

  explicit IncreaseListResponseBodyDataIncrements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<IncreaseListResponseBodyDataIncrementsInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IncreaseListResponseBodyDataIncrementsInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<IncreaseListResponseBodyDataIncrementsInstance>>(expect1);
      }
    }
  }


  virtual ~IncreaseListResponseBodyDataIncrements() = default;
};
class IncreaseListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<IncreaseListResponseBodyDataIncrements> increments{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  IncreaseListResponseBodyData() {}

  explicit IncreaseListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (increments) {
      res["Increments"] = increments ? boost::any(increments->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Increments") != m.end() && !m["Increments"].empty()) {
      if (typeid(map<string, boost::any>) == m["Increments"].type()) {
        IncreaseListResponseBodyDataIncrements model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Increments"]));
        increments = make_shared<IncreaseListResponseBodyDataIncrements>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~IncreaseListResponseBodyData() = default;
};
class IncreaseListResponseBody : public Darabonba::Model {
public:
  shared_ptr<IncreaseListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  IncreaseListResponseBody() {}

  explicit IncreaseListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        IncreaseListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<IncreaseListResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IncreaseListResponseBody() = default;
};
class IncreaseListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IncreaseListResponseBody> body{};

  IncreaseListResponse() {}

  explicit IncreaseListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IncreaseListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IncreaseListResponseBody>(model1);
      }
    }
  }


  virtual ~IncreaseListResponse() = default;
};
class SearchImageByNameRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> distinctProductId{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> num{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<long> start{};

  SearchImageByNameRequest() {}

  explicit SearchImageByNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (distinctProductId) {
      res["DistinctProductId"] = boost::any(*distinctProductId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("DistinctProductId") != m.end() && !m["DistinctProductId"].empty()) {
      distinctProductId = make_shared<bool>(boost::any_cast<bool>(m["DistinctProductId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~SearchImageByNameRequest() = default;
};
class SearchImageByNameResponseBodyAuctions : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<long> intAttr2{};
  shared_ptr<long> intAttr3{};
  shared_ptr<long> intAttr4{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<double> score{};
  shared_ptr<string> sortExprValues{};
  shared_ptr<string> strAttr{};
  shared_ptr<string> strAttr2{};
  shared_ptr<string> strAttr3{};
  shared_ptr<string> strAttr4{};

  SearchImageByNameResponseBodyAuctions() {}

  explicit SearchImageByNameResponseBodyAuctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (intAttr2) {
      res["IntAttr2"] = boost::any(*intAttr2);
    }
    if (intAttr3) {
      res["IntAttr3"] = boost::any(*intAttr3);
    }
    if (intAttr4) {
      res["IntAttr4"] = boost::any(*intAttr4);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (sortExprValues) {
      res["SortExprValues"] = boost::any(*sortExprValues);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    if (strAttr2) {
      res["StrAttr2"] = boost::any(*strAttr2);
    }
    if (strAttr3) {
      res["StrAttr3"] = boost::any(*strAttr3);
    }
    if (strAttr4) {
      res["StrAttr4"] = boost::any(*strAttr4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("IntAttr2") != m.end() && !m["IntAttr2"].empty()) {
      intAttr2 = make_shared<long>(boost::any_cast<long>(m["IntAttr2"]));
    }
    if (m.find("IntAttr3") != m.end() && !m["IntAttr3"].empty()) {
      intAttr3 = make_shared<long>(boost::any_cast<long>(m["IntAttr3"]));
    }
    if (m.find("IntAttr4") != m.end() && !m["IntAttr4"].empty()) {
      intAttr4 = make_shared<long>(boost::any_cast<long>(m["IntAttr4"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SortExprValues") != m.end() && !m["SortExprValues"].empty()) {
      sortExprValues = make_shared<string>(boost::any_cast<string>(m["SortExprValues"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
    if (m.find("StrAttr2") != m.end() && !m["StrAttr2"].empty()) {
      strAttr2 = make_shared<string>(boost::any_cast<string>(m["StrAttr2"]));
    }
    if (m.find("StrAttr3") != m.end() && !m["StrAttr3"].empty()) {
      strAttr3 = make_shared<string>(boost::any_cast<string>(m["StrAttr3"]));
    }
    if (m.find("StrAttr4") != m.end() && !m["StrAttr4"].empty()) {
      strAttr4 = make_shared<string>(boost::any_cast<string>(m["StrAttr4"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyAuctions() = default;
};
class SearchImageByNameResponseBodyHead : public Darabonba::Model {
public:
  shared_ptr<long> docsFound{};
  shared_ptr<long> docsReturn{};
  shared_ptr<long> searchTime{};

  SearchImageByNameResponseBodyHead() {}

  explicit SearchImageByNameResponseBodyHead(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docsFound) {
      res["DocsFound"] = boost::any(*docsFound);
    }
    if (docsReturn) {
      res["DocsReturn"] = boost::any(*docsReturn);
    }
    if (searchTime) {
      res["SearchTime"] = boost::any(*searchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocsFound") != m.end() && !m["DocsFound"].empty()) {
      docsFound = make_shared<long>(boost::any_cast<long>(m["DocsFound"]));
    }
    if (m.find("DocsReturn") != m.end() && !m["DocsReturn"].empty()) {
      docsReturn = make_shared<long>(boost::any_cast<long>(m["DocsReturn"]));
    }
    if (m.find("SearchTime") != m.end() && !m["SearchTime"].empty()) {
      searchTime = make_shared<long>(boost::any_cast<long>(m["SearchTime"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyHead() = default;
};
class SearchImageByNameResponseBodyPicInfoAllCategories : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  SearchImageByNameResponseBodyPicInfoAllCategories() {}

  explicit SearchImageByNameResponseBodyPicInfoAllCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyPicInfoAllCategories() = default;
};
class SearchImageByNameResponseBodyPicInfoMultiRegion : public Darabonba::Model {
public:
  shared_ptr<string> region{};

  SearchImageByNameResponseBodyPicInfoMultiRegion() {}

  explicit SearchImageByNameResponseBodyPicInfoMultiRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyPicInfoMultiRegion() = default;
};
class SearchImageByNameResponseBodyPicInfo : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageByNameResponseBodyPicInfoAllCategories>> allCategories{};
  shared_ptr<long> categoryId{};
  shared_ptr<vector<SearchImageByNameResponseBodyPicInfoMultiRegion>> multiRegion{};
  shared_ptr<string> region{};

  SearchImageByNameResponseBodyPicInfo() {}

  explicit SearchImageByNameResponseBodyPicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allCategories) {
      vector<boost::any> temp1;
      for(auto item1:*allCategories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AllCategories"] = boost::any(temp1);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (multiRegion) {
      vector<boost::any> temp1;
      for(auto item1:*multiRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MultiRegion"] = boost::any(temp1);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllCategories") != m.end() && !m["AllCategories"].empty()) {
      if (typeid(vector<boost::any>) == m["AllCategories"].type()) {
        vector<SearchImageByNameResponseBodyPicInfoAllCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AllCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyPicInfoAllCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allCategories = make_shared<vector<SearchImageByNameResponseBodyPicInfoAllCategories>>(expect1);
      }
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("MultiRegion") != m.end() && !m["MultiRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["MultiRegion"].type()) {
        vector<SearchImageByNameResponseBodyPicInfoMultiRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MultiRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyPicInfoMultiRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiRegion = make_shared<vector<SearchImageByNameResponseBodyPicInfoMultiRegion>>(expect1);
      }
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SearchImageByNameResponseBodyPicInfo() = default;
};
class SearchImageByNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageByNameResponseBodyAuctions>> auctions{};
  shared_ptr<long> code{};
  shared_ptr<SearchImageByNameResponseBodyHead> head{};
  shared_ptr<string> msg{};
  shared_ptr<SearchImageByNameResponseBodyPicInfo> picInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchImageByNameResponseBody() {}

  explicit SearchImageByNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctions) {
      vector<boost::any> temp1;
      for(auto item1:*auctions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Auctions"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (head) {
      res["Head"] = head ? boost::any(head->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (picInfo) {
      res["PicInfo"] = picInfo ? boost::any(picInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Auctions") != m.end() && !m["Auctions"].empty()) {
      if (typeid(vector<boost::any>) == m["Auctions"].type()) {
        vector<SearchImageByNameResponseBodyAuctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Auctions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByNameResponseBodyAuctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auctions = make_shared<vector<SearchImageByNameResponseBodyAuctions>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Head") != m.end() && !m["Head"].empty()) {
      if (typeid(map<string, boost::any>) == m["Head"].type()) {
        SearchImageByNameResponseBodyHead model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Head"]));
        head = make_shared<SearchImageByNameResponseBodyHead>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("PicInfo") != m.end() && !m["PicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PicInfo"].type()) {
        SearchImageByNameResponseBodyPicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PicInfo"]));
        picInfo = make_shared<SearchImageByNameResponseBodyPicInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchImageByNameResponseBody() = default;
};
class SearchImageByNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchImageByNameResponseBody> body{};

  SearchImageByNameResponse() {}

  explicit SearchImageByNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchImageByNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchImageByNameResponseBody>(model1);
      }
    }
  }


  virtual ~SearchImageByNameResponse() = default;
};
class SearchImageByPicRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> crop{};
  shared_ptr<bool> distinctProductId{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> num{};
  shared_ptr<string> picContent{};
  shared_ptr<string> region{};
  shared_ptr<long> start{};

  SearchImageByPicRequest() {}

  explicit SearchImageByPicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (distinctProductId) {
      res["DistinctProductId"] = boost::any(*distinctProductId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picContent) {
      res["PicContent"] = boost::any(*picContent);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<bool>(boost::any_cast<bool>(m["Crop"]));
    }
    if (m.find("DistinctProductId") != m.end() && !m["DistinctProductId"].empty()) {
      distinctProductId = make_shared<bool>(boost::any_cast<bool>(m["DistinctProductId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContent = make_shared<string>(boost::any_cast<string>(m["PicContent"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~SearchImageByPicRequest() = default;
};
class SearchImageByPicAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> crop{};
  shared_ptr<bool> distinctProductId{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> num{};
  shared_ptr<Darabonba::Stream> picContentObject{};
  shared_ptr<string> region{};
  shared_ptr<long> start{};

  SearchImageByPicAdvanceRequest() {}

  explicit SearchImageByPicAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    if (distinctProductId) {
      res["DistinctProductId"] = boost::any(*distinctProductId);
    }
    if (filter) {
      res["Filter"] = boost::any(*filter);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (num) {
      res["Num"] = boost::any(*num);
    }
    if (picContentObject) {
      res["PicContent"] = boost::any(*picContentObject);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<bool>(boost::any_cast<bool>(m["Crop"]));
    }
    if (m.find("DistinctProductId") != m.end() && !m["DistinctProductId"].empty()) {
      distinctProductId = make_shared<bool>(boost::any_cast<bool>(m["DistinctProductId"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filter = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("Num") != m.end() && !m["Num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["Num"]));
    }
    if (m.find("PicContent") != m.end() && !m["PicContent"].empty()) {
      picContentObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PicContent"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~SearchImageByPicAdvanceRequest() = default;
};
class SearchImageByPicResponseBodyAuctions : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<long> intAttr2{};
  shared_ptr<long> intAttr3{};
  shared_ptr<long> intAttr4{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<double> score{};
  shared_ptr<string> sortExprValues{};
  shared_ptr<string> strAttr{};
  shared_ptr<string> strAttr2{};
  shared_ptr<string> strAttr3{};
  shared_ptr<string> strAttr4{};

  SearchImageByPicResponseBodyAuctions() {}

  explicit SearchImageByPicResponseBodyAuctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (intAttr2) {
      res["IntAttr2"] = boost::any(*intAttr2);
    }
    if (intAttr3) {
      res["IntAttr3"] = boost::any(*intAttr3);
    }
    if (intAttr4) {
      res["IntAttr4"] = boost::any(*intAttr4);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (sortExprValues) {
      res["SortExprValues"] = boost::any(*sortExprValues);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    if (strAttr2) {
      res["StrAttr2"] = boost::any(*strAttr2);
    }
    if (strAttr3) {
      res["StrAttr3"] = boost::any(*strAttr3);
    }
    if (strAttr4) {
      res["StrAttr4"] = boost::any(*strAttr4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("IntAttr2") != m.end() && !m["IntAttr2"].empty()) {
      intAttr2 = make_shared<long>(boost::any_cast<long>(m["IntAttr2"]));
    }
    if (m.find("IntAttr3") != m.end() && !m["IntAttr3"].empty()) {
      intAttr3 = make_shared<long>(boost::any_cast<long>(m["IntAttr3"]));
    }
    if (m.find("IntAttr4") != m.end() && !m["IntAttr4"].empty()) {
      intAttr4 = make_shared<long>(boost::any_cast<long>(m["IntAttr4"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SortExprValues") != m.end() && !m["SortExprValues"].empty()) {
      sortExprValues = make_shared<string>(boost::any_cast<string>(m["SortExprValues"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
    if (m.find("StrAttr2") != m.end() && !m["StrAttr2"].empty()) {
      strAttr2 = make_shared<string>(boost::any_cast<string>(m["StrAttr2"]));
    }
    if (m.find("StrAttr3") != m.end() && !m["StrAttr3"].empty()) {
      strAttr3 = make_shared<string>(boost::any_cast<string>(m["StrAttr3"]));
    }
    if (m.find("StrAttr4") != m.end() && !m["StrAttr4"].empty()) {
      strAttr4 = make_shared<string>(boost::any_cast<string>(m["StrAttr4"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyAuctions() = default;
};
class SearchImageByPicResponseBodyHead : public Darabonba::Model {
public:
  shared_ptr<long> docsFound{};
  shared_ptr<long> docsReturn{};
  shared_ptr<long> searchTime{};

  SearchImageByPicResponseBodyHead() {}

  explicit SearchImageByPicResponseBodyHead(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docsFound) {
      res["DocsFound"] = boost::any(*docsFound);
    }
    if (docsReturn) {
      res["DocsReturn"] = boost::any(*docsReturn);
    }
    if (searchTime) {
      res["SearchTime"] = boost::any(*searchTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocsFound") != m.end() && !m["DocsFound"].empty()) {
      docsFound = make_shared<long>(boost::any_cast<long>(m["DocsFound"]));
    }
    if (m.find("DocsReturn") != m.end() && !m["DocsReturn"].empty()) {
      docsReturn = make_shared<long>(boost::any_cast<long>(m["DocsReturn"]));
    }
    if (m.find("SearchTime") != m.end() && !m["SearchTime"].empty()) {
      searchTime = make_shared<long>(boost::any_cast<long>(m["SearchTime"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyHead() = default;
};
class SearchImageByPicResponseBodyPicInfoAllCategories : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  SearchImageByPicResponseBodyPicInfoAllCategories() {}

  explicit SearchImageByPicResponseBodyPicInfoAllCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyPicInfoAllCategories() = default;
};
class SearchImageByPicResponseBodyPicInfoMultiRegion : public Darabonba::Model {
public:
  shared_ptr<string> region{};

  SearchImageByPicResponseBodyPicInfoMultiRegion() {}

  explicit SearchImageByPicResponseBodyPicInfoMultiRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyPicInfoMultiRegion() = default;
};
class SearchImageByPicResponseBodyPicInfo : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageByPicResponseBodyPicInfoAllCategories>> allCategories{};
  shared_ptr<long> categoryId{};
  shared_ptr<vector<SearchImageByPicResponseBodyPicInfoMultiRegion>> multiRegion{};
  shared_ptr<string> region{};

  SearchImageByPicResponseBodyPicInfo() {}

  explicit SearchImageByPicResponseBodyPicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allCategories) {
      vector<boost::any> temp1;
      for(auto item1:*allCategories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AllCategories"] = boost::any(temp1);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (multiRegion) {
      vector<boost::any> temp1;
      for(auto item1:*multiRegion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MultiRegion"] = boost::any(temp1);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllCategories") != m.end() && !m["AllCategories"].empty()) {
      if (typeid(vector<boost::any>) == m["AllCategories"].type()) {
        vector<SearchImageByPicResponseBodyPicInfoAllCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AllCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyPicInfoAllCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allCategories = make_shared<vector<SearchImageByPicResponseBodyPicInfoAllCategories>>(expect1);
      }
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("MultiRegion") != m.end() && !m["MultiRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["MultiRegion"].type()) {
        vector<SearchImageByPicResponseBodyPicInfoMultiRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MultiRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyPicInfoMultiRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiRegion = make_shared<vector<SearchImageByPicResponseBodyPicInfoMultiRegion>>(expect1);
      }
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SearchImageByPicResponseBodyPicInfo() = default;
};
class SearchImageByPicResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageByPicResponseBodyAuctions>> auctions{};
  shared_ptr<long> code{};
  shared_ptr<SearchImageByPicResponseBodyHead> head{};
  shared_ptr<string> msg{};
  shared_ptr<SearchImageByPicResponseBodyPicInfo> picInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchImageByPicResponseBody() {}

  explicit SearchImageByPicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auctions) {
      vector<boost::any> temp1;
      for(auto item1:*auctions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Auctions"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (head) {
      res["Head"] = head ? boost::any(head->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (msg) {
      res["Msg"] = boost::any(*msg);
    }
    if (picInfo) {
      res["PicInfo"] = picInfo ? boost::any(picInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Auctions") != m.end() && !m["Auctions"].empty()) {
      if (typeid(vector<boost::any>) == m["Auctions"].type()) {
        vector<SearchImageByPicResponseBodyAuctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Auctions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageByPicResponseBodyAuctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auctions = make_shared<vector<SearchImageByPicResponseBodyAuctions>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Head") != m.end() && !m["Head"].empty()) {
      if (typeid(map<string, boost::any>) == m["Head"].type()) {
        SearchImageByPicResponseBodyHead model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Head"]));
        head = make_shared<SearchImageByPicResponseBodyHead>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("PicInfo") != m.end() && !m["PicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PicInfo"].type()) {
        SearchImageByPicResponseBodyPicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PicInfo"]));
        picInfo = make_shared<SearchImageByPicResponseBodyPicInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchImageByPicResponseBody() = default;
};
class SearchImageByPicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchImageByPicResponseBody> body{};

  SearchImageByPicResponse() {}

  explicit SearchImageByPicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchImageByPicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchImageByPicResponseBody>(model1);
      }
    }
  }


  virtual ~SearchImageByPicResponse() = default;
};
class UpdateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> customContent{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> intAttr{};
  shared_ptr<long> intAttr2{};
  shared_ptr<long> intAttr3{};
  shared_ptr<long> intAttr4{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<string> strAttr{};
  shared_ptr<string> strAttr2{};
  shared_ptr<string> strAttr3{};
  shared_ptr<string> strAttr4{};

  UpdateImageRequest() {}

  explicit UpdateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customContent) {
      res["CustomContent"] = boost::any(*customContent);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (intAttr) {
      res["IntAttr"] = boost::any(*intAttr);
    }
    if (intAttr2) {
      res["IntAttr2"] = boost::any(*intAttr2);
    }
    if (intAttr3) {
      res["IntAttr3"] = boost::any(*intAttr3);
    }
    if (intAttr4) {
      res["IntAttr4"] = boost::any(*intAttr4);
    }
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (strAttr) {
      res["StrAttr"] = boost::any(*strAttr);
    }
    if (strAttr2) {
      res["StrAttr2"] = boost::any(*strAttr2);
    }
    if (strAttr3) {
      res["StrAttr3"] = boost::any(*strAttr3);
    }
    if (strAttr4) {
      res["StrAttr4"] = boost::any(*strAttr4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomContent") != m.end() && !m["CustomContent"].empty()) {
      customContent = make_shared<string>(boost::any_cast<string>(m["CustomContent"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("IntAttr") != m.end() && !m["IntAttr"].empty()) {
      intAttr = make_shared<long>(boost::any_cast<long>(m["IntAttr"]));
    }
    if (m.find("IntAttr2") != m.end() && !m["IntAttr2"].empty()) {
      intAttr2 = make_shared<long>(boost::any_cast<long>(m["IntAttr2"]));
    }
    if (m.find("IntAttr3") != m.end() && !m["IntAttr3"].empty()) {
      intAttr3 = make_shared<long>(boost::any_cast<long>(m["IntAttr3"]));
    }
    if (m.find("IntAttr4") != m.end() && !m["IntAttr4"].empty()) {
      intAttr4 = make_shared<long>(boost::any_cast<long>(m["IntAttr4"]));
    }
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("StrAttr") != m.end() && !m["StrAttr"].empty()) {
      strAttr = make_shared<string>(boost::any_cast<string>(m["StrAttr"]));
    }
    if (m.find("StrAttr2") != m.end() && !m["StrAttr2"].empty()) {
      strAttr2 = make_shared<string>(boost::any_cast<string>(m["StrAttr2"]));
    }
    if (m.find("StrAttr3") != m.end() && !m["StrAttr3"].empty()) {
      strAttr3 = make_shared<string>(boost::any_cast<string>(m["StrAttr3"]));
    }
    if (m.find("StrAttr4") != m.end() && !m["StrAttr4"].empty()) {
      strAttr4 = make_shared<string>(boost::any_cast<string>(m["StrAttr4"]));
    }
  }


  virtual ~UpdateImageRequest() = default;
};
class UpdateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateImageResponseBody() {}

  explicit UpdateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
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


  virtual ~UpdateImageResponseBody() = default;
};
class UpdateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateImageResponseBody> body{};

  UpdateImageResponse() {}

  explicit UpdateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageResponse() = default;
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
  AddImageResponse addImageWithOptions(shared_ptr<AddImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageResponse addImage(shared_ptr<AddImageRequest> request);
  AddImageResponse addImageAdvance(shared_ptr<AddImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareSimilarByImageResponse compareSimilarByImageWithOptions(shared_ptr<CompareSimilarByImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareSimilarByImageResponse compareSimilarByImage(shared_ptr<CompareSimilarByImageRequest> request);
  CompareSimilarByImageResponse compareSimilarByImageAdvance(shared_ptr<CompareSimilarByImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImage(shared_ptr<DeleteImageRequest> request);
  DetailResponse detailWithOptions(shared_ptr<DetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetailResponse detail(shared_ptr<DetailRequest> request);
  DumpMetaResponse dumpMetaWithOptions(shared_ptr<DumpMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DumpMetaResponse dumpMeta(shared_ptr<DumpMetaRequest> request);
  DumpMetaListResponse dumpMetaListWithOptions(shared_ptr<DumpMetaListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DumpMetaListResponse dumpMetaList(shared_ptr<DumpMetaListRequest> request);
  IncreaseInstanceResponse increaseInstanceWithOptions(shared_ptr<IncreaseInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IncreaseInstanceResponse increaseInstance(shared_ptr<IncreaseInstanceRequest> request);
  IncreaseListResponse increaseListWithOptions(shared_ptr<IncreaseListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IncreaseListResponse increaseList(shared_ptr<IncreaseListRequest> request);
  SearchImageByNameResponse searchImageByNameWithOptions(shared_ptr<SearchImageByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchImageByNameResponse searchImageByName(shared_ptr<SearchImageByNameRequest> request);
  SearchImageByPicResponse searchImageByPicWithOptions(shared_ptr<SearchImageByPicRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchImageByPicResponse searchImageByPic(shared_ptr<SearchImageByPicRequest> request);
  SearchImageByPicResponse searchImageByPicAdvance(shared_ptr<SearchImageByPicAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageResponse updateImageWithOptions(shared_ptr<UpdateImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageResponse updateImage(shared_ptr<UpdateImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ImageSearch20201214

#endif
