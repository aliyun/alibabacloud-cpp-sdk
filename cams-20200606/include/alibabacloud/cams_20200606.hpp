// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAMS20200606_H_
#define ALIBABACLOUD_CAMS20200606_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cams20200606 {
class CheckChatappContactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<vector<string>> contacts{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> from{};

  CheckChatappContactsRequest() {}

  explicit CheckChatappContactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (contacts) {
      res["Contacts"] = boost::any(*contacts);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Contacts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Contacts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contacts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
  }


  virtual ~CheckChatappContactsRequest() = default;
};
class CheckChatappContactsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> contactsShrink{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> from{};

  CheckChatappContactsShrinkRequest() {}

  explicit CheckChatappContactsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (contactsShrink) {
      res["Contacts"] = boost::any(*contactsShrink);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Contacts") != m.end() && !m["Contacts"].empty()) {
      contactsShrink = make_shared<string>(boost::any_cast<string>(m["Contacts"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
  }


  virtual ~CheckChatappContactsShrinkRequest() = default;
};
class CheckChatappContactsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> status{};

  CheckChatappContactsResponseBodyData() {}

  explicit CheckChatappContactsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CheckChatappContactsResponseBodyData() = default;
};
class CheckChatappContactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<CheckChatappContactsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CheckChatappContactsResponseBody() {}

  explicit CheckChatappContactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<CheckChatappContactsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckChatappContactsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<CheckChatappContactsResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckChatappContactsResponseBody() = default;
};
class CheckChatappContactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckChatappContactsResponseBody> body{};

  CheckChatappContactsResponse() {}

  explicit CheckChatappContactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckChatappContactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckChatappContactsResponseBody>(model1);
      }
    }
  }


  virtual ~CheckChatappContactsResponse() = default;
};
class CreateChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  CreateChatappTemplateRequestComponentsButtons() {}

  explicit CreateChatappTemplateRequestComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsButtons() = default;
};
class CreateChatappTemplateRequestComponents : public Darabonba::Model {
public:
  shared_ptr<vector<CreateChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<string> fileName{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  CreateChatappTemplateRequestComponents() {}

  explicit CreateChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<CreateChatappTemplateRequestComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<CreateChatappTemplateRequestComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponents() = default;
};
class CreateChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<CreateChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateRequest() {}

