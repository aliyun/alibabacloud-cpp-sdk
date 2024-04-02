// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GREEN20170823_H_
#define ALIBABACLOUD_GREEN20170823_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Green20170823 {
class AuditItemSubmitRequestData : public Darabonba::Model {
public:
  shared_ptr<string> customResult{};
  shared_ptr<string> customRiskType{};
  shared_ptr<long> id{};

  AuditItemSubmitRequestData() {}

  explicit AuditItemSubmitRequestData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customResult) {
      res["CustomResult"] = boost::any(*customResult);
    }
    if (customRiskType) {
      res["CustomRiskType"] = boost::any(*customRiskType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomResult") != m.end() && !m["CustomResult"].empty()) {
      customResult = make_shared<string>(boost::any_cast<string>(m["CustomResult"]));
    }
    if (m.find("CustomRiskType") != m.end() && !m["CustomRiskType"].empty()) {
      customRiskType = make_shared<string>(boost::any_cast<string>(m["CustomRiskType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~AuditItemSubmitRequestData() = default;
};
class AuditItemSubmitRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AuditItemSubmitRequestData>> data{};

  AuditItemSubmitRequest() {}

  explicit AuditItemSubmitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<AuditItemSubmitRequestData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AuditItemSubmitRequestData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AuditItemSubmitRequestData>>(expect1);
      }
    }
  }


  virtual ~AuditItemSubmitRequest() = default;
};
class AuditItemSubmitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AuditItemSubmitResponseBody() {}

  explicit AuditItemSubmitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AuditItemSubmitResponseBody() = default;
};
class AuditItemSubmitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuditItemSubmitResponseBody> body{};

  AuditItemSubmitResponse() {}

  explicit AuditItemSubmitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuditItemSubmitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuditItemSubmitResponseBody>(model1);
      }
    }
  }


  virtual ~AuditItemSubmitResponse() = default;
};
class CreatCustomOcrTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> imgUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> recognizeArea{};
  shared_ptr<string> referArea{};

  CreatCustomOcrTemplateRequest() {}

  explicit CreatCustomOcrTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imgUrl) {
      res["ImgUrl"] = boost::any(*imgUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (recognizeArea) {
      res["RecognizeArea"] = boost::any(*recognizeArea);
    }
    if (referArea) {
      res["ReferArea"] = boost::any(*referArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImgUrl") != m.end() && !m["ImgUrl"].empty()) {
      imgUrl = make_shared<string>(boost::any_cast<string>(m["ImgUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RecognizeArea") != m.end() && !m["RecognizeArea"].empty()) {
      recognizeArea = make_shared<string>(boost::any_cast<string>(m["RecognizeArea"]));
    }
    if (m.find("ReferArea") != m.end() && !m["ReferArea"].empty()) {
      referArea = make_shared<string>(boost::any_cast<string>(m["ReferArea"]));
    }
  }


  virtual ~CreatCustomOcrTemplateRequest() = default;
};
class CreatCustomOcrTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreatCustomOcrTemplateResponseBody() {}

  explicit CreatCustomOcrTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreatCustomOcrTemplateResponseBody() = default;
};
class CreatCustomOcrTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatCustomOcrTemplateResponseBody> body{};

  CreatCustomOcrTemplateResponse() {}

  explicit CreatCustomOcrTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatCustomOcrTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatCustomOcrTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreatCustomOcrTemplateResponse() = default;
};
class CreateAuditCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> callbackSuggestions{};
  shared_ptr<string> callbackTypes{};
  shared_ptr<string> cryptType{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  CreateAuditCallbackRequest() {}

  explicit CreateAuditCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackSuggestions) {
      res["CallbackSuggestions"] = boost::any(*callbackSuggestions);
    }
    if (callbackTypes) {
      res["CallbackTypes"] = boost::any(*callbackTypes);
    }
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackSuggestions") != m.end() && !m["CallbackSuggestions"].empty()) {
      callbackSuggestions = make_shared<string>(boost::any_cast<string>(m["CallbackSuggestions"]));
    }
    if (m.find("CallbackTypes") != m.end() && !m["CallbackTypes"].empty()) {
      callbackTypes = make_shared<string>(boost::any_cast<string>(m["CallbackTypes"]));
    }
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateAuditCallbackRequest() = default;
};
class CreateAuditCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callbackSuggestions{};
  shared_ptr<vector<string>> callbackTypes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> cryptType{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> seed{};
  shared_ptr<string> url{};

  CreateAuditCallbackResponseBody() {}

  explicit CreateAuditCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackSuggestions) {
      res["CallbackSuggestions"] = boost::any(*callbackSuggestions);
    }
    if (callbackTypes) {
      res["CallbackTypes"] = boost::any(*callbackTypes);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackSuggestions") != m.end() && !m["CallbackSuggestions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallbackSuggestions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallbackSuggestions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callbackSuggestions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CallbackTypes") != m.end() && !m["CallbackTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallbackTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallbackTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callbackTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateAuditCallbackResponseBody() = default;
};
class CreateAuditCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAuditCallbackResponseBody> body{};

  CreateAuditCallbackResponse() {}

  explicit CreateAuditCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAuditCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAuditCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAuditCallbackResponse() = default;
};
class CreateBizTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeImport{};
  shared_ptr<string> bizTypeName{};
  shared_ptr<bool> citeTemplate{};
  shared_ptr<string> description{};
  shared_ptr<string> industryInfo{};

  CreateBizTypeRequest() {}

  explicit CreateBizTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeImport) {
      res["BizTypeImport"] = boost::any(*bizTypeImport);
    }
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (citeTemplate) {
      res["CiteTemplate"] = boost::any(*citeTemplate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (industryInfo) {
      res["IndustryInfo"] = boost::any(*industryInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeImport") != m.end() && !m["BizTypeImport"].empty()) {
      bizTypeImport = make_shared<string>(boost::any_cast<string>(m["BizTypeImport"]));
    }
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("CiteTemplate") != m.end() && !m["CiteTemplate"].empty()) {
      citeTemplate = make_shared<bool>(boost::any_cast<bool>(m["CiteTemplate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("IndustryInfo") != m.end() && !m["IndustryInfo"].empty()) {
      industryInfo = make_shared<string>(boost::any_cast<string>(m["IndustryInfo"]));
    }
  }


  virtual ~CreateBizTypeRequest() = default;
};
class CreateBizTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateBizTypeResponseBody() {}

  explicit CreateBizTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateBizTypeResponseBody() = default;
};
class CreateBizTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBizTypeResponseBody> body{};

  CreateBizTypeResponse() {}

  explicit CreateBizTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBizTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBizTypeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBizTypeResponse() = default;
};
class CreateCdiBagRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> flowOutSpec{};
  shared_ptr<long> orderNum{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};

  CreateCdiBagRequest() {}

  explicit CreateCdiBagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (flowOutSpec) {
      res["FlowOutSpec"] = boost::any(*flowOutSpec);
    }
    if (orderNum) {
      res["OrderNum"] = boost::any(*orderNum);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("FlowOutSpec") != m.end() && !m["FlowOutSpec"].empty()) {
      flowOutSpec = make_shared<long>(boost::any_cast<long>(m["FlowOutSpec"]));
    }
    if (m.find("OrderNum") != m.end() && !m["OrderNum"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["OrderNum"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~CreateCdiBagRequest() = default;
};
class CreateCdiBagResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  CreateCdiBagResponseBodyInstanceIds() {}

  explicit CreateCdiBagResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateCdiBagResponseBodyInstanceIds() = default;
};
class CreateCdiBagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateCdiBagResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateCdiBagResponseBody() {}

  explicit CreateCdiBagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        CreateCdiBagResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<CreateCdiBagResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCdiBagResponseBody() = default;
};
class CreateCdiBagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCdiBagResponseBody> body{};

  CreateCdiBagResponse() {}

  explicit CreateCdiBagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCdiBagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCdiBagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCdiBagResponse() = default;
};
class CreateCdiBaseBagRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> duration{};
  shared_ptr<long> flowOutSpec{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};

  CreateCdiBaseBagRequest() {}

  explicit CreateCdiBaseBagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (flowOutSpec) {
      res["FlowOutSpec"] = boost::any(*flowOutSpec);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FlowOutSpec") != m.end() && !m["FlowOutSpec"].empty()) {
      flowOutSpec = make_shared<long>(boost::any_cast<long>(m["FlowOutSpec"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~CreateCdiBaseBagRequest() = default;
};
class CreateCdiBaseBagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateCdiBaseBagResponseBody() {}

  explicit CreateCdiBaseBagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCdiBaseBagResponseBody() = default;
};
class CreateCdiBaseBagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCdiBaseBagResponseBody> body{};

  CreateCdiBaseBagResponse() {}

  explicit CreateCdiBaseBagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCdiBaseBagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCdiBaseBagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCdiBaseBagResponse() = default;
};
class CreateImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypes{};
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> name{};
  shared_ptr<string> scene{};
  shared_ptr<string> serviceModule{};
  shared_ptr<string> sourceIp{};

  CreateImageLibRequest() {}

  explicit CreateImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (serviceModule) {
      res["ServiceModule"] = boost::any(*serviceModule);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      bizTypes = make_shared<string>(boost::any_cast<string>(m["BizTypes"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("ServiceModule") != m.end() && !m["ServiceModule"].empty()) {
      serviceModule = make_shared<string>(boost::any_cast<string>(m["ServiceModule"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CreateImageLibRequest() = default;
};
class CreateImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateImageLibResponseBody() {}

  explicit CreateImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateImageLibResponseBody() = default;
};
class CreateImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageLibResponseBody> body{};

  CreateImageLibResponse() {}

  explicit CreateImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageLibResponse() = default;
};
class CreateKeywordRequest : public Darabonba::Model {
public:
  shared_ptr<long> keywordLibId{};
  shared_ptr<string> keywords{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  CreateKeywordRequest() {}

  explicit CreateKeywordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordLibId) {
      res["KeywordLibId"] = boost::any(*keywordLibId);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordLibId") != m.end() && !m["KeywordLibId"].empty()) {
      keywordLibId = make_shared<long>(boost::any_cast<long>(m["KeywordLibId"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CreateKeywordRequest() = default;
};
class CreateKeywordResponseBodyValidKeywordList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> keyword{};

  CreateKeywordResponseBodyValidKeywordList() {}

  explicit CreateKeywordResponseBodyValidKeywordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (keyword) {
      res["keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("keyword") != m.end() && !m["keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["keyword"]));
    }
  }


  virtual ~CreateKeywordResponseBodyValidKeywordList() = default;
};
class CreateKeywordResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> invalidKeywordList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> successCount{};
  shared_ptr<vector<CreateKeywordResponseBodyValidKeywordList>> validKeywordList{};

  CreateKeywordResponseBody() {}

  explicit CreateKeywordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidKeywordList) {
      res["InvalidKeywordList"] = boost::any(*invalidKeywordList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (validKeywordList) {
      vector<boost::any> temp1;
      for(auto item1:*validKeywordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["validKeywordList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvalidKeywordList") != m.end() && !m["InvalidKeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidKeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidKeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidKeywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("validKeywordList") != m.end() && !m["validKeywordList"].empty()) {
      if (typeid(vector<boost::any>) == m["validKeywordList"].type()) {
        vector<CreateKeywordResponseBodyValidKeywordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["validKeywordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateKeywordResponseBodyValidKeywordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        validKeywordList = make_shared<vector<CreateKeywordResponseBodyValidKeywordList>>(expect1);
      }
    }
  }


  virtual ~CreateKeywordResponseBody() = default;
};
class CreateKeywordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateKeywordResponseBody> body{};

  CreateKeywordResponse() {}

  explicit CreateKeywordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKeywordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKeywordResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKeywordResponse() = default;
};
class CreateKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypes{};
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> lang{};
  shared_ptr<string> language{};
  shared_ptr<string> libType{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceModule{};
  shared_ptr<string> sourceIp{};

  CreateKeywordLibRequest() {}

  explicit CreateKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (libType) {
      res["LibType"] = boost::any(*libType);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceModule) {
      res["ServiceModule"] = boost::any(*serviceModule);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      bizTypes = make_shared<string>(boost::any_cast<string>(m["BizTypes"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LibType") != m.end() && !m["LibType"].empty()) {
      libType = make_shared<string>(boost::any_cast<string>(m["LibType"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceModule") != m.end() && !m["ServiceModule"].empty()) {
      serviceModule = make_shared<string>(boost::any_cast<string>(m["ServiceModule"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CreateKeywordLibRequest() = default;
};
class CreateKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateKeywordLibResponseBody() {}

  explicit CreateKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateKeywordLibResponseBody() = default;
};
class CreateKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateKeywordLibResponseBody> body{};

  CreateKeywordLibResponse() {}

  explicit CreateKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKeywordLibResponse() = default;
};
class CreateWebSiteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> duration{};
  shared_ptr<long> orderNum{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pricingCycle{};

  CreateWebSiteInstanceRequest() {}

  explicit CreateWebSiteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (orderNum) {
      res["OrderNum"] = boost::any(*orderNum);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("OrderNum") != m.end() && !m["OrderNum"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["OrderNum"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~CreateWebSiteInstanceRequest() = default;
};
class CreateWebSiteInstanceResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  CreateWebSiteInstanceResponseBodyInstanceIds() {}

  explicit CreateWebSiteInstanceResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateWebSiteInstanceResponseBodyInstanceIds() = default;
};
class CreateWebSiteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateWebSiteInstanceResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  CreateWebSiteInstanceResponseBody() {}

  explicit CreateWebSiteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        CreateWebSiteInstanceResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<CreateWebSiteInstanceResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateWebSiteInstanceResponseBody() = default;
};
class CreateWebSiteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWebSiteInstanceResponseBody> body{};

  CreateWebSiteInstanceResponse() {}

  explicit CreateWebSiteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWebSiteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWebSiteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWebSiteInstanceResponse() = default;
};
class CreateWebsiteIndexPageBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  CreateWebsiteIndexPageBaselineRequest() {}

  explicit CreateWebsiteIndexPageBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~CreateWebsiteIndexPageBaselineRequest() = default;
};
class CreateWebsiteIndexPageBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateWebsiteIndexPageBaselineResponseBody() {}

  explicit CreateWebsiteIndexPageBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateWebsiteIndexPageBaselineResponseBody() = default;
};
class CreateWebsiteIndexPageBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWebsiteIndexPageBaselineResponseBody> body{};

  CreateWebsiteIndexPageBaselineResponse() {}

  explicit CreateWebsiteIndexPageBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateWebsiteIndexPageBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWebsiteIndexPageBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWebsiteIndexPageBaselineResponse() = default;
};
class DeleteBizTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};

  DeleteBizTypeRequest() {}

  explicit DeleteBizTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
  }


  virtual ~DeleteBizTypeRequest() = default;
};
class DeleteBizTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBizTypeResponseBody() {}

  explicit DeleteBizTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBizTypeResponseBody() = default;
};
class DeleteBizTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBizTypeResponseBody> body{};

  DeleteBizTypeResponse() {}

  explicit DeleteBizTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBizTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBizTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBizTypeResponse() = default;
};
class DeleteCustomOcrTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};

  DeleteCustomOcrTemplateRequest() {}

  explicit DeleteCustomOcrTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~DeleteCustomOcrTemplateRequest() = default;
};
class DeleteCustomOcrTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCustomOcrTemplateResponseBody() {}

  explicit DeleteCustomOcrTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCustomOcrTemplateResponseBody() = default;
};
class DeleteCustomOcrTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCustomOcrTemplateResponseBody> body{};

  DeleteCustomOcrTemplateResponse() {}

  explicit DeleteCustomOcrTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCustomOcrTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCustomOcrTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCustomOcrTemplateResponse() = default;
};
class DeleteImageFromLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> sourceIp{};

  DeleteImageFromLibRequest() {}

  explicit DeleteImageFromLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteImageFromLibRequest() = default;
};
class DeleteImageFromLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteImageFromLibResponseBody() {}

  explicit DeleteImageFromLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteImageFromLibResponseBody() = default;
};
class DeleteImageFromLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImageFromLibResponseBody> body{};

  DeleteImageFromLibResponse() {}

  explicit DeleteImageFromLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImageFromLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageFromLibResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageFromLibResponse() = default;
};
class DeleteImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> sourceIp{};

  DeleteImageLibRequest() {}

  explicit DeleteImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteImageLibRequest() = default;
};
class DeleteImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteImageLibResponseBody() {}

  explicit DeleteImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteImageLibResponseBody() = default;
};
class DeleteImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteImageLibResponseBody> body{};

  DeleteImageLibResponse() {}

  explicit DeleteImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageLibResponse() = default;
};
class DeleteKeywordRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> keywordLibId{};
  shared_ptr<string> keywords{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteKeywordRequest() {}

  explicit DeleteKeywordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (keywordLibId) {
      res["KeywordLibId"] = boost::any(*keywordLibId);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("KeywordLibId") != m.end() && !m["KeywordLibId"].empty()) {
      keywordLibId = make_shared<string>(boost::any_cast<string>(m["KeywordLibId"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteKeywordRequest() = default;
};
class DeleteKeywordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteKeywordResponseBody() {}

  explicit DeleteKeywordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKeywordResponseBody() = default;
};
class DeleteKeywordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKeywordResponseBody> body{};

  DeleteKeywordResponse() {}

  explicit DeleteKeywordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeywordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeywordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeywordResponse() = default;
};
class DeleteKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteKeywordLibRequest() {}

  explicit DeleteKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteKeywordLibRequest() = default;
};
class DeleteKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteKeywordLibResponseBody() {}

  explicit DeleteKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKeywordLibResponseBody() = default;
};
class DeleteKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteKeywordLibResponseBody> body{};

  DeleteKeywordLibResponse() {}

  explicit DeleteKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKeywordLibResponse() = default;
};
class DeleteNotificationContactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> contactTypes{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DeleteNotificationContactsRequest() {}

