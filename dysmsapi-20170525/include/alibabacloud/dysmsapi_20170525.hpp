// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DYSMSAPI20170525_H_
#define ALIBABACLOUD_DYSMSAPI20170525_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dysmsapi20170525 {
class AddShortUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> effectiveDays{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> shortUrlName{};
  shared_ptr<string> sourceUrl{};

  AddShortUrlRequest() {}

  explicit AddShortUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (effectiveDays) {
      res["EffectiveDays"] = boost::any(*effectiveDays);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (shortUrlName) {
      res["ShortUrlName"] = boost::any(*shortUrlName);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EffectiveDays") != m.end() && !m["EffectiveDays"].empty()) {
      effectiveDays = make_shared<string>(boost::any_cast<string>(m["EffectiveDays"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ShortUrlName") != m.end() && !m["ShortUrlName"].empty()) {
      shortUrlName = make_shared<string>(boost::any_cast<string>(m["ShortUrlName"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
  }


  virtual ~AddShortUrlRequest() = default;
};
class AddShortUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> expireDate{};
  shared_ptr<string> shortUrl{};
  shared_ptr<string> sourceUrl{};

  AddShortUrlResponseBodyData() {}

  explicit AddShortUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (shortUrl) {
      res["ShortUrl"] = boost::any(*shortUrl);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("ShortUrl") != m.end() && !m["ShortUrl"].empty()) {
      shortUrl = make_shared<string>(boost::any_cast<string>(m["ShortUrl"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
  }


  virtual ~AddShortUrlResponseBodyData() = default;
};
class AddShortUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddShortUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddShortUrlResponseBody() {}

  explicit AddShortUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddShortUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddShortUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddShortUrlResponseBody() = default;
};
class AddShortUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddShortUrlResponseBody> body{};

  AddShortUrlResponse() {}

  explicit AddShortUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddShortUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddShortUrlResponseBody>(model1);
      }
    }
  }


  virtual ~AddShortUrlResponse() = default;
};
class AddSmsSignRequestSignFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileContents{};
  shared_ptr<string> fileSuffix{};

  AddSmsSignRequestSignFileList() {}

  explicit AddSmsSignRequestSignFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContents) {
      res["FileContents"] = boost::any(*fileContents);
    }
    if (fileSuffix) {
      res["FileSuffix"] = boost::any(*fileSuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContents") != m.end() && !m["FileContents"].empty()) {
      fileContents = make_shared<string>(boost::any_cast<string>(m["FileContents"]));
    }
    if (m.find("FileSuffix") != m.end() && !m["FileSuffix"].empty()) {
      fileSuffix = make_shared<string>(boost::any_cast<string>(m["FileSuffix"]));
    }
  }


  virtual ~AddSmsSignRequestSignFileList() = default;
};
class AddSmsSignRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<AddSmsSignRequestSignFileList>> signFileList{};
  shared_ptr<string> signName{};
  shared_ptr<long> signSource{};
  shared_ptr<long> signType{};

  AddSmsSignRequest() {}

  explicit AddSmsSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signFileList) {
      vector<boost::any> temp1;
      for(auto item1:*signFileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SignFileList"] = boost::any(temp1);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signSource) {
      res["SignSource"] = boost::any(*signSource);
    }
    if (signType) {
      res["SignType"] = boost::any(*signType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignFileList") != m.end() && !m["SignFileList"].empty()) {
      if (typeid(vector<boost::any>) == m["SignFileList"].type()) {
        vector<AddSmsSignRequestSignFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SignFileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddSmsSignRequestSignFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        signFileList = make_shared<vector<AddSmsSignRequestSignFileList>>(expect1);
      }
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignSource") != m.end() && !m["SignSource"].empty()) {
      signSource = make_shared<long>(boost::any_cast<long>(m["SignSource"]));
    }
    if (m.find("SignType") != m.end() && !m["SignType"].empty()) {
      signType = make_shared<long>(boost::any_cast<long>(m["SignType"]));
    }
  }


  virtual ~AddSmsSignRequest() = default;
};
class AddSmsSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signName{};

  AddSmsSignResponseBody() {}

  explicit AddSmsSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (signName) {
      res["SignName"] = boost::any(*signName);
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
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
  }


  virtual ~AddSmsSignResponseBody() = default;
};
class AddSmsSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSmsSignResponseBody> body{};

  AddSmsSignResponse() {}

  explicit AddSmsSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSmsSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSmsSignResponseBody>(model1);
      }
    }
  }


  virtual ~AddSmsSignResponse() = default;
};
class AddSmsTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateType{};

  AddSmsTemplateRequest() {}

  explicit AddSmsTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~AddSmsTemplateRequest() = default;
};
class AddSmsTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateCode{};

  AddSmsTemplateResponseBody() {}

  explicit AddSmsTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
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
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~AddSmsTemplateResponseBody() = default;
};
class AddSmsTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSmsTemplateResponseBody> body{};

  AddSmsTemplateResponse() {}

  explicit AddSmsTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSmsTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSmsTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddSmsTemplateResponse() = default;
};
class CheckMobilesCardSupportRequest : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> mobiles{};
  shared_ptr<string> templateCode{};

  CheckMobilesCardSupportRequest() {}

  explicit CheckMobilesCardSupportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobiles) {
      res["Mobiles"] = boost::any(*mobiles);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mobiles") != m.end() && !m["Mobiles"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Mobiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Mobiles"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      mobiles = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~CheckMobilesCardSupportRequest() = default;
};
class CheckMobilesCardSupportResponseBodyDataQueryResult : public Darabonba::Model {
public:
  shared_ptr<string> mobile{};
  shared_ptr<bool> support{};

  CheckMobilesCardSupportResponseBodyDataQueryResult() {}

  explicit CheckMobilesCardSupportResponseBodyDataQueryResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    if (support) {
      res["support"] = boost::any(*support);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
    if (m.find("support") != m.end() && !m["support"].empty()) {
      support = make_shared<bool>(boost::any_cast<bool>(m["support"]));
    }
  }