  explicit CreateChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CreateChatappTemplateRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateChatappTemplateRequestComponents>>(expect1);
      }
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateChatappTemplateRequest() = default;
};
class CreateChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateShrinkRequest() {}

  explicit CreateChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (exampleShrink) {
      res["Example"] = boost::any(*exampleShrink);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      exampleShrink = make_shared<string>(boost::any_cast<string>(m["Example"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateChatappTemplateShrinkRequest() = default;
};
class CreateChatappTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  CreateChatappTemplateResponseBodyData() {}

  explicit CreateChatappTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateChatappTemplateResponseBodyData() = default;
};
class CreateChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateChatappTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateChatappTemplateResponseBody() {}

  explicit CreateChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChatappTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateChatappTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChatappTemplateResponseBody() = default;
};
class CreateChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatappTemplateResponseBody> body{};

  CreateChatappTemplateResponse() {}

  explicit CreateChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatappTemplateResponse() = default;
};
class DeleteChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> custWabaId{};
  shared_ptr<string> templateCode{};

  DeleteChatappTemplateRequest() {}

  explicit DeleteChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~DeleteChatappTemplateRequest() = default;
};
class DeleteChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteChatappTemplateResponseBody() {}

  explicit DeleteChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteChatappTemplateResponseBody() = default;
};
class DeleteChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatappTemplateResponseBody> body{};

  DeleteChatappTemplateResponse() {}

  explicit DeleteChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatappTemplateResponse() = default;
};
class GetChatappTemplateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> custWabaId{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};

  GetChatappTemplateDetailRequest() {}

  explicit GetChatappTemplateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~GetChatappTemplateDetailRequest() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  GetChatappTemplateDetailResponseBodyDataComponentsButtons() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsButtons() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponents : public Darabonba::Model {
public:
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<string> fileName{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetChatappTemplateDetailResponseBodyDataComponents() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponents() = default;
};
class GetChatappTemplateDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponents>> components{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> templateCode{};

  GetChatappTemplateDetailResponseBodyData() {}

  explicit GetChatappTemplateDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponents>>(expect1);
      }
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyData() = default;
};
class GetChatappTemplateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetChatappTemplateDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappTemplateDetailResponseBody() {}

  explicit GetChatappTemplateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappTemplateDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetChatappTemplateDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBody() = default;
};
class GetChatappTemplateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappTemplateDetailResponseBody> body{};

  GetChatappTemplateDetailResponse() {}

  explicit GetChatappTemplateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappTemplateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappTemplateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappTemplateDetailResponse() = default;
};
class ListChatappTemplateRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListChatappTemplateRequestPage() {}

  explicit ListChatappTemplateRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListChatappTemplateRequestPage() = default;
};
class ListChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<ListChatappTemplateRequestPage> page{};

  ListChatappTemplateRequest() {}

  explicit ListChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListChatappTemplateRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListChatappTemplateRequestPage>(model1);
      }
    }
  }


  virtual ~ListChatappTemplateRequest() = default;
};
class ListChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> pageShrink{};

  ListChatappTemplateShrinkRequest() {}

  explicit ListChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
  }


  virtual ~ListChatappTemplateShrinkRequest() = default;
};
class ListChatappTemplateResponseBodyListTemplate : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  ListChatappTemplateResponseBodyListTemplate() {}

  explicit ListChatappTemplateResponseBodyListTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListChatappTemplateResponseBodyListTemplate() = default;
};
class ListChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListChatappTemplateResponseBodyListTemplate>> listTemplate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListChatappTemplateResponseBody() {}

  explicit ListChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (listTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*listTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListTemplate"] = boost::any(temp1);
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
    if (m.find("ListTemplate") != m.end() && !m["ListTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ListTemplate"].type()) {
        vector<ListChatappTemplateResponseBodyListTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatappTemplateResponseBodyListTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listTemplate = make_shared<vector<ListChatappTemplateResponseBodyListTemplate>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListChatappTemplateResponseBody() = default;
};
class ListChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatappTemplateResponseBody> body{};

  ListChatappTemplateResponse() {}

  explicit ListChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatappTemplateResponse() = default;
};
class SendChatappMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<vector<string>> payload{};
  shared_ptr<string> templateCode{};
  shared_ptr<map<string, string>> templateParams{};
  shared_ptr<string> to{};
  shared_ptr<string> type{};

  SendChatappMessageRequest() {}

  explicit SendChatappMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Payload"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payload"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      payload = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TemplateParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SendChatappMessageRequest() = default;
};
class SendChatappMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParamsShrink{};
  shared_ptr<string> to{};
  shared_ptr<string> type{};

  SendChatappMessageShrinkRequest() {}

  explicit SendChatappMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParamsShrink) {
      res["TemplateParams"] = boost::any(*templateParamsShrink);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      templateParamsShrink = make_shared<string>(boost::any_cast<string>(m["TemplateParams"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SendChatappMessageShrinkRequest() = default;
};
class SendChatappMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  SendChatappMessageResponseBody() {}

  explicit SendChatappMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
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
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendChatappMessageResponseBody() = default;
};
class SendChatappMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendChatappMessageResponseBody> body{};

  SendChatappMessageResponse() {}

  explicit SendChatappMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendChatappMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendChatappMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendChatappMessageResponse() = default;
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
  CheckChatappContactsResponse checkChatappContactsWithOptions(shared_ptr<CheckChatappContactsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckChatappContactsResponse checkChatappContacts(shared_ptr<CheckChatappContactsRequest> request);
  CreateChatappTemplateResponse createChatappTemplateWithOptions(shared_ptr<CreateChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatappTemplateResponse createChatappTemplate(shared_ptr<CreateChatappTemplateRequest> request);
  DeleteChatappTemplateResponse deleteChatappTemplateWithOptions(shared_ptr<DeleteChatappTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatappTemplateResponse deleteChatappTemplate(shared_ptr<DeleteChatappTemplateRequest> request);
  GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(shared_ptr<GetChatappTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappTemplateDetailResponse getChatappTemplateDetail(shared_ptr<GetChatappTemplateDetailRequest> request);
  ListChatappTemplateResponse listChatappTemplateWithOptions(shared_ptr<ListChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatappTemplateResponse listChatappTemplate(shared_ptr<ListChatappTemplateRequest> request);
  SendChatappMessageResponse sendChatappMessageWithOptions(shared_ptr<SendChatappMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMessageResponse sendChatappMessage(shared_ptr<SendChatappMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cams20200606

#endif