  explicit DeleteNotificationContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contactTypes) {
      res["ContactTypes"] = boost::any(*contactTypes);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContactTypes") != m.end() && !m["ContactTypes"].empty()) {
      contactTypes = make_shared<string>(boost::any_cast<string>(m["ContactTypes"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DeleteNotificationContactsRequest() = default;
};
class DeleteNotificationContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteNotificationContactsResponseBody() {}

  explicit DeleteNotificationContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteNotificationContactsResponseBody() = default;
};
class DeleteNotificationContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNotificationContactsResponseBody> body{};

  DeleteNotificationContactsResponse() {}

  explicit DeleteNotificationContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteNotificationContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNotificationContactsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNotificationContactsResponse() = default;
};
class DescribeAppInfoRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> platform{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> totalCount{};

  DescribeAppInfoRequest() {}

  explicit DescribeAppInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAppInfoRequest() = default;
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
class DescribeAppInfoResponseBodyAppInfoList : public Darabonba::Model {
public:
  shared_ptr<DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo> debugPackageInfo{};
  shared_ptr<string> endDate{};
  shared_ptr<string> icon{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<DescribeAppInfoResponseBodyAppInfoListPackageInfo> packageInfo{};
  shared_ptr<string> packageName{};
  shared_ptr<string> startDate{};
  shared_ptr<long> type{};

  DescribeAppInfoResponseBodyAppInfoList() {}

  explicit DescribeAppInfoResponseBodyAppInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugPackageInfo) {
      res["DebugPackageInfo"] = debugPackageInfo ? boost::any(debugPackageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageInfo) {
      res["PackageInfo"] = packageInfo ? boost::any(packageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugPackageInfo") != m.end() && !m["DebugPackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DebugPackageInfo"].type()) {
        DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DebugPackageInfo"]));
        debugPackageInfo = make_shared<DescribeAppInfoResponseBodyAppInfoListDebugPackageInfo>(model1);
      }
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageInfo") != m.end() && !m["PackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageInfo"].type()) {
        DescribeAppInfoResponseBodyAppInfoListPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageInfo"]));
        packageInfo = make_shared<DescribeAppInfoResponseBodyAppInfoListPackageInfo>(model1);
      }
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeAppInfoResponseBodyAppInfoList() = default;
};
class DescribeAppInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppInfoResponseBodyAppInfoList>> appInfoList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAppInfoResponseBody() {}

  explicit DescribeAppInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*appInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfoList"] = boost::any(temp1);
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
  }


  virtual ~DescribeAppInfoResponseBody() = default;
};
class DescribeAppInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppInfoResponseBody> body{};

  DescribeAppInfoResponse() {}

  explicit DescribeAppInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAppInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppInfoResponse() = default;
};
class DescribeAuditCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> callback{};
  shared_ptr<long> cryptType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> seed{};

  DescribeAuditCallbackResponseBody() {}

  explicit DescribeAuditCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<long>(boost::any_cast<long>(m["CryptType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
  }


  virtual ~DescribeAuditCallbackResponseBody() = default;
};
class DescribeAuditCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditCallbackResponseBody> body{};

  DescribeAuditCallbackResponse() {}

  explicit DescribeAuditCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditCallbackResponse() = default;
};
class DescribeAuditCallbackListResponseBodyCallbackList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> callbackSuggestions{};
  shared_ptr<vector<string>> callbackTypes{};
  shared_ptr<string> createTime{};
  shared_ptr<string> cryptType{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> seed{};
  shared_ptr<string> url{};

  DescribeAuditCallbackListResponseBodyCallbackList() {}

  explicit DescribeAuditCallbackListResponseBodyCallbackList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackSuggestions) {
      res["CallbackSuggestions"] = boost::any(*callbackSuggestions);
    }
    if (callbackTypes) {
      res["CallbackTypes"] = boost::any(*callbackTypes);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackSuggestions") != m.end() && !m["CallbackSuggestions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallbackSuggestions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallbackSuggestions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callbackSuggestions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CallbackTypes") != m.end() && !m["CallbackTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CallbackTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CallbackTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      callbackTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<string>(boost::any_cast<string>(m["CryptType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeAuditCallbackListResponseBodyCallbackList() = default;
};
class DescribeAuditCallbackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAuditCallbackListResponseBodyCallbackList>> callbackList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAuditCallbackListResponseBody() {}

  explicit DescribeAuditCallbackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callbackList) {
      vector<boost::any> temp1;
      for(auto item1:*callbackList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CallbackList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallbackList") != m.end() && !m["CallbackList"].empty()) {
      if (typeid(vector<boost::any>) == m["CallbackList"].type()) {
        vector<DescribeAuditCallbackListResponseBodyCallbackList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CallbackList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditCallbackListResponseBodyCallbackList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        callbackList = make_shared<vector<DescribeAuditCallbackListResponseBodyCallbackList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAuditCallbackListResponseBody() = default;
};
class DescribeAuditCallbackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditCallbackListResponseBody> body{};

  DescribeAuditCallbackListResponse() {}

  explicit DescribeAuditCallbackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditCallbackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditCallbackListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditCallbackListResponse() = default;
};
class DescribeAuditContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditResult{};
  shared_ptr<string> bizType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> dataId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> imageId{};
  shared_ptr<string> keywordId{};
  shared_ptr<string> label{};
  shared_ptr<string> lang{};
  shared_ptr<string> libType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};

  DescribeAuditContentRequest() {}

  explicit DescribeAuditContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditResult) {
      res["AuditResult"] = boost::any(*auditResult);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (keywordId) {
      res["KeywordId"] = boost::any(*keywordId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (libType) {
      res["LibType"] = boost::any(*libType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditResult") != m.end() && !m["AuditResult"].empty()) {
      auditResult = make_shared<string>(boost::any_cast<string>(m["AuditResult"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("KeywordId") != m.end() && !m["KeywordId"].empty()) {
      keywordId = make_shared<string>(boost::any_cast<string>(m["KeywordId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("LibType") != m.end() && !m["LibType"].empty()) {
      libType = make_shared<string>(boost::any_cast<string>(m["LibType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAuditContentRequest() = default;
};
class DescribeAuditContentResponseBodyAuditContentListFrameResults : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<long> offset{};
  shared_ptr<string> url{};

  DescribeAuditContentResponseBodyAuditContentListFrameResults() {}

  explicit DescribeAuditContentResponseBodyAuditContentListFrameResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeAuditContentResponseBodyAuditContentListFrameResults() = default;
};
class DescribeAuditContentResponseBodyAuditContentListResults : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> scene{};
  shared_ptr<string> suggestion{};

  DescribeAuditContentResponseBodyAuditContentListResults() {}

  explicit DescribeAuditContentResponseBodyAuditContentListResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~DescribeAuditContentResponseBodyAuditContentListResults() = default;
};
class DescribeAuditContentResponseBodyAuditContentList : public Darabonba::Model {
public:
  shared_ptr<long> audit{};
  shared_ptr<vector<string>> auditIllegalReasons{};
  shared_ptr<string> auditResult{};
  shared_ptr<string> bizType{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<vector<DescribeAuditContentResponseBodyAuditContentListFrameResults>> frameResults{};
  shared_ptr<long> id{};
  shared_ptr<string> newUrl{};
  shared_ptr<string> requestTime{};
  shared_ptr<vector<DescribeAuditContentResponseBodyAuditContentListResults>> results{};
  shared_ptr<string> scanFinishedTime{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};
  shared_ptr<string> thumbnail{};
  shared_ptr<string> url{};

  DescribeAuditContentResponseBodyAuditContentList() {}

  explicit DescribeAuditContentResponseBodyAuditContentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audit) {
      res["Audit"] = boost::any(*audit);
    }
    if (auditIllegalReasons) {
      res["AuditIllegalReasons"] = boost::any(*auditIllegalReasons);
    }
    if (auditResult) {
      res["AuditResult"] = boost::any(*auditResult);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (frameResults) {
      vector<boost::any> temp1;
      for(auto item1:*frameResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FrameResults"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (newUrl) {
      res["NewUrl"] = boost::any(*newUrl);
    }
    if (requestTime) {
      res["RequestTime"] = boost::any(*requestTime);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (scanFinishedTime) {
      res["ScanFinishedTime"] = boost::any(*scanFinishedTime);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audit") != m.end() && !m["Audit"].empty()) {
      audit = make_shared<long>(boost::any_cast<long>(m["Audit"]));
    }
    if (m.find("AuditIllegalReasons") != m.end() && !m["AuditIllegalReasons"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuditIllegalReasons"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuditIllegalReasons"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      auditIllegalReasons = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuditResult") != m.end() && !m["AuditResult"].empty()) {
      auditResult = make_shared<string>(boost::any_cast<string>(m["AuditResult"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FrameResults") != m.end() && !m["FrameResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FrameResults"].type()) {
        vector<DescribeAuditContentResponseBodyAuditContentListFrameResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FrameResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditContentResponseBodyAuditContentListFrameResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frameResults = make_shared<vector<DescribeAuditContentResponseBodyAuditContentListFrameResults>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("NewUrl") != m.end() && !m["NewUrl"].empty()) {
      newUrl = make_shared<string>(boost::any_cast<string>(m["NewUrl"]));
    }
    if (m.find("RequestTime") != m.end() && !m["RequestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["RequestTime"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<DescribeAuditContentResponseBodyAuditContentListResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditContentResponseBodyAuditContentListResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DescribeAuditContentResponseBodyAuditContentListResults>>(expect1);
      }
    }
    if (m.find("ScanFinishedTime") != m.end() && !m["ScanFinishedTime"].empty()) {
      scanFinishedTime = make_shared<string>(boost::any_cast<string>(m["ScanFinishedTime"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeAuditContentResponseBodyAuditContentList() = default;
};
class DescribeAuditContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAuditContentResponseBodyAuditContentList>> auditContentList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAuditContentResponseBody() {}

  explicit DescribeAuditContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditContentList) {
      vector<boost::any> temp1;
      for(auto item1:*auditContentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuditContentList"] = boost::any(temp1);
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditContentList") != m.end() && !m["AuditContentList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuditContentList"].type()) {
        vector<DescribeAuditContentResponseBodyAuditContentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuditContentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditContentResponseBodyAuditContentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auditContentList = make_shared<vector<DescribeAuditContentResponseBodyAuditContentList>>(expect1);
      }
    }
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
  }


  virtual ~DescribeAuditContentResponseBody() = default;
};
class DescribeAuditContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditContentResponseBody> body{};

  DescribeAuditContentResponse() {}

  explicit DescribeAuditContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditContentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditContentResponse() = default;
};
class DescribeAuditContentItemRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};

  DescribeAuditContentItemRequest() {}

  explicit DescribeAuditContentItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAuditContentItemRequest() = default;
};
class DescribeAuditContentItemResponseBodyAuditContentItemList : public Darabonba::Model {
public:
  shared_ptr<long> audit{};
  shared_ptr<vector<string>> auditIllegalReasons{};
  shared_ptr<string> auditResult{};
  shared_ptr<string> content{};
  shared_ptr<string> endTime{};
  shared_ptr<long> id{};
  shared_ptr<string> parentTaskId{};
  shared_ptr<long> sn{};
  shared_ptr<string> startTime{};
  shared_ptr<string> suggestion{};

  DescribeAuditContentItemResponseBodyAuditContentItemList() {}

  explicit DescribeAuditContentItemResponseBodyAuditContentItemList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audit) {
      res["Audit"] = boost::any(*audit);
    }
    if (auditIllegalReasons) {
      res["AuditIllegalReasons"] = boost::any(*auditIllegalReasons);
    }
    if (auditResult) {
      res["AuditResult"] = boost::any(*auditResult);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (parentTaskId) {
      res["ParentTaskId"] = boost::any(*parentTaskId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audit") != m.end() && !m["Audit"].empty()) {
      audit = make_shared<long>(boost::any_cast<long>(m["Audit"]));
    }
    if (m.find("AuditIllegalReasons") != m.end() && !m["AuditIllegalReasons"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AuditIllegalReasons"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AuditIllegalReasons"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      auditIllegalReasons = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AuditResult") != m.end() && !m["AuditResult"].empty()) {
      auditResult = make_shared<string>(boost::any_cast<string>(m["AuditResult"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ParentTaskId") != m.end() && !m["ParentTaskId"].empty()) {
      parentTaskId = make_shared<string>(boost::any_cast<string>(m["ParentTaskId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<long>(boost::any_cast<long>(m["Sn"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~DescribeAuditContentItemResponseBodyAuditContentItemList() = default;
};
class DescribeAuditContentItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAuditContentItemResponseBodyAuditContentItemList>> auditContentItemList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAuditContentItemResponseBody() {}

  explicit DescribeAuditContentItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditContentItemList) {
      vector<boost::any> temp1;
      for(auto item1:*auditContentItemList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AuditContentItemList"] = boost::any(temp1);
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditContentItemList") != m.end() && !m["AuditContentItemList"].empty()) {
      if (typeid(vector<boost::any>) == m["AuditContentItemList"].type()) {
        vector<DescribeAuditContentItemResponseBodyAuditContentItemList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AuditContentItemList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAuditContentItemResponseBodyAuditContentItemList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auditContentItemList = make_shared<vector<DescribeAuditContentItemResponseBodyAuditContentItemList>>(expect1);
      }
    }
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
  }


  virtual ~DescribeAuditContentItemResponseBody() = default;
};
class DescribeAuditContentItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditContentItemResponseBody> body{};

  DescribeAuditContentItemResponse() {}

  explicit DescribeAuditContentItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditContentItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditContentItemResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditContentItemResponse() = default;
};
class DescribeAuditRangeResponseBodyAuditRange : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<bool> pass{};
  shared_ptr<bool> review{};

  DescribeAuditRangeResponseBodyAuditRange() {}

  explicit DescribeAuditRangeResponseBodyAuditRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["block"] = boost::any(*block);
    }
    if (pass) {
      res["pass"] = boost::any(*pass);
    }
    if (review) {
      res["review"] = boost::any(*review);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("block") != m.end() && !m["block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["block"]));
    }
    if (m.find("pass") != m.end() && !m["pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["pass"]));
    }
    if (m.find("review") != m.end() && !m["review"].empty()) {
      review = make_shared<bool>(boost::any_cast<bool>(m["review"]));
    }
  }


  virtual ~DescribeAuditRangeResponseBodyAuditRange() = default;
};
class DescribeAuditRangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAuditRangeResponseBodyAuditRange> auditRange{};
  shared_ptr<string> requestId{};

  DescribeAuditRangeResponseBody() {}

  explicit DescribeAuditRangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRange) {
      res["AuditRange"] = auditRange ? boost::any(auditRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRange") != m.end() && !m["AuditRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuditRange"].type()) {
        DescribeAuditRangeResponseBodyAuditRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuditRange"]));
        auditRange = make_shared<DescribeAuditRangeResponseBodyAuditRange>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAuditRangeResponseBody() = default;
};
class DescribeAuditRangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditRangeResponseBody> body{};

  DescribeAuditRangeResponse() {}

  explicit DescribeAuditRangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditRangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditRangeResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditRangeResponse() = default;
};
class DescribeAuditSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeAuditSettingRequest() {}

  explicit DescribeAuditSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeAuditSettingRequest() = default;
};
class DescribeAuditSettingResponseBodyAuditRange : public Darabonba::Model {
public:
  shared_ptr<bool> block{};
  shared_ptr<bool> pass{};
  shared_ptr<bool> review{};

  DescribeAuditSettingResponseBodyAuditRange() {}

  explicit DescribeAuditSettingResponseBodyAuditRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (block) {
      res["block"] = boost::any(*block);
    }
    if (pass) {
      res["pass"] = boost::any(*pass);
    }
    if (review) {
      res["review"] = boost::any(*review);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("block") != m.end() && !m["block"].empty()) {
      block = make_shared<bool>(boost::any_cast<bool>(m["block"]));
    }
    if (m.find("pass") != m.end() && !m["pass"].empty()) {
      pass = make_shared<bool>(boost::any_cast<bool>(m["pass"]));
    }
    if (m.find("review") != m.end() && !m["review"].empty()) {
      review = make_shared<bool>(boost::any_cast<bool>(m["review"]));
    }
  }


  virtual ~DescribeAuditSettingResponseBodyAuditRange() = default;
};
class DescribeAuditSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAuditSettingResponseBodyAuditRange> auditRange{};
  shared_ptr<string> callback{};
  shared_ptr<string> requestId{};
  shared_ptr<string> seed{};

  DescribeAuditSettingResponseBody() {}

  explicit DescribeAuditSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRange) {
      res["AuditRange"] = auditRange ? boost::any(auditRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRange") != m.end() && !m["AuditRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["AuditRange"].type()) {
        DescribeAuditSettingResponseBodyAuditRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AuditRange"]));
        auditRange = make_shared<DescribeAuditSettingResponseBodyAuditRange>(model1);
      }
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
  }


  virtual ~DescribeAuditSettingResponseBody() = default;
};
class DescribeAuditSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAuditSettingResponseBody> body{};

  DescribeAuditSettingResponse() {}

  explicit DescribeAuditSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAuditSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAuditSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAuditSettingResponse() = default;
};
class DescribeBizTypeImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};

  DescribeBizTypeImageLibRequest() {}

  explicit DescribeBizTypeImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~DescribeBizTypeImageLibRequest() = default;
};
class DescribeBizTypeImageLibResponseBodyBlackAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeImageLibResponseBodyBlackAll() {}

  explicit DescribeBizTypeImageLibResponseBodyBlackAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyBlackAll() = default;
};
class DescribeBizTypeImageLibResponseBodyBlackSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeImageLibResponseBodyBlackSelected() {}

  explicit DescribeBizTypeImageLibResponseBodyBlackSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyBlackSelected() = default;
};
class DescribeBizTypeImageLibResponseBodyBlack : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeImageLibResponseBodyBlackAll>> all{};
  shared_ptr<vector<DescribeBizTypeImageLibResponseBodyBlackSelected>> selected{};

  DescribeBizTypeImageLibResponseBodyBlack() {}

  explicit DescribeBizTypeImageLibResponseBodyBlack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeImageLibResponseBodyBlackAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeImageLibResponseBodyBlackAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeImageLibResponseBodyBlackAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeImageLibResponseBodyBlackSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeImageLibResponseBodyBlackSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeImageLibResponseBodyBlackSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyBlack() = default;
};
class DescribeBizTypeImageLibResponseBodyReviewAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeImageLibResponseBodyReviewAll() {}

  explicit DescribeBizTypeImageLibResponseBodyReviewAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyReviewAll() = default;
};
class DescribeBizTypeImageLibResponseBodyReviewSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeImageLibResponseBodyReviewSelected() {}

  explicit DescribeBizTypeImageLibResponseBodyReviewSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyReviewSelected() = default;
};
class DescribeBizTypeImageLibResponseBodyReview : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeImageLibResponseBodyReviewAll>> all{};
  shared_ptr<vector<DescribeBizTypeImageLibResponseBodyReviewSelected>> selected{};

  DescribeBizTypeImageLibResponseBodyReview() {}

  explicit DescribeBizTypeImageLibResponseBodyReview(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeImageLibResponseBodyReviewAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeImageLibResponseBodyReviewAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeImageLibResponseBodyReviewAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeImageLibResponseBodyReviewSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeImageLibResponseBodyReviewSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeImageLibResponseBodyReviewSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyReview() = default;
};
class DescribeBizTypeImageLibResponseBodyWhiteAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeImageLibResponseBodyWhiteAll() {}

  explicit DescribeBizTypeImageLibResponseBodyWhiteAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyWhiteAll() = default;
};
class DescribeBizTypeImageLibResponseBodyWhiteSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeImageLibResponseBodyWhiteSelected() {}

  explicit DescribeBizTypeImageLibResponseBodyWhiteSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyWhiteSelected() = default;
};
class DescribeBizTypeImageLibResponseBodyWhite : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeImageLibResponseBodyWhiteAll>> all{};
  shared_ptr<vector<DescribeBizTypeImageLibResponseBodyWhiteSelected>> selected{};

  DescribeBizTypeImageLibResponseBodyWhite() {}

  explicit DescribeBizTypeImageLibResponseBodyWhite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeImageLibResponseBodyWhiteAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeImageLibResponseBodyWhiteAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeImageLibResponseBodyWhiteAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeImageLibResponseBodyWhiteSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeImageLibResponseBodyWhiteSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeImageLibResponseBodyWhiteSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBodyWhite() = default;
};
class DescribeBizTypeImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBizTypeImageLibResponseBodyBlack> black{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBizTypeImageLibResponseBodyReview> review{};
  shared_ptr<DescribeBizTypeImageLibResponseBodyWhite> white{};

  DescribeBizTypeImageLibResponseBody() {}

  explicit DescribeBizTypeImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (black) {
      res["Black"] = black ? boost::any(black->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (review) {
      res["Review"] = review ? boost::any(review->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (white) {
      res["White"] = white ? boost::any(white->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Black") != m.end() && !m["Black"].empty()) {
      if (typeid(map<string, boost::any>) == m["Black"].type()) {
        DescribeBizTypeImageLibResponseBodyBlack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Black"]));
        black = make_shared<DescribeBizTypeImageLibResponseBodyBlack>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Review") != m.end() && !m["Review"].empty()) {
      if (typeid(map<string, boost::any>) == m["Review"].type()) {
        DescribeBizTypeImageLibResponseBodyReview model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Review"]));
        review = make_shared<DescribeBizTypeImageLibResponseBodyReview>(model1);
      }
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      if (typeid(map<string, boost::any>) == m["White"].type()) {
        DescribeBizTypeImageLibResponseBodyWhite model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["White"]));
        white = make_shared<DescribeBizTypeImageLibResponseBodyWhite>(model1);
      }
    }
  }


  virtual ~DescribeBizTypeImageLibResponseBody() = default;
};
class DescribeBizTypeImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBizTypeImageLibResponseBody> body{};

  DescribeBizTypeImageLibResponse() {}

  explicit DescribeBizTypeImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBizTypeImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBizTypeImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBizTypeImageLibResponse() = default;
};
class DescribeBizTypeSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> resourceType{};

  DescribeBizTypeSettingRequest() {}

  explicit DescribeBizTypeSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
  }


  virtual ~DescribeBizTypeSettingRequest() = default;
};
class DescribeBizTypeSettingResponseBodyAd : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeBizTypeSettingResponseBodyAd() {}

  explicit DescribeBizTypeSettingResponseBodyAd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBizTypeSettingResponseBodyAd() = default;
};
class DescribeBizTypeSettingResponseBodyAntispam : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeBizTypeSettingResponseBodyAntispam() {}

  explicit DescribeBizTypeSettingResponseBodyAntispam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBizTypeSettingResponseBodyAntispam() = default;
};
class DescribeBizTypeSettingResponseBodyLive : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeBizTypeSettingResponseBodyLive() {}

  explicit DescribeBizTypeSettingResponseBodyLive(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBizTypeSettingResponseBodyLive() = default;
};
class DescribeBizTypeSettingResponseBodyPorn : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeBizTypeSettingResponseBodyPorn() {}

  explicit DescribeBizTypeSettingResponseBodyPorn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBizTypeSettingResponseBodyPorn() = default;
};
class DescribeBizTypeSettingResponseBodyTerrorism : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeBizTypeSettingResponseBodyTerrorism() {}

  explicit DescribeBizTypeSettingResponseBodyTerrorism(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeBizTypeSettingResponseBodyTerrorism() = default;
};
class DescribeBizTypeSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBizTypeSettingResponseBodyAd> ad{};
  shared_ptr<DescribeBizTypeSettingResponseBodyAntispam> antispam{};
  shared_ptr<DescribeBizTypeSettingResponseBodyLive> live{};
  shared_ptr<DescribeBizTypeSettingResponseBodyPorn> porn{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBizTypeSettingResponseBodyTerrorism> terrorism{};

  DescribeBizTypeSettingResponseBody() {}

  explicit DescribeBizTypeSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ad) {
      res["Ad"] = ad ? boost::any(ad->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (antispam) {
      res["Antispam"] = antispam ? boost::any(antispam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (live) {
      res["Live"] = live ? boost::any(live->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (porn) {
      res["Porn"] = porn ? boost::any(porn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (terrorism) {
      res["Terrorism"] = terrorism ? boost::any(terrorism->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ad") != m.end() && !m["Ad"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ad"].type()) {
        DescribeBizTypeSettingResponseBodyAd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ad"]));
        ad = make_shared<DescribeBizTypeSettingResponseBodyAd>(model1);
      }
    }
    if (m.find("Antispam") != m.end() && !m["Antispam"].empty()) {
      if (typeid(map<string, boost::any>) == m["Antispam"].type()) {
        DescribeBizTypeSettingResponseBodyAntispam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Antispam"]));
        antispam = make_shared<DescribeBizTypeSettingResponseBodyAntispam>(model1);
      }
    }
    if (m.find("Live") != m.end() && !m["Live"].empty()) {
      if (typeid(map<string, boost::any>) == m["Live"].type()) {
        DescribeBizTypeSettingResponseBodyLive model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Live"]));
        live = make_shared<DescribeBizTypeSettingResponseBodyLive>(model1);
      }
    }
    if (m.find("Porn") != m.end() && !m["Porn"].empty()) {
      if (typeid(map<string, boost::any>) == m["Porn"].type()) {
        DescribeBizTypeSettingResponseBodyPorn model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Porn"]));
        porn = make_shared<DescribeBizTypeSettingResponseBodyPorn>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Terrorism") != m.end() && !m["Terrorism"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terrorism"].type()) {
        DescribeBizTypeSettingResponseBodyTerrorism model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terrorism"]));
        terrorism = make_shared<DescribeBizTypeSettingResponseBodyTerrorism>(model1);
      }
    }
  }


  virtual ~DescribeBizTypeSettingResponseBody() = default;
};
class DescribeBizTypeSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBizTypeSettingResponseBody> body{};

  DescribeBizTypeSettingResponse() {}

  explicit DescribeBizTypeSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBizTypeSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBizTypeSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBizTypeSettingResponse() = default;
};
class DescribeBizTypeTextLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};

  DescribeBizTypeTextLibRequest() {}

  explicit DescribeBizTypeTextLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~DescribeBizTypeTextLibRequest() = default;
};
class DescribeBizTypeTextLibResponseBodyBlackAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyBlackAll() {}

  explicit DescribeBizTypeTextLibResponseBodyBlackAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyBlackAll() = default;
};
class DescribeBizTypeTextLibResponseBodyBlackSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyBlackSelected() {}

  explicit DescribeBizTypeTextLibResponseBodyBlackSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyBlackSelected() = default;
};
class DescribeBizTypeTextLibResponseBodyBlack : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyBlackAll>> all{};
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyBlackSelected>> selected{};

  DescribeBizTypeTextLibResponseBodyBlack() {}

  explicit DescribeBizTypeTextLibResponseBodyBlack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyBlackAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyBlackAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeTextLibResponseBodyBlackAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyBlackSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyBlackSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeTextLibResponseBodyBlackSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyBlack() = default;
};
class DescribeBizTypeTextLibResponseBodyIgnoreAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyIgnoreAll() {}

  explicit DescribeBizTypeTextLibResponseBodyIgnoreAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyIgnoreAll() = default;
};
class DescribeBizTypeTextLibResponseBodyIgnoreSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyIgnoreSelected() {}

  explicit DescribeBizTypeTextLibResponseBodyIgnoreSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyIgnoreSelected() = default;
};
class DescribeBizTypeTextLibResponseBodyIgnore : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyIgnoreAll>> all{};
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyIgnoreSelected>> selected{};

  DescribeBizTypeTextLibResponseBodyIgnore() {}

  explicit DescribeBizTypeTextLibResponseBodyIgnore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyIgnoreAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyIgnoreAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeTextLibResponseBodyIgnoreAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyIgnoreSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyIgnoreSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeTextLibResponseBodyIgnoreSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyIgnore() = default;
};
class DescribeBizTypeTextLibResponseBodyReviewAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyReviewAll() {}

  explicit DescribeBizTypeTextLibResponseBodyReviewAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyReviewAll() = default;
};
class DescribeBizTypeTextLibResponseBodyReviewSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyReviewSelected() {}

  explicit DescribeBizTypeTextLibResponseBodyReviewSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyReviewSelected() = default;
};
class DescribeBizTypeTextLibResponseBodyReview : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyReviewAll>> all{};
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyReviewSelected>> selected{};

  DescribeBizTypeTextLibResponseBodyReview() {}

  explicit DescribeBizTypeTextLibResponseBodyReview(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyReviewAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyReviewAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeTextLibResponseBodyReviewAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyReviewSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyReviewSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeTextLibResponseBodyReviewSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyReview() = default;
};
class DescribeBizTypeTextLibResponseBodyWhiteAll : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyWhiteAll() {}

  explicit DescribeBizTypeTextLibResponseBodyWhiteAll(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyWhiteAll() = default;
};
class DescribeBizTypeTextLibResponseBodyWhiteSelected : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};

  DescribeBizTypeTextLibResponseBodyWhiteSelected() {}

  explicit DescribeBizTypeTextLibResponseBodyWhiteSelected(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyWhiteSelected() = default;
};
class DescribeBizTypeTextLibResponseBodyWhite : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyWhiteAll>> all{};
  shared_ptr<vector<DescribeBizTypeTextLibResponseBodyWhiteSelected>> selected{};

  DescribeBizTypeTextLibResponseBodyWhite() {}

  explicit DescribeBizTypeTextLibResponseBodyWhite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      vector<boost::any> temp1;
      for(auto item1:*all){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["All"] = boost::any(temp1);
    }
    if (selected) {
      vector<boost::any> temp1;
      for(auto item1:*selected){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Selected"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      if (typeid(vector<boost::any>) == m["All"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyWhiteAll> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["All"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyWhiteAll model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        all = make_shared<vector<DescribeBizTypeTextLibResponseBodyWhiteAll>>(expect1);
      }
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      if (typeid(vector<boost::any>) == m["Selected"].type()) {
        vector<DescribeBizTypeTextLibResponseBodyWhiteSelected> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Selected"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBizTypeTextLibResponseBodyWhiteSelected model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        selected = make_shared<vector<DescribeBizTypeTextLibResponseBodyWhiteSelected>>(expect1);
      }
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBodyWhite() = default;
};
class DescribeBizTypeTextLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBizTypeTextLibResponseBodyBlack> black{};
  shared_ptr<DescribeBizTypeTextLibResponseBodyIgnore> ignore{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBizTypeTextLibResponseBodyReview> review{};
  shared_ptr<DescribeBizTypeTextLibResponseBodyWhite> white{};

  DescribeBizTypeTextLibResponseBody() {}

  explicit DescribeBizTypeTextLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (black) {
      res["Black"] = black ? boost::any(black->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ignore) {
      res["Ignore"] = ignore ? boost::any(ignore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (review) {
      res["Review"] = review ? boost::any(review->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (white) {
      res["White"] = white ? boost::any(white->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Black") != m.end() && !m["Black"].empty()) {
      if (typeid(map<string, boost::any>) == m["Black"].type()) {
        DescribeBizTypeTextLibResponseBodyBlack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Black"]));
        black = make_shared<DescribeBizTypeTextLibResponseBodyBlack>(model1);
      }
    }
    if (m.find("Ignore") != m.end() && !m["Ignore"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ignore"].type()) {
        DescribeBizTypeTextLibResponseBodyIgnore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ignore"]));
        ignore = make_shared<DescribeBizTypeTextLibResponseBodyIgnore>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Review") != m.end() && !m["Review"].empty()) {
      if (typeid(map<string, boost::any>) == m["Review"].type()) {
        DescribeBizTypeTextLibResponseBodyReview model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Review"]));
        review = make_shared<DescribeBizTypeTextLibResponseBodyReview>(model1);
      }
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      if (typeid(map<string, boost::any>) == m["White"].type()) {
        DescribeBizTypeTextLibResponseBodyWhite model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["White"]));
        white = make_shared<DescribeBizTypeTextLibResponseBodyWhite>(model1);
      }
    }
  }


  virtual ~DescribeBizTypeTextLibResponseBody() = default;
};
class DescribeBizTypeTextLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBizTypeTextLibResponseBody> body{};

  DescribeBizTypeTextLibResponse() {}

  explicit DescribeBizTypeTextLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBizTypeTextLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBizTypeTextLibResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBizTypeTextLibResponse() = default;
};
class DescribeBizTypesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> importFlag{};

  DescribeBizTypesRequest() {}

  explicit DescribeBizTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (importFlag) {
      res["ImportFlag"] = boost::any(*importFlag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImportFlag") != m.end() && !m["ImportFlag"].empty()) {
      importFlag = make_shared<bool>(boost::any_cast<bool>(m["ImportFlag"]));
    }
  }


  virtual ~DescribeBizTypesRequest() = default;
};
class DescribeBizTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBizTypesResponseBody() {}

  explicit DescribeBizTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBizTypesResponseBody() = default;
};
class DescribeBizTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBizTypesResponseBody> body{};

  DescribeBizTypesResponse() {}

  explicit DescribeBizTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBizTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBizTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBizTypesResponse() = default;
};
class DescribeCloudMonitorServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> page{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> sourceIp{};

  DescribeCloudMonitorServicesRequest() {}

  explicit DescribeCloudMonitorServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeCloudMonitorServicesRequest() = default;
};
class DescribeCloudMonitorServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> items{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCloudMonitorServicesResponseBody() {}

  explicit DescribeCloudMonitorServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      res["Items"] = boost::any(*items);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Items"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      items = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCloudMonitorServicesResponseBody() = default;
};
class DescribeCloudMonitorServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCloudMonitorServicesResponseBody> body{};

  DescribeCloudMonitorServicesResponse() {}

  explicit DescribeCloudMonitorServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCloudMonitorServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCloudMonitorServicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCloudMonitorServicesResponse() = default;
};
class DescribeCustomOcrTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};

  DescribeCustomOcrTemplateRequest() {}

  explicit DescribeCustomOcrTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~DescribeCustomOcrTemplateRequest() = default;
};
class DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> name{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea() {}