  virtual ~CheckMobilesCardSupportResponseBodyDataQueryResult() = default;
};
class CheckMobilesCardSupportResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CheckMobilesCardSupportResponseBodyDataQueryResult>> queryResult{};

  CheckMobilesCardSupportResponseBodyData() {}

  explicit CheckMobilesCardSupportResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queryResult) {
      vector<boost::any> temp1;
      for(auto item1:*queryResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["queryResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("queryResult") != m.end() && !m["queryResult"].empty()) {
      if (typeid(vector<boost::any>) == m["queryResult"].type()) {
        vector<CheckMobilesCardSupportResponseBodyDataQueryResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["queryResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckMobilesCardSupportResponseBodyDataQueryResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryResult = make_shared<vector<CheckMobilesCardSupportResponseBodyDataQueryResult>>(expect1);
      }
    }
  }


  virtual ~CheckMobilesCardSupportResponseBodyData() = default;
};
class CheckMobilesCardSupportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CheckMobilesCardSupportResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckMobilesCardSupportResponseBody() {}

  explicit CheckMobilesCardSupportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckMobilesCardSupportResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckMobilesCardSupportResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckMobilesCardSupportResponseBody() = default;
};
class CheckMobilesCardSupportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMobilesCardSupportResponseBody> body{};

  CheckMobilesCardSupportResponse() {}

  explicit CheckMobilesCardSupportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMobilesCardSupportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMobilesCardSupportResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMobilesCardSupportResponse() = default;
};
class CreateCardSmsTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> factorys{};
  shared_ptr<string> memo{};
  shared_ptr<map<string, boost::any>> template_{};
  shared_ptr<string> templateName{};

  CreateCardSmsTemplateRequest() {}

  explicit CreateCardSmsTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factorys) {
      res["Factorys"] = boost::any(*factorys);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Factorys") != m.end() && !m["Factorys"].empty()) {
      factorys = make_shared<string>(boost::any_cast<string>(m["Factorys"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Template"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      template_ = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateCardSmsTemplateRequest() = default;
};
class CreateCardSmsTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> factorys{};
  shared_ptr<string> memo{};
  shared_ptr<string> templateShrink{};
  shared_ptr<string> templateName{};

  CreateCardSmsTemplateShrinkRequest() {}

  explicit CreateCardSmsTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factorys) {
      res["Factorys"] = boost::any(*factorys);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (templateShrink) {
      res["Template"] = boost::any(*templateShrink);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Factorys") != m.end() && !m["Factorys"].empty()) {
      factorys = make_shared<string>(boost::any_cast<string>(m["Factorys"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      templateShrink = make_shared<string>(boost::any_cast<string>(m["Template"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateCardSmsTemplateShrinkRequest() = default;
};
class CreateCardSmsTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};

  CreateCardSmsTemplateResponseBodyData() {}

  explicit CreateCardSmsTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~CreateCardSmsTemplateResponseBodyData() = default;
};
class CreateCardSmsTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateCardSmsTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCardSmsTemplateResponseBody() {}

  explicit CreateCardSmsTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateCardSmsTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateCardSmsTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateCardSmsTemplateResponseBody() = default;
};
class CreateCardSmsTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCardSmsTemplateResponseBody> body{};

  CreateCardSmsTemplateResponse() {}

  explicit CreateCardSmsTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCardSmsTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCardSmsTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCardSmsTemplateResponse() = default;
};
class DeleteShortUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sourceUrl{};

  DeleteShortUrlRequest() {}

  explicit DeleteShortUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
  }


  virtual ~DeleteShortUrlRequest() = default;
};
class DeleteShortUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteShortUrlResponseBody() {}

  explicit DeleteShortUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteShortUrlResponseBody() = default;
};
class DeleteShortUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteShortUrlResponseBody> body{};

  DeleteShortUrlResponse() {}

  explicit DeleteShortUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteShortUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteShortUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteShortUrlResponse() = default;
};
class DeleteSmsSignRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> signName{};

  DeleteSmsSignRequest() {}

  explicit DeleteSmsSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
  }


  virtual ~DeleteSmsSignRequest() = default;
};
class DeleteSmsSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signName{};

  DeleteSmsSignResponseBody() {}

  explicit DeleteSmsSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (signName) {
      res["SignName"] = boost::any(*signName);
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
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
  }


  virtual ~DeleteSmsSignResponseBody() = default;
};
class DeleteSmsSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSmsSignResponseBody> body{};

  DeleteSmsSignResponse() {}

  explicit DeleteSmsSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSmsSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSmsSignResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSmsSignResponse() = default;
};
class DeleteSmsTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateCode{};

  DeleteSmsTemplateRequest() {}

  explicit DeleteSmsTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~DeleteSmsTemplateRequest() = default;
};
class DeleteSmsTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateCode{};

  DeleteSmsTemplateResponseBody() {}

  explicit DeleteSmsTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
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
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~DeleteSmsTemplateResponseBody() = default;
};
class DeleteSmsTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSmsTemplateResponseBody> body{};

  DeleteSmsTemplateResponse() {}

  explicit DeleteSmsTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSmsTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSmsTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSmsTemplateResponse() = default;
};
class GetCardSmsLinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> cardCodeType{};
  shared_ptr<long> cardLinkType{};
  shared_ptr<string> cardTemplateCode{};
  shared_ptr<string> cardTemplateParamJson{};
  shared_ptr<string> customShortCodeJson{};
  shared_ptr<string> domain{};
  shared_ptr<string> outId{};
  shared_ptr<string> phoneNumberJson{};
  shared_ptr<string> signNameJson{};

  GetCardSmsLinkRequest() {}

  explicit GetCardSmsLinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardCodeType) {
      res["CardCodeType"] = boost::any(*cardCodeType);
    }
    if (cardLinkType) {
      res["CardLinkType"] = boost::any(*cardLinkType);
    }
    if (cardTemplateCode) {
      res["CardTemplateCode"] = boost::any(*cardTemplateCode);
    }
    if (cardTemplateParamJson) {
      res["CardTemplateParamJson"] = boost::any(*cardTemplateParamJson);
    }
    if (customShortCodeJson) {
      res["CustomShortCodeJson"] = boost::any(*customShortCodeJson);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (phoneNumberJson) {
      res["PhoneNumberJson"] = boost::any(*phoneNumberJson);
    }
    if (signNameJson) {
      res["SignNameJson"] = boost::any(*signNameJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardCodeType") != m.end() && !m["CardCodeType"].empty()) {
      cardCodeType = make_shared<long>(boost::any_cast<long>(m["CardCodeType"]));
    }
    if (m.find("CardLinkType") != m.end() && !m["CardLinkType"].empty()) {
      cardLinkType = make_shared<long>(boost::any_cast<long>(m["CardLinkType"]));
    }
    if (m.find("CardTemplateCode") != m.end() && !m["CardTemplateCode"].empty()) {
      cardTemplateCode = make_shared<string>(boost::any_cast<string>(m["CardTemplateCode"]));
    }
    if (m.find("CardTemplateParamJson") != m.end() && !m["CardTemplateParamJson"].empty()) {
      cardTemplateParamJson = make_shared<string>(boost::any_cast<string>(m["CardTemplateParamJson"]));
    }
    if (m.find("CustomShortCodeJson") != m.end() && !m["CustomShortCodeJson"].empty()) {
      customShortCodeJson = make_shared<string>(boost::any_cast<string>(m["CustomShortCodeJson"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("PhoneNumberJson") != m.end() && !m["PhoneNumberJson"].empty()) {
      phoneNumberJson = make_shared<string>(boost::any_cast<string>(m["PhoneNumberJson"]));
    }
    if (m.find("SignNameJson") != m.end() && !m["SignNameJson"].empty()) {
      signNameJson = make_shared<string>(boost::any_cast<string>(m["SignNameJson"]));
    }
  }


  virtual ~GetCardSmsLinkRequest() = default;
};
class GetCardSmsLinkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cardPhoneNumbers{};
  shared_ptr<string> cardSignNames{};
  shared_ptr<string> cardSmsLinks{};
  shared_ptr<long> cardTmpState{};
  shared_ptr<string> notMediaMobiles{};

  GetCardSmsLinkResponseBodyData() {}

  explicit GetCardSmsLinkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardPhoneNumbers) {
      res["CardPhoneNumbers"] = boost::any(*cardPhoneNumbers);
    }
    if (cardSignNames) {
      res["CardSignNames"] = boost::any(*cardSignNames);
    }
    if (cardSmsLinks) {
      res["CardSmsLinks"] = boost::any(*cardSmsLinks);
    }
    if (cardTmpState) {
      res["CardTmpState"] = boost::any(*cardTmpState);
    }
    if (notMediaMobiles) {
      res["NotMediaMobiles"] = boost::any(*notMediaMobiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardPhoneNumbers") != m.end() && !m["CardPhoneNumbers"].empty()) {
      cardPhoneNumbers = make_shared<string>(boost::any_cast<string>(m["CardPhoneNumbers"]));
    }
    if (m.find("CardSignNames") != m.end() && !m["CardSignNames"].empty()) {
      cardSignNames = make_shared<string>(boost::any_cast<string>(m["CardSignNames"]));
    }
    if (m.find("CardSmsLinks") != m.end() && !m["CardSmsLinks"].empty()) {
      cardSmsLinks = make_shared<string>(boost::any_cast<string>(m["CardSmsLinks"]));
    }
    if (m.find("CardTmpState") != m.end() && !m["CardTmpState"].empty()) {
      cardTmpState = make_shared<long>(boost::any_cast<long>(m["CardTmpState"]));
    }
    if (m.find("NotMediaMobiles") != m.end() && !m["NotMediaMobiles"].empty()) {
      notMediaMobiles = make_shared<string>(boost::any_cast<string>(m["NotMediaMobiles"]));
    }
  }


  virtual ~GetCardSmsLinkResponseBodyData() = default;
};
class GetCardSmsLinkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCardSmsLinkResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetCardSmsLinkResponseBody() {}

  explicit GetCardSmsLinkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCardSmsLinkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCardSmsLinkResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCardSmsLinkResponseBody() = default;
};
class GetCardSmsLinkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCardSmsLinkResponseBody> body{};

  GetCardSmsLinkResponse() {}

  explicit GetCardSmsLinkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCardSmsLinkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCardSmsLinkResponseBody>(model1);
      }
    }
  }


  virtual ~GetCardSmsLinkResponse() = default;
};
class GetMediaResourceIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> extendInfo{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> memo{};
  shared_ptr<string> ossKey{};
  shared_ptr<long> resourceType{};

  GetMediaResourceIdRequest() {}

  explicit GetMediaResourceIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extendInfo) {
      res["ExtendInfo"] = boost::any(*extendInfo);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (ossKey) {
      res["OssKey"] = boost::any(*ossKey);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtendInfo") != m.end() && !m["ExtendInfo"].empty()) {
      extendInfo = make_shared<string>(boost::any_cast<string>(m["ExtendInfo"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("OssKey") != m.end() && !m["OssKey"].empty()) {
      ossKey = make_shared<string>(boost::any_cast<string>(m["OssKey"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["ResourceType"]));
    }
  }


  virtual ~GetMediaResourceIdRequest() = default;
};
class GetMediaResourceIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resUrlDownload{};
  shared_ptr<long> resourceId{};

  GetMediaResourceIdResponseBodyData() {}

  explicit GetMediaResourceIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resUrlDownload) {
      res["ResUrlDownload"] = boost::any(*resUrlDownload);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResUrlDownload") != m.end() && !m["ResUrlDownload"].empty()) {
      resUrlDownload = make_shared<string>(boost::any_cast<string>(m["ResUrlDownload"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<long>(boost::any_cast<long>(m["ResourceId"]));
    }
  }


  virtual ~GetMediaResourceIdResponseBodyData() = default;
};
class GetMediaResourceIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetMediaResourceIdResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetMediaResourceIdResponseBody() {}

  explicit GetMediaResourceIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMediaResourceIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMediaResourceIdResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetMediaResourceIdResponseBody() = default;
};
class GetMediaResourceIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMediaResourceIdResponseBody> body{};

  GetMediaResourceIdResponse() {}

  explicit GetMediaResourceIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaResourceIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaResourceIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaResourceIdResponse() = default;
};
class GetOSSInfoForCardTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> aliUid{};
  shared_ptr<string> bucket{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> host{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> startPath{};

  GetOSSInfoForCardTemplateResponseBodyData() {}

  explicit GetOSSInfoForCardTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (startPath) {
      res["StartPath"] = boost::any(*startPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("StartPath") != m.end() && !m["StartPath"].empty()) {
      startPath = make_shared<string>(boost::any_cast<string>(m["StartPath"]));
    }
  }


  virtual ~GetOSSInfoForCardTemplateResponseBodyData() = default;
};
class GetOSSInfoForCardTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetOSSInfoForCardTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOSSInfoForCardTemplateResponseBody() {}

  explicit GetOSSInfoForCardTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetOSSInfoForCardTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOSSInfoForCardTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetOSSInfoForCardTemplateResponseBody() = default;
};
class GetOSSInfoForCardTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOSSInfoForCardTemplateResponseBody> body{};

  GetOSSInfoForCardTemplateResponse() {}

  explicit GetOSSInfoForCardTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOSSInfoForCardTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOSSInfoForCardTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetOSSInfoForCardTemplateResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifySmsSignRequestSignFileList : public Darabonba::Model {
public:
  shared_ptr<string> fileContents{};
  shared_ptr<string> fileSuffix{};

  ModifySmsSignRequestSignFileList() {}

  explicit ModifySmsSignRequestSignFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContents) {
      res["FileContents"] = boost::any(*fileContents);
    }
    if (fileSuffix) {
      res["FileSuffix"] = boost::any(*fileSuffix);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContents") != m.end() && !m["FileContents"].empty()) {
      fileContents = make_shared<string>(boost::any_cast<string>(m["FileContents"]));
    }
    if (m.find("FileSuffix") != m.end() && !m["FileSuffix"].empty()) {
      fileSuffix = make_shared<string>(boost::any_cast<string>(m["FileSuffix"]));
    }
  }


  virtual ~ModifySmsSignRequestSignFileList() = default;
};
class ModifySmsSignRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<vector<ModifySmsSignRequestSignFileList>> signFileList{};
  shared_ptr<string> signName{};
  shared_ptr<long> signSource{};
  shared_ptr<long> signType{};

  ModifySmsSignRequest() {}

  explicit ModifySmsSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signFileList) {
      vector<boost::any> temp1;
      for(auto item1:*signFileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SignFileList"] = boost::any(temp1);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signSource) {
      res["SignSource"] = boost::any(*signSource);
    }
    if (signType) {
      res["SignType"] = boost::any(*signType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignFileList") != m.end() && !m["SignFileList"].empty()) {
      if (typeid(vector<boost::any>) == m["SignFileList"].type()) {
        vector<ModifySmsSignRequestSignFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SignFileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifySmsSignRequestSignFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        signFileList = make_shared<vector<ModifySmsSignRequestSignFileList>>(expect1);
      }
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignSource") != m.end() && !m["SignSource"].empty()) {
      signSource = make_shared<long>(boost::any_cast<long>(m["SignSource"]));
    }
    if (m.find("SignType") != m.end() && !m["SignType"].empty()) {
      signType = make_shared<long>(boost::any_cast<long>(m["SignType"]));
    }
  }


  virtual ~ModifySmsSignRequest() = default;
};
class ModifySmsSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signName{};

  ModifySmsSignResponseBody() {}

  explicit ModifySmsSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (signName) {
      res["SignName"] = boost::any(*signName);
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
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
  }


  virtual ~ModifySmsSignResponseBody() = default;
};
class ModifySmsSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySmsSignResponseBody> body{};

  ModifySmsSignResponse() {}

  explicit ModifySmsSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySmsSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySmsSignResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySmsSignResponse() = default;
};
class ModifySmsTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> remark{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateType{};

  ModifySmsTemplateRequest() {}