  explicit DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea() = default;
};
class DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> name{};
  shared_ptr<long> width{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea() {}

  explicit DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea() = default;
};
class DescribeCustomOcrTemplateResponseBodyOcrTemplateList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> imgUrl{};
  shared_ptr<string> name{};
  shared_ptr<vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea>> recognizeArea{};
  shared_ptr<vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea>> referArea{};
  shared_ptr<long> status{};

  DescribeCustomOcrTemplateResponseBodyOcrTemplateList() {}

  explicit DescribeCustomOcrTemplateResponseBodyOcrTemplateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imgUrl) {
      res["ImgUrl"] = boost::any(*imgUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (recognizeArea) {
      vector<boost::any> temp1;
      for(auto item1:*recognizeArea){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecognizeArea"] = boost::any(temp1);
    }
    if (referArea) {
      vector<boost::any> temp1;
      for(auto item1:*referArea){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ReferArea"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ImgUrl") != m.end() && !m["ImgUrl"].empty()) {
      imgUrl = make_shared<string>(boost::any_cast<string>(m["ImgUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RecognizeArea") != m.end() && !m["RecognizeArea"].empty()) {
      if (typeid(vector<boost::any>) == m["RecognizeArea"].type()) {
        vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecognizeArea"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recognizeArea = make_shared<vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateListRecognizeArea>>(expect1);
      }
    }
    if (m.find("ReferArea") != m.end() && !m["ReferArea"].empty()) {
      if (typeid(vector<boost::any>) == m["ReferArea"].type()) {
        vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ReferArea"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        referArea = make_shared<vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateListReferArea>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeCustomOcrTemplateResponseBodyOcrTemplateList() = default;
};
class DescribeCustomOcrTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateList>> ocrTemplateList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeCustomOcrTemplateResponseBody() {}

  explicit DescribeCustomOcrTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ocrTemplateList) {
      vector<boost::any> temp1;
      for(auto item1:*ocrTemplateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OcrTemplateList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OcrTemplateList") != m.end() && !m["OcrTemplateList"].empty()) {
      if (typeid(vector<boost::any>) == m["OcrTemplateList"].type()) {
        vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OcrTemplateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCustomOcrTemplateResponseBodyOcrTemplateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ocrTemplateList = make_shared<vector<DescribeCustomOcrTemplateResponseBodyOcrTemplateList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCustomOcrTemplateResponseBody() = default;
};
class DescribeCustomOcrTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCustomOcrTemplateResponseBody> body{};

  DescribeCustomOcrTemplateResponse() {}

  explicit DescribeCustomOcrTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCustomOcrTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCustomOcrTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCustomOcrTemplateResponse() = default;
};
class DescribeImageFromLibRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<long> id{};
  shared_ptr<long> imageLibId{};
  shared_ptr<long> modelId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};
  shared_ptr<long> totalCount{};

  DescribeImageFromLibRequest() {}

  explicit DescribeImageFromLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageLibId) {
      res["ImageLibId"] = boost::any(*imageLibId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ImageLibId") != m.end() && !m["ImageLibId"].empty()) {
      imageLibId = make_shared<long>(boost::any_cast<long>(m["ImageLibId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeImageFromLibRequest() = default;
};
class DescribeImageFromLibResponseBodyImageFromLibList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> id{};
  shared_ptr<string> image{};
  shared_ptr<long> imageHitCount{};
  shared_ptr<string> thumbnail{};
  shared_ptr<long> videoHitCount{};

  DescribeImageFromLibResponseBodyImageFromLibList() {}

  explicit DescribeImageFromLibResponseBodyImageFromLibList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (imageHitCount) {
      res["ImageHitCount"] = boost::any(*imageHitCount);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (videoHitCount) {
      res["VideoHitCount"] = boost::any(*videoHitCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ImageHitCount") != m.end() && !m["ImageHitCount"].empty()) {
      imageHitCount = make_shared<long>(boost::any_cast<long>(m["ImageHitCount"]));
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("VideoHitCount") != m.end() && !m["VideoHitCount"].empty()) {
      videoHitCount = make_shared<long>(boost::any_cast<long>(m["VideoHitCount"]));
    }
  }


  virtual ~DescribeImageFromLibResponseBodyImageFromLibList() = default;
};
class DescribeImageFromLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeImageFromLibResponseBodyImageFromLibList>> imageFromLibList{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeImageFromLibResponseBody() {}

  explicit DescribeImageFromLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (imageFromLibList) {
      vector<boost::any> temp1;
      for(auto item1:*imageFromLibList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageFromLibList"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("ImageFromLibList") != m.end() && !m["ImageFromLibList"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageFromLibList"].type()) {
        vector<DescribeImageFromLibResponseBodyImageFromLibList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageFromLibList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageFromLibResponseBodyImageFromLibList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageFromLibList = make_shared<vector<DescribeImageFromLibResponseBodyImageFromLibList>>(expect1);
      }
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
  }


  virtual ~DescribeImageFromLibResponseBody() = default;
};
class DescribeImageFromLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageFromLibResponseBody> body{};

  DescribeImageFromLibResponse() {}

  explicit DescribeImageFromLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageFromLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageFromLibResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageFromLibResponse() = default;
};
class DescribeImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> serviceModule{};
  shared_ptr<string> sourceIp{};

  DescribeImageLibRequest() {}

  explicit DescribeImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceModule) {
      res["ServiceModule"] = boost::any(*serviceModule);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceModule") != m.end() && !m["ServiceModule"].empty()) {
      serviceModule = make_shared<string>(boost::any_cast<string>(m["ServiceModule"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeImageLibRequest() = default;
};
class DescribeImageLibResponseBodyImageLibList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypes{};
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> enable{};
  shared_ptr<long> id{};
  shared_ptr<long> imageCount{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> scene{};
  shared_ptr<string> serviceModule{};
  shared_ptr<string> source{};

  DescribeImageLibResponseBodyImageLibList() {}

  explicit DescribeImageLibResponseBodyImageLibList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (serviceModule) {
      res["ServiceModule"] = boost::any(*serviceModule);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<string>(boost::any_cast<string>(m["Enable"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("ServiceModule") != m.end() && !m["ServiceModule"].empty()) {
      serviceModule = make_shared<string>(boost::any_cast<string>(m["ServiceModule"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DescribeImageLibResponseBodyImageLibList() = default;
};
class DescribeImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeImageLibResponseBodyImageLibList>> imageLibList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeImageLibResponseBody() {}

  explicit DescribeImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageLibList) {
      vector<boost::any> temp1;
      for(auto item1:*imageLibList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageLibList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageLibList") != m.end() && !m["ImageLibList"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageLibList"].type()) {
        vector<DescribeImageLibResponseBodyImageLibList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageLibList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeImageLibResponseBodyImageLibList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageLibList = make_shared<vector<DescribeImageLibResponseBodyImageLibList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeImageLibResponseBody() = default;
};
class DescribeImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageLibResponseBody> body{};

  DescribeImageLibResponse() {}

  explicit DescribeImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageLibResponse() = default;
};
class DescribeImageUploadInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};

  DescribeImageUploadInfoRequest() {}

  explicit DescribeImageUploadInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeImageUploadInfoRequest() = default;
};
class DescribeImageUploadInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<long> expire{};
  shared_ptr<string> folder{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  DescribeImageUploadInfoResponseBody() {}

  explicit DescribeImageUploadInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (folder) {
      res["Folder"] = boost::any(*folder);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      folder = make_shared<string>(boost::any_cast<string>(m["Folder"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~DescribeImageUploadInfoResponseBody() = default;
};
class DescribeImageUploadInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeImageUploadInfoResponseBody> body{};

  DescribeImageUploadInfoResponse() {}

  explicit DescribeImageUploadInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeImageUploadInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeImageUploadInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeImageUploadInfoResponse() = default;
};
class DescribeKeywordRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> keyword{};
  shared_ptr<long> keywordLibId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> totalCount{};

  DescribeKeywordRequest() {}

  explicit DescribeKeywordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (keywordLibId) {
      res["KeywordLibId"] = boost::any(*keywordLibId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("KeywordLibId") != m.end() && !m["KeywordLibId"].empty()) {
      keywordLibId = make_shared<long>(boost::any_cast<long>(m["KeywordLibId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeKeywordRequest() = default;
};
class DescribeKeywordResponseBodyKeywordList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> hitCount{};
  shared_ptr<long> id{};
  shared_ptr<string> keyword{};

  DescribeKeywordResponseBodyKeywordList() {}

  explicit DescribeKeywordResponseBodyKeywordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (hitCount) {
      res["HitCount"] = boost::any(*hitCount);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("HitCount") != m.end() && !m["HitCount"].empty()) {
      hitCount = make_shared<long>(boost::any_cast<long>(m["HitCount"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
  }


  virtual ~DescribeKeywordResponseBodyKeywordList() = default;
};
class DescribeKeywordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<DescribeKeywordResponseBodyKeywordList>> keywordList{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeKeywordResponseBody() {}

  explicit DescribeKeywordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (keywordList) {
      vector<boost::any> temp1;
      for(auto item1:*keywordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeywordList"] = boost::any(temp1);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("KeywordList") != m.end() && !m["KeywordList"].empty()) {
      if (typeid(vector<boost::any>) == m["KeywordList"].type()) {
        vector<DescribeKeywordResponseBodyKeywordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeywordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKeywordResponseBodyKeywordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keywordList = make_shared<vector<DescribeKeywordResponseBodyKeywordList>>(expect1);
      }
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
  }


  virtual ~DescribeKeywordResponseBody() = default;
};
class DescribeKeywordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKeywordResponseBody> body{};

  DescribeKeywordResponse() {}

  explicit DescribeKeywordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKeywordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKeywordResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKeywordResponse() = default;
};
class DescribeKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> serviceModule{};
  shared_ptr<string> sourceIp{};

  DescribeKeywordLibRequest() {}

  explicit DescribeKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceModule) {
      res["ServiceModule"] = boost::any(*serviceModule);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceModule") != m.end() && !m["ServiceModule"].empty()) {
      serviceModule = make_shared<string>(boost::any_cast<string>(m["ServiceModule"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeKeywordLibRequest() = default;
};
class DescribeKeywordLibResponseBodyKeywordLibList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypes{};
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<long> count{};
  shared_ptr<bool> enable{};
  shared_ptr<long> id{};
  shared_ptr<string> language{};
  shared_ptr<string> libType{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> serviceModule{};
  shared_ptr<string> source{};

  DescribeKeywordLibResponseBodyKeywordLibList() {}

  explicit DescribeKeywordLibResponseBodyKeywordLibList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (libType) {
      res["LibType"] = boost::any(*libType);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (serviceModule) {
      res["ServiceModule"] = boost::any(*serviceModule);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LibType") != m.end() && !m["LibType"].empty()) {
      libType = make_shared<string>(boost::any_cast<string>(m["LibType"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ServiceModule") != m.end() && !m["ServiceModule"].empty()) {
      serviceModule = make_shared<string>(boost::any_cast<string>(m["ServiceModule"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DescribeKeywordLibResponseBodyKeywordLibList() = default;
};
class DescribeKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeKeywordLibResponseBodyKeywordLibList>> keywordLibList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeKeywordLibResponseBody() {}

  explicit DescribeKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordLibList) {
      vector<boost::any> temp1;
      for(auto item1:*keywordLibList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeywordLibList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordLibList") != m.end() && !m["KeywordLibList"].empty()) {
      if (typeid(vector<boost::any>) == m["KeywordLibList"].type()) {
        vector<DescribeKeywordLibResponseBodyKeywordLibList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeywordLibList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeKeywordLibResponseBodyKeywordLibList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keywordLibList = make_shared<vector<DescribeKeywordLibResponseBodyKeywordLibList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeKeywordLibResponseBody() = default;
};
class DescribeKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKeywordLibResponseBody> body{};

  DescribeKeywordLibResponse() {}

  explicit DescribeKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKeywordLibResponse() = default;
};
class DescribeNotificationSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeNotificationSettingRequest() {}

  explicit DescribeNotificationSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeNotificationSettingRequest() = default;
};
class DescribeNotificationSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> phone{};
  shared_ptr<vector<string>> realtimeMessageList{};
  shared_ptr<vector<string>> reminderModeList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> scheduleMessageTime{};
  shared_ptr<long> scheduleMessageTimeZone{};

  DescribeNotificationSettingResponseBody() {}

  explicit DescribeNotificationSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (realtimeMessageList) {
      res["RealtimeMessageList"] = boost::any(*realtimeMessageList);
    }
    if (reminderModeList) {
      res["ReminderModeList"] = boost::any(*reminderModeList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scheduleMessageTime) {
      res["ScheduleMessageTime"] = boost::any(*scheduleMessageTime);
    }
    if (scheduleMessageTimeZone) {
      res["ScheduleMessageTimeZone"] = boost::any(*scheduleMessageTimeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("RealtimeMessageList") != m.end() && !m["RealtimeMessageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RealtimeMessageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RealtimeMessageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      realtimeMessageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ReminderModeList") != m.end() && !m["ReminderModeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ReminderModeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ReminderModeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reminderModeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScheduleMessageTime") != m.end() && !m["ScheduleMessageTime"].empty()) {
      scheduleMessageTime = make_shared<long>(boost::any_cast<long>(m["ScheduleMessageTime"]));
    }
    if (m.find("ScheduleMessageTimeZone") != m.end() && !m["ScheduleMessageTimeZone"].empty()) {
      scheduleMessageTimeZone = make_shared<long>(boost::any_cast<long>(m["ScheduleMessageTimeZone"]));
    }
  }


  virtual ~DescribeNotificationSettingResponseBody() = default;
};
class DescribeNotificationSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNotificationSettingResponseBody> body{};

  DescribeNotificationSettingResponse() {}

  explicit DescribeNotificationSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNotificationSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNotificationSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNotificationSettingResponse() = default;
};
class DescribeOpenApiRcpStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> endDate{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> startDate{};

  DescribeOpenApiRcpStatsRequest() {}

  explicit DescribeOpenApiRcpStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeOpenApiRcpStatsRequest() = default;
};
class DescribeOpenApiRcpStatsResponseBodyStatList : public Darabonba::Model {
public:
  shared_ptr<long> blockCount{};
  shared_ptr<string> date{};
  shared_ptr<long> passCount{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> reviewCount{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalDuration{};

  DescribeOpenApiRcpStatsResponseBodyStatList() {}

  explicit DescribeOpenApiRcpStatsResponseBodyStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (passCount) {
      res["PassCount"] = boost::any(*passCount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (reviewCount) {
      res["ReviewCount"] = boost::any(*reviewCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("PassCount") != m.end() && !m["PassCount"].empty()) {
      passCount = make_shared<long>(boost::any_cast<long>(m["PassCount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ReviewCount") != m.end() && !m["ReviewCount"].empty()) {
      reviewCount = make_shared<long>(boost::any_cast<long>(m["ReviewCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
  }


  virtual ~DescribeOpenApiRcpStatsResponseBodyStatList() = default;
};
class DescribeOpenApiRcpStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeOpenApiRcpStatsResponseBodyStatList>> statList{};
  shared_ptr<long> totalCount{};

  DescribeOpenApiRcpStatsResponseBody() {}

  explicit DescribeOpenApiRcpStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statList) {
      vector<boost::any> temp1;
      for(auto item1:*statList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatList"] = boost::any(temp1);
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
    if (m.find("StatList") != m.end() && !m["StatList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatList"].type()) {
        vector<DescribeOpenApiRcpStatsResponseBodyStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOpenApiRcpStatsResponseBodyStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statList = make_shared<vector<DescribeOpenApiRcpStatsResponseBodyStatList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOpenApiRcpStatsResponseBody() = default;
};
class DescribeOpenApiRcpStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpenApiRcpStatsResponseBody> body{};

  DescribeOpenApiRcpStatsResponse() {}

  explicit DescribeOpenApiRcpStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOpenApiRcpStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpenApiRcpStatsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpenApiRcpStatsResponse() = default;
};
class DescribeOpenApiUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};

  DescribeOpenApiUsageRequest() {}

  explicit DescribeOpenApiUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
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
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeOpenApiUsageRequest() = default;
};
class DescribeOpenApiUsageResponseBodyOpenApiUsageList : public Darabonba::Model {
public:
  shared_ptr<long> blockCount{};
  shared_ptr<long> blockDuration{};
  shared_ptr<string> date{};
  shared_ptr<long> innerTotalCount{};
  shared_ptr<long> outerTotalCount{};
  shared_ptr<long> passCount{};
  shared_ptr<long> passDuration{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> reviewCount{};
  shared_ptr<long> reviewDuration{};
  shared_ptr<string> scene{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> totalDuration{};

  DescribeOpenApiUsageResponseBodyOpenApiUsageList() {}

  explicit DescribeOpenApiUsageResponseBodyOpenApiUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (blockDuration) {
      res["BlockDuration"] = boost::any(*blockDuration);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (innerTotalCount) {
      res["InnerTotalCount"] = boost::any(*innerTotalCount);
    }
    if (outerTotalCount) {
      res["OuterTotalCount"] = boost::any(*outerTotalCount);
    }
    if (passCount) {
      res["PassCount"] = boost::any(*passCount);
    }
    if (passDuration) {
      res["PassDuration"] = boost::any(*passDuration);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (reviewCount) {
      res["ReviewCount"] = boost::any(*reviewCount);
    }
    if (reviewDuration) {
      res["ReviewDuration"] = boost::any(*reviewDuration);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (totalDuration) {
      res["TotalDuration"] = boost::any(*totalDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("BlockDuration") != m.end() && !m["BlockDuration"].empty()) {
      blockDuration = make_shared<long>(boost::any_cast<long>(m["BlockDuration"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("InnerTotalCount") != m.end() && !m["InnerTotalCount"].empty()) {
      innerTotalCount = make_shared<long>(boost::any_cast<long>(m["InnerTotalCount"]));
    }
    if (m.find("OuterTotalCount") != m.end() && !m["OuterTotalCount"].empty()) {
      outerTotalCount = make_shared<long>(boost::any_cast<long>(m["OuterTotalCount"]));
    }
    if (m.find("PassCount") != m.end() && !m["PassCount"].empty()) {
      passCount = make_shared<long>(boost::any_cast<long>(m["PassCount"]));
    }
    if (m.find("PassDuration") != m.end() && !m["PassDuration"].empty()) {
      passDuration = make_shared<long>(boost::any_cast<long>(m["PassDuration"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ReviewCount") != m.end() && !m["ReviewCount"].empty()) {
      reviewCount = make_shared<long>(boost::any_cast<long>(m["ReviewCount"]));
    }
    if (m.find("ReviewDuration") != m.end() && !m["ReviewDuration"].empty()) {
      reviewDuration = make_shared<long>(boost::any_cast<long>(m["ReviewDuration"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TotalDuration") != m.end() && !m["TotalDuration"].empty()) {
      totalDuration = make_shared<long>(boost::any_cast<long>(m["TotalDuration"]));
    }
  }


  virtual ~DescribeOpenApiUsageResponseBodyOpenApiUsageList() = default;
};
class DescribeOpenApiUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOpenApiUsageResponseBodyOpenApiUsageList>> openApiUsageList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeOpenApiUsageResponseBody() {}

  explicit DescribeOpenApiUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (openApiUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*openApiUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OpenApiUsageList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OpenApiUsageList") != m.end() && !m["OpenApiUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["OpenApiUsageList"].type()) {
        vector<DescribeOpenApiUsageResponseBodyOpenApiUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OpenApiUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOpenApiUsageResponseBodyOpenApiUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        openApiUsageList = make_shared<vector<DescribeOpenApiUsageResponseBodyOpenApiUsageList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOpenApiUsageResponseBody() = default;
};
class DescribeOpenApiUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOpenApiUsageResponseBody> body{};

  DescribeOpenApiUsageResponse() {}

  explicit DescribeOpenApiUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOpenApiUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOpenApiUsageResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOpenApiUsageResponse() = default;
};
class DescribeOssCallbackSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> auditCallback{};
  shared_ptr<string> callbackSeed{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> scanCallback{};
  shared_ptr<vector<string>> scanCallbackSuggestions{};
  shared_ptr<vector<string>> serviceModules{};

  DescribeOssCallbackSettingResponseBody() {}

  explicit DescribeOssCallbackSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditCallback) {
      res["AuditCallback"] = boost::any(*auditCallback);
    }
    if (callbackSeed) {
      res["CallbackSeed"] = boost::any(*callbackSeed);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanCallback) {
      res["ScanCallback"] = boost::any(*scanCallback);
    }
    if (scanCallbackSuggestions) {
      res["ScanCallbackSuggestions"] = boost::any(*scanCallbackSuggestions);
    }
    if (serviceModules) {
      res["ServiceModules"] = boost::any(*serviceModules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditCallback") != m.end() && !m["AuditCallback"].empty()) {
      auditCallback = make_shared<bool>(boost::any_cast<bool>(m["AuditCallback"]));
    }
    if (m.find("CallbackSeed") != m.end() && !m["CallbackSeed"].empty()) {
      callbackSeed = make_shared<string>(boost::any_cast<string>(m["CallbackSeed"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanCallback") != m.end() && !m["ScanCallback"].empty()) {
      scanCallback = make_shared<bool>(boost::any_cast<bool>(m["ScanCallback"]));
    }
    if (m.find("ScanCallbackSuggestions") != m.end() && !m["ScanCallbackSuggestions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ScanCallbackSuggestions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ScanCallbackSuggestions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scanCallbackSuggestions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ServiceModules") != m.end() && !m["ServiceModules"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ServiceModules"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ServiceModules"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceModules = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssCallbackSettingResponseBody() = default;
};
class DescribeOssCallbackSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssCallbackSettingResponseBody> body{};

  DescribeOssCallbackSettingResponse() {}

  explicit DescribeOssCallbackSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssCallbackSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssCallbackSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssCallbackSettingResponse() = default;
};
class DescribeOssIncrementCheckSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeOssIncrementCheckSettingRequest() {}

  explicit DescribeOssIncrementCheckSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeOssIncrementCheckSettingRequest() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig : public Darabonba::Model {
public:
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd> ad{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive> live{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn> porn{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism> terrorism{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ad) {
      res["Ad"] = ad ? boost::any(ad->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (live) {
      res["Live"] = live ? boost::any(live->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (porn) {
      res["Porn"] = porn ? boost::any(porn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terrorism) {
      res["Terrorism"] = terrorism ? boost::any(terrorism->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ad") != m.end() && !m["Ad"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ad"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ad"]));
        ad = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigAd>(model1);
      }
    }
    if (m.find("Live") != m.end() && !m["Live"].empty()) {
      if (typeid(map<string, boost::any>) == m["Live"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Live"]));
        live = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigLive>(model1);
      }
    }
    if (m.find("Porn") != m.end() && !m["Porn"].empty()) {
      if (typeid(map<string, boost::any>) == m["Porn"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Porn"]));
        porn = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigPorn>(model1);
      }
    }
    if (m.find("Terrorism") != m.end() && !m["Terrorism"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terrorism"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terrorism"]));
        terrorism = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfigTerrorism>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig : public Darabonba::Model {
public:
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd> ad{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive> live{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn> porn{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism> terrorism{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ad) {
      res["Ad"] = ad ? boost::any(ad->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (live) {
      res["Live"] = live ? boost::any(live->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (porn) {
      res["Porn"] = porn ? boost::any(porn->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (terrorism) {
      res["Terrorism"] = terrorism ? boost::any(terrorism->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ad") != m.end() && !m["Ad"].empty()) {
      if (typeid(map<string, boost::any>) == m["Ad"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Ad"]));
        ad = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigAd>(model1);
      }
    }
    if (m.find("Live") != m.end() && !m["Live"].empty()) {
      if (typeid(map<string, boost::any>) == m["Live"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Live"]));
        live = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigLive>(model1);
      }
    }
    if (m.find("Porn") != m.end() && !m["Porn"].empty()) {
      if (typeid(map<string, boost::any>) == m["Porn"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Porn"]));
        porn = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigPorn>(model1);
      }
    }
    if (m.find("Terrorism") != m.end() && !m["Terrorism"].empty()) {
      if (typeid(map<string, boost::any>) == m["Terrorism"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Terrorism"]));
        terrorism = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfigTerrorism>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categories{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Categories"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categories = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig : public Darabonba::Model {
public:
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam> antispam{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antispam) {
      res["Antispam"] = antispam ? boost::any(antispam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Antispam") != m.end() && !m["Antispam"].empty()) {
      if (typeid(map<string, boost::any>) == m["Antispam"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Antispam"]));
        antispam = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfigAntispam>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> description{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig> imageConfig{};
  shared_ptr<long> includeChannel{};
  shared_ptr<string> name{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig> videoConfig{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig> voiceConfig{};

  DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageConfig) {
      res["ImageConfig"] = imageConfig ? boost::any(imageConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (includeChannel) {
      res["IncludeChannel"] = boost::any(*includeChannel);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (videoConfig) {
      res["VideoConfig"] = videoConfig ? boost::any(videoConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (voiceConfig) {
      res["VoiceConfig"] = voiceConfig ? boost::any(voiceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageConfig") != m.end() && !m["ImageConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageConfig"]));
        imageConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateImageConfig>(model1);
      }
    }
    if (m.find("IncludeChannel") != m.end() && !m["IncludeChannel"].empty()) {
      includeChannel = make_shared<long>(boost::any_cast<long>(m["IncludeChannel"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("VideoConfig") != m.end() && !m["VideoConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoConfig"]));
        videoConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVideoConfig>(model1);
      }
    }
    if (m.find("VoiceConfig") != m.end() && !m["VoiceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VoiceConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VoiceConfig"]));
        voiceConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplateVoiceConfig>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyBucketConfigList : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<vector<string>> prefixes{};
  shared_ptr<bool> selected{};
  shared_ptr<string> type{};

  DescribeOssIncrementCheckSettingResponseBodyBucketConfigList() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyBucketConfigList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (prefixes) {
      res["Prefixes"] = boost::any(*prefixes);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Prefixes") != m.end() && !m["Prefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Prefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Prefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      prefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyBucketConfigList() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze : public Darabonba::Model {
public:
  shared_ptr<string> ad{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> live{};
  shared_ptr<string> porn{};
  shared_ptr<string> terrorism{};

  DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ad) {
      res["Ad"] = boost::any(*ad);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (live) {
      res["Live"] = boost::any(*live);
    }
    if (porn) {
      res["Porn"] = boost::any(*porn);
    }
    if (terrorism) {
      res["Terrorism"] = boost::any(*terrorism);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ad") != m.end() && !m["Ad"].empty()) {
      ad = make_shared<string>(boost::any_cast<string>(m["Ad"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("Live") != m.end() && !m["Live"].empty()) {
      live = make_shared<string>(boost::any_cast<string>(m["Live"]));
    }
    if (m.find("Porn") != m.end() && !m["Porn"].empty()) {
      porn = make_shared<string>(boost::any_cast<string>(m["Porn"]));
    }
    if (m.find("Terrorism") != m.end() && !m["Terrorism"].empty()) {
      terrorism = make_shared<string>(boost::any_cast<string>(m["Terrorism"]));
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig() {}

  explicit DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig() = default;
};
class DescribeOssIncrementCheckSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig> audioAntispamFreezeConfig{};
  shared_ptr<bool> audioAutoFreezeOpened{};
  shared_ptr<long> audioMaxSize{};
  shared_ptr<long> audioScanLimit{};
  shared_ptr<vector<string>> audioSceneList{};
  shared_ptr<string> autoFreezeType{};
  shared_ptr<string> bizType{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate> bizTypeTemplate{};
  shared_ptr<vector<DescribeOssIncrementCheckSettingResponseBodyBucketConfigList>> bucketConfigList{};
  shared_ptr<string> callbackId{};
  shared_ptr<string> callbackName{};
  shared_ptr<string> endTime{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig> imageAdFreezeConfig{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze> imageAutoFreeze{};
  shared_ptr<bool> imageAutoFreezeOpened{};
  shared_ptr<bool> imageEnableLimit{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig> imageLiveFreezeConfig{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig> imagePornFreezeConfig{};
  shared_ptr<long> imageScanLimit{};
  shared_ptr<vector<string>> imageSceneList{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig> imageTerrorismFreezeConfig{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> scanImageNoFileType{};
  shared_ptr<string> startTime{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig> videoAdFreezeConfig{};
  shared_ptr<bool> videoAutoFreezeOpened{};
  shared_ptr<vector<string>> videoAutoFreezeSceneList{};
  shared_ptr<long> videoFrameInterval{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig> videoLiveFreezeConfig{};
  shared_ptr<long> videoMaxFrames{};
  shared_ptr<long> videoMaxSize{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig> videoPornFreezeConfig{};
  shared_ptr<long> videoScanLimit{};
  shared_ptr<vector<string>> videoSceneList{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig> videoTerrorismFreezeConfig{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig> videoVoiceAntispamFreezeConfig{};

  DescribeOssIncrementCheckSettingResponseBody() {}

  explicit DescribeOssIncrementCheckSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioAntispamFreezeConfig) {
      res["AudioAntispamFreezeConfig"] = audioAntispamFreezeConfig ? boost::any(audioAntispamFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (audioAutoFreezeOpened) {
      res["AudioAutoFreezeOpened"] = boost::any(*audioAutoFreezeOpened);
    }
    if (audioMaxSize) {
      res["AudioMaxSize"] = boost::any(*audioMaxSize);
    }
    if (audioScanLimit) {
      res["AudioScanLimit"] = boost::any(*audioScanLimit);
    }
    if (audioSceneList) {
      res["AudioSceneList"] = boost::any(*audioSceneList);
    }
    if (autoFreezeType) {
      res["AutoFreezeType"] = boost::any(*autoFreezeType);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizTypeTemplate) {
      res["BizTypeTemplate"] = bizTypeTemplate ? boost::any(bizTypeTemplate->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bucketConfigList) {
      vector<boost::any> temp1;
      for(auto item1:*bucketConfigList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BucketConfigList"] = boost::any(temp1);
    }
    if (callbackId) {
      res["CallbackId"] = boost::any(*callbackId);
    }
    if (callbackName) {
      res["CallbackName"] = boost::any(*callbackName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (imageAdFreezeConfig) {
      res["ImageAdFreezeConfig"] = imageAdFreezeConfig ? boost::any(imageAdFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageAutoFreeze) {
      res["ImageAutoFreeze"] = imageAutoFreeze ? boost::any(imageAutoFreeze->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageAutoFreezeOpened) {
      res["ImageAutoFreezeOpened"] = boost::any(*imageAutoFreezeOpened);
    }
    if (imageEnableLimit) {
      res["ImageEnableLimit"] = boost::any(*imageEnableLimit);
    }
    if (imageLiveFreezeConfig) {
      res["ImageLiveFreezeConfig"] = imageLiveFreezeConfig ? boost::any(imageLiveFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imagePornFreezeConfig) {
      res["ImagePornFreezeConfig"] = imagePornFreezeConfig ? boost::any(imagePornFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageScanLimit) {
      res["ImageScanLimit"] = boost::any(*imageScanLimit);
    }
    if (imageSceneList) {
      res["ImageSceneList"] = boost::any(*imageSceneList);
    }
    if (imageTerrorismFreezeConfig) {
      res["ImageTerrorismFreezeConfig"] = imageTerrorismFreezeConfig ? boost::any(imageTerrorismFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanImageNoFileType) {
      res["ScanImageNoFileType"] = boost::any(*scanImageNoFileType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (videoAdFreezeConfig) {
      res["VideoAdFreezeConfig"] = videoAdFreezeConfig ? boost::any(videoAdFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoAutoFreezeOpened) {
      res["VideoAutoFreezeOpened"] = boost::any(*videoAutoFreezeOpened);
    }
    if (videoAutoFreezeSceneList) {
      res["VideoAutoFreezeSceneList"] = boost::any(*videoAutoFreezeSceneList);
    }
    if (videoFrameInterval) {
      res["VideoFrameInterval"] = boost::any(*videoFrameInterval);
    }
    if (videoLiveFreezeConfig) {
      res["VideoLiveFreezeConfig"] = videoLiveFreezeConfig ? boost::any(videoLiveFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoMaxFrames) {
      res["VideoMaxFrames"] = boost::any(*videoMaxFrames);
    }
    if (videoMaxSize) {
      res["VideoMaxSize"] = boost::any(*videoMaxSize);
    }
    if (videoPornFreezeConfig) {
      res["VideoPornFreezeConfig"] = videoPornFreezeConfig ? boost::any(videoPornFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoScanLimit) {
      res["VideoScanLimit"] = boost::any(*videoScanLimit);
    }
    if (videoSceneList) {
      res["VideoSceneList"] = boost::any(*videoSceneList);
    }
    if (videoTerrorismFreezeConfig) {
      res["VideoTerrorismFreezeConfig"] = videoTerrorismFreezeConfig ? boost::any(videoTerrorismFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoVoiceAntispamFreezeConfig) {
      res["VideoVoiceAntispamFreezeConfig"] = videoVoiceAntispamFreezeConfig ? boost::any(videoVoiceAntispamFreezeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioAntispamFreezeConfig") != m.end() && !m["AudioAntispamFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["AudioAntispamFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AudioAntispamFreezeConfig"]));
        audioAntispamFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyAudioAntispamFreezeConfig>(model1);
      }
    }
    if (m.find("AudioAutoFreezeOpened") != m.end() && !m["AudioAutoFreezeOpened"].empty()) {
      audioAutoFreezeOpened = make_shared<bool>(boost::any_cast<bool>(m["AudioAutoFreezeOpened"]));
    }
    if (m.find("AudioMaxSize") != m.end() && !m["AudioMaxSize"].empty()) {
      audioMaxSize = make_shared<long>(boost::any_cast<long>(m["AudioMaxSize"]));
    }
    if (m.find("AudioScanLimit") != m.end() && !m["AudioScanLimit"].empty()) {
      audioScanLimit = make_shared<long>(boost::any_cast<long>(m["AudioScanLimit"]));
    }
    if (m.find("AudioSceneList") != m.end() && !m["AudioSceneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AudioSceneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AudioSceneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      audioSceneList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("AutoFreezeType") != m.end() && !m["AutoFreezeType"].empty()) {
      autoFreezeType = make_shared<string>(boost::any_cast<string>(m["AutoFreezeType"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizTypeTemplate") != m.end() && !m["BizTypeTemplate"].empty()) {
      if (typeid(map<string, boost::any>) == m["BizTypeTemplate"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BizTypeTemplate"]));
        bizTypeTemplate = make_shared<DescribeOssIncrementCheckSettingResponseBodyBizTypeTemplate>(model1);
      }
    }
    if (m.find("BucketConfigList") != m.end() && !m["BucketConfigList"].empty()) {
      if (typeid(vector<boost::any>) == m["BucketConfigList"].type()) {
        vector<DescribeOssIncrementCheckSettingResponseBodyBucketConfigList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BucketConfigList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssIncrementCheckSettingResponseBodyBucketConfigList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bucketConfigList = make_shared<vector<DescribeOssIncrementCheckSettingResponseBodyBucketConfigList>>(expect1);
      }
    }
    if (m.find("CallbackId") != m.end() && !m["CallbackId"].empty()) {
      callbackId = make_shared<string>(boost::any_cast<string>(m["CallbackId"]));
    }
    if (m.find("CallbackName") != m.end() && !m["CallbackName"].empty()) {
      callbackName = make_shared<string>(boost::any_cast<string>(m["CallbackName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ImageAdFreezeConfig") != m.end() && !m["ImageAdFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageAdFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageAdFreezeConfig"]));
        imageAdFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyImageAdFreezeConfig>(model1);
      }
    }
    if (m.find("ImageAutoFreeze") != m.end() && !m["ImageAutoFreeze"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageAutoFreeze"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageAutoFreeze"]));
        imageAutoFreeze = make_shared<DescribeOssIncrementCheckSettingResponseBodyImageAutoFreeze>(model1);
      }
    }
    if (m.find("ImageAutoFreezeOpened") != m.end() && !m["ImageAutoFreezeOpened"].empty()) {
      imageAutoFreezeOpened = make_shared<bool>(boost::any_cast<bool>(m["ImageAutoFreezeOpened"]));
    }
    if (m.find("ImageEnableLimit") != m.end() && !m["ImageEnableLimit"].empty()) {
      imageEnableLimit = make_shared<bool>(boost::any_cast<bool>(m["ImageEnableLimit"]));
    }
    if (m.find("ImageLiveFreezeConfig") != m.end() && !m["ImageLiveFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageLiveFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageLiveFreezeConfig"]));
        imageLiveFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyImageLiveFreezeConfig>(model1);
      }
    }
    if (m.find("ImagePornFreezeConfig") != m.end() && !m["ImagePornFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImagePornFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImagePornFreezeConfig"]));
        imagePornFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyImagePornFreezeConfig>(model1);
      }
    }
    if (m.find("ImageScanLimit") != m.end() && !m["ImageScanLimit"].empty()) {
      imageScanLimit = make_shared<long>(boost::any_cast<long>(m["ImageScanLimit"]));
    }
    if (m.find("ImageSceneList") != m.end() && !m["ImageSceneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageSceneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageSceneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageSceneList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageTerrorismFreezeConfig") != m.end() && !m["ImageTerrorismFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageTerrorismFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageTerrorismFreezeConfig"]));
        imageTerrorismFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyImageTerrorismFreezeConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanImageNoFileType") != m.end() && !m["ScanImageNoFileType"].empty()) {
      scanImageNoFileType = make_shared<bool>(boost::any_cast<bool>(m["ScanImageNoFileType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("VideoAdFreezeConfig") != m.end() && !m["VideoAdFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoAdFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoAdFreezeConfig"]));
        videoAdFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyVideoAdFreezeConfig>(model1);
      }
    }
    if (m.find("VideoAutoFreezeOpened") != m.end() && !m["VideoAutoFreezeOpened"].empty()) {
      videoAutoFreezeOpened = make_shared<bool>(boost::any_cast<bool>(m["VideoAutoFreezeOpened"]));
    }
    if (m.find("VideoAutoFreezeSceneList") != m.end() && !m["VideoAutoFreezeSceneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VideoAutoFreezeSceneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoAutoFreezeSceneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      videoAutoFreezeSceneList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VideoFrameInterval") != m.end() && !m["VideoFrameInterval"].empty()) {
      videoFrameInterval = make_shared<long>(boost::any_cast<long>(m["VideoFrameInterval"]));
    }
    if (m.find("VideoLiveFreezeConfig") != m.end() && !m["VideoLiveFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoLiveFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoLiveFreezeConfig"]));
        videoLiveFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyVideoLiveFreezeConfig>(model1);
      }
    }
    if (m.find("VideoMaxFrames") != m.end() && !m["VideoMaxFrames"].empty()) {
      videoMaxFrames = make_shared<long>(boost::any_cast<long>(m["VideoMaxFrames"]));
    }
    if (m.find("VideoMaxSize") != m.end() && !m["VideoMaxSize"].empty()) {
      videoMaxSize = make_shared<long>(boost::any_cast<long>(m["VideoMaxSize"]));
    }
    if (m.find("VideoPornFreezeConfig") != m.end() && !m["VideoPornFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoPornFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoPornFreezeConfig"]));
        videoPornFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyVideoPornFreezeConfig>(model1);
      }
    }
    if (m.find("VideoScanLimit") != m.end() && !m["VideoScanLimit"].empty()) {
      videoScanLimit = make_shared<long>(boost::any_cast<long>(m["VideoScanLimit"]));
    }
    if (m.find("VideoSceneList") != m.end() && !m["VideoSceneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VideoSceneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoSceneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      videoSceneList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("VideoTerrorismFreezeConfig") != m.end() && !m["VideoTerrorismFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoTerrorismFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoTerrorismFreezeConfig"]));
        videoTerrorismFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyVideoTerrorismFreezeConfig>(model1);
      }
    }
    if (m.find("VideoVoiceAntispamFreezeConfig") != m.end() && !m["VideoVoiceAntispamFreezeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VideoVoiceAntispamFreezeConfig"].type()) {
        DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VideoVoiceAntispamFreezeConfig"]));
        videoVoiceAntispamFreezeConfig = make_shared<DescribeOssIncrementCheckSettingResponseBodyVideoVoiceAntispamFreezeConfig>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponseBody() = default;
};
class DescribeOssIncrementCheckSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssIncrementCheckSettingResponseBody> body{};

  DescribeOssIncrementCheckSettingResponse() {}

  explicit DescribeOssIncrementCheckSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssIncrementCheckSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssIncrementCheckSettingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementCheckSettingResponse() = default;
};
class DescribeOssIncrementOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeOssIncrementOverviewRequest() {}

  explicit DescribeOssIncrementOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeOssIncrementOverviewRequest() = default;
};
class DescribeOssIncrementOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> adUnhandleCount{};
  shared_ptr<long> audioCount{};
  shared_ptr<long> imageCount{};
  shared_ptr<long> liveUnhandleCount{};
  shared_ptr<long> pornUnhandleCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> terrorismUnhandleCount{};
  shared_ptr<long> videoCount{};
  shared_ptr<long> videoFrameCount{};
  shared_ptr<long> voiceAntispamUnhandleCount{};

  DescribeOssIncrementOverviewResponseBody() {}

  explicit DescribeOssIncrementOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adUnhandleCount) {
      res["AdUnhandleCount"] = boost::any(*adUnhandleCount);
    }
    if (audioCount) {
      res["AudioCount"] = boost::any(*audioCount);
    }
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (liveUnhandleCount) {
      res["LiveUnhandleCount"] = boost::any(*liveUnhandleCount);
    }
    if (pornUnhandleCount) {
      res["PornUnhandleCount"] = boost::any(*pornUnhandleCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (terrorismUnhandleCount) {
      res["TerrorismUnhandleCount"] = boost::any(*terrorismUnhandleCount);
    }
    if (videoCount) {
      res["VideoCount"] = boost::any(*videoCount);
    }
    if (videoFrameCount) {
      res["VideoFrameCount"] = boost::any(*videoFrameCount);
    }
    if (voiceAntispamUnhandleCount) {
      res["VoiceAntispamUnhandleCount"] = boost::any(*voiceAntispamUnhandleCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdUnhandleCount") != m.end() && !m["AdUnhandleCount"].empty()) {
      adUnhandleCount = make_shared<long>(boost::any_cast<long>(m["AdUnhandleCount"]));
    }
    if (m.find("AudioCount") != m.end() && !m["AudioCount"].empty()) {
      audioCount = make_shared<long>(boost::any_cast<long>(m["AudioCount"]));
    }
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("LiveUnhandleCount") != m.end() && !m["LiveUnhandleCount"].empty()) {
      liveUnhandleCount = make_shared<long>(boost::any_cast<long>(m["LiveUnhandleCount"]));
    }
    if (m.find("PornUnhandleCount") != m.end() && !m["PornUnhandleCount"].empty()) {
      pornUnhandleCount = make_shared<long>(boost::any_cast<long>(m["PornUnhandleCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TerrorismUnhandleCount") != m.end() && !m["TerrorismUnhandleCount"].empty()) {
      terrorismUnhandleCount = make_shared<long>(boost::any_cast<long>(m["TerrorismUnhandleCount"]));
    }
    if (m.find("VideoCount") != m.end() && !m["VideoCount"].empty()) {
      videoCount = make_shared<long>(boost::any_cast<long>(m["VideoCount"]));
    }
    if (m.find("VideoFrameCount") != m.end() && !m["VideoFrameCount"].empty()) {
      videoFrameCount = make_shared<long>(boost::any_cast<long>(m["VideoFrameCount"]));
    }
    if (m.find("VoiceAntispamUnhandleCount") != m.end() && !m["VoiceAntispamUnhandleCount"].empty()) {
      voiceAntispamUnhandleCount = make_shared<long>(boost::any_cast<long>(m["VoiceAntispamUnhandleCount"]));
    }
  }


  virtual ~DescribeOssIncrementOverviewResponseBody() = default;
};
class DescribeOssIncrementOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssIncrementOverviewResponseBody> body{};

  DescribeOssIncrementOverviewResponse() {}

  explicit DescribeOssIncrementOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssIncrementOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssIncrementOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementOverviewResponse() = default;
};
class DescribeOssIncrementStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};

  DescribeOssIncrementStatsRequest() {}

  explicit DescribeOssIncrementStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
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
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeOssIncrementStatsRequest() = default;
};
class DescribeOssIncrementStatsResponseBodyStatList : public Darabonba::Model {
public:
  shared_ptr<long> blockCount{};
  shared_ptr<string> date{};
  shared_ptr<long> passCount{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> reviewCount{};
  shared_ptr<string> scene{};
  shared_ptr<long> totalCount{};

  DescribeOssIncrementStatsResponseBodyStatList() {}

  explicit DescribeOssIncrementStatsResponseBodyStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (passCount) {
      res["PassCount"] = boost::any(*passCount);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (reviewCount) {
      res["ReviewCount"] = boost::any(*reviewCount);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("PassCount") != m.end() && !m["PassCount"].empty()) {
      passCount = make_shared<long>(boost::any_cast<long>(m["PassCount"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("ReviewCount") != m.end() && !m["ReviewCount"].empty()) {
      reviewCount = make_shared<long>(boost::any_cast<long>(m["ReviewCount"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOssIncrementStatsResponseBodyStatList() = default;
};
class DescribeOssIncrementStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeOssIncrementStatsResponseBodyStatList>> statList{};
  shared_ptr<long> totalCount{};

  DescribeOssIncrementStatsResponseBody() {}

  explicit DescribeOssIncrementStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (statList) {
      vector<boost::any> temp1;
      for(auto item1:*statList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatList"] = boost::any(temp1);
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
    if (m.find("StatList") != m.end() && !m["StatList"].empty()) {
      if (typeid(vector<boost::any>) == m["StatList"].type()) {
        vector<DescribeOssIncrementStatsResponseBodyStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssIncrementStatsResponseBodyStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statList = make_shared<vector<DescribeOssIncrementStatsResponseBodyStatList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOssIncrementStatsResponseBody() = default;
};
class DescribeOssIncrementStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssIncrementStatsResponseBody> body{};

  DescribeOssIncrementStatsResponse() {}

  explicit DescribeOssIncrementStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssIncrementStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssIncrementStatsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssIncrementStatsResponse() = default;
};
class DescribeOssResultItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<string> lang{};
  shared_ptr<double> maxScore{};
  shared_ptr<double> minScore{};
  shared_ptr<string> object{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};
  shared_ptr<bool> stock{};
  shared_ptr<long> stockTaskId{};
  shared_ptr<string> suggestion{};
  shared_ptr<long> totalCount{};

  DescribeOssResultItemsRequest() {}

  explicit DescribeOssResultItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maxScore) {
      res["MaxScore"] = boost::any(*maxScore);
    }
    if (minScore) {
      res["MinScore"] = boost::any(*minScore);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (stock) {
      res["Stock"] = boost::any(*stock);
    }
    if (stockTaskId) {
      res["StockTaskId"] = boost::any(*stockTaskId);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MaxScore") != m.end() && !m["MaxScore"].empty()) {
      maxScore = make_shared<double>(boost::any_cast<double>(m["MaxScore"]));
    }
    if (m.find("MinScore") != m.end() && !m["MinScore"].empty()) {
      minScore = make_shared<double>(boost::any_cast<double>(m["MinScore"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Stock") != m.end() && !m["Stock"].empty()) {
      stock = make_shared<bool>(boost::any_cast<bool>(m["Stock"]));
    }
    if (m.find("StockTaskId") != m.end() && !m["StockTaskId"].empty()) {
      stockTaskId = make_shared<long>(boost::any_cast<long>(m["StockTaskId"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOssResultItemsRequest() = default;
};
class DescribeOssResultItemsResponseBodyScanResultListFrameResults : public Darabonba::Model {
public:
  shared_ptr<long> offset{};
  shared_ptr<string> thumbnail{};
  shared_ptr<string> url{};

  DescribeOssResultItemsResponseBodyScanResultListFrameResults() {}

  explicit DescribeOssResultItemsResponseBodyScanResultListFrameResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeOssResultItemsResponseBodyScanResultListFrameResults() = default;
};
class DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> label{};
  shared_ptr<long> startTime{};
  shared_ptr<string> text{};

  DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults() {}

  explicit DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults() = default;
};
class DescribeOssResultItemsResponseBodyScanResultList : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> dataId{};
  shared_ptr<vector<DescribeOssResultItemsResponseBodyScanResultListFrameResults>> frameResults{};
  shared_ptr<long> handleStatus{};
  shared_ptr<long> id{};
  shared_ptr<string> newUrl{};
  shared_ptr<string> object{};
  shared_ptr<string> requestTime{};
  shared_ptr<long> resourceStatus{};
  shared_ptr<string> scanFinishedTime{};
  shared_ptr<string> score{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};
  shared_ptr<string> thumbnail{};
  shared_ptr<vector<DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults>> voiceSegmentAntispamResults{};

  DescribeOssResultItemsResponseBodyScanResultList() {}

  explicit DescribeOssResultItemsResponseBodyScanResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (frameResults) {
      vector<boost::any> temp1;
      for(auto item1:*frameResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FrameResults"] = boost::any(temp1);
    }
    if (handleStatus) {
      res["HandleStatus"] = boost::any(*handleStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (newUrl) {
      res["NewUrl"] = boost::any(*newUrl);
    }
    if (object) {
      res["Object"] = boost::any(*object);
    }
    if (requestTime) {
      res["RequestTime"] = boost::any(*requestTime);
    }
    if (resourceStatus) {
      res["ResourceStatus"] = boost::any(*resourceStatus);
    }
    if (scanFinishedTime) {
      res["ScanFinishedTime"] = boost::any(*scanFinishedTime);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (voiceSegmentAntispamResults) {
      vector<boost::any> temp1;
      for(auto item1:*voiceSegmentAntispamResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VoiceSegmentAntispamResults"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FrameResults") != m.end() && !m["FrameResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FrameResults"].type()) {
        vector<DescribeOssResultItemsResponseBodyScanResultListFrameResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FrameResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssResultItemsResponseBodyScanResultListFrameResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frameResults = make_shared<vector<DescribeOssResultItemsResponseBodyScanResultListFrameResults>>(expect1);
      }
    }
    if (m.find("HandleStatus") != m.end() && !m["HandleStatus"].empty()) {
      handleStatus = make_shared<long>(boost::any_cast<long>(m["HandleStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("NewUrl") != m.end() && !m["NewUrl"].empty()) {
      newUrl = make_shared<string>(boost::any_cast<string>(m["NewUrl"]));
    }
    if (m.find("Object") != m.end() && !m["Object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["Object"]));
    }
    if (m.find("RequestTime") != m.end() && !m["RequestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["RequestTime"]));
    }
    if (m.find("ResourceStatus") != m.end() && !m["ResourceStatus"].empty()) {
      resourceStatus = make_shared<long>(boost::any_cast<long>(m["ResourceStatus"]));
    }
    if (m.find("ScanFinishedTime") != m.end() && !m["ScanFinishedTime"].empty()) {
      scanFinishedTime = make_shared<string>(boost::any_cast<string>(m["ScanFinishedTime"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("VoiceSegmentAntispamResults") != m.end() && !m["VoiceSegmentAntispamResults"].empty()) {
      if (typeid(vector<boost::any>) == m["VoiceSegmentAntispamResults"].type()) {
        vector<DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VoiceSegmentAntispamResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        voiceSegmentAntispamResults = make_shared<vector<DescribeOssResultItemsResponseBodyScanResultListVoiceSegmentAntispamResults>>(expect1);
      }
    }
  }


  virtual ~DescribeOssResultItemsResponseBodyScanResultList() = default;
};
class DescribeOssResultItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> queryId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeOssResultItemsResponseBodyScanResultList>> scanResultList{};
  shared_ptr<long> totalCount{};

  DescribeOssResultItemsResponseBody() {}

  explicit DescribeOssResultItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (scanResultList) {
      vector<boost::any> temp1;
      for(auto item1:*scanResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ScanResultList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ScanResultList") != m.end() && !m["ScanResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["ScanResultList"].type()) {
        vector<DescribeOssResultItemsResponseBodyScanResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ScanResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssResultItemsResponseBodyScanResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        scanResultList = make_shared<vector<DescribeOssResultItemsResponseBodyScanResultList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeOssResultItemsResponseBody() = default;
};
class DescribeOssResultItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssResultItemsResponseBody> body{};

  DescribeOssResultItemsResponse() {}

  explicit DescribeOssResultItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssResultItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssResultItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssResultItemsResponse() = default;
};
class DescribeOssStockStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> stockTaskId{};

  DescribeOssStockStatusRequest() {}

  explicit DescribeOssStockStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (stockTaskId) {
      res["StockTaskId"] = boost::any(*stockTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StockTaskId") != m.end() && !m["StockTaskId"].empty()) {
      stockTaskId = make_shared<long>(boost::any_cast<long>(m["StockTaskId"]));
    }
  }


  virtual ~DescribeOssStockStatusRequest() = default;
};
class DescribeOssStockStatusResponseBodyBucketList : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<vector<string>> prefixes{};
  shared_ptr<bool> selected{};

  DescribeOssStockStatusResponseBodyBucketList() {}

  explicit DescribeOssStockStatusResponseBodyBucketList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (prefixes) {
      res["Prefixes"] = boost::any(*prefixes);
    }
    if (selected) {
      res["Selected"] = boost::any(*selected);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("Prefixes") != m.end() && !m["Prefixes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Prefixes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Prefixes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      prefixes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Selected") != m.end() && !m["Selected"].empty()) {
      selected = make_shared<bool>(boost::any_cast<bool>(m["Selected"]));
    }
  }


  virtual ~DescribeOssStockStatusResponseBodyBucketList() = default;
};
class DescribeOssStockStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> audioAntispamCount{};
  shared_ptr<long> audioTotalCount{};
  shared_ptr<vector<DescribeOssStockStatusResponseBodyBucketList>> bucketList{};
  shared_ptr<string> finishedTime{};
  shared_ptr<long> imageAdCount{};
  shared_ptr<long> imageLiveCount{};
  shared_ptr<long> imagePornCount{};
  shared_ptr<long> imageTerrorismCount{};
  shared_ptr<long> imageTotalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> resouceTypeList{};
  shared_ptr<vector<string>> sceneList{};
  shared_ptr<long> stockStatus{};
  shared_ptr<long> videoAdCount{};
  shared_ptr<long> videoLiveCount{};
  shared_ptr<long> videoPornCount{};
  shared_ptr<long> videoTerrorismCount{};
  shared_ptr<long> videoTotalCount{};
  shared_ptr<long> videoVoiceAntispamCount{};

  DescribeOssStockStatusResponseBody() {}

  explicit DescribeOssStockStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioAntispamCount) {
      res["AudioAntispamCount"] = boost::any(*audioAntispamCount);
    }
    if (audioTotalCount) {
      res["AudioTotalCount"] = boost::any(*audioTotalCount);
    }
    if (bucketList) {
      vector<boost::any> temp1;
      for(auto item1:*bucketList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BucketList"] = boost::any(temp1);
    }
    if (finishedTime) {
      res["FinishedTime"] = boost::any(*finishedTime);
    }
    if (imageAdCount) {
      res["ImageAdCount"] = boost::any(*imageAdCount);
    }
    if (imageLiveCount) {
      res["ImageLiveCount"] = boost::any(*imageLiveCount);
    }
    if (imagePornCount) {
      res["ImagePornCount"] = boost::any(*imagePornCount);
    }
    if (imageTerrorismCount) {
      res["ImageTerrorismCount"] = boost::any(*imageTerrorismCount);
    }
    if (imageTotalCount) {
      res["ImageTotalCount"] = boost::any(*imageTotalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resouceTypeList) {
      res["ResouceTypeList"] = boost::any(*resouceTypeList);
    }
    if (sceneList) {
      res["SceneList"] = boost::any(*sceneList);
    }
    if (stockStatus) {
      res["StockStatus"] = boost::any(*stockStatus);
    }
    if (videoAdCount) {
      res["VideoAdCount"] = boost::any(*videoAdCount);
    }
    if (videoLiveCount) {
      res["VideoLiveCount"] = boost::any(*videoLiveCount);
    }
    if (videoPornCount) {
      res["VideoPornCount"] = boost::any(*videoPornCount);
    }
    if (videoTerrorismCount) {
      res["VideoTerrorismCount"] = boost::any(*videoTerrorismCount);
    }
    if (videoTotalCount) {
      res["VideoTotalCount"] = boost::any(*videoTotalCount);
    }
    if (videoVoiceAntispamCount) {
      res["VideoVoiceAntispamCount"] = boost::any(*videoVoiceAntispamCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioAntispamCount") != m.end() && !m["AudioAntispamCount"].empty()) {
      audioAntispamCount = make_shared<long>(boost::any_cast<long>(m["AudioAntispamCount"]));
    }
    if (m.find("AudioTotalCount") != m.end() && !m["AudioTotalCount"].empty()) {
      audioTotalCount = make_shared<long>(boost::any_cast<long>(m["AudioTotalCount"]));
    }
    if (m.find("BucketList") != m.end() && !m["BucketList"].empty()) {
      if (typeid(vector<boost::any>) == m["BucketList"].type()) {
        vector<DescribeOssStockStatusResponseBodyBucketList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BucketList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssStockStatusResponseBodyBucketList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bucketList = make_shared<vector<DescribeOssStockStatusResponseBodyBucketList>>(expect1);
      }
    }
    if (m.find("FinishedTime") != m.end() && !m["FinishedTime"].empty()) {
      finishedTime = make_shared<string>(boost::any_cast<string>(m["FinishedTime"]));
    }
    if (m.find("ImageAdCount") != m.end() && !m["ImageAdCount"].empty()) {
      imageAdCount = make_shared<long>(boost::any_cast<long>(m["ImageAdCount"]));
    }
    if (m.find("ImageLiveCount") != m.end() && !m["ImageLiveCount"].empty()) {
      imageLiveCount = make_shared<long>(boost::any_cast<long>(m["ImageLiveCount"]));
    }
    if (m.find("ImagePornCount") != m.end() && !m["ImagePornCount"].empty()) {
      imagePornCount = make_shared<long>(boost::any_cast<long>(m["ImagePornCount"]));
    }
    if (m.find("ImageTerrorismCount") != m.end() && !m["ImageTerrorismCount"].empty()) {
      imageTerrorismCount = make_shared<long>(boost::any_cast<long>(m["ImageTerrorismCount"]));
    }
    if (m.find("ImageTotalCount") != m.end() && !m["ImageTotalCount"].empty()) {
      imageTotalCount = make_shared<long>(boost::any_cast<long>(m["ImageTotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResouceTypeList") != m.end() && !m["ResouceTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResouceTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResouceTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resouceTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SceneList") != m.end() && !m["SceneList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SceneList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SceneList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sceneList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StockStatus") != m.end() && !m["StockStatus"].empty()) {
      stockStatus = make_shared<long>(boost::any_cast<long>(m["StockStatus"]));
    }
    if (m.find("VideoAdCount") != m.end() && !m["VideoAdCount"].empty()) {
      videoAdCount = make_shared<long>(boost::any_cast<long>(m["VideoAdCount"]));
    }
    if (m.find("VideoLiveCount") != m.end() && !m["VideoLiveCount"].empty()) {
      videoLiveCount = make_shared<long>(boost::any_cast<long>(m["VideoLiveCount"]));
    }
    if (m.find("VideoPornCount") != m.end() && !m["VideoPornCount"].empty()) {
      videoPornCount = make_shared<long>(boost::any_cast<long>(m["VideoPornCount"]));
    }
    if (m.find("VideoTerrorismCount") != m.end() && !m["VideoTerrorismCount"].empty()) {
      videoTerrorismCount = make_shared<long>(boost::any_cast<long>(m["VideoTerrorismCount"]));
    }
    if (m.find("VideoTotalCount") != m.end() && !m["VideoTotalCount"].empty()) {
      videoTotalCount = make_shared<long>(boost::any_cast<long>(m["VideoTotalCount"]));
    }
    if (m.find("VideoVoiceAntispamCount") != m.end() && !m["VideoVoiceAntispamCount"].empty()) {
      videoVoiceAntispamCount = make_shared<long>(boost::any_cast<long>(m["VideoVoiceAntispamCount"]));
    }
  }


  virtual ~DescribeOssStockStatusResponseBody() = default;
};
class DescribeOssStockStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssStockStatusResponseBody> body{};

  DescribeOssStockStatusResponse() {}

  explicit DescribeOssStockStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssStockStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssStockStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssStockStatusResponse() = default;
};
class DescribeSdkUrlRequest : public Darabonba::Model {
public:
  shared_ptr<bool> debug{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeSdkUrlRequest() {}

  explicit DescribeSdkUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeSdkUrlRequest() = default;
};
class DescribeSdkUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sdkUrl{};

  DescribeSdkUrlResponseBody() {}

  explicit DescribeSdkUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
  }


  virtual ~DescribeSdkUrlResponseBody() = default;
};
class DescribeSdkUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSdkUrlResponseBody> body{};

  DescribeSdkUrlResponse() {}

  explicit DescribeSdkUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSdkUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSdkUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSdkUrlResponse() = default;
};
class DescribeUpdatePackageResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> taskId{};

  DescribeUpdatePackageResultRequest() {}

  explicit DescribeUpdatePackageResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeUpdatePackageResultRequest() = default;
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
class DescribeUpdatePackageResultResponseBodyAppInfo : public Darabonba::Model {
public:
  shared_ptr<DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo> debugPackageInfo{};
  shared_ptr<string> endDate{};
  shared_ptr<string> icon{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo> packageInfo{};
  shared_ptr<string> packageName{};
  shared_ptr<string> startDate{};
  shared_ptr<long> type{};

  DescribeUpdatePackageResultResponseBodyAppInfo() {}

  explicit DescribeUpdatePackageResultResponseBodyAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debugPackageInfo) {
      res["DebugPackageInfo"] = debugPackageInfo ? boost::any(debugPackageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageInfo) {
      res["PackageInfo"] = packageInfo ? boost::any(packageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DebugPackageInfo") != m.end() && !m["DebugPackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DebugPackageInfo"].type()) {
        DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DebugPackageInfo"]));
        debugPackageInfo = make_shared<DescribeUpdatePackageResultResponseBodyAppInfoDebugPackageInfo>(model1);
      }
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageInfo") != m.end() && !m["PackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageInfo"].type()) {
        DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageInfo"]));
        packageInfo = make_shared<DescribeUpdatePackageResultResponseBodyAppInfoPackageInfo>(model1);
      }
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DescribeUpdatePackageResultResponseBodyAppInfo() = default;
};
class DescribeUpdatePackageResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeUpdatePackageResultResponseBodyAppInfo> appInfo{};
  shared_ptr<string> requestId{};

  DescribeUpdatePackageResultResponseBody() {}

  explicit DescribeUpdatePackageResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInfo) {
      res["AppInfo"] = appInfo ? boost::any(appInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInfo"].type()) {
        DescribeUpdatePackageResultResponseBodyAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInfo"]));
        appInfo = make_shared<DescribeUpdatePackageResultResponseBodyAppInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUpdatePackageResultResponseBody() = default;
};
class DescribeUpdatePackageResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUpdatePackageResultResponseBody> body{};

  DescribeUpdatePackageResultResponse() {}

  explicit DescribeUpdatePackageResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUpdatePackageResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUpdatePackageResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUpdatePackageResultResponse() = default;
};
class DescribeUploadInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> biz{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

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
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      biz = make_shared<string>(boost::any_cast<string>(m["Biz"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeUploadInfoRequest() = default;
};
class DescribeUploadInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessid{};
  shared_ptr<long> expire{};
  shared_ptr<string> folder{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signature{};

  DescribeUploadInfoResponseBody() {}

  explicit DescribeUploadInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (folder) {
      res["Folder"] = boost::any(*folder);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      folder = make_shared<string>(boost::any_cast<string>(m["Folder"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~DescribeUploadInfoResponseBody() = default;
};
class DescribeUploadInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUploadInfoResponseBody> body{};

  DescribeUploadInfoResponse() {}

  explicit DescribeUploadInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUploadInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUploadInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUploadInfoResponse() = default;
};
class DescribeUsageBillRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> day{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> type{};

  DescribeUsageBillRequest() {}

  explicit DescribeUsageBillRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeUsageBillRequest() = default;
};
class DescribeUsageBillResponseBodyBillList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> confirmCount{};
  shared_ptr<string> day{};
  shared_ptr<long> freeCount{};
  shared_ptr<string> region{};
  shared_ptr<long> reviewCount{};
  shared_ptr<string> scene{};
  shared_ptr<string> subUid{};
  shared_ptr<long> totalCount{};

  DescribeUsageBillResponseBodyBillList() {}

  explicit DescribeUsageBillResponseBodyBillList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (confirmCount) {
      res["ConfirmCount"] = boost::any(*confirmCount);
    }
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (freeCount) {
      res["FreeCount"] = boost::any(*freeCount);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (reviewCount) {
      res["ReviewCount"] = boost::any(*reviewCount);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (subUid) {
      res["SubUid"] = boost::any(*subUid);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("ConfirmCount") != m.end() && !m["ConfirmCount"].empty()) {
      confirmCount = make_shared<long>(boost::any_cast<long>(m["ConfirmCount"]));
    }
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<string>(boost::any_cast<string>(m["Day"]));
    }
    if (m.find("FreeCount") != m.end() && !m["FreeCount"].empty()) {
      freeCount = make_shared<long>(boost::any_cast<long>(m["FreeCount"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("ReviewCount") != m.end() && !m["ReviewCount"].empty()) {
      reviewCount = make_shared<long>(boost::any_cast<long>(m["ReviewCount"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SubUid") != m.end() && !m["SubUid"].empty()) {
      subUid = make_shared<string>(boost::any_cast<string>(m["SubUid"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeUsageBillResponseBodyBillList() = default;
};
class DescribeUsageBillResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUsageBillResponseBodyBillList>> billList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeUsageBillResponseBody() {}

  explicit DescribeUsageBillResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billList) {
      vector<boost::any> temp1;
      for(auto item1:*billList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BillList"] = boost::any(temp1);
    }
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillList") != m.end() && !m["BillList"].empty()) {
      if (typeid(vector<boost::any>) == m["BillList"].type()) {
        vector<DescribeUsageBillResponseBodyBillList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BillList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsageBillResponseBodyBillList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        billList = make_shared<vector<DescribeUsageBillResponseBodyBillList>>(expect1);
      }
    }
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
  }


  virtual ~DescribeUsageBillResponseBody() = default;
};
class DescribeUsageBillResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsageBillResponseBody> body{};

  DescribeUsageBillResponse() {}

  explicit DescribeUsageBillResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsageBillResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsageBillResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsageBillResponse() = default;
};
class DescribeUserBizTypesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> customized{};

  DescribeUserBizTypesRequest() {}

  explicit DescribeUserBizTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customized) {
      res["Customized"] = boost::any(*customized);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Customized") != m.end() && !m["Customized"].empty()) {
      customized = make_shared<bool>(boost::any_cast<bool>(m["Customized"]));
    }
  }


  virtual ~DescribeUserBizTypesRequest() = default;
};
class DescribeUserBizTypesResponseBodyBizTypeList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<bool> citeTemplate{};
  shared_ptr<string> description{};
  shared_ptr<bool> gray{};
  shared_ptr<string> industryInfo{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceBizType{};

  DescribeUserBizTypesResponseBodyBizTypeList() {}

  explicit DescribeUserBizTypesResponseBodyBizTypeList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (citeTemplate) {
      res["CiteTemplate"] = boost::any(*citeTemplate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gray) {
      res["Gray"] = boost::any(*gray);
    }
    if (industryInfo) {
      res["IndustryInfo"] = boost::any(*industryInfo);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceBizType) {
      res["SourceBizType"] = boost::any(*sourceBizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CiteTemplate") != m.end() && !m["CiteTemplate"].empty()) {
      citeTemplate = make_shared<bool>(boost::any_cast<bool>(m["CiteTemplate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Gray") != m.end() && !m["Gray"].empty()) {
      gray = make_shared<bool>(boost::any_cast<bool>(m["Gray"]));
    }
    if (m.find("IndustryInfo") != m.end() && !m["IndustryInfo"].empty()) {
      industryInfo = make_shared<string>(boost::any_cast<string>(m["IndustryInfo"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceBizType") != m.end() && !m["SourceBizType"].empty()) {
      sourceBizType = make_shared<string>(boost::any_cast<string>(m["SourceBizType"]));
    }
  }


  virtual ~DescribeUserBizTypesResponseBodyBizTypeList() = default;
};
class DescribeUserBizTypesResponseBodyBizTypeListImport : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<bool> citeTemplate{};
  shared_ptr<string> description{};
  shared_ptr<bool> gray{};
  shared_ptr<string> industryInfo{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceBizType{};

  DescribeUserBizTypesResponseBodyBizTypeListImport() {}

  explicit DescribeUserBizTypesResponseBodyBizTypeListImport(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (citeTemplate) {
      res["CiteTemplate"] = boost::any(*citeTemplate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gray) {
      res["Gray"] = boost::any(*gray);
    }
    if (industryInfo) {
      res["IndustryInfo"] = boost::any(*industryInfo);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceBizType) {
      res["SourceBizType"] = boost::any(*sourceBizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CiteTemplate") != m.end() && !m["CiteTemplate"].empty()) {
      citeTemplate = make_shared<bool>(boost::any_cast<bool>(m["CiteTemplate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Gray") != m.end() && !m["Gray"].empty()) {
      gray = make_shared<bool>(boost::any_cast<bool>(m["Gray"]));
    }
    if (m.find("IndustryInfo") != m.end() && !m["IndustryInfo"].empty()) {
      industryInfo = make_shared<string>(boost::any_cast<string>(m["IndustryInfo"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceBizType") != m.end() && !m["SourceBizType"].empty()) {
      sourceBizType = make_shared<string>(boost::any_cast<string>(m["SourceBizType"]));
    }
  }


  virtual ~DescribeUserBizTypesResponseBodyBizTypeListImport() = default;
};
class DescribeUserBizTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserBizTypesResponseBodyBizTypeList>> bizTypeList{};
  shared_ptr<vector<DescribeUserBizTypesResponseBodyBizTypeListImport>> bizTypeListImport{};
  shared_ptr<string> requestId{};

  DescribeUserBizTypesResponseBody() {}

  explicit DescribeUserBizTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      vector<boost::any> temp1;
      for(auto item1:*bizTypeList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BizTypeList"] = boost::any(temp1);
    }
    if (bizTypeListImport) {
      vector<boost::any> temp1;
      for(auto item1:*bizTypeListImport){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BizTypeListImport"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<DescribeUserBizTypesResponseBodyBizTypeList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BizTypeList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserBizTypesResponseBodyBizTypeList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bizTypeList = make_shared<vector<DescribeUserBizTypesResponseBodyBizTypeList>>(expect1);
      }
    }
    if (m.find("BizTypeListImport") != m.end() && !m["BizTypeListImport"].empty()) {
      if (typeid(vector<boost::any>) == m["BizTypeListImport"].type()) {
        vector<DescribeUserBizTypesResponseBodyBizTypeListImport> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BizTypeListImport"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserBizTypesResponseBodyBizTypeListImport model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bizTypeListImport = make_shared<vector<DescribeUserBizTypesResponseBodyBizTypeListImport>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeUserBizTypesResponseBody() = default;
};
class DescribeUserBizTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserBizTypesResponseBody> body{};

  DescribeUserBizTypesResponse() {}

  explicit DescribeUserBizTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserBizTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserBizTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserBizTypesResponse() = default;
};
class DescribeUserStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeUserStatusRequest() {}

  explicit DescribeUserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeUserStatusRequest() = default;
};
class DescribeUserStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> agreeChannel{};
  shared_ptr<bool> buyed{};
  shared_ptr<bool> inDept{};
  shared_ptr<string> openApiBeginTime{};
  shared_ptr<bool> openApiUsed{};
  shared_ptr<string> ossCheckStatus{};
  shared_ptr<long> ossVideoSizeLimit{};
  shared_ptr<string> requestId{};
  shared_ptr<string> uid{};

  DescribeUserStatusResponseBody() {}

  explicit DescribeUserStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agreeChannel) {
      res["AgreeChannel"] = boost::any(*agreeChannel);
    }
    if (buyed) {
      res["Buyed"] = boost::any(*buyed);
    }
    if (inDept) {
      res["InDept"] = boost::any(*inDept);
    }
    if (openApiBeginTime) {
      res["OpenApiBeginTime"] = boost::any(*openApiBeginTime);
    }
    if (openApiUsed) {
      res["OpenApiUsed"] = boost::any(*openApiUsed);
    }
    if (ossCheckStatus) {
      res["OssCheckStatus"] = boost::any(*ossCheckStatus);
    }
    if (ossVideoSizeLimit) {
      res["OssVideoSizeLimit"] = boost::any(*ossVideoSizeLimit);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgreeChannel") != m.end() && !m["AgreeChannel"].empty()) {
      agreeChannel = make_shared<long>(boost::any_cast<long>(m["AgreeChannel"]));
    }
    if (m.find("Buyed") != m.end() && !m["Buyed"].empty()) {
      buyed = make_shared<bool>(boost::any_cast<bool>(m["Buyed"]));
    }
    if (m.find("InDept") != m.end() && !m["InDept"].empty()) {
      inDept = make_shared<bool>(boost::any_cast<bool>(m["InDept"]));
    }
    if (m.find("OpenApiBeginTime") != m.end() && !m["OpenApiBeginTime"].empty()) {
      openApiBeginTime = make_shared<string>(boost::any_cast<string>(m["OpenApiBeginTime"]));
    }
    if (m.find("OpenApiUsed") != m.end() && !m["OpenApiUsed"].empty()) {
      openApiUsed = make_shared<bool>(boost::any_cast<bool>(m["OpenApiUsed"]));
    }
    if (m.find("OssCheckStatus") != m.end() && !m["OssCheckStatus"].empty()) {
      ossCheckStatus = make_shared<string>(boost::any_cast<string>(m["OssCheckStatus"]));
    }
    if (m.find("OssVideoSizeLimit") != m.end() && !m["OssVideoSizeLimit"].empty()) {
      ossVideoSizeLimit = make_shared<long>(boost::any_cast<long>(m["OssVideoSizeLimit"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~DescribeUserStatusResponseBody() = default;
};
class DescribeUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserStatusResponseBody> body{};

  DescribeUserStatusResponse() {}

  explicit DescribeUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserStatusResponse() = default;
};
class DescribeViewContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditResult{};
  shared_ptr<string> bizType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> dataId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> imageId{};
  shared_ptr<string> keyword{};
  shared_ptr<string> keywordId{};
  shared_ptr<string> label{};
  shared_ptr<string> libType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> startDate{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};
  shared_ptr<long> totalCount{};

  DescribeViewContentRequest() {}

  explicit DescribeViewContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditResult) {
      res["AuditResult"] = boost::any(*auditResult);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (imageId) {
      res["ImageId"] = boost::any(*imageId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (keywordId) {
      res["KeywordId"] = boost::any(*keywordId);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (libType) {
      res["LibType"] = boost::any(*libType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditResult") != m.end() && !m["AuditResult"].empty()) {
      auditResult = make_shared<string>(boost::any_cast<string>(m["AuditResult"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ImageId") != m.end() && !m["ImageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["ImageId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("KeywordId") != m.end() && !m["KeywordId"].empty()) {
      keywordId = make_shared<string>(boost::any_cast<string>(m["KeywordId"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("LibType") != m.end() && !m["LibType"].empty()) {
      libType = make_shared<string>(boost::any_cast<string>(m["LibType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeViewContentRequest() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsAge : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<long> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsAge() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsAge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsAge() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsBang : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsBang() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsBang(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsBang() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsGender : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsGender() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsGender(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsGender() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsGlasses : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsGlasses() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsGlasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsGlasses() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsHat : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsHat() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsHat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsHat() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsImage : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> width{};

  DescribeViewContentResponseBodyViewContentListFaceResultsImage() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsImage() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsLocation : public Darabonba::Model {
public:
  shared_ptr<long> h{};
  shared_ptr<long> w{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  DescribeViewContentResponseBodyViewContentListFaceResultsLocation() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<long>(boost::any_cast<long>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<long>(boost::any_cast<long>(m["W"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsLocation() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsMustache : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsMustache() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsMustache(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsMustache() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsQuality : public Darabonba::Model {
public:
  shared_ptr<double> blur{};
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  DescribeViewContentResponseBodyViewContentListFaceResultsQuality() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsQuality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blur) {
      res["Blur"] = boost::any(*blur);
    }
    if (pitch) {
      res["Pitch"] = boost::any(*pitch);
    }
    if (roll) {
      res["Roll"] = boost::any(*roll);
    }
    if (yaw) {
      res["Yaw"] = boost::any(*yaw);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Blur") != m.end() && !m["Blur"].empty()) {
      blur = make_shared<double>(boost::any_cast<double>(m["Blur"]));
    }
    if (m.find("Pitch") != m.end() && !m["Pitch"].empty()) {
      pitch = make_shared<double>(boost::any_cast<double>(m["Pitch"]));
    }
    if (m.find("Roll") != m.end() && !m["Roll"].empty()) {
      roll = make_shared<double>(boost::any_cast<double>(m["Roll"]));
    }
    if (m.find("Yaw") != m.end() && !m["Yaw"].empty()) {
      yaw = make_shared<double>(boost::any_cast<double>(m["Yaw"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsQuality() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsRespirator : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<string> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsRespirator() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsRespirator(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsRespirator() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResultsSmile : public Darabonba::Model {
public:
  shared_ptr<double> rate{};
  shared_ptr<double> value{};

  DescribeViewContentResponseBodyViewContentListFaceResultsSmile() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResultsSmile(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResultsSmile() = default;
};
class DescribeViewContentResponseBodyViewContentListFaceResults : public Darabonba::Model {
public:
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsAge> age{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsBang> bang{};
  shared_ptr<bool> bualified{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsGender> gender{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsGlasses> glasses{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle> hairstyle{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsHat> hat{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsImage> image{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsLocation> location{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsMustache> mustache{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsQuality> quality{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsRespirator> respirator{};
  shared_ptr<DescribeViewContentResponseBodyViewContentListFaceResultsSmile> smile{};

  DescribeViewContentResponseBodyViewContentListFaceResults() {}

  explicit DescribeViewContentResponseBodyViewContentListFaceResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = age ? boost::any(age->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bang) {
      res["Bang"] = bang ? boost::any(bang->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bualified) {
      res["Bualified"] = boost::any(*bualified);
    }
    if (gender) {
      res["Gender"] = gender ? boost::any(gender->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = glasses ? boost::any(glasses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hairstyle) {
      res["Hairstyle"] = hairstyle ? boost::any(hairstyle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (hat) {
      res["Hat"] = hat ? boost::any(hat->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mustache) {
      res["Mustache"] = mustache ? boost::any(mustache->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (quality) {
      res["Quality"] = quality ? boost::any(quality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (respirator) {
      res["Respirator"] = respirator ? boost::any(respirator->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (smile) {
      res["Smile"] = smile ? boost::any(smile->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      if (typeid(map<string, boost::any>) == m["Age"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsAge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Age"]));
        age = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsAge>(model1);
      }
    }
    if (m.find("Bang") != m.end() && !m["Bang"].empty()) {
      if (typeid(map<string, boost::any>) == m["Bang"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsBang model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Bang"]));
        bang = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsBang>(model1);
      }
    }
    if (m.find("Bualified") != m.end() && !m["Bualified"].empty()) {
      bualified = make_shared<bool>(boost::any_cast<bool>(m["Bualified"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gender"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsGender model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gender"]));
        gender = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsGender>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      if (typeid(map<string, boost::any>) == m["Glasses"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsGlasses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Glasses"]));
        glasses = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsGlasses>(model1);
      }
    }
    if (m.find("Hairstyle") != m.end() && !m["Hairstyle"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hairstyle"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hairstyle"]));
        hairstyle = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsHairstyle>(model1);
      }
    }
    if (m.find("Hat") != m.end() && !m["Hat"].empty()) {
      if (typeid(map<string, boost::any>) == m["Hat"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsHat model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Hat"]));
        hat = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsHat>(model1);
      }
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsImage>(model1);
      }
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsLocation>(model1);
      }
    }
    if (m.find("Mustache") != m.end() && !m["Mustache"].empty()) {
      if (typeid(map<string, boost::any>) == m["Mustache"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsMustache model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Mustache"]));
        mustache = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsMustache>(model1);
      }
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quality"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsQuality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quality"]));
        quality = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsQuality>(model1);
      }
    }
    if (m.find("Respirator") != m.end() && !m["Respirator"].empty()) {
      if (typeid(map<string, boost::any>) == m["Respirator"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsRespirator model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Respirator"]));
        respirator = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsRespirator>(model1);
      }
    }
    if (m.find("Smile") != m.end() && !m["Smile"].empty()) {
      if (typeid(map<string, boost::any>) == m["Smile"].type()) {
        DescribeViewContentResponseBodyViewContentListFaceResultsSmile model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Smile"]));
        smile = make_shared<DescribeViewContentResponseBodyViewContentListFaceResultsSmile>(model1);
      }
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFaceResults() = default;
};
class DescribeViewContentResponseBodyViewContentListFrameResults : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<long> offset{};
  shared_ptr<string> url{};

  DescribeViewContentResponseBodyViewContentListFrameResults() {}

  explicit DescribeViewContentResponseBodyViewContentListFrameResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (offset) {
      res["Offset"] = boost::any(*offset);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Offset") != m.end() && !m["Offset"].empty()) {
      offset = make_shared<long>(boost::any_cast<long>(m["Offset"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListFrameResults() = default;
};
class DescribeViewContentResponseBodyViewContentListResults : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> scene{};
  shared_ptr<string> suggestion{};

  DescribeViewContentResponseBodyViewContentListResults() {}

  explicit DescribeViewContentResponseBodyViewContentListResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentListResults() = default;
};
class DescribeViewContentResponseBodyViewContentList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> content{};
  shared_ptr<string> dataId{};
  shared_ptr<vector<DescribeViewContentResponseBodyViewContentListFaceResults>> faceResults{};
  shared_ptr<vector<DescribeViewContentResponseBodyViewContentListFrameResults>> frameResults{};
  shared_ptr<long> id{};
  shared_ptr<string> newUrl{};
  shared_ptr<string> requestTime{};
  shared_ptr<vector<DescribeViewContentResponseBodyViewContentListResults>> results{};
  shared_ptr<string> scanFinishedTime{};
  shared_ptr<string> scanResult{};
  shared_ptr<string> suggestion{};
  shared_ptr<string> taskId{};
  shared_ptr<string> thumbnail{};
  shared_ptr<string> url{};

  DescribeViewContentResponseBodyViewContentList() {}

  explicit DescribeViewContentResponseBodyViewContentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (faceResults) {
      vector<boost::any> temp1;
      for(auto item1:*faceResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceResults"] = boost::any(temp1);
    }
    if (frameResults) {
      vector<boost::any> temp1;
      for(auto item1:*frameResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FrameResults"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (newUrl) {
      res["NewUrl"] = boost::any(*newUrl);
    }
    if (requestTime) {
      res["RequestTime"] = boost::any(*requestTime);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (scanFinishedTime) {
      res["ScanFinishedTime"] = boost::any(*scanFinishedTime);
    }
    if (scanResult) {
      res["ScanResult"] = boost::any(*scanResult);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("FaceResults") != m.end() && !m["FaceResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceResults"].type()) {
        vector<DescribeViewContentResponseBodyViewContentListFaceResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeViewContentResponseBodyViewContentListFaceResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceResults = make_shared<vector<DescribeViewContentResponseBodyViewContentListFaceResults>>(expect1);
      }
    }
    if (m.find("FrameResults") != m.end() && !m["FrameResults"].empty()) {
      if (typeid(vector<boost::any>) == m["FrameResults"].type()) {
        vector<DescribeViewContentResponseBodyViewContentListFrameResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FrameResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeViewContentResponseBodyViewContentListFrameResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frameResults = make_shared<vector<DescribeViewContentResponseBodyViewContentListFrameResults>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("NewUrl") != m.end() && !m["NewUrl"].empty()) {
      newUrl = make_shared<string>(boost::any_cast<string>(m["NewUrl"]));
    }
    if (m.find("RequestTime") != m.end() && !m["RequestTime"].empty()) {
      requestTime = make_shared<string>(boost::any_cast<string>(m["RequestTime"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<DescribeViewContentResponseBodyViewContentListResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeViewContentResponseBodyViewContentListResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<DescribeViewContentResponseBodyViewContentListResults>>(expect1);
      }
    }
    if (m.find("ScanFinishedTime") != m.end() && !m["ScanFinishedTime"].empty()) {
      scanFinishedTime = make_shared<string>(boost::any_cast<string>(m["ScanFinishedTime"]));
    }
    if (m.find("ScanResult") != m.end() && !m["ScanResult"].empty()) {
      scanResult = make_shared<string>(boost::any_cast<string>(m["ScanResult"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeViewContentResponseBodyViewContentList() = default;
};
class DescribeViewContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeViewContentResponseBodyViewContentList>> viewContentList{};

  DescribeViewContentResponseBody() {}

  explicit DescribeViewContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (viewContentList) {
      vector<boost::any> temp1;
      for(auto item1:*viewContentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ViewContentList"] = boost::any(temp1);
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
    if (m.find("ViewContentList") != m.end() && !m["ViewContentList"].empty()) {
      if (typeid(vector<boost::any>) == m["ViewContentList"].type()) {
        vector<DescribeViewContentResponseBodyViewContentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ViewContentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeViewContentResponseBodyViewContentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        viewContentList = make_shared<vector<DescribeViewContentResponseBodyViewContentList>>(expect1);
      }
    }
  }


  virtual ~DescribeViewContentResponseBody() = default;
};
class DescribeViewContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeViewContentResponseBody> body{};

  DescribeViewContentResponse() {}

  explicit DescribeViewContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeViewContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeViewContentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeViewContentResponse() = default;
};
class DescribeWebsiteIndexPageBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeWebsiteIndexPageBaselineRequest() {}

  explicit DescribeWebsiteIndexPageBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeWebsiteIndexPageBaselineRequest() = default;
};
class DescribeWebsiteIndexPageBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> baseLineStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> snapshot{};

  DescribeWebsiteIndexPageBaselineResponseBody() {}

  explicit DescribeWebsiteIndexPageBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseLineStatus) {
      res["BaseLineStatus"] = boost::any(*baseLineStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshot) {
      res["Snapshot"] = boost::any(*snapshot);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseLineStatus") != m.end() && !m["BaseLineStatus"].empty()) {
      baseLineStatus = make_shared<string>(boost::any_cast<string>(m["BaseLineStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Snapshot") != m.end() && !m["Snapshot"].empty()) {
      snapshot = make_shared<string>(boost::any_cast<string>(m["Snapshot"]));
    }
  }


  virtual ~DescribeWebsiteIndexPageBaselineResponseBody() = default;
};
class DescribeWebsiteIndexPageBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteIndexPageBaselineResponseBody> body{};

  DescribeWebsiteIndexPageBaselineResponse() {}

  explicit DescribeWebsiteIndexPageBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteIndexPageBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteIndexPageBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteIndexPageBaselineResponse() = default;
};
class DescribeWebsiteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> totalCount{};

  DescribeWebsiteInstanceRequest() {}

  explicit DescribeWebsiteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeWebsiteInstanceRequest() = default;
};
class DescribeWebsiteInstanceResponseBodyWebsiteInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> buyTime{};
  shared_ptr<string> domain{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> indexPage{};
  shared_ptr<long> indexPageScanInterval{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> protocol{};
  shared_ptr<string> status{};
  shared_ptr<long> websiteScanInterval{};

  DescribeWebsiteInstanceResponseBodyWebsiteInstanceList() {}

  explicit DescribeWebsiteInstanceResponseBodyWebsiteInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyTime) {
      res["BuyTime"] = boost::any(*buyTime);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (indexPage) {
      res["IndexPage"] = boost::any(*indexPage);
    }
    if (indexPageScanInterval) {
      res["IndexPageScanInterval"] = boost::any(*indexPageScanInterval);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (websiteScanInterval) {
      res["WebsiteScanInterval"] = boost::any(*websiteScanInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyTime") != m.end() && !m["BuyTime"].empty()) {
      buyTime = make_shared<string>(boost::any_cast<string>(m["BuyTime"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("IndexPage") != m.end() && !m["IndexPage"].empty()) {
      indexPage = make_shared<string>(boost::any_cast<string>(m["IndexPage"]));
    }
    if (m.find("IndexPageScanInterval") != m.end() && !m["IndexPageScanInterval"].empty()) {
      indexPageScanInterval = make_shared<long>(boost::any_cast<long>(m["IndexPageScanInterval"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("WebsiteScanInterval") != m.end() && !m["WebsiteScanInterval"].empty()) {
      websiteScanInterval = make_shared<long>(boost::any_cast<long>(m["WebsiteScanInterval"]));
    }
  }


  virtual ~DescribeWebsiteInstanceResponseBodyWebsiteInstanceList() = default;
};
class DescribeWebsiteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeWebsiteInstanceResponseBodyWebsiteInstanceList>> websiteInstanceList{};

  DescribeWebsiteInstanceResponseBody() {}

  explicit DescribeWebsiteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (websiteInstanceList) {
      vector<boost::any> temp1;
      for(auto item1:*websiteInstanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WebsiteInstanceList"] = boost::any(temp1);
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
    if (m.find("WebsiteInstanceList") != m.end() && !m["WebsiteInstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["WebsiteInstanceList"].type()) {
        vector<DescribeWebsiteInstanceResponseBodyWebsiteInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WebsiteInstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWebsiteInstanceResponseBodyWebsiteInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        websiteInstanceList = make_shared<vector<DescribeWebsiteInstanceResponseBodyWebsiteInstanceList>>(expect1);
      }
    }
  }


  virtual ~DescribeWebsiteInstanceResponseBody() = default;
};
class DescribeWebsiteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteInstanceResponseBody> body{};

  DescribeWebsiteInstanceResponse() {}

  explicit DescribeWebsiteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteInstanceResponse() = default;
};
class DescribeWebsiteInstanceIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeWebsiteInstanceIdRequest() {}

  explicit DescribeWebsiteInstanceIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeWebsiteInstanceIdRequest() = default;
};
class DescribeWebsiteInstanceIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> websiteInstanceIdList{};

  DescribeWebsiteInstanceIdResponseBody() {}

  explicit DescribeWebsiteInstanceIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (websiteInstanceIdList) {
      res["WebsiteInstanceIdList"] = boost::any(*websiteInstanceIdList);
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
    if (m.find("WebsiteInstanceIdList") != m.end() && !m["WebsiteInstanceIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WebsiteInstanceIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WebsiteInstanceIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      websiteInstanceIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeWebsiteInstanceIdResponseBody() = default;
};
class DescribeWebsiteInstanceIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteInstanceIdResponseBody> body{};

  DescribeWebsiteInstanceIdResponse() {}

  explicit DescribeWebsiteInstanceIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteInstanceIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteInstanceIdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteInstanceIdResponse() = default;
};
class DescribeWebsiteInstanceKeyUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeWebsiteInstanceKeyUrlRequest() {}

  explicit DescribeWebsiteInstanceKeyUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeWebsiteInstanceKeyUrlRequest() = default;
};
class DescribeWebsiteInstanceKeyUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<string>> websiteInstanceKeyUrlList{};

  DescribeWebsiteInstanceKeyUrlResponseBody() {}

  explicit DescribeWebsiteInstanceKeyUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (websiteInstanceKeyUrlList) {
      res["WebsiteInstanceKeyUrlList"] = boost::any(*websiteInstanceKeyUrlList);
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
    if (m.find("WebsiteInstanceKeyUrlList") != m.end() && !m["WebsiteInstanceKeyUrlList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WebsiteInstanceKeyUrlList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WebsiteInstanceKeyUrlList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      websiteInstanceKeyUrlList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeWebsiteInstanceKeyUrlResponseBody() = default;
};
class DescribeWebsiteInstanceKeyUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteInstanceKeyUrlResponseBody> body{};

  DescribeWebsiteInstanceKeyUrlResponse() {}

  explicit DescribeWebsiteInstanceKeyUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteInstanceKeyUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteInstanceKeyUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteInstanceKeyUrlResponse() = default;
};
class DescribeWebsiteScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> domain{};
  shared_ptr<string> handleStatus{};
  shared_ptr<string> label{};
  shared_ptr<string> lang{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> siteUrl{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> subServiceModule{};
  shared_ptr<long> totalCount{};

  DescribeWebsiteScanResultRequest() {}

  explicit DescribeWebsiteScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (handleStatus) {
      res["HandleStatus"] = boost::any(*handleStatus);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (siteUrl) {
      res["SiteUrl"] = boost::any(*siteUrl);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (subServiceModule) {
      res["SubServiceModule"] = boost::any(*subServiceModule);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("HandleStatus") != m.end() && !m["HandleStatus"].empty()) {
      handleStatus = make_shared<string>(boost::any_cast<string>(m["HandleStatus"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SiteUrl") != m.end() && !m["SiteUrl"].empty()) {
      siteUrl = make_shared<string>(boost::any_cast<string>(m["SiteUrl"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("SubServiceModule") != m.end() && !m["SubServiceModule"].empty()) {
      subServiceModule = make_shared<string>(boost::any_cast<string>(m["SubServiceModule"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeWebsiteScanResultRequest() = default;
};
class DescribeWebsiteScanResultResponseBodyWebsiteScanResultList : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<long> handleStatus{};
  shared_ptr<long> id{};
  shared_ptr<long> imageRiskCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> scanTime{};
  shared_ptr<long> sourceRiskCount{};
  shared_ptr<string> taskId{};
  shared_ptr<long> textRiskCount{};
  shared_ptr<string> url{};

  DescribeWebsiteScanResultResponseBodyWebsiteScanResultList() {}

  explicit DescribeWebsiteScanResultResponseBodyWebsiteScanResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (handleStatus) {
      res["HandleStatus"] = boost::any(*handleStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (imageRiskCount) {
      res["ImageRiskCount"] = boost::any(*imageRiskCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (scanTime) {
      res["ScanTime"] = boost::any(*scanTime);
    }
    if (sourceRiskCount) {
      res["SourceRiskCount"] = boost::any(*sourceRiskCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (textRiskCount) {
      res["TextRiskCount"] = boost::any(*textRiskCount);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("HandleStatus") != m.end() && !m["HandleStatus"].empty()) {
      handleStatus = make_shared<long>(boost::any_cast<long>(m["HandleStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ImageRiskCount") != m.end() && !m["ImageRiskCount"].empty()) {
      imageRiskCount = make_shared<long>(boost::any_cast<long>(m["ImageRiskCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ScanTime") != m.end() && !m["ScanTime"].empty()) {
      scanTime = make_shared<string>(boost::any_cast<string>(m["ScanTime"]));
    }
    if (m.find("SourceRiskCount") != m.end() && !m["SourceRiskCount"].empty()) {
      sourceRiskCount = make_shared<long>(boost::any_cast<long>(m["SourceRiskCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TextRiskCount") != m.end() && !m["TextRiskCount"].empty()) {
      textRiskCount = make_shared<long>(boost::any_cast<long>(m["TextRiskCount"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeWebsiteScanResultResponseBodyWebsiteScanResultList() = default;
};
class DescribeWebsiteScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeWebsiteScanResultResponseBodyWebsiteScanResultList>> websiteScanResultList{};

  DescribeWebsiteScanResultResponseBody() {}

  explicit DescribeWebsiteScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (websiteScanResultList) {
      vector<boost::any> temp1;
      for(auto item1:*websiteScanResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WebsiteScanResultList"] = boost::any(temp1);
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
    if (m.find("WebsiteScanResultList") != m.end() && !m["WebsiteScanResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["WebsiteScanResultList"].type()) {
        vector<DescribeWebsiteScanResultResponseBodyWebsiteScanResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WebsiteScanResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWebsiteScanResultResponseBodyWebsiteScanResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        websiteScanResultList = make_shared<vector<DescribeWebsiteScanResultResponseBodyWebsiteScanResultList>>(expect1);
      }
    }
  }


  virtual ~DescribeWebsiteScanResultResponseBody() = default;
};
class DescribeWebsiteScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteScanResultResponseBody> body{};

  DescribeWebsiteScanResultResponse() {}

  explicit DescribeWebsiteScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteScanResultResponse() = default;
};
class DescribeWebsiteScanResultDetailRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> sourceIp{};

  DescribeWebsiteScanResultDetailRequest() {}

  explicit DescribeWebsiteScanResultDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeWebsiteScanResultDetailRequest() = default;
};
class DescribeWebsiteScanResultDetailResponseBodyImageScanResults : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labels{};
  shared_ptr<string> url{};

  DescribeWebsiteScanResultDetailResponseBodyImageScanResults() {}

  explicit DescribeWebsiteScanResultDetailResponseBodyImageScanResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      res["Labels"] = boost::any(*labels);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Labels"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labels = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeWebsiteScanResultDetailResponseBodyImageScanResults() = default;
};
class DescribeWebsiteScanResultDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> baseline{};
  shared_ptr<string> content{};
  shared_ptr<vector<string>> hitKeywords{};
  shared_ptr<vector<DescribeWebsiteScanResultDetailResponseBodyImageScanResults>> imageScanResults{};
  shared_ptr<string> requestId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tamperedSource{};

  DescribeWebsiteScanResultDetailResponseBody() {}

  explicit DescribeWebsiteScanResultDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseline) {
      res["Baseline"] = boost::any(*baseline);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (hitKeywords) {
      res["HitKeywords"] = boost::any(*hitKeywords);
    }
    if (imageScanResults) {
      vector<boost::any> temp1;
      for(auto item1:*imageScanResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ImageScanResults"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tamperedSource) {
      res["TamperedSource"] = boost::any(*tamperedSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Baseline") != m.end() && !m["Baseline"].empty()) {
      baseline = make_shared<string>(boost::any_cast<string>(m["Baseline"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("HitKeywords") != m.end() && !m["HitKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HitKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HitKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hitKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ImageScanResults") != m.end() && !m["ImageScanResults"].empty()) {
      if (typeid(vector<boost::any>) == m["ImageScanResults"].type()) {
        vector<DescribeWebsiteScanResultDetailResponseBodyImageScanResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ImageScanResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWebsiteScanResultDetailResponseBodyImageScanResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        imageScanResults = make_shared<vector<DescribeWebsiteScanResultDetailResponseBodyImageScanResults>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TamperedSource") != m.end() && !m["TamperedSource"].empty()) {
      tamperedSource = make_shared<string>(boost::any_cast<string>(m["TamperedSource"]));
    }
  }


  virtual ~DescribeWebsiteScanResultDetailResponseBody() = default;
};
class DescribeWebsiteScanResultDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteScanResultDetailResponseBody> body{};

  DescribeWebsiteScanResultDetailResponse() {}

  explicit DescribeWebsiteScanResultDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteScanResultDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteScanResultDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteScanResultDetailResponse() = default;
};
class DescribeWebsiteStatRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeWebsiteStatRequest() {}

  explicit DescribeWebsiteStatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeWebsiteStatRequest() = default;
};
class DescribeWebsiteStatResponseBodyWebsiteStatList : public Darabonba::Model {
public:
  shared_ptr<long> instanceCount{};
  shared_ptr<long> riskCount{};
  shared_ptr<long> scanCount{};
  shared_ptr<string> subServiceModule{};

  DescribeWebsiteStatResponseBodyWebsiteStatList() {}

  explicit DescribeWebsiteStatResponseBodyWebsiteStatList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceCount) {
      res["InstanceCount"] = boost::any(*instanceCount);
    }
    if (riskCount) {
      res["RiskCount"] = boost::any(*riskCount);
    }
    if (scanCount) {
      res["ScanCount"] = boost::any(*scanCount);
    }
    if (subServiceModule) {
      res["SubServiceModule"] = boost::any(*subServiceModule);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceCount") != m.end() && !m["InstanceCount"].empty()) {
      instanceCount = make_shared<long>(boost::any_cast<long>(m["InstanceCount"]));
    }
    if (m.find("RiskCount") != m.end() && !m["RiskCount"].empty()) {
      riskCount = make_shared<long>(boost::any_cast<long>(m["RiskCount"]));
    }
    if (m.find("ScanCount") != m.end() && !m["ScanCount"].empty()) {
      scanCount = make_shared<long>(boost::any_cast<long>(m["ScanCount"]));
    }
    if (m.find("SubServiceModule") != m.end() && !m["SubServiceModule"].empty()) {
      subServiceModule = make_shared<string>(boost::any_cast<string>(m["SubServiceModule"]));
    }
  }


  virtual ~DescribeWebsiteStatResponseBodyWebsiteStatList() = default;
};
class DescribeWebsiteStatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<DescribeWebsiteStatResponseBodyWebsiteStatList>> websiteStatList{};

  DescribeWebsiteStatResponseBody() {}

  explicit DescribeWebsiteStatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (websiteStatList) {
      vector<boost::any> temp1;
      for(auto item1:*websiteStatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WebsiteStatList"] = boost::any(temp1);
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
    if (m.find("WebsiteStatList") != m.end() && !m["WebsiteStatList"].empty()) {
      if (typeid(vector<boost::any>) == m["WebsiteStatList"].type()) {
        vector<DescribeWebsiteStatResponseBodyWebsiteStatList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WebsiteStatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWebsiteStatResponseBodyWebsiteStatList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        websiteStatList = make_shared<vector<DescribeWebsiteStatResponseBodyWebsiteStatList>>(expect1);
      }
    }
  }


  virtual ~DescribeWebsiteStatResponseBody() = default;
};
class DescribeWebsiteStatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteStatResponseBody> body{};

  DescribeWebsiteStatResponse() {}

  explicit DescribeWebsiteStatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteStatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteStatResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteStatResponse() = default;
};
class DescribeWebsiteVerifyInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  DescribeWebsiteVerifyInfoRequest() {}

  explicit DescribeWebsiteVerifyInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~DescribeWebsiteVerifyInfoRequest() = default;
};
class DescribeWebsiteVerifyInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cname{};
  shared_ptr<string> domain{};
  shared_ptr<string> hostFile{};
  shared_ptr<string> indexPage{};
  shared_ptr<string> protocol{};
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyMethod{};

  DescribeWebsiteVerifyInfoResponseBody() {}

  explicit DescribeWebsiteVerifyInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (hostFile) {
      res["HostFile"] = boost::any(*hostFile);
    }
    if (indexPage) {
      res["IndexPage"] = boost::any(*indexPage);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyMethod) {
      res["VerifyMethod"] = boost::any(*verifyMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("HostFile") != m.end() && !m["HostFile"].empty()) {
      hostFile = make_shared<string>(boost::any_cast<string>(m["HostFile"]));
    }
    if (m.find("IndexPage") != m.end() && !m["IndexPage"].empty()) {
      indexPage = make_shared<string>(boost::any_cast<string>(m["IndexPage"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyMethod") != m.end() && !m["VerifyMethod"].empty()) {
      verifyMethod = make_shared<string>(boost::any_cast<string>(m["VerifyMethod"]));
    }
  }


  virtual ~DescribeWebsiteVerifyInfoResponseBody() = default;
};
class DescribeWebsiteVerifyInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeWebsiteVerifyInfoResponseBody> body{};

  DescribeWebsiteVerifyInfoResponse() {}

  explicit DescribeWebsiteVerifyInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeWebsiteVerifyInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeWebsiteVerifyInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeWebsiteVerifyInfoResponse() = default;
};
class ExportKeywordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> keywordLibId{};

  ExportKeywordsRequest() {}

  explicit ExportKeywordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordLibId) {
      res["KeywordLibId"] = boost::any(*keywordLibId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordLibId") != m.end() && !m["KeywordLibId"].empty()) {
      keywordLibId = make_shared<long>(boost::any_cast<long>(m["KeywordLibId"]));
    }
  }


  virtual ~ExportKeywordsRequest() = default;
};
class ExportKeywordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> requestId{};

  ExportKeywordsResponseBody() {}

  explicit ExportKeywordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportKeywordsResponseBody() = default;
};
class ExportKeywordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportKeywordsResponseBody> body{};

  ExportKeywordsResponse() {}

  explicit ExportKeywordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportKeywordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportKeywordsResponseBody>(model1);
      }
    }
  }


  virtual ~ExportKeywordsResponse() = default;
};
class ExportOpenApiRcpStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> endDate{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> startDate{};

  ExportOpenApiRcpStatsRequest() {}

  explicit ExportOpenApiRcpStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~ExportOpenApiRcpStatsRequest() = default;
};
class ExportOpenApiRcpStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> downloadUrl{};
  shared_ptr<string> requestId{};

  ExportOpenApiRcpStatsResponseBody() {}

  explicit ExportOpenApiRcpStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadUrl) {
      res["DownloadUrl"] = boost::any(*downloadUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadUrl") != m.end() && !m["DownloadUrl"].empty()) {
      downloadUrl = make_shared<string>(boost::any_cast<string>(m["DownloadUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportOpenApiRcpStatsResponseBody() = default;
};
class ExportOpenApiRcpStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportOpenApiRcpStatsResponseBody> body{};

  ExportOpenApiRcpStatsResponse() {}

  explicit ExportOpenApiRcpStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportOpenApiRcpStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportOpenApiRcpStatsResponseBody>(model1);
      }
    }
  }


  virtual ~ExportOpenApiRcpStatsResponse() = default;
};
class ExportOssResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> endDate{};
  shared_ptr<string> lang{};
  shared_ptr<double> maxScore{};
  shared_ptr<double> minScore{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};
  shared_ptr<bool> stock{};
  shared_ptr<long> stockTaskId{};
  shared_ptr<string> suggestion{};
  shared_ptr<long> totalCount{};

  ExportOssResultRequest() {}

  explicit ExportOssResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (maxScore) {
      res["MaxScore"] = boost::any(*maxScore);
    }
    if (minScore) {
      res["MinScore"] = boost::any(*minScore);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (stock) {
      res["Stock"] = boost::any(*stock);
    }
    if (stockTaskId) {
      res["StockTaskId"] = boost::any(*stockTaskId);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MaxScore") != m.end() && !m["MaxScore"].empty()) {
      maxScore = make_shared<double>(boost::any_cast<double>(m["MaxScore"]));
    }
    if (m.find("MinScore") != m.end() && !m["MinScore"].empty()) {
      minScore = make_shared<double>(boost::any_cast<double>(m["MinScore"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Stock") != m.end() && !m["Stock"].empty()) {
      stock = make_shared<bool>(boost::any_cast<bool>(m["Stock"]));
    }
    if (m.find("StockTaskId") != m.end() && !m["StockTaskId"].empty()) {
      stockTaskId = make_shared<long>(boost::any_cast<long>(m["StockTaskId"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ExportOssResultRequest() = default;
};
class ExportOssResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};
  shared_ptr<string> requestId{};

  ExportOssResultResponseBody() {}

  explicit ExportOssResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportOssResultResponseBody() = default;
};
class ExportOssResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportOssResultResponseBody> body{};

  ExportOssResultResponse() {}

  explicit ExportOssResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportOssResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportOssResultResponseBody>(model1);
      }
    }
  }


  virtual ~ExportOssResultResponse() = default;
};
class GetAuditItemDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> type{};

  GetAuditItemDetailRequest() {}

  explicit GetAuditItemDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAuditItemDetailRequest() = default;
};
class GetAuditItemDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiResult{};
  shared_ptr<string> apiRiskType{};
  shared_ptr<string> apiTs{};
  shared_ptr<string> newUrl{};
  shared_ptr<string> requestId{};

  GetAuditItemDetailResponseBody() {}

  explicit GetAuditItemDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiResult) {
      res["ApiResult"] = boost::any(*apiResult);
    }
    if (apiRiskType) {
      res["ApiRiskType"] = boost::any(*apiRiskType);
    }
    if (apiTs) {
      res["ApiTs"] = boost::any(*apiTs);
    }
    if (newUrl) {
      res["NewUrl"] = boost::any(*newUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiResult") != m.end() && !m["ApiResult"].empty()) {
      apiResult = make_shared<string>(boost::any_cast<string>(m["ApiResult"]));
    }
    if (m.find("ApiRiskType") != m.end() && !m["ApiRiskType"].empty()) {
      apiRiskType = make_shared<string>(boost::any_cast<string>(m["ApiRiskType"]));
    }
    if (m.find("ApiTs") != m.end() && !m["ApiTs"].empty()) {
      apiTs = make_shared<string>(boost::any_cast<string>(m["ApiTs"]));
    }
    if (m.find("NewUrl") != m.end() && !m["NewUrl"].empty()) {
      newUrl = make_shared<string>(boost::any_cast<string>(m["NewUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAuditItemDetailResponseBody() = default;
};
class GetAuditItemDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuditItemDetailResponseBody> body{};

  GetAuditItemDetailResponse() {}

  explicit GetAuditItemDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuditItemDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuditItemDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuditItemDetailResponse() = default;
};
class GetAuditItemListRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> customResult{};
  shared_ptr<string> customRiskType{};
  shared_ptr<string> dataId{};
  shared_ptr<string> endDate{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> rcpResult{};
  shared_ptr<string> rcpRiskType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> taskId{};
  shared_ptr<string> type{};

  GetAuditItemListRequest() {}

  explicit GetAuditItemListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (customResult) {
      res["CustomResult"] = boost::any(*customResult);
    }
    if (customRiskType) {
      res["CustomRiskType"] = boost::any(*customRiskType);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (rcpResult) {
      res["RcpResult"] = boost::any(*rcpResult);
    }
    if (rcpRiskType) {
      res["RcpRiskType"] = boost::any(*rcpRiskType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("CustomResult") != m.end() && !m["CustomResult"].empty()) {
      customResult = make_shared<string>(boost::any_cast<string>(m["CustomResult"]));
    }
    if (m.find("CustomRiskType") != m.end() && !m["CustomRiskType"].empty()) {
      customRiskType = make_shared<string>(boost::any_cast<string>(m["CustomRiskType"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RcpResult") != m.end() && !m["RcpResult"].empty()) {
      rcpResult = make_shared<string>(boost::any_cast<string>(m["RcpResult"]));
    }
    if (m.find("RcpRiskType") != m.end() && !m["RcpRiskType"].empty()) {
      rcpRiskType = make_shared<string>(boost::any_cast<string>(m["RcpRiskType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetAuditItemListRequest() = default;
};
class GetAuditItemListResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> content{};
  shared_ptr<string> create{};
  shared_ptr<string> customResult{};
  shared_ptr<string> customRiskType{};
  shared_ptr<string> customTs{};
  shared_ptr<string> dataId{};
  shared_ptr<long> id{};
  shared_ptr<string> operator_{};
  shared_ptr<string> rcpResult{};
  shared_ptr<string> rcpRiskType{};
  shared_ptr<string> rcpTs{};
  shared_ptr<string> subUid{};
  shared_ptr<string> taskId{};
  shared_ptr<string> thumbnail{};
  shared_ptr<string> type{};
  shared_ptr<string> uid{};
  shared_ptr<string> url{};

  GetAuditItemListResponseBodyItems() {}

  explicit GetAuditItemListResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (create) {
      res["Create"] = boost::any(*create);
    }
    if (customResult) {
      res["CustomResult"] = boost::any(*customResult);
    }
    if (customRiskType) {
      res["CustomRiskType"] = boost::any(*customRiskType);
    }
    if (customTs) {
      res["CustomTs"] = boost::any(*customTs);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (rcpResult) {
      res["RcpResult"] = boost::any(*rcpResult);
    }
    if (rcpRiskType) {
      res["RcpRiskType"] = boost::any(*rcpRiskType);
    }
    if (rcpTs) {
      res["RcpTs"] = boost::any(*rcpTs);
    }
    if (subUid) {
      res["SubUid"] = boost::any(*subUid);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (thumbnail) {
      res["Thumbnail"] = boost::any(*thumbnail);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Create") != m.end() && !m["Create"].empty()) {
      create = make_shared<string>(boost::any_cast<string>(m["Create"]));
    }
    if (m.find("CustomResult") != m.end() && !m["CustomResult"].empty()) {
      customResult = make_shared<string>(boost::any_cast<string>(m["CustomResult"]));
    }
    if (m.find("CustomRiskType") != m.end() && !m["CustomRiskType"].empty()) {
      customRiskType = make_shared<string>(boost::any_cast<string>(m["CustomRiskType"]));
    }
    if (m.find("CustomTs") != m.end() && !m["CustomTs"].empty()) {
      customTs = make_shared<string>(boost::any_cast<string>(m["CustomTs"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("RcpResult") != m.end() && !m["RcpResult"].empty()) {
      rcpResult = make_shared<string>(boost::any_cast<string>(m["RcpResult"]));
    }
    if (m.find("RcpRiskType") != m.end() && !m["RcpRiskType"].empty()) {
      rcpRiskType = make_shared<string>(boost::any_cast<string>(m["RcpRiskType"]));
    }
    if (m.find("RcpTs") != m.end() && !m["RcpTs"].empty()) {
      rcpTs = make_shared<string>(boost::any_cast<string>(m["RcpTs"]));
    }
    if (m.find("SubUid") != m.end() && !m["SubUid"].empty()) {
      subUid = make_shared<string>(boost::any_cast<string>(m["SubUid"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Thumbnail") != m.end() && !m["Thumbnail"].empty()) {
      thumbnail = make_shared<string>(boost::any_cast<string>(m["Thumbnail"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetAuditItemListResponseBodyItems() = default;
};
class GetAuditItemListResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<GetAuditItemListResponseBodyItems>> items{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  GetAuditItemListResponseBody() {}

  explicit GetAuditItemListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<GetAuditItemListResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAuditItemListResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetAuditItemListResponseBodyItems>>(expect1);
      }
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
  }


  virtual ~GetAuditItemListResponseBody() = default;
};
class GetAuditItemListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuditItemListResponseBody> body{};

  GetAuditItemListResponse() {}

  explicit GetAuditItemListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuditItemListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuditItemListResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuditItemListResponse() = default;
};
class GetAuditUserConfResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> customAudit{};
  shared_ptr<map<string, vector<string>>> rcpLabels{};
  shared_ptr<string> requestId{};
  shared_ptr<map<string, vector<string>>> userLabels{};

  GetAuditUserConfResponseBody() {}

  explicit GetAuditUserConfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customAudit) {
      res["CustomAudit"] = boost::any(*customAudit);
    }
    if (rcpLabels) {
      res["RcpLabels"] = boost::any(*rcpLabels);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userLabels) {
      res["UserLabels"] = boost::any(*userLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomAudit") != m.end() && !m["CustomAudit"].empty()) {
      customAudit = make_shared<bool>(boost::any_cast<bool>(m["CustomAudit"]));
    }
    if (m.find("RcpLabels") != m.end() && !m["RcpLabels"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["RcpLabels"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      rcpLabels = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserLabels") != m.end() && !m["UserLabels"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["UserLabels"]);
      map<string, vector<string>> toMap1;
      for (auto item:map1) {
        vector<string> toVec2;
        if (typeid(vector<boost::any>) == item.second.type()) {
          vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item.second);
          for (auto item:vec2) {
             toVec2.push_back(boost::any_cast<string>(item));
          }
        }
         toMap1[item.first] = toVec2;
      }
      userLabels = make_shared<map<string, vector<string>>>(toMap1);
    }
  }


  virtual ~GetAuditUserConfResponseBody() = default;
};
class GetAuditUserConfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAuditUserConfResponseBody> body{};

  GetAuditUserConfResponse() {}

  explicit GetAuditUserConfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAuditUserConfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAuditUserConfResponseBody>(model1);
      }
    }
  }


  virtual ~GetAuditUserConfResponse() = default;
};
class ImportKeywordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> keywordLibId{};
  shared_ptr<string> keywordsObject{};

  ImportKeywordsRequest() {}

  explicit ImportKeywordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keywordLibId) {
      res["KeywordLibId"] = boost::any(*keywordLibId);
    }
    if (keywordsObject) {
      res["KeywordsObject"] = boost::any(*keywordsObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeywordLibId") != m.end() && !m["KeywordLibId"].empty()) {
      keywordLibId = make_shared<long>(boost::any_cast<long>(m["KeywordLibId"]));
    }
    if (m.find("KeywordsObject") != m.end() && !m["KeywordsObject"].empty()) {
      keywordsObject = make_shared<string>(boost::any_cast<string>(m["KeywordsObject"]));
    }
  }


  virtual ~ImportKeywordsRequest() = default;
};
class ImportKeywordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> invalidKeywordList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> successCount{};
  shared_ptr<vector<string>> validKeywordList{};

  ImportKeywordsResponseBody() {}

  explicit ImportKeywordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invalidKeywordList) {
      res["InvalidKeywordList"] = boost::any(*invalidKeywordList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (validKeywordList) {
      res["validKeywordList"] = boost::any(*validKeywordList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvalidKeywordList") != m.end() && !m["InvalidKeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InvalidKeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvalidKeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      invalidKeywordList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("validKeywordList") != m.end() && !m["validKeywordList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["validKeywordList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["validKeywordList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      validKeywordList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ImportKeywordsResponseBody() = default;
};
class ImportKeywordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportKeywordsResponseBody> body{};

  ImportKeywordsResponse() {}

  explicit ImportKeywordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportKeywordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportKeywordsResponseBody>(model1);
      }
    }
  }


  virtual ~ImportKeywordsResponse() = default;
};
class MarkAuditContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditIllegalReasons{};
  shared_ptr<string> auditResult{};
  shared_ptr<string> bizTypes{};
  shared_ptr<string> ids{};
  shared_ptr<string> sourceIp{};

  MarkAuditContentRequest() {}

  explicit MarkAuditContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditIllegalReasons) {
      res["AuditIllegalReasons"] = boost::any(*auditIllegalReasons);
    }
    if (auditResult) {
      res["AuditResult"] = boost::any(*auditResult);
    }
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditIllegalReasons") != m.end() && !m["AuditIllegalReasons"].empty()) {
      auditIllegalReasons = make_shared<string>(boost::any_cast<string>(m["AuditIllegalReasons"]));
    }
    if (m.find("AuditResult") != m.end() && !m["AuditResult"].empty()) {
      auditResult = make_shared<string>(boost::any_cast<string>(m["AuditResult"]));
    }
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      bizTypes = make_shared<string>(boost::any_cast<string>(m["BizTypes"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~MarkAuditContentRequest() = default;
};
class MarkAuditContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MarkAuditContentResponseBody() {}

  explicit MarkAuditContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MarkAuditContentResponseBody() = default;
};
class MarkAuditContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MarkAuditContentResponseBody> body{};

  MarkAuditContentResponse() {}

  explicit MarkAuditContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MarkAuditContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MarkAuditContentResponseBody>(model1);
      }
    }
  }


  virtual ~MarkAuditContentResponse() = default;
};
class MarkAuditContentItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditIllegalReasons{};
  shared_ptr<string> auditResult{};
  shared_ptr<string> bizTypes{};
  shared_ptr<string> ids{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  MarkAuditContentItemRequest() {}

  explicit MarkAuditContentItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditIllegalReasons) {
      res["AuditIllegalReasons"] = boost::any(*auditIllegalReasons);
    }
    if (auditResult) {
      res["AuditResult"] = boost::any(*auditResult);
    }
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditIllegalReasons") != m.end() && !m["AuditIllegalReasons"].empty()) {
      auditIllegalReasons = make_shared<string>(boost::any_cast<string>(m["AuditIllegalReasons"]));
    }
    if (m.find("AuditResult") != m.end() && !m["AuditResult"].empty()) {
      auditResult = make_shared<string>(boost::any_cast<string>(m["AuditResult"]));
    }
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      bizTypes = make_shared<string>(boost::any_cast<string>(m["BizTypes"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~MarkAuditContentItemRequest() = default;
};
class MarkAuditContentItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MarkAuditContentItemResponseBody() {}

  explicit MarkAuditContentItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MarkAuditContentItemResponseBody() = default;
};
class MarkAuditContentItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MarkAuditContentItemResponseBody> body{};

  MarkAuditContentItemResponse() {}

  explicit MarkAuditContentItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MarkAuditContentItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MarkAuditContentItemResponseBody>(model1);
      }
    }
  }


  virtual ~MarkAuditContentItemResponse() = default;
};
class MarkOssResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> lang{};
  shared_ptr<string> operation{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scene{};
  shared_ptr<string> sourceIp{};
  shared_ptr<bool> stock{};

  MarkOssResultRequest() {}

  explicit MarkOssResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (stock) {
      res["Stock"] = boost::any(*stock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Stock") != m.end() && !m["Stock"].empty()) {
      stock = make_shared<bool>(boost::any_cast<bool>(m["Stock"]));
    }
  }


  virtual ~MarkOssResultRequest() = default;
};
class MarkOssResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MarkOssResultResponseBody() {}

  explicit MarkOssResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MarkOssResultResponseBody() = default;
};
class MarkOssResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MarkOssResultResponseBody> body{};

  MarkOssResultResponse() {}

  explicit MarkOssResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MarkOssResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MarkOssResultResponseBody>(model1);
      }
    }
  }


  virtual ~MarkOssResultResponse() = default;
};
class MarkWebsiteScanResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> ids{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  MarkWebsiteScanResultRequest() {}

  explicit MarkWebsiteScanResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~MarkWebsiteScanResultRequest() = default;
};
class MarkWebsiteScanResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MarkWebsiteScanResultResponseBody() {}

  explicit MarkWebsiteScanResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MarkWebsiteScanResultResponseBody() = default;
};
class MarkWebsiteScanResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MarkWebsiteScanResultResponseBody> body{};

  MarkWebsiteScanResultResponse() {}

  explicit MarkWebsiteScanResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MarkWebsiteScanResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MarkWebsiteScanResultResponseBody>(model1);
      }
    }
  }


  virtual ~MarkWebsiteScanResultResponse() = default;
};
class RefundCdiBagRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceOwnerId{};

  RefundCdiBagRequest() {}

  explicit RefundCdiBagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RefundCdiBagRequest() = default;
};
class RefundCdiBagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefundCdiBagResponseBody() {}

  explicit RefundCdiBagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefundCdiBagResponseBody() = default;
};
class RefundCdiBagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundCdiBagResponseBody> body{};

  RefundCdiBagResponse() {}

  explicit RefundCdiBagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundCdiBagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundCdiBagResponseBody>(model1);
      }
    }
  }


  virtual ~RefundCdiBagResponse() = default;
};
class RefundCdiBaseBagRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceOwnerId{};

  RefundCdiBaseBagRequest() {}

  explicit RefundCdiBaseBagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RefundCdiBaseBagRequest() = default;
};
class RefundCdiBaseBagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefundCdiBaseBagResponseBody() {}

  explicit RefundCdiBaseBagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefundCdiBaseBagResponseBody() = default;
};
class RefundCdiBaseBagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundCdiBaseBagResponseBody> body{};

  RefundCdiBaseBagResponse() {}

  explicit RefundCdiBaseBagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundCdiBaseBagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundCdiBaseBagResponseBody>(model1);
      }
    }
  }


  virtual ~RefundCdiBaseBagResponse() = default;
};
class RefundWebSiteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> resourceOwnerId{};

  RefundWebSiteInstanceRequest() {}

  explicit RefundWebSiteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerId"]));
    }
  }


  virtual ~RefundWebSiteInstanceRequest() = default;
};
class RefundWebSiteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RefundWebSiteInstanceResponseBody() {}

  explicit RefundWebSiteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefundWebSiteInstanceResponseBody() = default;
};
class RefundWebSiteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefundWebSiteInstanceResponseBody> body{};

  RefundWebSiteInstanceResponse() {}

  explicit RefundWebSiteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefundWebSiteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefundWebSiteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RefundWebSiteInstanceResponse() = default;
};
class RenewWebSiteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> duration{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> orderNum{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> pricingCycle{};

  RenewWebSiteInstanceRequest() {}

  explicit RenewWebSiteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderNum) {
      res["OrderNum"] = boost::any(*orderNum);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pricingCycle) {
      res["PricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderNum") != m.end() && !m["OrderNum"].empty()) {
      orderNum = make_shared<long>(boost::any_cast<long>(m["OrderNum"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PricingCycle") != m.end() && !m["PricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["PricingCycle"]));
    }
  }


  virtual ~RenewWebSiteInstanceRequest() = default;
};
class RenewWebSiteInstanceResponseBodyInstanceIds : public Darabonba::Model {
public:
  shared_ptr<vector<string>> string{};

  RenewWebSiteInstanceResponseBodyInstanceIds() {}

  explicit RenewWebSiteInstanceResponseBodyInstanceIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (string) {
      res["String"] = boost::any(*string);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("String") != m.end() && !m["String"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["String"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["String"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      string = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RenewWebSiteInstanceResponseBodyInstanceIds() = default;
};
class RenewWebSiteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<RenewWebSiteInstanceResponseBodyInstanceIds> instanceIds{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  RenewWebSiteInstanceResponseBody() {}

  explicit RenewWebSiteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIds) {
      res["InstanceIds"] = instanceIds ? boost::any(instanceIds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceIds"].type()) {
        RenewWebSiteInstanceResponseBodyInstanceIds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceIds"]));
        instanceIds = make_shared<RenewWebSiteInstanceResponseBodyInstanceIds>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RenewWebSiteInstanceResponseBody() = default;
};
class RenewWebSiteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenewWebSiteInstanceResponseBody> body{};

  RenewWebSiteInstanceResponse() {}

  explicit RenewWebSiteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RenewWebSiteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenewWebSiteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~RenewWebSiteInstanceResponse() = default;
};
class SendVerifyCodeToEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> email{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};

  SendVerifyCodeToEmailRequest() {}

  explicit SendVerifyCodeToEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~SendVerifyCodeToEmailRequest() = default;
};
class SendVerifyCodeToEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendVerifyCodeToEmailResponseBody() {}

  explicit SendVerifyCodeToEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendVerifyCodeToEmailResponseBody() = default;
};
class SendVerifyCodeToEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendVerifyCodeToEmailResponseBody> body{};

  SendVerifyCodeToEmailResponse() {}

  explicit SendVerifyCodeToEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendVerifyCodeToEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerifyCodeToEmailResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerifyCodeToEmailResponse() = default;
};
class SendVerifyCodeToPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> phone{};
  shared_ptr<string> sourceIp{};

  SendVerifyCodeToPhoneRequest() {}

  explicit SendVerifyCodeToPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~SendVerifyCodeToPhoneRequest() = default;
};
class SendVerifyCodeToPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendVerifyCodeToPhoneResponseBody() {}

  explicit SendVerifyCodeToPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendVerifyCodeToPhoneResponseBody() = default;
};
class SendVerifyCodeToPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendVerifyCodeToPhoneResponseBody> body{};

  SendVerifyCodeToPhoneResponse() {}

  explicit SendVerifyCodeToPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendVerifyCodeToPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendVerifyCodeToPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~SendVerifyCodeToPhoneResponse() = default;
};
class SendWebsiteFeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> feedback{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> urls{};

  SendWebsiteFeedbackRequest() {}

  explicit SendWebsiteFeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (urls) {
      res["Urls"] = boost::any(*urls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Urls") != m.end() && !m["Urls"].empty()) {
      urls = make_shared<string>(boost::any_cast<string>(m["Urls"]));
    }
  }


  virtual ~SendWebsiteFeedbackRequest() = default;
};
class SendWebsiteFeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SendWebsiteFeedbackResponseBody() {}

  explicit SendWebsiteFeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendWebsiteFeedbackResponseBody() = default;
};
class SendWebsiteFeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendWebsiteFeedbackResponseBody> body{};

  SendWebsiteFeedbackResponse() {}

  explicit SendWebsiteFeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendWebsiteFeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendWebsiteFeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~SendWebsiteFeedbackResponse() = default;
};
class UpdateAppPackageRequest : public Darabonba::Model {
public:
  shared_ptr<bool> debug{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> platform{};
  shared_ptr<string> sourceIp{};

  UpdateAppPackageRequest() {}

  explicit UpdateAppPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~UpdateAppPackageRequest() = default;
};
class UpdateAppPackageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateAppPackageResponseBody() {}

  explicit UpdateAppPackageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateAppPackageResponseBody() = default;
};
class UpdateAppPackageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppPackageResponseBody> body{};

  UpdateAppPackageResponse() {}

  explicit UpdateAppPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppPackageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppPackageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppPackageResponse() = default;
};
class UpdateAuditCallbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> callback{};
  shared_ptr<long> cryptType{};
  shared_ptr<string> seed{};

  UpdateAuditCallbackRequest() {}

  explicit UpdateAuditCallbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (cryptType) {
      res["CryptType"] = boost::any(*cryptType);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("CryptType") != m.end() && !m["CryptType"].empty()) {
      cryptType = make_shared<long>(boost::any_cast<long>(m["CryptType"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
  }


  virtual ~UpdateAuditCallbackRequest() = default;
};
class UpdateAuditCallbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuditCallbackResponseBody() {}

  explicit UpdateAuditCallbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAuditCallbackResponseBody() = default;
};
class UpdateAuditCallbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAuditCallbackResponseBody> body{};

  UpdateAuditCallbackResponse() {}

  explicit UpdateAuditCallbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuditCallbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuditCallbackResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuditCallbackResponse() = default;
};
class UpdateAuditRangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditRange{};

  UpdateAuditRangeRequest() {}

  explicit UpdateAuditRangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRange) {
      res["AuditRange"] = boost::any(*auditRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRange") != m.end() && !m["AuditRange"].empty()) {
      auditRange = make_shared<string>(boost::any_cast<string>(m["AuditRange"]));
    }
  }


  virtual ~UpdateAuditRangeRequest() = default;
};
class UpdateAuditRangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuditRangeResponseBody() {}

  explicit UpdateAuditRangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAuditRangeResponseBody() = default;
};
class UpdateAuditRangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAuditRangeResponseBody> body{};

  UpdateAuditRangeResponse() {}

  explicit UpdateAuditRangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuditRangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuditRangeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuditRangeResponse() = default;
};
class UpdateAuditSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditRange{};
  shared_ptr<string> callback{};
  shared_ptr<string> seed{};
  shared_ptr<string> sourceIp{};

  UpdateAuditSettingRequest() {}

  explicit UpdateAuditSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditRange) {
      res["AuditRange"] = boost::any(*auditRange);
    }
    if (callback) {
      res["Callback"] = boost::any(*callback);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditRange") != m.end() && !m["AuditRange"].empty()) {
      auditRange = make_shared<string>(boost::any_cast<string>(m["AuditRange"]));
    }
    if (m.find("Callback") != m.end() && !m["Callback"].empty()) {
      callback = make_shared<string>(boost::any_cast<string>(m["Callback"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<string>(boost::any_cast<string>(m["Seed"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~UpdateAuditSettingRequest() = default;
};
class UpdateAuditSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateAuditSettingResponseBody() {}

  explicit UpdateAuditSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateAuditSettingResponseBody() = default;
};
class UpdateAuditSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAuditSettingResponseBody> body{};

  UpdateAuditSettingResponse() {}

  explicit UpdateAuditSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAuditSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAuditSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAuditSettingResponse() = default;
};
class UpdateBizTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> description{};

  UpdateBizTypeRequest() {}

  explicit UpdateBizTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateBizTypeRequest() = default;
};
class UpdateBizTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateBizTypeResponseBody() {}

  explicit UpdateBizTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateBizTypeResponseBody() = default;
};
class UpdateBizTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBizTypeResponseBody> body{};

  UpdateBizTypeResponse() {}

  explicit UpdateBizTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBizTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBizTypeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBizTypeResponse() = default;
};
class UpdateBizTypeImageLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> black{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> review{};
  shared_ptr<string> scene{};
  shared_ptr<string> white{};

  UpdateBizTypeImageLibRequest() {}

  explicit UpdateBizTypeImageLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (black) {
      res["Black"] = boost::any(*black);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (review) {
      res["Review"] = boost::any(*review);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (white) {
      res["White"] = boost::any(*white);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("Black") != m.end() && !m["Black"].empty()) {
      black = make_shared<string>(boost::any_cast<string>(m["Black"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Review") != m.end() && !m["Review"].empty()) {
      review = make_shared<string>(boost::any_cast<string>(m["Review"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      white = make_shared<string>(boost::any_cast<string>(m["White"]));
    }
  }


  virtual ~UpdateBizTypeImageLibRequest() = default;
};
class UpdateBizTypeImageLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateBizTypeImageLibResponseBody() {}

  explicit UpdateBizTypeImageLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateBizTypeImageLibResponseBody() = default;
};
class UpdateBizTypeImageLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBizTypeImageLibResponseBody> body{};

  UpdateBizTypeImageLibResponse() {}

  explicit UpdateBizTypeImageLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBizTypeImageLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBizTypeImageLibResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBizTypeImageLibResponse() = default;
};
class UpdateBizTypeSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> ad{};
  shared_ptr<string> antispam{};
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> live{};
  shared_ptr<string> porn{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> terrorism{};

  UpdateBizTypeSettingRequest() {}

  explicit UpdateBizTypeSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ad) {
      res["Ad"] = boost::any(*ad);
    }
    if (antispam) {
      res["Antispam"] = boost::any(*antispam);
    }
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (live) {
      res["Live"] = boost::any(*live);
    }
    if (porn) {
      res["Porn"] = boost::any(*porn);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (terrorism) {
      res["Terrorism"] = boost::any(*terrorism);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ad") != m.end() && !m["Ad"].empty()) {
      ad = make_shared<string>(boost::any_cast<string>(m["Ad"]));
    }
    if (m.find("Antispam") != m.end() && !m["Antispam"].empty()) {
      antispam = make_shared<string>(boost::any_cast<string>(m["Antispam"]));
    }
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("Live") != m.end() && !m["Live"].empty()) {
      live = make_shared<string>(boost::any_cast<string>(m["Live"]));
    }
    if (m.find("Porn") != m.end() && !m["Porn"].empty()) {
      porn = make_shared<string>(boost::any_cast<string>(m["Porn"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Terrorism") != m.end() && !m["Terrorism"].empty()) {
      terrorism = make_shared<string>(boost::any_cast<string>(m["Terrorism"]));
    }
  }


  virtual ~UpdateBizTypeSettingRequest() = default;
};
class UpdateBizTypeSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateBizTypeSettingResponseBody() {}

  explicit UpdateBizTypeSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateBizTypeSettingResponseBody() = default;
};
class UpdateBizTypeSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBizTypeSettingResponseBody> body{};

  UpdateBizTypeSettingResponse() {}

  explicit UpdateBizTypeSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBizTypeSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBizTypeSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBizTypeSettingResponse() = default;
};
class UpdateBizTypeTextLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypeName{};
  shared_ptr<string> black{};
  shared_ptr<string> ignore{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> review{};
  shared_ptr<string> scene{};
  shared_ptr<string> white{};

  UpdateBizTypeTextLibRequest() {}

  explicit UpdateBizTypeTextLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeName) {
      res["BizTypeName"] = boost::any(*bizTypeName);
    }
    if (black) {
      res["Black"] = boost::any(*black);
    }
    if (ignore) {
      res["Ignore"] = boost::any(*ignore);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (review) {
      res["Review"] = boost::any(*review);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (white) {
      res["White"] = boost::any(*white);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeName") != m.end() && !m["BizTypeName"].empty()) {
      bizTypeName = make_shared<string>(boost::any_cast<string>(m["BizTypeName"]));
    }
    if (m.find("Black") != m.end() && !m["Black"].empty()) {
      black = make_shared<string>(boost::any_cast<string>(m["Black"]));
    }
    if (m.find("Ignore") != m.end() && !m["Ignore"].empty()) {
      ignore = make_shared<string>(boost::any_cast<string>(m["Ignore"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Review") != m.end() && !m["Review"].empty()) {
      review = make_shared<string>(boost::any_cast<string>(m["Review"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      white = make_shared<string>(boost::any_cast<string>(m["White"]));
    }
  }


  virtual ~UpdateBizTypeTextLibRequest() = default;
};
class UpdateBizTypeTextLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateBizTypeTextLibResponseBody() {}

  explicit UpdateBizTypeTextLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateBizTypeTextLibResponseBody() = default;
};
class UpdateBizTypeTextLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateBizTypeTextLibResponseBody> body{};

  UpdateBizTypeTextLibResponse() {}

  explicit UpdateBizTypeTextLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateBizTypeTextLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateBizTypeTextLibResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateBizTypeTextLibResponse() = default;
};
class UpdateCustomOcrTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> recognizeArea{};
  shared_ptr<string> referArea{};

  UpdateCustomOcrTemplateRequest() {}

  explicit UpdateCustomOcrTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (recognizeArea) {
      res["RecognizeArea"] = boost::any(*recognizeArea);
    }
    if (referArea) {
      res["ReferArea"] = boost::any(*referArea);
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
    if (m.find("RecognizeArea") != m.end() && !m["RecognizeArea"].empty()) {
      recognizeArea = make_shared<string>(boost::any_cast<string>(m["RecognizeArea"]));
    }
    if (m.find("ReferArea") != m.end() && !m["ReferArea"].empty()) {
      referArea = make_shared<string>(boost::any_cast<string>(m["ReferArea"]));
    }
  }


  virtual ~UpdateCustomOcrTemplateRequest() = default;
};
class UpdateCustomOcrTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCustomOcrTemplateResponseBody() {}

  explicit UpdateCustomOcrTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCustomOcrTemplateResponseBody() = default;
};
class UpdateCustomOcrTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCustomOcrTemplateResponseBody> body{};

  UpdateCustomOcrTemplateResponse() {}

  explicit UpdateCustomOcrTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCustomOcrTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCustomOcrTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCustomOcrTemplateResponse() = default;
};
class UpdateKeywordLibRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizTypes{};
  shared_ptr<bool> enable{};
  shared_ptr<long> id{};
  shared_ptr<string> lang{};
  shared_ptr<string> matchMode{};
  shared_ptr<string> name{};
  shared_ptr<string> sourceIp{};

  UpdateKeywordLibRequest() {}

  explicit UpdateKeywordLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypes) {
      res["BizTypes"] = boost::any(*bizTypes);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (matchMode) {
      res["MatchMode"] = boost::any(*matchMode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypes") != m.end() && !m["BizTypes"].empty()) {
      bizTypes = make_shared<string>(boost::any_cast<string>(m["BizTypes"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("MatchMode") != m.end() && !m["MatchMode"].empty()) {
      matchMode = make_shared<string>(boost::any_cast<string>(m["MatchMode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~UpdateKeywordLibRequest() = default;
};
class UpdateKeywordLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateKeywordLibResponseBody() {}

  explicit UpdateKeywordLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateKeywordLibResponseBody() = default;
};
class UpdateKeywordLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateKeywordLibResponseBody> body{};

  UpdateKeywordLibResponse() {}

  explicit UpdateKeywordLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKeywordLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKeywordLibResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKeywordLibResponse() = default;
};
class UpdateNotificationSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> realtimeMessageList{};
  shared_ptr<string> reminderModeList{};
  shared_ptr<long> scheduleMessageTime{};
  shared_ptr<long> scheduleMessageTimeZone{};
  shared_ptr<string> sourceIp{};

  UpdateNotificationSettingRequest() {}

  explicit UpdateNotificationSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (realtimeMessageList) {
      res["RealtimeMessageList"] = boost::any(*realtimeMessageList);
    }
    if (reminderModeList) {
      res["ReminderModeList"] = boost::any(*reminderModeList);
    }
    if (scheduleMessageTime) {
      res["ScheduleMessageTime"] = boost::any(*scheduleMessageTime);
    }
    if (scheduleMessageTimeZone) {
      res["ScheduleMessageTimeZone"] = boost::any(*scheduleMessageTimeZone);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("RealtimeMessageList") != m.end() && !m["RealtimeMessageList"].empty()) {
      realtimeMessageList = make_shared<string>(boost::any_cast<string>(m["RealtimeMessageList"]));
    }
    if (m.find("ReminderModeList") != m.end() && !m["ReminderModeList"].empty()) {
      reminderModeList = make_shared<string>(boost::any_cast<string>(m["ReminderModeList"]));
    }
    if (m.find("ScheduleMessageTime") != m.end() && !m["ScheduleMessageTime"].empty()) {
      scheduleMessageTime = make_shared<long>(boost::any_cast<long>(m["ScheduleMessageTime"]));
    }
    if (m.find("ScheduleMessageTimeZone") != m.end() && !m["ScheduleMessageTimeZone"].empty()) {
      scheduleMessageTimeZone = make_shared<long>(boost::any_cast<long>(m["ScheduleMessageTimeZone"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
  }


  virtual ~UpdateNotificationSettingRequest() = default;
};
class UpdateNotificationSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateNotificationSettingResponseBody() {}

  explicit UpdateNotificationSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateNotificationSettingResponseBody() = default;
};
class UpdateNotificationSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNotificationSettingResponseBody> body{};

  UpdateNotificationSettingResponse() {}

  explicit UpdateNotificationSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateNotificationSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNotificationSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNotificationSettingResponse() = default;
};
class UpdateOssCallbackSettingRequest : public Darabonba::Model {
public:
  shared_ptr<bool> auditCallback{};
  shared_ptr<string> callbackSeed{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<bool> scanCallback{};
  shared_ptr<string> scanCallbackSuggestions{};
  shared_ptr<string> serviceModules{};

  UpdateOssCallbackSettingRequest() {}

  explicit UpdateOssCallbackSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditCallback) {
      res["AuditCallback"] = boost::any(*auditCallback);
    }
    if (callbackSeed) {
      res["CallbackSeed"] = boost::any(*callbackSeed);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (scanCallback) {
      res["ScanCallback"] = boost::any(*scanCallback);
    }
    if (scanCallbackSuggestions) {
      res["ScanCallbackSuggestions"] = boost::any(*scanCallbackSuggestions);
    }
    if (serviceModules) {
      res["ServiceModules"] = boost::any(*serviceModules);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditCallback") != m.end() && !m["AuditCallback"].empty()) {
      auditCallback = make_shared<bool>(boost::any_cast<bool>(m["AuditCallback"]));
    }
    if (m.find("CallbackSeed") != m.end() && !m["CallbackSeed"].empty()) {
      callbackSeed = make_shared<string>(boost::any_cast<string>(m["CallbackSeed"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("ScanCallback") != m.end() && !m["ScanCallback"].empty()) {
      scanCallback = make_shared<bool>(boost::any_cast<bool>(m["ScanCallback"]));
    }
    if (m.find("ScanCallbackSuggestions") != m.end() && !m["ScanCallbackSuggestions"].empty()) {
      scanCallbackSuggestions = make_shared<string>(boost::any_cast<string>(m["ScanCallbackSuggestions"]));
    }
    if (m.find("ServiceModules") != m.end() && !m["ServiceModules"].empty()) {
      serviceModules = make_shared<string>(boost::any_cast<string>(m["ServiceModules"]));
    }
  }


  virtual ~UpdateOssCallbackSettingRequest() = default;
};
class UpdateOssCallbackSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateOssCallbackSettingResponseBody() {}

  explicit UpdateOssCallbackSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOssCallbackSettingResponseBody() = default;
};
class UpdateOssCallbackSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOssCallbackSettingResponseBody> body{};

  UpdateOssCallbackSettingResponse() {}

  explicit UpdateOssCallbackSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOssCallbackSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOssCallbackSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOssCallbackSettingResponse() = default;
};
class UpdateOssIncrementCheckSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioAntispamFreezeConfig{};
  shared_ptr<bool> audioAutoFreezeOpened{};
  shared_ptr<long> audioMaxSize{};
  shared_ptr<long> audioScanLimit{};
  shared_ptr<string> audioSceneList{};
  shared_ptr<string> autoFreezeType{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bucketConfigList{};
  shared_ptr<string> callbackId{};
  shared_ptr<string> imageAdFreezeConfig{};
  shared_ptr<string> imageAutoFreeze{};
  shared_ptr<bool> imageAutoFreezeOpened{};
  shared_ptr<string> imageLiveFreezeConfig{};
  shared_ptr<string> imagePornFreezeConfig{};
  shared_ptr<string> imageScanLimit{};
  shared_ptr<string> imageSceneList{};
  shared_ptr<string> imageTerrorismFreezeConfig{};
  shared_ptr<string> lang{};
  shared_ptr<bool> scanImageNoFileType{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> videoAdFreezeConfig{};
  shared_ptr<bool> videoAutoFreezeOpened{};
  shared_ptr<string> videoAutoFreezeSceneList{};
  shared_ptr<long> videoFrameInterval{};
  shared_ptr<string> videoLiveFreezeConfig{};
  shared_ptr<long> videoMaxFrames{};
  shared_ptr<long> videoMaxSize{};
  shared_ptr<string> videoPornFreezeConfig{};
  shared_ptr<long> videoScanLimit{};
  shared_ptr<string> videoSceneList{};
  shared_ptr<string> videoTerrorismFreezeConfig{};
  shared_ptr<string> videoVoiceAntispamFreezeConfig{};

  UpdateOssIncrementCheckSettingRequest() {}

  explicit UpdateOssIncrementCheckSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioAntispamFreezeConfig) {
      res["AudioAntispamFreezeConfig"] = boost::any(*audioAntispamFreezeConfig);
    }
    if (audioAutoFreezeOpened) {
      res["AudioAutoFreezeOpened"] = boost::any(*audioAutoFreezeOpened);
    }
    if (audioMaxSize) {
      res["AudioMaxSize"] = boost::any(*audioMaxSize);
    }
    if (audioScanLimit) {
      res["AudioScanLimit"] = boost::any(*audioScanLimit);
    }
    if (audioSceneList) {
      res["AudioSceneList"] = boost::any(*audioSceneList);
    }
    if (autoFreezeType) {
      res["AutoFreezeType"] = boost::any(*autoFreezeType);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bucketConfigList) {
      res["BucketConfigList"] = boost::any(*bucketConfigList);
    }
    if (callbackId) {
      res["CallbackId"] = boost::any(*callbackId);
    }
    if (imageAdFreezeConfig) {
      res["ImageAdFreezeConfig"] = boost::any(*imageAdFreezeConfig);
    }
    if (imageAutoFreeze) {
      res["ImageAutoFreeze"] = boost::any(*imageAutoFreeze);
    }
    if (imageAutoFreezeOpened) {
      res["ImageAutoFreezeOpened"] = boost::any(*imageAutoFreezeOpened);
    }
    if (imageLiveFreezeConfig) {
      res["ImageLiveFreezeConfig"] = boost::any(*imageLiveFreezeConfig);
    }
    if (imagePornFreezeConfig) {
      res["ImagePornFreezeConfig"] = boost::any(*imagePornFreezeConfig);
    }
    if (imageScanLimit) {
      res["ImageScanLimit"] = boost::any(*imageScanLimit);
    }
    if (imageSceneList) {
      res["ImageSceneList"] = boost::any(*imageSceneList);
    }
    if (imageTerrorismFreezeConfig) {
      res["ImageTerrorismFreezeConfig"] = boost::any(*imageTerrorismFreezeConfig);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (scanImageNoFileType) {
      res["ScanImageNoFileType"] = boost::any(*scanImageNoFileType);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (videoAdFreezeConfig) {
      res["VideoAdFreezeConfig"] = boost::any(*videoAdFreezeConfig);
    }
    if (videoAutoFreezeOpened) {
      res["VideoAutoFreezeOpened"] = boost::any(*videoAutoFreezeOpened);
    }
    if (videoAutoFreezeSceneList) {
      res["VideoAutoFreezeSceneList"] = boost::any(*videoAutoFreezeSceneList);
    }
    if (videoFrameInterval) {
      res["VideoFrameInterval"] = boost::any(*videoFrameInterval);
    }
    if (videoLiveFreezeConfig) {
      res["VideoLiveFreezeConfig"] = boost::any(*videoLiveFreezeConfig);
    }
    if (videoMaxFrames) {
      res["VideoMaxFrames"] = boost::any(*videoMaxFrames);
    }
    if (videoMaxSize) {
      res["VideoMaxSize"] = boost::any(*videoMaxSize);
    }
    if (videoPornFreezeConfig) {
      res["VideoPornFreezeConfig"] = boost::any(*videoPornFreezeConfig);
    }
    if (videoScanLimit) {
      res["VideoScanLimit"] = boost::any(*videoScanLimit);
    }
    if (videoSceneList) {
      res["VideoSceneList"] = boost::any(*videoSceneList);
    }
    if (videoTerrorismFreezeConfig) {
      res["VideoTerrorismFreezeConfig"] = boost::any(*videoTerrorismFreezeConfig);
    }
    if (videoVoiceAntispamFreezeConfig) {
      res["VideoVoiceAntispamFreezeConfig"] = boost::any(*videoVoiceAntispamFreezeConfig);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioAntispamFreezeConfig") != m.end() && !m["AudioAntispamFreezeConfig"].empty()) {
      audioAntispamFreezeConfig = make_shared<string>(boost::any_cast<string>(m["AudioAntispamFreezeConfig"]));
    }
    if (m.find("AudioAutoFreezeOpened") != m.end() && !m["AudioAutoFreezeOpened"].empty()) {
      audioAutoFreezeOpened = make_shared<bool>(boost::any_cast<bool>(m["AudioAutoFreezeOpened"]));
    }
    if (m.find("AudioMaxSize") != m.end() && !m["AudioMaxSize"].empty()) {
      audioMaxSize = make_shared<long>(boost::any_cast<long>(m["AudioMaxSize"]));
    }
    if (m.find("AudioScanLimit") != m.end() && !m["AudioScanLimit"].empty()) {
      audioScanLimit = make_shared<long>(boost::any_cast<long>(m["AudioScanLimit"]));
    }
    if (m.find("AudioSceneList") != m.end() && !m["AudioSceneList"].empty()) {
      audioSceneList = make_shared<string>(boost::any_cast<string>(m["AudioSceneList"]));
    }
    if (m.find("AutoFreezeType") != m.end() && !m["AutoFreezeType"].empty()) {
      autoFreezeType = make_shared<string>(boost::any_cast<string>(m["AutoFreezeType"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BucketConfigList") != m.end() && !m["BucketConfigList"].empty()) {
      bucketConfigList = make_shared<string>(boost::any_cast<string>(m["BucketConfigList"]));
    }
    if (m.find("CallbackId") != m.end() && !m["CallbackId"].empty()) {
      callbackId = make_shared<string>(boost::any_cast<string>(m["CallbackId"]));
    }
    if (m.find("ImageAdFreezeConfig") != m.end() && !m["ImageAdFreezeConfig"].empty()) {
      imageAdFreezeConfig = make_shared<string>(boost::any_cast<string>(m["ImageAdFreezeConfig"]));
    }
    if (m.find("ImageAutoFreeze") != m.end() && !m["ImageAutoFreeze"].empty()) {
      imageAutoFreeze = make_shared<string>(boost::any_cast<string>(m["ImageAutoFreeze"]));
    }
    if (m.find("ImageAutoFreezeOpened") != m.end() && !m["ImageAutoFreezeOpened"].empty()) {
      imageAutoFreezeOpened = make_shared<bool>(boost::any_cast<bool>(m["ImageAutoFreezeOpened"]));
    }
    if (m.find("ImageLiveFreezeConfig") != m.end() && !m["ImageLiveFreezeConfig"].empty()) {
      imageLiveFreezeConfig = make_shared<string>(boost::any_cast<string>(m["ImageLiveFreezeConfig"]));
    }
    if (m.find("ImagePornFreezeConfig") != m.end() && !m["ImagePornFreezeConfig"].empty()) {
      imagePornFreezeConfig = make_shared<string>(boost::any_cast<string>(m["ImagePornFreezeConfig"]));
    }
    if (m.find("ImageScanLimit") != m.end() && !m["ImageScanLimit"].empty()) {
      imageScanLimit = make_shared<string>(boost::any_cast<string>(m["ImageScanLimit"]));
    }
    if (m.find("ImageSceneList") != m.end() && !m["ImageSceneList"].empty()) {
      imageSceneList = make_shared<string>(boost::any_cast<string>(m["ImageSceneList"]));
    }
    if (m.find("ImageTerrorismFreezeConfig") != m.end() && !m["ImageTerrorismFreezeConfig"].empty()) {
      imageTerrorismFreezeConfig = make_shared<string>(boost::any_cast<string>(m["ImageTerrorismFreezeConfig"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ScanImageNoFileType") != m.end() && !m["ScanImageNoFileType"].empty()) {
      scanImageNoFileType = make_shared<bool>(boost::any_cast<bool>(m["ScanImageNoFileType"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("VideoAdFreezeConfig") != m.end() && !m["VideoAdFreezeConfig"].empty()) {
      videoAdFreezeConfig = make_shared<string>(boost::any_cast<string>(m["VideoAdFreezeConfig"]));
    }
    if (m.find("VideoAutoFreezeOpened") != m.end() && !m["VideoAutoFreezeOpened"].empty()) {
      videoAutoFreezeOpened = make_shared<bool>(boost::any_cast<bool>(m["VideoAutoFreezeOpened"]));
    }
    if (m.find("VideoAutoFreezeSceneList") != m.end() && !m["VideoAutoFreezeSceneList"].empty()) {
      videoAutoFreezeSceneList = make_shared<string>(boost::any_cast<string>(m["VideoAutoFreezeSceneList"]));
    }
    if (m.find("VideoFrameInterval") != m.end() && !m["VideoFrameInterval"].empty()) {
      videoFrameInterval = make_shared<long>(boost::any_cast<long>(m["VideoFrameInterval"]));
    }
    if (m.find("VideoLiveFreezeConfig") != m.end() && !m["VideoLiveFreezeConfig"].empty()) {
      videoLiveFreezeConfig = make_shared<string>(boost::any_cast<string>(m["VideoLiveFreezeConfig"]));
    }
    if (m.find("VideoMaxFrames") != m.end() && !m["VideoMaxFrames"].empty()) {
      videoMaxFrames = make_shared<long>(boost::any_cast<long>(m["VideoMaxFrames"]));
    }
    if (m.find("VideoMaxSize") != m.end() && !m["VideoMaxSize"].empty()) {
      videoMaxSize = make_shared<long>(boost::any_cast<long>(m["VideoMaxSize"]));
    }
    if (m.find("VideoPornFreezeConfig") != m.end() && !m["VideoPornFreezeConfig"].empty()) {
      videoPornFreezeConfig = make_shared<string>(boost::any_cast<string>(m["VideoPornFreezeConfig"]));
    }
    if (m.find("VideoScanLimit") != m.end() && !m["VideoScanLimit"].empty()) {
      videoScanLimit = make_shared<long>(boost::any_cast<long>(m["VideoScanLimit"]));
    }
    if (m.find("VideoSceneList") != m.end() && !m["VideoSceneList"].empty()) {
      videoSceneList = make_shared<string>(boost::any_cast<string>(m["VideoSceneList"]));
    }
    if (m.find("VideoTerrorismFreezeConfig") != m.end() && !m["VideoTerrorismFreezeConfig"].empty()) {
      videoTerrorismFreezeConfig = make_shared<string>(boost::any_cast<string>(m["VideoTerrorismFreezeConfig"]));
    }
    if (m.find("VideoVoiceAntispamFreezeConfig") != m.end() && !m["VideoVoiceAntispamFreezeConfig"].empty()) {
      videoVoiceAntispamFreezeConfig = make_shared<string>(boost::any_cast<string>(m["VideoVoiceAntispamFreezeConfig"]));
    }
  }


  virtual ~UpdateOssIncrementCheckSettingRequest() = default;
};
class UpdateOssIncrementCheckSettingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateOssIncrementCheckSettingResponseBody() {}

  explicit UpdateOssIncrementCheckSettingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOssIncrementCheckSettingResponseBody() = default;
};
class UpdateOssIncrementCheckSettingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOssIncrementCheckSettingResponseBody> body{};

  UpdateOssIncrementCheckSettingResponse() {}

  explicit UpdateOssIncrementCheckSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOssIncrementCheckSettingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOssIncrementCheckSettingResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOssIncrementCheckSettingResponse() = default;
};
class UpdateOssStockStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioAutoFreezeSceneList{};
  shared_ptr<long> audioMaxSize{};
  shared_ptr<string> autoFreezeType{};
  shared_ptr<string> bucketConfigList{};
  shared_ptr<string> endDate{};
  shared_ptr<string> imageAutoFreeze{};
  shared_ptr<string> lang{};
  shared_ptr<string> operation{};
  shared_ptr<string> resourceTypeList{};
  shared_ptr<string> sceneList{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> startDate{};
  shared_ptr<string> videoAutoFreezeSceneList{};
  shared_ptr<long> videoFrameInterval{};
  shared_ptr<long> videoMaxFrames{};
  shared_ptr<long> videoMaxSize{};

  UpdateOssStockStatusRequest() {}

  explicit UpdateOssStockStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioAutoFreezeSceneList) {
      res["AudioAutoFreezeSceneList"] = boost::any(*audioAutoFreezeSceneList);
    }
    if (audioMaxSize) {
      res["AudioMaxSize"] = boost::any(*audioMaxSize);
    }
    if (autoFreezeType) {
      res["AutoFreezeType"] = boost::any(*autoFreezeType);
    }
    if (bucketConfigList) {
      res["BucketConfigList"] = boost::any(*bucketConfigList);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (imageAutoFreeze) {
      res["ImageAutoFreeze"] = boost::any(*imageAutoFreeze);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (resourceTypeList) {
      res["ResourceTypeList"] = boost::any(*resourceTypeList);
    }
    if (sceneList) {
      res["SceneList"] = boost::any(*sceneList);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (videoAutoFreezeSceneList) {
      res["VideoAutoFreezeSceneList"] = boost::any(*videoAutoFreezeSceneList);
    }
    if (videoFrameInterval) {
      res["VideoFrameInterval"] = boost::any(*videoFrameInterval);
    }
    if (videoMaxFrames) {
      res["VideoMaxFrames"] = boost::any(*videoMaxFrames);
    }
    if (videoMaxSize) {
      res["VideoMaxSize"] = boost::any(*videoMaxSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioAutoFreezeSceneList") != m.end() && !m["AudioAutoFreezeSceneList"].empty()) {
      audioAutoFreezeSceneList = make_shared<string>(boost::any_cast<string>(m["AudioAutoFreezeSceneList"]));
    }
    if (m.find("AudioMaxSize") != m.end() && !m["AudioMaxSize"].empty()) {
      audioMaxSize = make_shared<long>(boost::any_cast<long>(m["AudioMaxSize"]));
    }
    if (m.find("AutoFreezeType") != m.end() && !m["AutoFreezeType"].empty()) {
      autoFreezeType = make_shared<string>(boost::any_cast<string>(m["AutoFreezeType"]));
    }
    if (m.find("BucketConfigList") != m.end() && !m["BucketConfigList"].empty()) {
      bucketConfigList = make_shared<string>(boost::any_cast<string>(m["BucketConfigList"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ImageAutoFreeze") != m.end() && !m["ImageAutoFreeze"].empty()) {
      imageAutoFreeze = make_shared<string>(boost::any_cast<string>(m["ImageAutoFreeze"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("ResourceTypeList") != m.end() && !m["ResourceTypeList"].empty()) {
      resourceTypeList = make_shared<string>(boost::any_cast<string>(m["ResourceTypeList"]));
    }
    if (m.find("SceneList") != m.end() && !m["SceneList"].empty()) {
      sceneList = make_shared<string>(boost::any_cast<string>(m["SceneList"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("VideoAutoFreezeSceneList") != m.end() && !m["VideoAutoFreezeSceneList"].empty()) {
      videoAutoFreezeSceneList = make_shared<string>(boost::any_cast<string>(m["VideoAutoFreezeSceneList"]));
    }
    if (m.find("VideoFrameInterval") != m.end() && !m["VideoFrameInterval"].empty()) {
      videoFrameInterval = make_shared<long>(boost::any_cast<long>(m["VideoFrameInterval"]));
    }
    if (m.find("VideoMaxFrames") != m.end() && !m["VideoMaxFrames"].empty()) {
      videoMaxFrames = make_shared<long>(boost::any_cast<long>(m["VideoMaxFrames"]));
    }
    if (m.find("VideoMaxSize") != m.end() && !m["VideoMaxSize"].empty()) {
      videoMaxSize = make_shared<long>(boost::any_cast<long>(m["VideoMaxSize"]));
    }
  }


  virtual ~UpdateOssStockStatusRequest() = default;
};
class UpdateOssStockStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateOssStockStatusResponseBody() {}

  explicit UpdateOssStockStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOssStockStatusResponseBody() = default;
};
class UpdateOssStockStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOssStockStatusResponseBody> body{};

  UpdateOssStockStatusResponse() {}

  explicit UpdateOssStockStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOssStockStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOssStockStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOssStockStatusResponse() = default;
};
class UpdateWebsiteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<string> indexPage{};
  shared_ptr<long> indexPageScanInterval{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> siteProtocol{};
  shared_ptr<string> sourceIp{};
  shared_ptr<long> websiteScanInterval{};

  UpdateWebsiteInstanceRequest() {}

  explicit UpdateWebsiteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (indexPage) {
      res["IndexPage"] = boost::any(*indexPage);
    }
    if (indexPageScanInterval) {
      res["IndexPageScanInterval"] = boost::any(*indexPageScanInterval);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (siteProtocol) {
      res["SiteProtocol"] = boost::any(*siteProtocol);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (websiteScanInterval) {
      res["WebsiteScanInterval"] = boost::any(*websiteScanInterval);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("IndexPage") != m.end() && !m["IndexPage"].empty()) {
      indexPage = make_shared<string>(boost::any_cast<string>(m["IndexPage"]));
    }
    if (m.find("IndexPageScanInterval") != m.end() && !m["IndexPageScanInterval"].empty()) {
      indexPageScanInterval = make_shared<long>(boost::any_cast<long>(m["IndexPageScanInterval"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SiteProtocol") != m.end() && !m["SiteProtocol"].empty()) {
      siteProtocol = make_shared<string>(boost::any_cast<string>(m["SiteProtocol"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("WebsiteScanInterval") != m.end() && !m["WebsiteScanInterval"].empty()) {
      websiteScanInterval = make_shared<long>(boost::any_cast<long>(m["WebsiteScanInterval"]));
    }
  }


  virtual ~UpdateWebsiteInstanceRequest() = default;
};
class UpdateWebsiteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWebsiteInstanceResponseBody() {}

  explicit UpdateWebsiteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWebsiteInstanceResponseBody() = default;
};
class UpdateWebsiteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWebsiteInstanceResponseBody> body{};

  UpdateWebsiteInstanceResponse() {}

  explicit UpdateWebsiteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWebsiteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWebsiteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWebsiteInstanceResponse() = default;
};
class UpdateWebsiteInstanceKeyUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> urls{};

  UpdateWebsiteInstanceKeyUrlRequest() {}

  explicit UpdateWebsiteInstanceKeyUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (urls) {
      res["Urls"] = boost::any(*urls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Urls") != m.end() && !m["Urls"].empty()) {
      urls = make_shared<string>(boost::any_cast<string>(m["Urls"]));
    }
  }


  virtual ~UpdateWebsiteInstanceKeyUrlRequest() = default;
};
class UpdateWebsiteInstanceKeyUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWebsiteInstanceKeyUrlResponseBody() {}

  explicit UpdateWebsiteInstanceKeyUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWebsiteInstanceKeyUrlResponseBody() = default;
};
class UpdateWebsiteInstanceKeyUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWebsiteInstanceKeyUrlResponseBody> body{};

  UpdateWebsiteInstanceKeyUrlResponse() {}

  explicit UpdateWebsiteInstanceKeyUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWebsiteInstanceKeyUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWebsiteInstanceKeyUrlResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWebsiteInstanceKeyUrlResponse() = default;
};
class UpdateWebsiteInstanceStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> status{};

  UpdateWebsiteInstanceStatusRequest() {}

  explicit UpdateWebsiteInstanceStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateWebsiteInstanceStatusRequest() = default;
};
class UpdateWebsiteInstanceStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateWebsiteInstanceStatusResponseBody() {}

  explicit UpdateWebsiteInstanceStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateWebsiteInstanceStatusResponseBody() = default;
};
class UpdateWebsiteInstanceStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWebsiteInstanceStatusResponseBody> body{};

  UpdateWebsiteInstanceStatusResponse() {}

  explicit UpdateWebsiteInstanceStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateWebsiteInstanceStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWebsiteInstanceStatusResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWebsiteInstanceStatusResponse() = default;
};
class UpgradeCdiBaseBagRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> commodityCode{};
  shared_ptr<long> flowOutSpec{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> orderType{};
  shared_ptr<long> ownerId{};

  UpgradeCdiBaseBagRequest() {}

  explicit UpgradeCdiBaseBagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (flowOutSpec) {
      res["FlowOutSpec"] = boost::any(*flowOutSpec);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("FlowOutSpec") != m.end() && !m["FlowOutSpec"].empty()) {
      flowOutSpec = make_shared<long>(boost::any_cast<long>(m["FlowOutSpec"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~UpgradeCdiBaseBagRequest() = default;
};
class UpgradeCdiBaseBagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> message{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  UpgradeCdiBaseBagResponseBody() {}

  explicit UpgradeCdiBaseBagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpgradeCdiBaseBagResponseBody() = default;
};
class UpgradeCdiBaseBagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeCdiBaseBagResponseBody> body{};

  UpgradeCdiBaseBagResponse() {}

  explicit UpgradeCdiBaseBagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeCdiBaseBagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeCdiBaseBagResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeCdiBaseBagResponse() = default;
};
class UploadImageToLibRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageLibId{};
  shared_ptr<string> images{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> urls{};

  UploadImageToLibRequest() {}

  explicit UploadImageToLibRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageLibId) {
      res["ImageLibId"] = boost::any(*imageLibId);
    }
    if (images) {
      res["Images"] = boost::any(*images);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (urls) {
      res["Urls"] = boost::any(*urls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageLibId") != m.end() && !m["ImageLibId"].empty()) {
      imageLibId = make_shared<long>(boost::any_cast<long>(m["ImageLibId"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      images = make_shared<string>(boost::any_cast<string>(m["Images"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Urls") != m.end() && !m["Urls"].empty()) {
      urls = make_shared<string>(boost::any_cast<string>(m["Urls"]));
    }
  }


  virtual ~UploadImageToLibRequest() = default;
};
class UploadImageToLibResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UploadImageToLibResponseBody() {}

  explicit UploadImageToLibResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UploadImageToLibResponseBody() = default;
};
class UploadImageToLibResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadImageToLibResponseBody> body{};

  UploadImageToLibResponse() {}

  explicit UploadImageToLibResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadImageToLibResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadImageToLibResponseBody>(model1);
      }
    }
  }


  virtual ~UploadImageToLibResponse() = default;
};
class VerifyCustomOcrTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> testImgUrl{};

  VerifyCustomOcrTemplateRequest() {}

  explicit VerifyCustomOcrTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (testImgUrl) {
      res["TestImgUrl"] = boost::any(*testImgUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("TestImgUrl") != m.end() && !m["TestImgUrl"].empty()) {
      testImgUrl = make_shared<string>(boost::any_cast<string>(m["TestImgUrl"]));
    }
  }


  virtual ~VerifyCustomOcrTemplateRequest() = default;
};
class VerifyCustomOcrTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> recognizeInfo{};
  shared_ptr<string> requestId{};

  VerifyCustomOcrTemplateResponseBody() {}

  explicit VerifyCustomOcrTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (recognizeInfo) {
      res["RecognizeInfo"] = boost::any(*recognizeInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("RecognizeInfo") != m.end() && !m["RecognizeInfo"].empty()) {
      recognizeInfo = make_shared<string>(boost::any_cast<string>(m["RecognizeInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyCustomOcrTemplateResponseBody() = default;
};
class VerifyCustomOcrTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyCustomOcrTemplateResponseBody> body{};

  VerifyCustomOcrTemplateResponse() {}

  explicit VerifyCustomOcrTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyCustomOcrTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyCustomOcrTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyCustomOcrTemplateResponse() = default;
};
class VerifyEmailRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> verifyCode{};

  VerifyEmailRequest() {}

  explicit VerifyEmailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~VerifyEmailRequest() = default;
};
class VerifyEmailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyEmailResponseBody() {}

  explicit VerifyEmailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyEmailResponseBody() = default;
};
class VerifyEmailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyEmailResponseBody> body{};

  VerifyEmailResponse() {}

  explicit VerifyEmailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyEmailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyEmailResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyEmailResponse() = default;
};
class VerifyPhoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> lang{};
  shared_ptr<string> phone{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> verifyCode{};

  VerifyPhoneRequest() {}

  explicit VerifyPhoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~VerifyPhoneRequest() = default;
};
class VerifyPhoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyPhoneResponseBody() {}

  explicit VerifyPhoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyPhoneResponseBody() = default;
};
class VerifyPhoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyPhoneResponseBody> body{};

  VerifyPhoneResponse() {}

  explicit VerifyPhoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyPhoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyPhoneResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyPhoneResponse() = default;
};
class VerifyWebsiteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> lang{};
  shared_ptr<string> sourceIp{};
  shared_ptr<string> verifyMethod{};

  VerifyWebsiteInstanceRequest() {}

  explicit VerifyWebsiteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (verifyMethod) {
      res["VerifyMethod"] = boost::any(*verifyMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("VerifyMethod") != m.end() && !m["VerifyMethod"].empty()) {
      verifyMethod = make_shared<string>(boost::any_cast<string>(m["VerifyMethod"]));
    }
  }


  virtual ~VerifyWebsiteInstanceRequest() = default;
};
class VerifyWebsiteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VerifyWebsiteInstanceResponseBody() {}

  explicit VerifyWebsiteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~VerifyWebsiteInstanceResponseBody() = default;
};
class VerifyWebsiteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyWebsiteInstanceResponseBody> body{};

  VerifyWebsiteInstanceResponse() {}

  explicit VerifyWebsiteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyWebsiteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyWebsiteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyWebsiteInstanceResponse() = default;
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
  AuditItemSubmitResponse auditItemSubmitWithOptions(shared_ptr<AuditItemSubmitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuditItemSubmitResponse auditItemSubmit(shared_ptr<AuditItemSubmitRequest> request);
  CreatCustomOcrTemplateResponse creatCustomOcrTemplateWithOptions(shared_ptr<CreatCustomOcrTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatCustomOcrTemplateResponse creatCustomOcrTemplate(shared_ptr<CreatCustomOcrTemplateRequest> request);
  CreateAuditCallbackResponse createAuditCallbackWithOptions(shared_ptr<CreateAuditCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuditCallbackResponse createAuditCallback(shared_ptr<CreateAuditCallbackRequest> request);
  CreateBizTypeResponse createBizTypeWithOptions(shared_ptr<CreateBizTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBizTypeResponse createBizType(shared_ptr<CreateBizTypeRequest> request);
  CreateCdiBagResponse createCdiBagWithOptions(shared_ptr<CreateCdiBagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCdiBagResponse createCdiBag(shared_ptr<CreateCdiBagRequest> request);
  CreateCdiBaseBagResponse createCdiBaseBagWithOptions(shared_ptr<CreateCdiBaseBagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCdiBaseBagResponse createCdiBaseBag(shared_ptr<CreateCdiBaseBagRequest> request);
  CreateImageLibResponse createImageLibWithOptions(shared_ptr<CreateImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageLibResponse createImageLib(shared_ptr<CreateImageLibRequest> request);
  CreateKeywordResponse createKeywordWithOptions(shared_ptr<CreateKeywordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeywordResponse createKeyword(shared_ptr<CreateKeywordRequest> request);
  CreateKeywordLibResponse createKeywordLibWithOptions(shared_ptr<CreateKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKeywordLibResponse createKeywordLib(shared_ptr<CreateKeywordLibRequest> request);
  CreateWebSiteInstanceResponse createWebSiteInstanceWithOptions(shared_ptr<CreateWebSiteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWebSiteInstanceResponse createWebSiteInstance(shared_ptr<CreateWebSiteInstanceRequest> request);
  CreateWebsiteIndexPageBaselineResponse createWebsiteIndexPageBaselineWithOptions(shared_ptr<CreateWebsiteIndexPageBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWebsiteIndexPageBaselineResponse createWebsiteIndexPageBaseline(shared_ptr<CreateWebsiteIndexPageBaselineRequest> request);
  DeleteBizTypeResponse deleteBizTypeWithOptions(shared_ptr<DeleteBizTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBizTypeResponse deleteBizType(shared_ptr<DeleteBizTypeRequest> request);
  DeleteCustomOcrTemplateResponse deleteCustomOcrTemplateWithOptions(shared_ptr<DeleteCustomOcrTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCustomOcrTemplateResponse deleteCustomOcrTemplate(shared_ptr<DeleteCustomOcrTemplateRequest> request);
  DeleteImageFromLibResponse deleteImageFromLibWithOptions(shared_ptr<DeleteImageFromLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageFromLibResponse deleteImageFromLib(shared_ptr<DeleteImageFromLibRequest> request);
  DeleteImageLibResponse deleteImageLibWithOptions(shared_ptr<DeleteImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageLibResponse deleteImageLib(shared_ptr<DeleteImageLibRequest> request);
  DeleteKeywordResponse deleteKeywordWithOptions(shared_ptr<DeleteKeywordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeywordResponse deleteKeyword(shared_ptr<DeleteKeywordRequest> request);
  DeleteKeywordLibResponse deleteKeywordLibWithOptions(shared_ptr<DeleteKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKeywordLibResponse deleteKeywordLib(shared_ptr<DeleteKeywordLibRequest> request);
  DeleteNotificationContactsResponse deleteNotificationContactsWithOptions(shared_ptr<DeleteNotificationContactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNotificationContactsResponse deleteNotificationContacts(shared_ptr<DeleteNotificationContactsRequest> request);
  DescribeAppInfoResponse describeAppInfoWithOptions(shared_ptr<DescribeAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppInfoResponse describeAppInfo(shared_ptr<DescribeAppInfoRequest> request);
  DescribeAuditCallbackResponse describeAuditCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditCallbackResponse describeAuditCallback();
  DescribeAuditCallbackListResponse describeAuditCallbackListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditCallbackListResponse describeAuditCallbackList();
  DescribeAuditContentResponse describeAuditContentWithOptions(shared_ptr<DescribeAuditContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditContentResponse describeAuditContent(shared_ptr<DescribeAuditContentRequest> request);
  DescribeAuditContentItemResponse describeAuditContentItemWithOptions(shared_ptr<DescribeAuditContentItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditContentItemResponse describeAuditContentItem(shared_ptr<DescribeAuditContentItemRequest> request);
  DescribeAuditRangeResponse describeAuditRangeWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditRangeResponse describeAuditRange();
  DescribeAuditSettingResponse describeAuditSettingWithOptions(shared_ptr<DescribeAuditSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAuditSettingResponse describeAuditSetting(shared_ptr<DescribeAuditSettingRequest> request);
  DescribeBizTypeImageLibResponse describeBizTypeImageLibWithOptions(shared_ptr<DescribeBizTypeImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBizTypeImageLibResponse describeBizTypeImageLib(shared_ptr<DescribeBizTypeImageLibRequest> request);
  DescribeBizTypeSettingResponse describeBizTypeSettingWithOptions(shared_ptr<DescribeBizTypeSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBizTypeSettingResponse describeBizTypeSetting(shared_ptr<DescribeBizTypeSettingRequest> request);
  DescribeBizTypeTextLibResponse describeBizTypeTextLibWithOptions(shared_ptr<DescribeBizTypeTextLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBizTypeTextLibResponse describeBizTypeTextLib(shared_ptr<DescribeBizTypeTextLibRequest> request);
  DescribeBizTypesResponse describeBizTypesWithOptions(shared_ptr<DescribeBizTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBizTypesResponse describeBizTypes(shared_ptr<DescribeBizTypesRequest> request);
  DescribeCloudMonitorServicesResponse describeCloudMonitorServicesWithOptions(shared_ptr<DescribeCloudMonitorServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCloudMonitorServicesResponse describeCloudMonitorServices(shared_ptr<DescribeCloudMonitorServicesRequest> request);
  DescribeCustomOcrTemplateResponse describeCustomOcrTemplateWithOptions(shared_ptr<DescribeCustomOcrTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCustomOcrTemplateResponse describeCustomOcrTemplate(shared_ptr<DescribeCustomOcrTemplateRequest> request);
  DescribeImageFromLibResponse describeImageFromLibWithOptions(shared_ptr<DescribeImageFromLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageFromLibResponse describeImageFromLib(shared_ptr<DescribeImageFromLibRequest> request);
  DescribeImageLibResponse describeImageLibWithOptions(shared_ptr<DescribeImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageLibResponse describeImageLib(shared_ptr<DescribeImageLibRequest> request);
  DescribeImageUploadInfoResponse describeImageUploadInfoWithOptions(shared_ptr<DescribeImageUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeImageUploadInfoResponse describeImageUploadInfo(shared_ptr<DescribeImageUploadInfoRequest> request);
  DescribeKeywordResponse describeKeywordWithOptions(shared_ptr<DescribeKeywordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeywordResponse describeKeyword(shared_ptr<DescribeKeywordRequest> request);
  DescribeKeywordLibResponse describeKeywordLibWithOptions(shared_ptr<DescribeKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKeywordLibResponse describeKeywordLib(shared_ptr<DescribeKeywordLibRequest> request);
  DescribeNotificationSettingResponse describeNotificationSettingWithOptions(shared_ptr<DescribeNotificationSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNotificationSettingResponse describeNotificationSetting(shared_ptr<DescribeNotificationSettingRequest> request);
  DescribeOpenApiRcpStatsResponse describeOpenApiRcpStatsWithOptions(shared_ptr<DescribeOpenApiRcpStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpenApiRcpStatsResponse describeOpenApiRcpStats(shared_ptr<DescribeOpenApiRcpStatsRequest> request);
  DescribeOpenApiUsageResponse describeOpenApiUsageWithOptions(shared_ptr<DescribeOpenApiUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOpenApiUsageResponse describeOpenApiUsage(shared_ptr<DescribeOpenApiUsageRequest> request);
  DescribeOssCallbackSettingResponse describeOssCallbackSettingWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssCallbackSettingResponse describeOssCallbackSetting();
  DescribeOssIncrementCheckSettingResponse describeOssIncrementCheckSettingWithOptions(shared_ptr<DescribeOssIncrementCheckSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssIncrementCheckSettingResponse describeOssIncrementCheckSetting(shared_ptr<DescribeOssIncrementCheckSettingRequest> request);
  DescribeOssIncrementOverviewResponse describeOssIncrementOverviewWithOptions(shared_ptr<DescribeOssIncrementOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssIncrementOverviewResponse describeOssIncrementOverview(shared_ptr<DescribeOssIncrementOverviewRequest> request);
  DescribeOssIncrementStatsResponse describeOssIncrementStatsWithOptions(shared_ptr<DescribeOssIncrementStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssIncrementStatsResponse describeOssIncrementStats(shared_ptr<DescribeOssIncrementStatsRequest> request);
  DescribeOssResultItemsResponse describeOssResultItemsWithOptions(shared_ptr<DescribeOssResultItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssResultItemsResponse describeOssResultItems(shared_ptr<DescribeOssResultItemsRequest> request);
  DescribeOssStockStatusResponse describeOssStockStatusWithOptions(shared_ptr<DescribeOssStockStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssStockStatusResponse describeOssStockStatus(shared_ptr<DescribeOssStockStatusRequest> request);
  DescribeSdkUrlResponse describeSdkUrlWithOptions(shared_ptr<DescribeSdkUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSdkUrlResponse describeSdkUrl(shared_ptr<DescribeSdkUrlRequest> request);
  DescribeUpdatePackageResultResponse describeUpdatePackageResultWithOptions(shared_ptr<DescribeUpdatePackageResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUpdatePackageResultResponse describeUpdatePackageResult(shared_ptr<DescribeUpdatePackageResultRequest> request);
  DescribeUploadInfoResponse describeUploadInfoWithOptions(shared_ptr<DescribeUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUploadInfoResponse describeUploadInfo(shared_ptr<DescribeUploadInfoRequest> request);
  DescribeUsageBillResponse describeUsageBillWithOptions(shared_ptr<DescribeUsageBillRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsageBillResponse describeUsageBill(shared_ptr<DescribeUsageBillRequest> request);
  DescribeUserBizTypesResponse describeUserBizTypesWithOptions(shared_ptr<DescribeUserBizTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserBizTypesResponse describeUserBizTypes(shared_ptr<DescribeUserBizTypesRequest> request);
  DescribeUserStatusResponse describeUserStatusWithOptions(shared_ptr<DescribeUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserStatusResponse describeUserStatus(shared_ptr<DescribeUserStatusRequest> request);
  DescribeViewContentResponse describeViewContentWithOptions(shared_ptr<DescribeViewContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeViewContentResponse describeViewContent(shared_ptr<DescribeViewContentRequest> request);
  DescribeWebsiteIndexPageBaselineResponse describeWebsiteIndexPageBaselineWithOptions(shared_ptr<DescribeWebsiteIndexPageBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteIndexPageBaselineResponse describeWebsiteIndexPageBaseline(shared_ptr<DescribeWebsiteIndexPageBaselineRequest> request);
  DescribeWebsiteInstanceResponse describeWebsiteInstanceWithOptions(shared_ptr<DescribeWebsiteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteInstanceResponse describeWebsiteInstance(shared_ptr<DescribeWebsiteInstanceRequest> request);
  DescribeWebsiteInstanceIdResponse describeWebsiteInstanceIdWithOptions(shared_ptr<DescribeWebsiteInstanceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteInstanceIdResponse describeWebsiteInstanceId(shared_ptr<DescribeWebsiteInstanceIdRequest> request);
  DescribeWebsiteInstanceKeyUrlResponse describeWebsiteInstanceKeyUrlWithOptions(shared_ptr<DescribeWebsiteInstanceKeyUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteInstanceKeyUrlResponse describeWebsiteInstanceKeyUrl(shared_ptr<DescribeWebsiteInstanceKeyUrlRequest> request);
  DescribeWebsiteScanResultResponse describeWebsiteScanResultWithOptions(shared_ptr<DescribeWebsiteScanResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteScanResultResponse describeWebsiteScanResult(shared_ptr<DescribeWebsiteScanResultRequest> request);
  DescribeWebsiteScanResultDetailResponse describeWebsiteScanResultDetailWithOptions(shared_ptr<DescribeWebsiteScanResultDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteScanResultDetailResponse describeWebsiteScanResultDetail(shared_ptr<DescribeWebsiteScanResultDetailRequest> request);
  DescribeWebsiteStatResponse describeWebsiteStatWithOptions(shared_ptr<DescribeWebsiteStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteStatResponse describeWebsiteStat(shared_ptr<DescribeWebsiteStatRequest> request);
  DescribeWebsiteVerifyInfoResponse describeWebsiteVerifyInfoWithOptions(shared_ptr<DescribeWebsiteVerifyInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWebsiteVerifyInfoResponse describeWebsiteVerifyInfo(shared_ptr<DescribeWebsiteVerifyInfoRequest> request);
  ExportKeywordsResponse exportKeywordsWithOptions(shared_ptr<ExportKeywordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportKeywordsResponse exportKeywords(shared_ptr<ExportKeywordsRequest> request);
  ExportOpenApiRcpStatsResponse exportOpenApiRcpStatsWithOptions(shared_ptr<ExportOpenApiRcpStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportOpenApiRcpStatsResponse exportOpenApiRcpStats(shared_ptr<ExportOpenApiRcpStatsRequest> request);
  ExportOssResultResponse exportOssResultWithOptions(shared_ptr<ExportOssResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportOssResultResponse exportOssResult(shared_ptr<ExportOssResultRequest> request);
  GetAuditItemDetailResponse getAuditItemDetailWithOptions(shared_ptr<GetAuditItemDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuditItemDetailResponse getAuditItemDetail(shared_ptr<GetAuditItemDetailRequest> request);
  GetAuditItemListResponse getAuditItemListWithOptions(shared_ptr<GetAuditItemListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuditItemListResponse getAuditItemList(shared_ptr<GetAuditItemListRequest> request);
  GetAuditUserConfResponse getAuditUserConfWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAuditUserConfResponse getAuditUserConf();
  ImportKeywordsResponse importKeywordsWithOptions(shared_ptr<ImportKeywordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportKeywordsResponse importKeywords(shared_ptr<ImportKeywordsRequest> request);
  MarkAuditContentResponse markAuditContentWithOptions(shared_ptr<MarkAuditContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MarkAuditContentResponse markAuditContent(shared_ptr<MarkAuditContentRequest> request);
  MarkAuditContentItemResponse markAuditContentItemWithOptions(shared_ptr<MarkAuditContentItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MarkAuditContentItemResponse markAuditContentItem(shared_ptr<MarkAuditContentItemRequest> request);
  MarkOssResultResponse markOssResultWithOptions(shared_ptr<MarkOssResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MarkOssResultResponse markOssResult(shared_ptr<MarkOssResultRequest> request);
  MarkWebsiteScanResultResponse markWebsiteScanResultWithOptions(shared_ptr<MarkWebsiteScanResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MarkWebsiteScanResultResponse markWebsiteScanResult(shared_ptr<MarkWebsiteScanResultRequest> request);
  RefundCdiBagResponse refundCdiBagWithOptions(shared_ptr<RefundCdiBagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundCdiBagResponse refundCdiBag(shared_ptr<RefundCdiBagRequest> request);
  RefundCdiBaseBagResponse refundCdiBaseBagWithOptions(shared_ptr<RefundCdiBaseBagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundCdiBaseBagResponse refundCdiBaseBag(shared_ptr<RefundCdiBaseBagRequest> request);
  RefundWebSiteInstanceResponse refundWebSiteInstanceWithOptions(shared_ptr<RefundWebSiteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefundWebSiteInstanceResponse refundWebSiteInstance(shared_ptr<RefundWebSiteInstanceRequest> request);
  RenewWebSiteInstanceResponse renewWebSiteInstanceWithOptions(shared_ptr<RenewWebSiteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenewWebSiteInstanceResponse renewWebSiteInstance(shared_ptr<RenewWebSiteInstanceRequest> request);
  SendVerifyCodeToEmailResponse sendVerifyCodeToEmailWithOptions(shared_ptr<SendVerifyCodeToEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerifyCodeToEmailResponse sendVerifyCodeToEmail(shared_ptr<SendVerifyCodeToEmailRequest> request);
  SendVerifyCodeToPhoneResponse sendVerifyCodeToPhoneWithOptions(shared_ptr<SendVerifyCodeToPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendVerifyCodeToPhoneResponse sendVerifyCodeToPhone(shared_ptr<SendVerifyCodeToPhoneRequest> request);
  SendWebsiteFeedbackResponse sendWebsiteFeedbackWithOptions(shared_ptr<SendWebsiteFeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendWebsiteFeedbackResponse sendWebsiteFeedback(shared_ptr<SendWebsiteFeedbackRequest> request);
  UpdateAppPackageResponse updateAppPackageWithOptions(shared_ptr<UpdateAppPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppPackageResponse updateAppPackage(shared_ptr<UpdateAppPackageRequest> request);
  UpdateAuditCallbackResponse updateAuditCallbackWithOptions(shared_ptr<UpdateAuditCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuditCallbackResponse updateAuditCallback(shared_ptr<UpdateAuditCallbackRequest> request);
  UpdateAuditRangeResponse updateAuditRangeWithOptions(shared_ptr<UpdateAuditRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuditRangeResponse updateAuditRange(shared_ptr<UpdateAuditRangeRequest> request);
  UpdateAuditSettingResponse updateAuditSettingWithOptions(shared_ptr<UpdateAuditSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAuditSettingResponse updateAuditSetting(shared_ptr<UpdateAuditSettingRequest> request);
  UpdateBizTypeResponse updateBizTypeWithOptions(shared_ptr<UpdateBizTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBizTypeResponse updateBizType(shared_ptr<UpdateBizTypeRequest> request);
  UpdateBizTypeImageLibResponse updateBizTypeImageLibWithOptions(shared_ptr<UpdateBizTypeImageLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBizTypeImageLibResponse updateBizTypeImageLib(shared_ptr<UpdateBizTypeImageLibRequest> request);
  UpdateBizTypeSettingResponse updateBizTypeSettingWithOptions(shared_ptr<UpdateBizTypeSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBizTypeSettingResponse updateBizTypeSetting(shared_ptr<UpdateBizTypeSettingRequest> request);
  UpdateBizTypeTextLibResponse updateBizTypeTextLibWithOptions(shared_ptr<UpdateBizTypeTextLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateBizTypeTextLibResponse updateBizTypeTextLib(shared_ptr<UpdateBizTypeTextLibRequest> request);
  UpdateCustomOcrTemplateResponse updateCustomOcrTemplateWithOptions(shared_ptr<UpdateCustomOcrTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCustomOcrTemplateResponse updateCustomOcrTemplate(shared_ptr<UpdateCustomOcrTemplateRequest> request);
  UpdateKeywordLibResponse updateKeywordLibWithOptions(shared_ptr<UpdateKeywordLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKeywordLibResponse updateKeywordLib(shared_ptr<UpdateKeywordLibRequest> request);
  UpdateNotificationSettingResponse updateNotificationSettingWithOptions(shared_ptr<UpdateNotificationSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNotificationSettingResponse updateNotificationSetting(shared_ptr<UpdateNotificationSettingRequest> request);
  UpdateOssCallbackSettingResponse updateOssCallbackSettingWithOptions(shared_ptr<UpdateOssCallbackSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOssCallbackSettingResponse updateOssCallbackSetting(shared_ptr<UpdateOssCallbackSettingRequest> request);
  UpdateOssIncrementCheckSettingResponse updateOssIncrementCheckSettingWithOptions(shared_ptr<UpdateOssIncrementCheckSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOssIncrementCheckSettingResponse updateOssIncrementCheckSetting(shared_ptr<UpdateOssIncrementCheckSettingRequest> request);
  UpdateOssStockStatusResponse updateOssStockStatusWithOptions(shared_ptr<UpdateOssStockStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOssStockStatusResponse updateOssStockStatus(shared_ptr<UpdateOssStockStatusRequest> request);
  UpdateWebsiteInstanceResponse updateWebsiteInstanceWithOptions(shared_ptr<UpdateWebsiteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWebsiteInstanceResponse updateWebsiteInstance(shared_ptr<UpdateWebsiteInstanceRequest> request);
  UpdateWebsiteInstanceKeyUrlResponse updateWebsiteInstanceKeyUrlWithOptions(shared_ptr<UpdateWebsiteInstanceKeyUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWebsiteInstanceKeyUrlResponse updateWebsiteInstanceKeyUrl(shared_ptr<UpdateWebsiteInstanceKeyUrlRequest> request);
  UpdateWebsiteInstanceStatusResponse updateWebsiteInstanceStatusWithOptions(shared_ptr<UpdateWebsiteInstanceStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWebsiteInstanceStatusResponse updateWebsiteInstanceStatus(shared_ptr<UpdateWebsiteInstanceStatusRequest> request);
  UpgradeCdiBaseBagResponse upgradeCdiBaseBagWithOptions(shared_ptr<UpgradeCdiBaseBagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeCdiBaseBagResponse upgradeCdiBaseBag(shared_ptr<UpgradeCdiBaseBagRequest> request);
  UploadImageToLibResponse uploadImageToLibWithOptions(shared_ptr<UploadImageToLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadImageToLibResponse uploadImageToLib(shared_ptr<UploadImageToLibRequest> request);
  VerifyCustomOcrTemplateResponse verifyCustomOcrTemplateWithOptions(shared_ptr<VerifyCustomOcrTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyCustomOcrTemplateResponse verifyCustomOcrTemplate(shared_ptr<VerifyCustomOcrTemplateRequest> request);
  VerifyEmailResponse verifyEmailWithOptions(shared_ptr<VerifyEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyEmailResponse verifyEmail(shared_ptr<VerifyEmailRequest> request);
  VerifyPhoneResponse verifyPhoneWithOptions(shared_ptr<VerifyPhoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyPhoneResponse verifyPhone(shared_ptr<VerifyPhoneRequest> request);
  VerifyWebsiteInstanceResponse verifyWebsiteInstanceWithOptions(shared_ptr<VerifyWebsiteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyWebsiteInstanceResponse verifyWebsiteInstance(shared_ptr<VerifyWebsiteInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Green20170823

#endif