  explicit ModifySmsTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~ModifySmsTemplateRequest() = default;
};
class ModifySmsTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateCode{};

  ModifySmsTemplateResponseBody() {}

  explicit ModifySmsTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
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
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~ModifySmsTemplateResponseBody() = default;
};
class ModifySmsTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySmsTemplateResponseBody> body{};

  ModifySmsTemplateResponse() {}

  explicit ModifySmsTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySmsTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySmsTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySmsTemplateResponse() = default;
};
class QueryCardSmsTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};

  QueryCardSmsTemplateRequest() {}

  explicit QueryCardSmsTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~QueryCardSmsTemplateRequest() = default;
};
class QueryCardSmsTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> templates{};

  QueryCardSmsTemplateResponseBodyData() {}

  explicit QueryCardSmsTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templates) {
      res["Templates"] = boost::any(*templates);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Templates"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      templates = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~QueryCardSmsTemplateResponseBodyData() = default;
};
class QueryCardSmsTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryCardSmsTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryCardSmsTemplateResponseBody() {}

  explicit QueryCardSmsTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCardSmsTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCardSmsTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCardSmsTemplateResponseBody() = default;
};
class QueryCardSmsTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCardSmsTemplateResponseBody> body{};

  QueryCardSmsTemplateResponse() {}

  explicit QueryCardSmsTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCardSmsTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCardSmsTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCardSmsTemplateResponse() = default;
};
class QueryCardSmsTemplateReportRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> startDate{};
  shared_ptr<vector<string>> templateCodes{};

  QueryCardSmsTemplateReportRequest() {}

  explicit QueryCardSmsTemplateReportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (templateCodes) {
      res["TemplateCodes"] = boost::any(*templateCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TemplateCodes") != m.end() && !m["TemplateCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateCodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryCardSmsTemplateReportRequest() = default;
};
class QueryCardSmsTemplateReportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryCardSmsTemplateReportResponseBody() {}

  explicit QueryCardSmsTemplateReportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCardSmsTemplateReportResponseBody() = default;
};
class QueryCardSmsTemplateReportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCardSmsTemplateReportResponseBody> body{};

  QueryCardSmsTemplateReportResponse() {}

  explicit QueryCardSmsTemplateReportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCardSmsTemplateReportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCardSmsTemplateReportResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCardSmsTemplateReportResponse() = default;
};
class QuerySendDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> sendDate{};

  QuerySendDetailsRequest() {}

  explicit QuerySendDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
  }


  virtual ~QuerySendDetailsRequest() = default;
};
class QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errCode{};
  shared_ptr<string> outId{};
  shared_ptr<string> phoneNum{};
  shared_ptr<string> receiveDate{};
  shared_ptr<string> sendDate{};
  shared_ptr<long> sendStatus{};
  shared_ptr<string> templateCode{};

  QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO() {}

  explicit QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (phoneNum) {
      res["PhoneNum"] = boost::any(*phoneNum);
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("PhoneNum") != m.end() && !m["PhoneNum"].empty()) {
      phoneNum = make_shared<string>(boost::any_cast<string>(m["PhoneNum"]));
    }
    if (m.find("ReceiveDate") != m.end() && !m["ReceiveDate"].empty()) {
      receiveDate = make_shared<string>(boost::any_cast<string>(m["ReceiveDate"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
    if (m.find("SendStatus") != m.end() && !m["SendStatus"].empty()) {
      sendStatus = make_shared<long>(boost::any_cast<long>(m["SendStatus"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO() = default;
};
class QuerySendDetailsResponseBodySmsSendDetailDTOs : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO>> smsSendDetailDTO{};

  QuerySendDetailsResponseBodySmsSendDetailDTOs() {}

  explicit QuerySendDetailsResponseBodySmsSendDetailDTOs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (smsSendDetailDTO) {
      vector<boost::any> temp1;
      for(auto item1:*smsSendDetailDTO){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmsSendDetailDTO"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SmsSendDetailDTO") != m.end() && !m["SmsSendDetailDTO"].empty()) {
      if (typeid(vector<boost::any>) == m["SmsSendDetailDTO"].type()) {
        vector<QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmsSendDetailDTO"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smsSendDetailDTO = make_shared<vector<QuerySendDetailsResponseBodySmsSendDetailDTOsSmsSendDetailDTO>>(expect1);
      }
    }
  }


  virtual ~QuerySendDetailsResponseBodySmsSendDetailDTOs() = default;
};
class QuerySendDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<QuerySendDetailsResponseBodySmsSendDetailDTOs> smsSendDetailDTOs{};
  shared_ptr<string> totalCount{};

  QuerySendDetailsResponseBody() {}

  explicit QuerySendDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (smsSendDetailDTOs) {
      res["SmsSendDetailDTOs"] = smsSendDetailDTOs ? boost::any(smsSendDetailDTOs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("SmsSendDetailDTOs") != m.end() && !m["SmsSendDetailDTOs"].empty()) {
      if (typeid(map<string, boost::any>) == m["SmsSendDetailDTOs"].type()) {
        QuerySendDetailsResponseBodySmsSendDetailDTOs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SmsSendDetailDTOs"]));
        smsSendDetailDTOs = make_shared<QuerySendDetailsResponseBodySmsSendDetailDTOs>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~QuerySendDetailsResponseBody() = default;
};
class QuerySendDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySendDetailsResponseBody> body{};

  QuerySendDetailsResponse() {}

  explicit QuerySendDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySendDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySendDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySendDetailsResponse() = default;
};
class QuerySendStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<long> isGlobe{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> signName{};
  shared_ptr<string> startDate{};
  shared_ptr<long> templateType{};

  QuerySendStatisticsRequest() {}

  explicit QuerySendStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (isGlobe) {
      res["IsGlobe"] = boost::any(*isGlobe);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("IsGlobe") != m.end() && !m["IsGlobe"].empty()) {
      isGlobe = make_shared<long>(boost::any_cast<long>(m["IsGlobe"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~QuerySendStatisticsRequest() = default;
};
class QuerySendStatisticsResponseBodyDataTargetList : public Darabonba::Model {
public:
  shared_ptr<long> noRespondedCount{};
  shared_ptr<long> respondedFailCount{};
  shared_ptr<long> respondedSuccessCount{};
  shared_ptr<string> sendDate{};
  shared_ptr<long> totalCount{};

  QuerySendStatisticsResponseBodyDataTargetList() {}

  explicit QuerySendStatisticsResponseBodyDataTargetList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (noRespondedCount) {
      res["NoRespondedCount"] = boost::any(*noRespondedCount);
    }
    if (respondedFailCount) {
      res["RespondedFailCount"] = boost::any(*respondedFailCount);
    }
    if (respondedSuccessCount) {
      res["RespondedSuccessCount"] = boost::any(*respondedSuccessCount);
    }
    if (sendDate) {
      res["SendDate"] = boost::any(*sendDate);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NoRespondedCount") != m.end() && !m["NoRespondedCount"].empty()) {
      noRespondedCount = make_shared<long>(boost::any_cast<long>(m["NoRespondedCount"]));
    }
    if (m.find("RespondedFailCount") != m.end() && !m["RespondedFailCount"].empty()) {
      respondedFailCount = make_shared<long>(boost::any_cast<long>(m["RespondedFailCount"]));
    }
    if (m.find("RespondedSuccessCount") != m.end() && !m["RespondedSuccessCount"].empty()) {
      respondedSuccessCount = make_shared<long>(boost::any_cast<long>(m["RespondedSuccessCount"]));
    }
    if (m.find("SendDate") != m.end() && !m["SendDate"].empty()) {
      sendDate = make_shared<string>(boost::any_cast<string>(m["SendDate"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QuerySendStatisticsResponseBodyDataTargetList() = default;
};
class QuerySendStatisticsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySendStatisticsResponseBodyDataTargetList>> targetList{};
  shared_ptr<long> totalSize{};

  QuerySendStatisticsResponseBodyData() {}

  explicit QuerySendStatisticsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetList) {
      vector<boost::any> temp1;
      for(auto item1:*targetList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetList"] = boost::any(temp1);
    }
    if (totalSize) {
      res["TotalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetList") != m.end() && !m["TargetList"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetList"].type()) {
        vector<QuerySendStatisticsResponseBodyDataTargetList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySendStatisticsResponseBodyDataTargetList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetList = make_shared<vector<QuerySendStatisticsResponseBodyDataTargetList>>(expect1);
      }
    }
    if (m.find("TotalSize") != m.end() && !m["TotalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["TotalSize"]));
    }
  }


  virtual ~QuerySendStatisticsResponseBodyData() = default;
};
class QuerySendStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QuerySendStatisticsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QuerySendStatisticsResponseBody() {}

  explicit QuerySendStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySendStatisticsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySendStatisticsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QuerySendStatisticsResponseBody() = default;
};
class QuerySendStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySendStatisticsResponseBody> body{};

  QuerySendStatisticsResponse() {}

  explicit QuerySendStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySendStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySendStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySendStatisticsResponse() = default;
};
class QueryShortUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> shortUrl{};

  QueryShortUrlRequest() {}

  explicit QueryShortUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (shortUrl) {
      res["ShortUrl"] = boost::any(*shortUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ShortUrl") != m.end() && !m["ShortUrl"].empty()) {
      shortUrl = make_shared<string>(boost::any_cast<string>(m["ShortUrl"]));
    }
  }


  virtual ~QueryShortUrlRequest() = default;
};
class QueryShortUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createDate{};
  shared_ptr<string> expireDate{};
  shared_ptr<string> pageViewCount{};
  shared_ptr<string> shortUrl{};
  shared_ptr<string> shortUrlName{};
  shared_ptr<string> shortUrlStatus{};
  shared_ptr<string> sourceUrl{};
  shared_ptr<string> uniqueVisitorCount{};

  QueryShortUrlResponseBodyData() {}

  explicit QueryShortUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (expireDate) {
      res["ExpireDate"] = boost::any(*expireDate);
    }
    if (pageViewCount) {
      res["PageViewCount"] = boost::any(*pageViewCount);
    }
    if (shortUrl) {
      res["ShortUrl"] = boost::any(*shortUrl);
    }
    if (shortUrlName) {
      res["ShortUrlName"] = boost::any(*shortUrlName);
    }
    if (shortUrlStatus) {
      res["ShortUrlStatus"] = boost::any(*shortUrlStatus);
    }
    if (sourceUrl) {
      res["SourceUrl"] = boost::any(*sourceUrl);
    }
    if (uniqueVisitorCount) {
      res["UniqueVisitorCount"] = boost::any(*uniqueVisitorCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("ExpireDate") != m.end() && !m["ExpireDate"].empty()) {
      expireDate = make_shared<string>(boost::any_cast<string>(m["ExpireDate"]));
    }
    if (m.find("PageViewCount") != m.end() && !m["PageViewCount"].empty()) {
      pageViewCount = make_shared<string>(boost::any_cast<string>(m["PageViewCount"]));
    }
    if (m.find("ShortUrl") != m.end() && !m["ShortUrl"].empty()) {
      shortUrl = make_shared<string>(boost::any_cast<string>(m["ShortUrl"]));
    }
    if (m.find("ShortUrlName") != m.end() && !m["ShortUrlName"].empty()) {
      shortUrlName = make_shared<string>(boost::any_cast<string>(m["ShortUrlName"]));
    }
    if (m.find("ShortUrlStatus") != m.end() && !m["ShortUrlStatus"].empty()) {
      shortUrlStatus = make_shared<string>(boost::any_cast<string>(m["ShortUrlStatus"]));
    }
    if (m.find("SourceUrl") != m.end() && !m["SourceUrl"].empty()) {
      sourceUrl = make_shared<string>(boost::any_cast<string>(m["SourceUrl"]));
    }
    if (m.find("UniqueVisitorCount") != m.end() && !m["UniqueVisitorCount"].empty()) {
      uniqueVisitorCount = make_shared<string>(boost::any_cast<string>(m["UniqueVisitorCount"]));
    }
  }


  virtual ~QueryShortUrlResponseBodyData() = default;
};
class QueryShortUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryShortUrlResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryShortUrlResponseBody() {}

  explicit QueryShortUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryShortUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryShortUrlResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryShortUrlResponseBody() = default;
};
class QueryShortUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryShortUrlResponseBody> body{};

  QueryShortUrlResponse() {}

  explicit QueryShortUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryShortUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryShortUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryShortUrlResponse() = default;
};
class QuerySmsSignRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> signName{};

  QuerySmsSignRequest() {}

  explicit QuerySmsSignRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
  }


  virtual ~QuerySmsSignRequest() = default;
};
class QuerySmsSignResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> createDate{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> signName{};
  shared_ptr<long> signStatus{};

  QuerySmsSignResponseBody() {}

  explicit QuerySmsSignResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (signStatus) {
      res["SignStatus"] = boost::any(*signStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SignStatus") != m.end() && !m["SignStatus"].empty()) {
      signStatus = make_shared<long>(boost::any_cast<long>(m["SignStatus"]));
    }
  }


  virtual ~QuerySmsSignResponseBody() = default;
};
class QuerySmsSignResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmsSignResponseBody> body{};

  QuerySmsSignResponse() {}

  explicit QuerySmsSignResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmsSignResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmsSignResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmsSignResponse() = default;
};
class QuerySmsSignListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QuerySmsSignListRequest() {}

  explicit QuerySmsSignListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QuerySmsSignListRequest() = default;
};
class QuerySmsSignListResponseBodySmsSignListReason : public Darabonba::Model {
public:
  shared_ptr<string> rejectDate{};
  shared_ptr<string> rejectInfo{};
  shared_ptr<string> rejectSubInfo{};

  QuerySmsSignListResponseBodySmsSignListReason() {}

  explicit QuerySmsSignListResponseBodySmsSignListReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rejectDate) {
      res["RejectDate"] = boost::any(*rejectDate);
    }
    if (rejectInfo) {
      res["RejectInfo"] = boost::any(*rejectInfo);
    }
    if (rejectSubInfo) {
      res["RejectSubInfo"] = boost::any(*rejectSubInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RejectDate") != m.end() && !m["RejectDate"].empty()) {
      rejectDate = make_shared<string>(boost::any_cast<string>(m["RejectDate"]));
    }
    if (m.find("RejectInfo") != m.end() && !m["RejectInfo"].empty()) {
      rejectInfo = make_shared<string>(boost::any_cast<string>(m["RejectInfo"]));
    }
    if (m.find("RejectSubInfo") != m.end() && !m["RejectSubInfo"].empty()) {
      rejectSubInfo = make_shared<string>(boost::any_cast<string>(m["RejectSubInfo"]));
    }
  }


  virtual ~QuerySmsSignListResponseBodySmsSignListReason() = default;
};
class QuerySmsSignListResponseBodySmsSignList : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> businessType{};
  shared_ptr<string> createDate{};
  shared_ptr<string> orderId{};
  shared_ptr<QuerySmsSignListResponseBodySmsSignListReason> reason{};
  shared_ptr<string> signName{};

  QuerySmsSignListResponseBodySmsSignList() {}

  explicit QuerySmsSignListResponseBodySmsSignList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (businessType) {
      res["BusinessType"] = boost::any(*businessType);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("BusinessType") != m.end() && !m["BusinessType"].empty()) {
      businessType = make_shared<string>(boost::any_cast<string>(m["BusinessType"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        QuerySmsSignListResponseBodySmsSignListReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<QuerySmsSignListResponseBodySmsSignListReason>(model1);
      }
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
  }


  virtual ~QuerySmsSignListResponseBodySmsSignList() = default;
};
class QuerySmsSignListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySmsSignListResponseBodySmsSignList>> smsSignList{};
  shared_ptr<long> totalCount{};

  QuerySmsSignListResponseBody() {}

  explicit QuerySmsSignListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smsSignList) {
      vector<boost::any> temp1;
      for(auto item1:*smsSignList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmsSignList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmsSignList") != m.end() && !m["SmsSignList"].empty()) {
      if (typeid(vector<boost::any>) == m["SmsSignList"].type()) {
        vector<QuerySmsSignListResponseBodySmsSignList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmsSignList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySmsSignListResponseBodySmsSignList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smsSignList = make_shared<vector<QuerySmsSignListResponseBodySmsSignList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QuerySmsSignListResponseBody() = default;
};
class QuerySmsSignListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmsSignListResponseBody> body{};

  QuerySmsSignListResponse() {}

  explicit QuerySmsSignListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmsSignListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmsSignListResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmsSignListResponse() = default;
};
class QuerySmsTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> templateCode{};

  QuerySmsTemplateRequest() {}

  explicit QuerySmsTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~QuerySmsTemplateRequest() = default;
};
class QuerySmsTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> createDate{};
  shared_ptr<string> message{};
  shared_ptr<string> reason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateStatus{};
  shared_ptr<long> templateType{};

  QuerySmsTemplateResponseBody() {}

  explicit QuerySmsTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateStatus) {
      res["TemplateStatus"] = boost::any(*templateStatus);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateStatus") != m.end() && !m["TemplateStatus"].empty()) {
      templateStatus = make_shared<long>(boost::any_cast<long>(m["TemplateStatus"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~QuerySmsTemplateResponseBody() = default;
};
class QuerySmsTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmsTemplateResponseBody> body{};

  QuerySmsTemplateResponse() {}

  explicit QuerySmsTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmsTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmsTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmsTemplateResponse() = default;
};
class QuerySmsTemplateListRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  QuerySmsTemplateListRequest() {}

  explicit QuerySmsTemplateListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~QuerySmsTemplateListRequest() = default;
};
class QuerySmsTemplateListResponseBodySmsTemplateListReason : public Darabonba::Model {
public:
  shared_ptr<string> rejectDate{};
  shared_ptr<string> rejectInfo{};
  shared_ptr<string> rejectSubInfo{};

  QuerySmsTemplateListResponseBodySmsTemplateListReason() {}

  explicit QuerySmsTemplateListResponseBodySmsTemplateListReason(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rejectDate) {
      res["RejectDate"] = boost::any(*rejectDate);
    }
    if (rejectInfo) {
      res["RejectInfo"] = boost::any(*rejectInfo);
    }
    if (rejectSubInfo) {
      res["RejectSubInfo"] = boost::any(*rejectSubInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RejectDate") != m.end() && !m["RejectDate"].empty()) {
      rejectDate = make_shared<string>(boost::any_cast<string>(m["RejectDate"]));
    }
    if (m.find("RejectInfo") != m.end() && !m["RejectInfo"].empty()) {
      rejectInfo = make_shared<string>(boost::any_cast<string>(m["RejectInfo"]));
    }
    if (m.find("RejectSubInfo") != m.end() && !m["RejectSubInfo"].empty()) {
      rejectSubInfo = make_shared<string>(boost::any_cast<string>(m["RejectSubInfo"]));
    }
  }


  virtual ~QuerySmsTemplateListResponseBodySmsTemplateListReason() = default;
};
class QuerySmsTemplateListResponseBodySmsTemplateList : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> createDate{};
  shared_ptr<string> orderId{};
  shared_ptr<long> outerTemplateType{};
  shared_ptr<QuerySmsTemplateListResponseBodySmsTemplateListReason> reason{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateContent{};
  shared_ptr<string> templateName{};
  shared_ptr<long> templateType{};

  QuerySmsTemplateListResponseBodySmsTemplateList() {}

  explicit QuerySmsTemplateListResponseBodySmsTemplateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (outerTemplateType) {
      res["OuterTemplateType"] = boost::any(*outerTemplateType);
    }
    if (reason) {
      res["Reason"] = reason ? boost::any(reason->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateContent) {
      res["TemplateContent"] = boost::any(*templateContent);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OuterTemplateType") != m.end() && !m["OuterTemplateType"].empty()) {
      outerTemplateType = make_shared<long>(boost::any_cast<long>(m["OuterTemplateType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      if (typeid(map<string, boost::any>) == m["Reason"].type()) {
        QuerySmsTemplateListResponseBodySmsTemplateListReason model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Reason"]));
        reason = make_shared<QuerySmsTemplateListResponseBodySmsTemplateListReason>(model1);
      }
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateContent") != m.end() && !m["TemplateContent"].empty()) {
      templateContent = make_shared<string>(boost::any_cast<string>(m["TemplateContent"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<long>(boost::any_cast<long>(m["TemplateType"]));
    }
  }


  virtual ~QuerySmsTemplateListResponseBodySmsTemplateList() = default;
};
class QuerySmsTemplateListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<QuerySmsTemplateListResponseBodySmsTemplateList>> smsTemplateList{};
  shared_ptr<long> totalCount{};

  QuerySmsTemplateListResponseBody() {}

  explicit QuerySmsTemplateListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (smsTemplateList) {
      vector<boost::any> temp1;
      for(auto item1:*smsTemplateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SmsTemplateList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SmsTemplateList") != m.end() && !m["SmsTemplateList"].empty()) {
      if (typeid(vector<boost::any>) == m["SmsTemplateList"].type()) {
        vector<QuerySmsTemplateListResponseBodySmsTemplateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SmsTemplateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySmsTemplateListResponseBodySmsTemplateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        smsTemplateList = make_shared<vector<QuerySmsTemplateListResponseBodySmsTemplateList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QuerySmsTemplateListResponseBody() = default;
};
class QuerySmsTemplateListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySmsTemplateListResponseBody> body{};

  QuerySmsTemplateListResponse() {}

  explicit QuerySmsTemplateListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySmsTemplateListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySmsTemplateListResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySmsTemplateListResponse() = default;
};
class SendBatchCardSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cardTemplateCode{};
  shared_ptr<string> cardTemplateParamJson{};
  shared_ptr<string> digitalTemplateCode{};
  shared_ptr<string> digitalTemplateParamJson{};
  shared_ptr<string> fallbackType{};
  shared_ptr<string> outId{};
  shared_ptr<string> phoneNumberJson{};
  shared_ptr<string> signNameJson{};
  shared_ptr<string> smsTemplateCode{};
  shared_ptr<string> smsTemplateParamJson{};
  shared_ptr<string> smsUpExtendCodeJson{};

  SendBatchCardSmsRequest() {}

  explicit SendBatchCardSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardTemplateCode) {
      res["CardTemplateCode"] = boost::any(*cardTemplateCode);
    }
    if (cardTemplateParamJson) {
      res["CardTemplateParamJson"] = boost::any(*cardTemplateParamJson);
    }
    if (digitalTemplateCode) {
      res["DigitalTemplateCode"] = boost::any(*digitalTemplateCode);
    }
    if (digitalTemplateParamJson) {
      res["DigitalTemplateParamJson"] = boost::any(*digitalTemplateParamJson);
    }
    if (fallbackType) {
      res["FallbackType"] = boost::any(*fallbackType);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (phoneNumberJson) {
      res["PhoneNumberJson"] = boost::any(*phoneNumberJson);
    }
    if (signNameJson) {
      res["SignNameJson"] = boost::any(*signNameJson);
    }
    if (smsTemplateCode) {
      res["SmsTemplateCode"] = boost::any(*smsTemplateCode);
    }
    if (smsTemplateParamJson) {
      res["SmsTemplateParamJson"] = boost::any(*smsTemplateParamJson);
    }
    if (smsUpExtendCodeJson) {
      res["SmsUpExtendCodeJson"] = boost::any(*smsUpExtendCodeJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardTemplateCode") != m.end() && !m["CardTemplateCode"].empty()) {
      cardTemplateCode = make_shared<string>(boost::any_cast<string>(m["CardTemplateCode"]));
    }
    if (m.find("CardTemplateParamJson") != m.end() && !m["CardTemplateParamJson"].empty()) {
      cardTemplateParamJson = make_shared<string>(boost::any_cast<string>(m["CardTemplateParamJson"]));
    }
    if (m.find("DigitalTemplateCode") != m.end() && !m["DigitalTemplateCode"].empty()) {
      digitalTemplateCode = make_shared<string>(boost::any_cast<string>(m["DigitalTemplateCode"]));
    }
    if (m.find("DigitalTemplateParamJson") != m.end() && !m["DigitalTemplateParamJson"].empty()) {
      digitalTemplateParamJson = make_shared<string>(boost::any_cast<string>(m["DigitalTemplateParamJson"]));
    }
    if (m.find("FallbackType") != m.end() && !m["FallbackType"].empty()) {
      fallbackType = make_shared<string>(boost::any_cast<string>(m["FallbackType"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("PhoneNumberJson") != m.end() && !m["PhoneNumberJson"].empty()) {
      phoneNumberJson = make_shared<string>(boost::any_cast<string>(m["PhoneNumberJson"]));
    }
    if (m.find("SignNameJson") != m.end() && !m["SignNameJson"].empty()) {
      signNameJson = make_shared<string>(boost::any_cast<string>(m["SignNameJson"]));
    }
    if (m.find("SmsTemplateCode") != m.end() && !m["SmsTemplateCode"].empty()) {
      smsTemplateCode = make_shared<string>(boost::any_cast<string>(m["SmsTemplateCode"]));
    }
    if (m.find("SmsTemplateParamJson") != m.end() && !m["SmsTemplateParamJson"].empty()) {
      smsTemplateParamJson = make_shared<string>(boost::any_cast<string>(m["SmsTemplateParamJson"]));
    }
    if (m.find("SmsUpExtendCodeJson") != m.end() && !m["SmsUpExtendCodeJson"].empty()) {
      smsUpExtendCodeJson = make_shared<string>(boost::any_cast<string>(m["SmsUpExtendCodeJson"]));
    }
  }


  virtual ~SendBatchCardSmsRequest() = default;
};
class SendBatchCardSmsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizCardId{};
  shared_ptr<string> bizDigitalId{};
  shared_ptr<string> bizSmsId{};
  shared_ptr<long> cardTmpState{};
  shared_ptr<string> mediaMobiles{};
  shared_ptr<string> notMediaMobiles{};

  SendBatchCardSmsResponseBodyData() {}

  explicit SendBatchCardSmsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCardId) {
      res["BizCardId"] = boost::any(*bizCardId);
    }
    if (bizDigitalId) {
      res["BizDigitalId"] = boost::any(*bizDigitalId);
    }
    if (bizSmsId) {
      res["BizSmsId"] = boost::any(*bizSmsId);
    }
    if (cardTmpState) {
      res["CardTmpState"] = boost::any(*cardTmpState);
    }
    if (mediaMobiles) {
      res["MediaMobiles"] = boost::any(*mediaMobiles);
    }
    if (notMediaMobiles) {
      res["NotMediaMobiles"] = boost::any(*notMediaMobiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCardId") != m.end() && !m["BizCardId"].empty()) {
      bizCardId = make_shared<string>(boost::any_cast<string>(m["BizCardId"]));
    }
    if (m.find("BizDigitalId") != m.end() && !m["BizDigitalId"].empty()) {
      bizDigitalId = make_shared<string>(boost::any_cast<string>(m["BizDigitalId"]));
    }
    if (m.find("BizSmsId") != m.end() && !m["BizSmsId"].empty()) {
      bizSmsId = make_shared<string>(boost::any_cast<string>(m["BizSmsId"]));
    }
    if (m.find("CardTmpState") != m.end() && !m["CardTmpState"].empty()) {
      cardTmpState = make_shared<long>(boost::any_cast<long>(m["CardTmpState"]));
    }
    if (m.find("MediaMobiles") != m.end() && !m["MediaMobiles"].empty()) {
      mediaMobiles = make_shared<string>(boost::any_cast<string>(m["MediaMobiles"]));
    }
    if (m.find("NotMediaMobiles") != m.end() && !m["NotMediaMobiles"].empty()) {
      notMediaMobiles = make_shared<string>(boost::any_cast<string>(m["NotMediaMobiles"]));
    }
  }


  virtual ~SendBatchCardSmsResponseBodyData() = default;
};
class SendBatchCardSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendBatchCardSmsResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendBatchCardSmsResponseBody() {}

  explicit SendBatchCardSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendBatchCardSmsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendBatchCardSmsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendBatchCardSmsResponseBody() = default;
};
class SendBatchCardSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendBatchCardSmsResponseBody> body{};

  SendBatchCardSmsResponse() {}

  explicit SendBatchCardSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendBatchCardSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendBatchCardSmsResponseBody>(model1);
      }
    }
  }


  virtual ~SendBatchCardSmsResponse() = default;
};
class SendBatchSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumberJson{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> signNameJson{};
  shared_ptr<string> smsUpExtendCodeJson{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParamJson{};

  SendBatchSmsRequest() {}

  explicit SendBatchSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumberJson) {
      res["PhoneNumberJson"] = boost::any(*phoneNumberJson);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signNameJson) {
      res["SignNameJson"] = boost::any(*signNameJson);
    }
    if (smsUpExtendCodeJson) {
      res["SmsUpExtendCodeJson"] = boost::any(*smsUpExtendCodeJson);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParamJson) {
      res["TemplateParamJson"] = boost::any(*templateParamJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumberJson") != m.end() && !m["PhoneNumberJson"].empty()) {
      phoneNumberJson = make_shared<string>(boost::any_cast<string>(m["PhoneNumberJson"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignNameJson") != m.end() && !m["SignNameJson"].empty()) {
      signNameJson = make_shared<string>(boost::any_cast<string>(m["SignNameJson"]));
    }
    if (m.find("SmsUpExtendCodeJson") != m.end() && !m["SmsUpExtendCodeJson"].empty()) {
      smsUpExtendCodeJson = make_shared<string>(boost::any_cast<string>(m["SmsUpExtendCodeJson"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParamJson") != m.end() && !m["TemplateParamJson"].empty()) {
      templateParamJson = make_shared<string>(boost::any_cast<string>(m["TemplateParamJson"]));
    }
  }


  virtual ~SendBatchSmsRequest() = default;
};
class SendBatchSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SendBatchSmsResponseBody() {}

  explicit SendBatchSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendBatchSmsResponseBody() = default;
};
class SendBatchSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendBatchSmsResponseBody> body{};

  SendBatchSmsResponse() {}

  explicit SendBatchSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendBatchSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendBatchSmsResponseBody>(model1);
      }
    }
  }


  virtual ~SendBatchSmsResponse() = default;
};
class SendCardSmsRequestCardObjects : public Darabonba::Model {
public:
  shared_ptr<string> customUrl{};
  shared_ptr<string> dyncParams{};
  shared_ptr<string> mobile{};

  SendCardSmsRequestCardObjects() {}

  explicit SendCardSmsRequestCardObjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUrl) {
      res["customUrl"] = boost::any(*customUrl);
    }
    if (dyncParams) {
      res["dyncParams"] = boost::any(*dyncParams);
    }
    if (mobile) {
      res["mobile"] = boost::any(*mobile);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customUrl") != m.end() && !m["customUrl"].empty()) {
      customUrl = make_shared<string>(boost::any_cast<string>(m["customUrl"]));
    }
    if (m.find("dyncParams") != m.end() && !m["dyncParams"].empty()) {
      dyncParams = make_shared<string>(boost::any_cast<string>(m["dyncParams"]));
    }
    if (m.find("mobile") != m.end() && !m["mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["mobile"]));
    }
  }


  virtual ~SendCardSmsRequestCardObjects() = default;
};
class SendCardSmsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SendCardSmsRequestCardObjects>> cardObjects{};
  shared_ptr<string> cardTemplateCode{};
  shared_ptr<string> digitalTemplateCode{};
  shared_ptr<string> digitalTemplateParam{};
  shared_ptr<string> fallbackType{};
  shared_ptr<string> outId{};
  shared_ptr<string> signName{};
  shared_ptr<string> smsTemplateCode{};
  shared_ptr<string> smsTemplateParam{};
  shared_ptr<string> smsUpExtendCode{};

  SendCardSmsRequest() {}

  explicit SendCardSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cardObjects) {
      vector<boost::any> temp1;
      for(auto item1:*cardObjects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardObjects"] = boost::any(temp1);
    }
    if (cardTemplateCode) {
      res["CardTemplateCode"] = boost::any(*cardTemplateCode);
    }
    if (digitalTemplateCode) {
      res["DigitalTemplateCode"] = boost::any(*digitalTemplateCode);
    }
    if (digitalTemplateParam) {
      res["DigitalTemplateParam"] = boost::any(*digitalTemplateParam);
    }
    if (fallbackType) {
      res["FallbackType"] = boost::any(*fallbackType);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (smsTemplateCode) {
      res["SmsTemplateCode"] = boost::any(*smsTemplateCode);
    }
    if (smsTemplateParam) {
      res["SmsTemplateParam"] = boost::any(*smsTemplateParam);
    }
    if (smsUpExtendCode) {
      res["SmsUpExtendCode"] = boost::any(*smsUpExtendCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CardObjects") != m.end() && !m["CardObjects"].empty()) {
      if (typeid(vector<boost::any>) == m["CardObjects"].type()) {
        vector<SendCardSmsRequestCardObjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardObjects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendCardSmsRequestCardObjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardObjects = make_shared<vector<SendCardSmsRequestCardObjects>>(expect1);
      }
    }
    if (m.find("CardTemplateCode") != m.end() && !m["CardTemplateCode"].empty()) {
      cardTemplateCode = make_shared<string>(boost::any_cast<string>(m["CardTemplateCode"]));
    }
    if (m.find("DigitalTemplateCode") != m.end() && !m["DigitalTemplateCode"].empty()) {
      digitalTemplateCode = make_shared<string>(boost::any_cast<string>(m["DigitalTemplateCode"]));
    }
    if (m.find("DigitalTemplateParam") != m.end() && !m["DigitalTemplateParam"].empty()) {
      digitalTemplateParam = make_shared<string>(boost::any_cast<string>(m["DigitalTemplateParam"]));
    }
    if (m.find("FallbackType") != m.end() && !m["FallbackType"].empty()) {
      fallbackType = make_shared<string>(boost::any_cast<string>(m["FallbackType"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SmsTemplateCode") != m.end() && !m["SmsTemplateCode"].empty()) {
      smsTemplateCode = make_shared<string>(boost::any_cast<string>(m["SmsTemplateCode"]));
    }
    if (m.find("SmsTemplateParam") != m.end() && !m["SmsTemplateParam"].empty()) {
      smsTemplateParam = make_shared<string>(boost::any_cast<string>(m["SmsTemplateParam"]));
    }
    if (m.find("SmsUpExtendCode") != m.end() && !m["SmsUpExtendCode"].empty()) {
      smsUpExtendCode = make_shared<string>(boost::any_cast<string>(m["SmsUpExtendCode"]));
    }
  }


  virtual ~SendCardSmsRequest() = default;
};
class SendCardSmsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bizCardId{};
  shared_ptr<string> bizDigitalId{};
  shared_ptr<string> bizSmsId{};
  shared_ptr<long> cardTmpState{};
  shared_ptr<string> mediaMobiles{};
  shared_ptr<string> notMediaMobiles{};

  SendCardSmsResponseBodyData() {}

  explicit SendCardSmsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizCardId) {
      res["BizCardId"] = boost::any(*bizCardId);
    }
    if (bizDigitalId) {
      res["BizDigitalId"] = boost::any(*bizDigitalId);
    }
    if (bizSmsId) {
      res["BizSmsId"] = boost::any(*bizSmsId);
    }
    if (cardTmpState) {
      res["CardTmpState"] = boost::any(*cardTmpState);
    }
    if (mediaMobiles) {
      res["MediaMobiles"] = boost::any(*mediaMobiles);
    }
    if (notMediaMobiles) {
      res["NotMediaMobiles"] = boost::any(*notMediaMobiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizCardId") != m.end() && !m["BizCardId"].empty()) {
      bizCardId = make_shared<string>(boost::any_cast<string>(m["BizCardId"]));
    }
    if (m.find("BizDigitalId") != m.end() && !m["BizDigitalId"].empty()) {
      bizDigitalId = make_shared<string>(boost::any_cast<string>(m["BizDigitalId"]));
    }
    if (m.find("BizSmsId") != m.end() && !m["BizSmsId"].empty()) {
      bizSmsId = make_shared<string>(boost::any_cast<string>(m["BizSmsId"]));
    }
    if (m.find("CardTmpState") != m.end() && !m["CardTmpState"].empty()) {
      cardTmpState = make_shared<long>(boost::any_cast<long>(m["CardTmpState"]));
    }
    if (m.find("MediaMobiles") != m.end() && !m["MediaMobiles"].empty()) {
      mediaMobiles = make_shared<string>(boost::any_cast<string>(m["MediaMobiles"]));
    }
    if (m.find("NotMediaMobiles") != m.end() && !m["NotMediaMobiles"].empty()) {
      notMediaMobiles = make_shared<string>(boost::any_cast<string>(m["NotMediaMobiles"]));
    }
  }


  virtual ~SendCardSmsResponseBodyData() = default;
};
class SendCardSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SendCardSmsResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendCardSmsResponseBody() {}

  explicit SendCardSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SendCardSmsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SendCardSmsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SendCardSmsResponseBody() = default;
};
class SendCardSmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendCardSmsResponseBody> body{};

  SendCardSmsResponse() {}

  explicit SendCardSmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendCardSmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendCardSmsResponseBody>(model1);
      }
    }
  }


  virtual ~SendCardSmsResponse() = default;
};
class SendSmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> outId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> phoneNumbers{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> signName{};
  shared_ptr<string> smsUpExtendCode{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParam{};

  SendSmsRequest() {}

  explicit SendSmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (signName) {
      res["SignName"] = boost::any(*signName);
    }
    if (smsUpExtendCode) {
      res["SmsUpExtendCode"] = boost::any(*smsUpExtendCode);
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
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      phoneNumbers = make_shared<string>(boost::any_cast<string>(m["PhoneNumbers"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("SignName") != m.end() && !m["SignName"].empty()) {
      signName = make_shared<string>(boost::any_cast<string>(m["SignName"]));
    }
    if (m.find("SmsUpExtendCode") != m.end() && !m["SmsUpExtendCode"].empty()) {
      smsUpExtendCode = make_shared<string>(boost::any_cast<string>(m["SmsUpExtendCode"]));
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
class SendSmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SendSmsResponseBody() {}

  explicit SendSmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> prodCode{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> resourceType{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (prodCode) {
      res["ProdCode"] = boost::any(*prodCode);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ProdCode") != m.end() && !m["ProdCode"].empty()) {
      prodCode = make_shared<string>(boost::any_cast<string>(m["ProdCode"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
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
  AddShortUrlResponse addShortUrlWithOptions(shared_ptr<AddShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddShortUrlResponse addShortUrl(shared_ptr<AddShortUrlRequest> request);
  AddSmsSignResponse addSmsSignWithOptions(shared_ptr<AddSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSmsSignResponse addSmsSign(shared_ptr<AddSmsSignRequest> request);
  AddSmsTemplateResponse addSmsTemplateWithOptions(shared_ptr<AddSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSmsTemplateResponse addSmsTemplate(shared_ptr<AddSmsTemplateRequest> request);
  CheckMobilesCardSupportResponse checkMobilesCardSupportWithOptions(shared_ptr<CheckMobilesCardSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMobilesCardSupportResponse checkMobilesCardSupport(shared_ptr<CheckMobilesCardSupportRequest> request);
  CreateCardSmsTemplateResponse createCardSmsTemplateWithOptions(shared_ptr<CreateCardSmsTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCardSmsTemplateResponse createCardSmsTemplate(shared_ptr<CreateCardSmsTemplateRequest> request);
  DeleteShortUrlResponse deleteShortUrlWithOptions(shared_ptr<DeleteShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteShortUrlResponse deleteShortUrl(shared_ptr<DeleteShortUrlRequest> request);
  DeleteSmsSignResponse deleteSmsSignWithOptions(shared_ptr<DeleteSmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSmsSignResponse deleteSmsSign(shared_ptr<DeleteSmsSignRequest> request);
  DeleteSmsTemplateResponse deleteSmsTemplateWithOptions(shared_ptr<DeleteSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSmsTemplateResponse deleteSmsTemplate(shared_ptr<DeleteSmsTemplateRequest> request);
  GetCardSmsLinkResponse getCardSmsLinkWithOptions(shared_ptr<GetCardSmsLinkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCardSmsLinkResponse getCardSmsLink(shared_ptr<GetCardSmsLinkRequest> request);
  GetMediaResourceIdResponse getMediaResourceIdWithOptions(shared_ptr<GetMediaResourceIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaResourceIdResponse getMediaResourceId(shared_ptr<GetMediaResourceIdRequest> request);
  GetOSSInfoForCardTemplateResponse getOSSInfoForCardTemplateWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOSSInfoForCardTemplateResponse getOSSInfoForCardTemplate();
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifySmsSignResponse modifySmsSignWithOptions(shared_ptr<ModifySmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySmsSignResponse modifySmsSign(shared_ptr<ModifySmsSignRequest> request);
  ModifySmsTemplateResponse modifySmsTemplateWithOptions(shared_ptr<ModifySmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySmsTemplateResponse modifySmsTemplate(shared_ptr<ModifySmsTemplateRequest> request);
  QueryCardSmsTemplateResponse queryCardSmsTemplateWithOptions(shared_ptr<QueryCardSmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCardSmsTemplateResponse queryCardSmsTemplate(shared_ptr<QueryCardSmsTemplateRequest> request);
  QueryCardSmsTemplateReportResponse queryCardSmsTemplateReportWithOptions(shared_ptr<QueryCardSmsTemplateReportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCardSmsTemplateReportResponse queryCardSmsTemplateReport(shared_ptr<QueryCardSmsTemplateReportRequest> request);
  QuerySendDetailsResponse querySendDetailsWithOptions(shared_ptr<QuerySendDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySendDetailsResponse querySendDetails(shared_ptr<QuerySendDetailsRequest> request);
  QuerySendStatisticsResponse querySendStatisticsWithOptions(shared_ptr<QuerySendStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySendStatisticsResponse querySendStatistics(shared_ptr<QuerySendStatisticsRequest> request);
  QueryShortUrlResponse queryShortUrlWithOptions(shared_ptr<QueryShortUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryShortUrlResponse queryShortUrl(shared_ptr<QueryShortUrlRequest> request);
  QuerySmsSignResponse querySmsSignWithOptions(shared_ptr<QuerySmsSignRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmsSignResponse querySmsSign(shared_ptr<QuerySmsSignRequest> request);
  QuerySmsSignListResponse querySmsSignListWithOptions(shared_ptr<QuerySmsSignListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmsSignListResponse querySmsSignList(shared_ptr<QuerySmsSignListRequest> request);
  QuerySmsTemplateResponse querySmsTemplateWithOptions(shared_ptr<QuerySmsTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmsTemplateResponse querySmsTemplate(shared_ptr<QuerySmsTemplateRequest> request);
  QuerySmsTemplateListResponse querySmsTemplateListWithOptions(shared_ptr<QuerySmsTemplateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySmsTemplateListResponse querySmsTemplateList(shared_ptr<QuerySmsTemplateListRequest> request);
  SendBatchCardSmsResponse sendBatchCardSmsWithOptions(shared_ptr<SendBatchCardSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendBatchCardSmsResponse sendBatchCardSms(shared_ptr<SendBatchCardSmsRequest> request);
  SendBatchSmsResponse sendBatchSmsWithOptions(shared_ptr<SendBatchSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendBatchSmsResponse sendBatchSms(shared_ptr<SendBatchSmsRequest> request);
  SendCardSmsResponse sendCardSmsWithOptions(shared_ptr<SendCardSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendCardSmsResponse sendCardSms(shared_ptr<SendCardSmsRequest> request);
  SendSmsResponse sendSmsWithOptions(shared_ptr<SendSmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendSmsResponse sendSms(shared_ptr<SendSmsRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dysmsapi20170525

#endif
