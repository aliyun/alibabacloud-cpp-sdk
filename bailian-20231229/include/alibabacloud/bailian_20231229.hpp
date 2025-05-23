// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIAN20231229_H_
#define ALIBABACLOUD_BAILIAN20231229_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Bailian20231229 {
class AddCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> categoryType{};
  shared_ptr<string> parentCategoryId{};

  AddCategoryRequest() {}

  explicit AddCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<string>(boost::any_cast<string>(m["CategoryType"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~AddCategoryRequest() = default;
};
class AddCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};

  AddCategoryResponseBodyData() {}

  explicit AddCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
  }


  virtual ~AddCategoryResponseBodyData() = default;
};
class AddCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddCategoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  AddCategoryResponseBody() {}

  explicit AddCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        AddCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddCategoryResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddCategoryResponseBody() = default;
};
class AddCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddCategoryResponseBody> body{};

  AddCategoryResponse() {}

  explicit AddCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~AddCategoryResponse() = default;
};
class AddFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryType{};
  shared_ptr<string> leaseId{};
  shared_ptr<string> originalFileUrl{};
  shared_ptr<string> parser{};
  shared_ptr<vector<string>> tags{};

  AddFileRequest() {}

  explicit AddFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (leaseId) {
      res["LeaseId"] = boost::any(*leaseId);
    }
    if (originalFileUrl) {
      res["OriginalFileUrl"] = boost::any(*originalFileUrl);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<string>(boost::any_cast<string>(m["CategoryType"]));
    }
    if (m.find("LeaseId") != m.end() && !m["LeaseId"].empty()) {
      leaseId = make_shared<string>(boost::any_cast<string>(m["LeaseId"]));
    }
    if (m.find("OriginalFileUrl") != m.end() && !m["OriginalFileUrl"].empty()) {
      originalFileUrl = make_shared<string>(boost::any_cast<string>(m["OriginalFileUrl"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~AddFileRequest() = default;
};
class AddFileShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryType{};
  shared_ptr<string> leaseId{};
  shared_ptr<string> originalFileUrl{};
  shared_ptr<string> parser{};
  shared_ptr<string> tagsShrink{};

  AddFileShrinkRequest() {}

  explicit AddFileShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (leaseId) {
      res["LeaseId"] = boost::any(*leaseId);
    }
    if (originalFileUrl) {
      res["OriginalFileUrl"] = boost::any(*originalFileUrl);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<string>(boost::any_cast<string>(m["CategoryType"]));
    }
    if (m.find("LeaseId") != m.end() && !m["LeaseId"].empty()) {
      leaseId = make_shared<string>(boost::any_cast<string>(m["LeaseId"]));
    }
    if (m.find("OriginalFileUrl") != m.end() && !m["OriginalFileUrl"].empty()) {
      originalFileUrl = make_shared<string>(boost::any_cast<string>(m["OriginalFileUrl"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AddFileShrinkRequest() = default;
};
class AddFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> parser{};

  AddFileResponseBodyData() {}

  explicit AddFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
  }


  virtual ~AddFileResponseBodyData() = default;
};
class AddFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> success{};

  AddFileResponseBody() {}

  explicit AddFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        AddFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~AddFileResponseBody() = default;
};
class AddFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFileResponseBody> body{};

  AddFileResponse() {}

  explicit AddFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFileResponseBody>(model1);
      }
    }
  }


  virtual ~AddFileResponse() = default;
};
class ApplyFileUploadLeaseRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryType{};
  shared_ptr<string> fileName{};
  shared_ptr<string> md5{};
  shared_ptr<string> sizeInBytes{};
  shared_ptr<bool> useInternalEndpoint{};

  ApplyFileUploadLeaseRequest() {}

  explicit ApplyFileUploadLeaseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (md5) {
      res["Md5"] = boost::any(*md5);
    }
    if (sizeInBytes) {
      res["SizeInBytes"] = boost::any(*sizeInBytes);
    }
    if (useInternalEndpoint) {
      res["UseInternalEndpoint"] = boost::any(*useInternalEndpoint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<string>(boost::any_cast<string>(m["CategoryType"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Md5") != m.end() && !m["Md5"].empty()) {
      md5 = make_shared<string>(boost::any_cast<string>(m["Md5"]));
    }
    if (m.find("SizeInBytes") != m.end() && !m["SizeInBytes"].empty()) {
      sizeInBytes = make_shared<string>(boost::any_cast<string>(m["SizeInBytes"]));
    }
    if (m.find("UseInternalEndpoint") != m.end() && !m["UseInternalEndpoint"].empty()) {
      useInternalEndpoint = make_shared<bool>(boost::any_cast<bool>(m["UseInternalEndpoint"]));
    }
  }


  virtual ~ApplyFileUploadLeaseRequest() = default;
};
class ApplyFileUploadLeaseResponseBodyDataParam : public Darabonba::Model {
public:
  shared_ptr<boost::any> headers{};
  shared_ptr<string> method{};
  shared_ptr<string> url{};

  ApplyFileUploadLeaseResponseBodyDataParam() {}

  explicit ApplyFileUploadLeaseResponseBodyDataParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["Headers"] = boost::any(*headers);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      headers = make_shared<boost::any>(boost::any_cast<boost::any>(m["Headers"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ApplyFileUploadLeaseResponseBodyDataParam() = default;
};
class ApplyFileUploadLeaseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileUploadLeaseId{};
  shared_ptr<ApplyFileUploadLeaseResponseBodyDataParam> param{};
  shared_ptr<string> type{};

  ApplyFileUploadLeaseResponseBodyData() {}

  explicit ApplyFileUploadLeaseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUploadLeaseId) {
      res["FileUploadLeaseId"] = boost::any(*fileUploadLeaseId);
    }
    if (param) {
      res["Param"] = param ? boost::any(param->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileUploadLeaseId") != m.end() && !m["FileUploadLeaseId"].empty()) {
      fileUploadLeaseId = make_shared<string>(boost::any_cast<string>(m["FileUploadLeaseId"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      if (typeid(map<string, boost::any>) == m["Param"].type()) {
        ApplyFileUploadLeaseResponseBodyDataParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Param"]));
        param = make_shared<ApplyFileUploadLeaseResponseBodyDataParam>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ApplyFileUploadLeaseResponseBodyData() = default;
};
class ApplyFileUploadLeaseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ApplyFileUploadLeaseResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ApplyFileUploadLeaseResponseBody() {}

  explicit ApplyFileUploadLeaseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ApplyFileUploadLeaseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ApplyFileUploadLeaseResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ApplyFileUploadLeaseResponseBody() = default;
};
class ApplyFileUploadLeaseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyFileUploadLeaseResponseBody> body{};

  ApplyFileUploadLeaseResponse() {}

  explicit ApplyFileUploadLeaseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyFileUploadLeaseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyFileUploadLeaseResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyFileUploadLeaseResponse() = default;
};
class CreateAndPulishAgentRequestApplicationConfigHistoryConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableAdbRecord{};
  shared_ptr<bool> enableRecord{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> storeCode{};

  CreateAndPulishAgentRequestApplicationConfigHistoryConfig() {}

  explicit CreateAndPulishAgentRequestApplicationConfigHistoryConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAdbRecord) {
      res["enableAdbRecord"] = boost::any(*enableAdbRecord);
    }
    if (enableRecord) {
      res["enableRecord"] = boost::any(*enableRecord);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (storeCode) {
      res["storeCode"] = boost::any(*storeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableAdbRecord") != m.end() && !m["enableAdbRecord"].empty()) {
      enableAdbRecord = make_shared<bool>(boost::any_cast<bool>(m["enableAdbRecord"]));
    }
    if (m.find("enableRecord") != m.end() && !m["enableRecord"].empty()) {
      enableRecord = make_shared<bool>(boost::any_cast<bool>(m["enableRecord"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("storeCode") != m.end() && !m["storeCode"].empty()) {
      storeCode = make_shared<string>(boost::any_cast<string>(m["storeCode"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigHistoryConfig() = default;
};
class CreateAndPulishAgentRequestApplicationConfigLongTermMemory : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  CreateAndPulishAgentRequestApplicationConfigLongTermMemory() {}

  explicit CreateAndPulishAgentRequestApplicationConfigLongTermMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigLongTermMemory() = default;
};
class CreateAndPulishAgentRequestApplicationConfigParameters : public Darabonba::Model {
public:
  shared_ptr<long> dialogRound{};
  shared_ptr<long> maxTokens{};
  shared_ptr<double> temperature{};

  CreateAndPulishAgentRequestApplicationConfigParameters() {}

  explicit CreateAndPulishAgentRequestApplicationConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogRound) {
      res["dialogRound"] = boost::any(*dialogRound);
    }
    if (maxTokens) {
      res["maxTokens"] = boost::any(*maxTokens);
    }
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogRound") != m.end() && !m["dialogRound"].empty()) {
      dialogRound = make_shared<long>(boost::any_cast<long>(m["dialogRound"]));
    }
    if (m.find("maxTokens") != m.end() && !m["maxTokens"].empty()) {
      maxTokens = make_shared<long>(boost::any_cast<long>(m["maxTokens"]));
    }
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigParameters() = default;
};
class CreateAndPulishAgentRequestApplicationConfigRagConfig : public Darabonba::Model {
public:
  shared_ptr<string> answerScope{};
  shared_ptr<bool> enableCitation{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<bool> enableWebSearch{};
  shared_ptr<string> fixedReplyDetail{};
  shared_ptr<vector<string>> knowledgeBaseCodeList{};
  shared_ptr<string> promptStrategy{};
  shared_ptr<string> ragRejectType{};
  shared_ptr<string> rejectFilterPrompt{};
  shared_ptr<string> rejectFilterType{};
  shared_ptr<long> retrieveMaxLength{};
  shared_ptr<long> topK{};

  CreateAndPulishAgentRequestApplicationConfigRagConfig() {}

  explicit CreateAndPulishAgentRequestApplicationConfigRagConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerScope) {
      res["answerScope"] = boost::any(*answerScope);
    }
    if (enableCitation) {
      res["enableCitation"] = boost::any(*enableCitation);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (enableWebSearch) {
      res["enableWebSearch"] = boost::any(*enableWebSearch);
    }
    if (fixedReplyDetail) {
      res["fixedReplyDetail"] = boost::any(*fixedReplyDetail);
    }
    if (knowledgeBaseCodeList) {
      res["knowledgeBaseCodeList"] = boost::any(*knowledgeBaseCodeList);
    }
    if (promptStrategy) {
      res["promptStrategy"] = boost::any(*promptStrategy);
    }
    if (ragRejectType) {
      res["ragRejectType"] = boost::any(*ragRejectType);
    }
    if (rejectFilterPrompt) {
      res["rejectFilterPrompt"] = boost::any(*rejectFilterPrompt);
    }
    if (rejectFilterType) {
      res["rejectFilterType"] = boost::any(*rejectFilterType);
    }
    if (retrieveMaxLength) {
      res["retrieveMaxLength"] = boost::any(*retrieveMaxLength);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answerScope") != m.end() && !m["answerScope"].empty()) {
      answerScope = make_shared<string>(boost::any_cast<string>(m["answerScope"]));
    }
    if (m.find("enableCitation") != m.end() && !m["enableCitation"].empty()) {
      enableCitation = make_shared<bool>(boost::any_cast<bool>(m["enableCitation"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("enableWebSearch") != m.end() && !m["enableWebSearch"].empty()) {
      enableWebSearch = make_shared<bool>(boost::any_cast<bool>(m["enableWebSearch"]));
    }
    if (m.find("fixedReplyDetail") != m.end() && !m["fixedReplyDetail"].empty()) {
      fixedReplyDetail = make_shared<string>(boost::any_cast<string>(m["fixedReplyDetail"]));
    }
    if (m.find("knowledgeBaseCodeList") != m.end() && !m["knowledgeBaseCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["knowledgeBaseCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["knowledgeBaseCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      knowledgeBaseCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("promptStrategy") != m.end() && !m["promptStrategy"].empty()) {
      promptStrategy = make_shared<string>(boost::any_cast<string>(m["promptStrategy"]));
    }
    if (m.find("ragRejectType") != m.end() && !m["ragRejectType"].empty()) {
      ragRejectType = make_shared<string>(boost::any_cast<string>(m["ragRejectType"]));
    }
    if (m.find("rejectFilterPrompt") != m.end() && !m["rejectFilterPrompt"].empty()) {
      rejectFilterPrompt = make_shared<string>(boost::any_cast<string>(m["rejectFilterPrompt"]));
    }
    if (m.find("rejectFilterType") != m.end() && !m["rejectFilterType"].empty()) {
      rejectFilterType = make_shared<string>(boost::any_cast<string>(m["rejectFilterType"]));
    }
    if (m.find("retrieveMaxLength") != m.end() && !m["retrieveMaxLength"].empty()) {
      retrieveMaxLength = make_shared<long>(boost::any_cast<long>(m["retrieveMaxLength"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigRagConfig() = default;
};
class CreateAndPulishAgentRequestApplicationConfigSecurityConfig : public Darabonba::Model {
public:
  shared_ptr<string> processingStrategy{};

  CreateAndPulishAgentRequestApplicationConfigSecurityConfig() {}

  explicit CreateAndPulishAgentRequestApplicationConfigSecurityConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processingStrategy) {
      res["processingStrategy"] = boost::any(*processingStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("processingStrategy") != m.end() && !m["processingStrategy"].empty()) {
      processingStrategy = make_shared<string>(boost::any_cast<string>(m["processingStrategy"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigSecurityConfig() = default;
};
class CreateAndPulishAgentRequestApplicationConfigTools : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  CreateAndPulishAgentRequestApplicationConfigTools() {}

  explicit CreateAndPulishAgentRequestApplicationConfigTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigTools() = default;
};
class CreateAndPulishAgentRequestApplicationConfigWorkFlows : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  CreateAndPulishAgentRequestApplicationConfigWorkFlows() {}

  explicit CreateAndPulishAgentRequestApplicationConfigWorkFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfigWorkFlows() = default;
};
class CreateAndPulishAgentRequestApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<CreateAndPulishAgentRequestApplicationConfigHistoryConfig> historyConfig{};
  shared_ptr<CreateAndPulishAgentRequestApplicationConfigLongTermMemory> longTermMemory{};
  shared_ptr<CreateAndPulishAgentRequestApplicationConfigParameters> parameters{};
  shared_ptr<CreateAndPulishAgentRequestApplicationConfigRagConfig> ragConfig{};
  shared_ptr<CreateAndPulishAgentRequestApplicationConfigSecurityConfig> securityConfig{};
  shared_ptr<vector<CreateAndPulishAgentRequestApplicationConfigTools>> tools{};
  shared_ptr<vector<CreateAndPulishAgentRequestApplicationConfigWorkFlows>> workFlows{};

  CreateAndPulishAgentRequestApplicationConfig() {}

  explicit CreateAndPulishAgentRequestApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyConfig) {
      res["historyConfig"] = historyConfig ? boost::any(historyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (longTermMemory) {
      res["longTermMemory"] = longTermMemory ? boost::any(longTermMemory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ragConfig) {
      res["ragConfig"] = ragConfig ? boost::any(ragConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (securityConfig) {
      res["securityConfig"] = securityConfig ? boost::any(securityConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tools) {
      vector<boost::any> temp1;
      for(auto item1:*tools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tools"] = boost::any(temp1);
    }
    if (workFlows) {
      vector<boost::any> temp1;
      for(auto item1:*workFlows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workFlows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("historyConfig") != m.end() && !m["historyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["historyConfig"].type()) {
        CreateAndPulishAgentRequestApplicationConfigHistoryConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["historyConfig"]));
        historyConfig = make_shared<CreateAndPulishAgentRequestApplicationConfigHistoryConfig>(model1);
      }
    }
    if (m.find("longTermMemory") != m.end() && !m["longTermMemory"].empty()) {
      if (typeid(map<string, boost::any>) == m["longTermMemory"].type()) {
        CreateAndPulishAgentRequestApplicationConfigLongTermMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["longTermMemory"]));
        longTermMemory = make_shared<CreateAndPulishAgentRequestApplicationConfigLongTermMemory>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameters"].type()) {
        CreateAndPulishAgentRequestApplicationConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameters"]));
        parameters = make_shared<CreateAndPulishAgentRequestApplicationConfigParameters>(model1);
      }
    }
    if (m.find("ragConfig") != m.end() && !m["ragConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ragConfig"].type()) {
        CreateAndPulishAgentRequestApplicationConfigRagConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ragConfig"]));
        ragConfig = make_shared<CreateAndPulishAgentRequestApplicationConfigRagConfig>(model1);
      }
    }
    if (m.find("securityConfig") != m.end() && !m["securityConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["securityConfig"].type()) {
        CreateAndPulishAgentRequestApplicationConfigSecurityConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["securityConfig"]));
        securityConfig = make_shared<CreateAndPulishAgentRequestApplicationConfigSecurityConfig>(model1);
      }
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(vector<boost::any>) == m["tools"].type()) {
        vector<CreateAndPulishAgentRequestApplicationConfigTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAndPulishAgentRequestApplicationConfigTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tools = make_shared<vector<CreateAndPulishAgentRequestApplicationConfigTools>>(expect1);
      }
    }
    if (m.find("workFlows") != m.end() && !m["workFlows"].empty()) {
      if (typeid(vector<boost::any>) == m["workFlows"].type()) {
        vector<CreateAndPulishAgentRequestApplicationConfigWorkFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workFlows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAndPulishAgentRequestApplicationConfigWorkFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workFlows = make_shared<vector<CreateAndPulishAgentRequestApplicationConfigWorkFlows>>(expect1);
      }
    }
  }


  virtual ~CreateAndPulishAgentRequestApplicationConfig() = default;
};
class CreateAndPulishAgentRequestSampleLibrary : public Darabonba::Model {
public:
  shared_ptr<bool> enableSample{};
  shared_ptr<vector<string>> sampleLibraryIdList{};
  shared_ptr<long> topK{};

  CreateAndPulishAgentRequestSampleLibrary() {}

  explicit CreateAndPulishAgentRequestSampleLibrary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSample) {
      res["enableSample"] = boost::any(*enableSample);
    }
    if (sampleLibraryIdList) {
      res["sampleLibraryIdList"] = boost::any(*sampleLibraryIdList);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableSample") != m.end() && !m["enableSample"].empty()) {
      enableSample = make_shared<bool>(boost::any_cast<bool>(m["enableSample"]));
    }
    if (m.find("sampleLibraryIdList") != m.end() && !m["sampleLibraryIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sampleLibraryIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sampleLibraryIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sampleLibraryIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~CreateAndPulishAgentRequestSampleLibrary() = default;
};
class CreateAndPulishAgentRequest : public Darabonba::Model {
public:
  shared_ptr<CreateAndPulishAgentRequestApplicationConfig> applicationConfig{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<CreateAndPulishAgentRequestSampleLibrary> sampleLibrary{};

  CreateAndPulishAgentRequest() {}

  explicit CreateAndPulishAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfig) {
      res["applicationConfig"] = applicationConfig ? boost::any(applicationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sampleLibrary) {
      res["sampleLibrary"] = sampleLibrary ? boost::any(sampleLibrary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["applicationConfig"].type()) {
        CreateAndPulishAgentRequestApplicationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["applicationConfig"]));
        applicationConfig = make_shared<CreateAndPulishAgentRequestApplicationConfig>(model1);
      }
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sampleLibrary") != m.end() && !m["sampleLibrary"].empty()) {
      if (typeid(map<string, boost::any>) == m["sampleLibrary"].type()) {
        CreateAndPulishAgentRequestSampleLibrary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sampleLibrary"]));
        sampleLibrary = make_shared<CreateAndPulishAgentRequestSampleLibrary>(model1);
      }
    }
  }


  virtual ~CreateAndPulishAgentRequest() = default;
};
class CreateAndPulishAgentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationConfigShrink{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> sampleLibraryShrink{};

  CreateAndPulishAgentShrinkRequest() {}

  explicit CreateAndPulishAgentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigShrink) {
      res["applicationConfig"] = boost::any(*applicationConfigShrink);
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sampleLibraryShrink) {
      res["sampleLibrary"] = boost::any(*sampleLibraryShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      applicationConfigShrink = make_shared<string>(boost::any_cast<string>(m["applicationConfig"]));
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sampleLibrary") != m.end() && !m["sampleLibrary"].empty()) {
      sampleLibraryShrink = make_shared<string>(boost::any_cast<string>(m["sampleLibrary"]));
    }
  }


  virtual ~CreateAndPulishAgentShrinkRequest() = default;
};
class CreateAndPulishAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAndPulishAgentResponseBody() {}

  explicit CreateAndPulishAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CreateAndPulishAgentResponseBody() = default;
};
class CreateAndPulishAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAndPulishAgentResponseBody> body{};

  CreateAndPulishAgentResponse() {}

  explicit CreateAndPulishAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAndPulishAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAndPulishAgentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAndPulishAgentResponse() = default;
};
class CreateIndexRequestColumns : public Darabonba::Model {
public:
  shared_ptr<string> column{};
  shared_ptr<bool> isRecall{};
  shared_ptr<bool> isSearch{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateIndexRequestColumns() {}

  explicit CreateIndexRequestColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (isRecall) {
      res["IsRecall"] = boost::any(*isRecall);
    }
    if (isSearch) {
      res["IsSearch"] = boost::any(*isSearch);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("IsRecall") != m.end() && !m["IsRecall"].empty()) {
      isRecall = make_shared<bool>(boost::any_cast<bool>(m["IsRecall"]));
    }
    if (m.find("IsSearch") != m.end() && !m["IsSearch"].empty()) {
      isSearch = make_shared<bool>(boost::any_cast<bool>(m["IsSearch"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateIndexRequestColumns() = default;
};
class CreateIndexRequestDataSource : public Darabonba::Model {
public:
  shared_ptr<string> credentialId{};
  shared_ptr<string> credentialKey{};
  shared_ptr<string> database{};
  shared_ptr<string> endpoint{};
  shared_ptr<bool> isPrivateLink{};
  shared_ptr<string> region{};
  shared_ptr<string> subPath{};
  shared_ptr<string> subType{};
  shared_ptr<string> table{};
  shared_ptr<string> type{};

  CreateIndexRequestDataSource() {}

  explicit CreateIndexRequestDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialId) {
      res["CredentialId"] = boost::any(*credentialId);
    }
    if (credentialKey) {
      res["CredentialKey"] = boost::any(*credentialKey);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (isPrivateLink) {
      res["IsPrivateLink"] = boost::any(*isPrivateLink);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (subPath) {
      res["SubPath"] = boost::any(*subPath);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialId") != m.end() && !m["CredentialId"].empty()) {
      credentialId = make_shared<string>(boost::any_cast<string>(m["CredentialId"]));
    }
    if (m.find("CredentialKey") != m.end() && !m["CredentialKey"].empty()) {
      credentialKey = make_shared<string>(boost::any_cast<string>(m["CredentialKey"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("IsPrivateLink") != m.end() && !m["IsPrivateLink"].empty()) {
      isPrivateLink = make_shared<bool>(boost::any_cast<bool>(m["IsPrivateLink"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("SubPath") != m.end() && !m["SubPath"].empty()) {
      subPath = make_shared<string>(boost::any_cast<string>(m["SubPath"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateIndexRequestDataSource() = default;
};
class CreateIndexRequestMetaExtractColumns : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<bool> enableLlm{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<string> key{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  CreateIndexRequestMetaExtractColumns() {}

  explicit CreateIndexRequestMetaExtractColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (enableLlm) {
      res["EnableLlm"] = boost::any(*enableLlm);
    }
    if (enableSearch) {
      res["EnableSearch"] = boost::any(*enableSearch);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("EnableLlm") != m.end() && !m["EnableLlm"].empty()) {
      enableLlm = make_shared<bool>(boost::any_cast<bool>(m["EnableLlm"]));
    }
    if (m.find("EnableSearch") != m.end() && !m["EnableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["EnableSearch"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateIndexRequestMetaExtractColumns() = default;
};
class CreateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categoryIds{};
  shared_ptr<long> chunkSize{};
  shared_ptr<vector<CreateIndexRequestColumns>> columns{};
  shared_ptr<CreateIndexRequestDataSource> dataSource{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> embeddingModelName{};
  shared_ptr<string> name{};
  shared_ptr<long> overlapSize{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<string> rerankModelName{};
  shared_ptr<string> separator{};
  shared_ptr<string> sinkInstanceId{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> structureType{};
  shared_ptr<string> chunkMode{};
  shared_ptr<bool> enableHeaders{};
  shared_ptr<vector<CreateIndexRequestMetaExtractColumns>> metaExtractColumns{};

  CreateIndexRequest() {}

  explicit CreateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (columns) {
      vector<boost::any> temp1;
      for(auto item1:*columns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Columns"] = boost::any(temp1);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (embeddingModelName) {
      res["EmbeddingModelName"] = boost::any(*embeddingModelName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankModelName) {
      res["RerankModelName"] = boost::any(*rerankModelName);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sinkInstanceId) {
      res["SinkInstanceId"] = boost::any(*sinkInstanceId);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    if (chunkMode) {
      res["chunkMode"] = boost::any(*chunkMode);
    }
    if (enableHeaders) {
      res["enableHeaders"] = boost::any(*enableHeaders);
    }
    if (metaExtractColumns) {
      vector<boost::any> temp1;
      for(auto item1:*metaExtractColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["metaExtractColumns"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categoryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      if (typeid(vector<boost::any>) == m["Columns"].type()) {
        vector<CreateIndexRequestColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Columns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIndexRequestColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columns = make_shared<vector<CreateIndexRequestColumns>>(expect1);
      }
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        CreateIndexRequestDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<CreateIndexRequestDataSource>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmbeddingModelName") != m.end() && !m["EmbeddingModelName"].empty()) {
      embeddingModelName = make_shared<string>(boost::any_cast<string>(m["EmbeddingModelName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankModelName") != m.end() && !m["RerankModelName"].empty()) {
      rerankModelName = make_shared<string>(boost::any_cast<string>(m["RerankModelName"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SinkInstanceId") != m.end() && !m["SinkInstanceId"].empty()) {
      sinkInstanceId = make_shared<string>(boost::any_cast<string>(m["SinkInstanceId"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
    if (m.find("chunkMode") != m.end() && !m["chunkMode"].empty()) {
      chunkMode = make_shared<string>(boost::any_cast<string>(m["chunkMode"]));
    }
    if (m.find("enableHeaders") != m.end() && !m["enableHeaders"].empty()) {
      enableHeaders = make_shared<bool>(boost::any_cast<bool>(m["enableHeaders"]));
    }
    if (m.find("metaExtractColumns") != m.end() && !m["metaExtractColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["metaExtractColumns"].type()) {
        vector<CreateIndexRequestMetaExtractColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["metaExtractColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIndexRequestMetaExtractColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        metaExtractColumns = make_shared<vector<CreateIndexRequestMetaExtractColumns>>(expect1);
      }
    }
  }


  virtual ~CreateIndexRequest() = default;
};
class CreateIndexShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryIdsShrink{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> columnsShrink{};
  shared_ptr<string> dataSourceShrink{};
  shared_ptr<string> description{};
  shared_ptr<string> documentIdsShrink{};
  shared_ptr<string> embeddingModelName{};
  shared_ptr<string> name{};
  shared_ptr<long> overlapSize{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<string> rerankModelName{};
  shared_ptr<string> separator{};
  shared_ptr<string> sinkInstanceId{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> structureType{};
  shared_ptr<string> chunkMode{};
  shared_ptr<bool> enableHeaders{};
  shared_ptr<string> metaExtractColumnsShrink{};

  CreateIndexShrinkRequest() {}

  explicit CreateIndexShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIdsShrink) {
      res["CategoryIds"] = boost::any(*categoryIdsShrink);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (columnsShrink) {
      res["Columns"] = boost::any(*columnsShrink);
    }
    if (dataSourceShrink) {
      res["DataSource"] = boost::any(*dataSourceShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentIdsShrink) {
      res["DocumentIds"] = boost::any(*documentIdsShrink);
    }
    if (embeddingModelName) {
      res["EmbeddingModelName"] = boost::any(*embeddingModelName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankModelName) {
      res["RerankModelName"] = boost::any(*rerankModelName);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sinkInstanceId) {
      res["SinkInstanceId"] = boost::any(*sinkInstanceId);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    if (chunkMode) {
      res["chunkMode"] = boost::any(*chunkMode);
    }
    if (enableHeaders) {
      res["enableHeaders"] = boost::any(*enableHeaders);
    }
    if (metaExtractColumnsShrink) {
      res["metaExtractColumns"] = boost::any(*metaExtractColumnsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      categoryIdsShrink = make_shared<string>(boost::any_cast<string>(m["CategoryIds"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Columns") != m.end() && !m["Columns"].empty()) {
      columnsShrink = make_shared<string>(boost::any_cast<string>(m["Columns"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      dataSourceShrink = make_shared<string>(boost::any_cast<string>(m["DataSource"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      documentIdsShrink = make_shared<string>(boost::any_cast<string>(m["DocumentIds"]));
    }
    if (m.find("EmbeddingModelName") != m.end() && !m["EmbeddingModelName"].empty()) {
      embeddingModelName = make_shared<string>(boost::any_cast<string>(m["EmbeddingModelName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankModelName") != m.end() && !m["RerankModelName"].empty()) {
      rerankModelName = make_shared<string>(boost::any_cast<string>(m["RerankModelName"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SinkInstanceId") != m.end() && !m["SinkInstanceId"].empty()) {
      sinkInstanceId = make_shared<string>(boost::any_cast<string>(m["SinkInstanceId"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
    if (m.find("chunkMode") != m.end() && !m["chunkMode"].empty()) {
      chunkMode = make_shared<string>(boost::any_cast<string>(m["chunkMode"]));
    }
    if (m.find("enableHeaders") != m.end() && !m["enableHeaders"].empty()) {
      enableHeaders = make_shared<bool>(boost::any_cast<bool>(m["enableHeaders"]));
    }
    if (m.find("metaExtractColumns") != m.end() && !m["metaExtractColumns"].empty()) {
      metaExtractColumnsShrink = make_shared<string>(boost::any_cast<string>(m["metaExtractColumns"]));
    }
  }


  virtual ~CreateIndexShrinkRequest() = default;
};
class CreateIndexResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  CreateIndexResponseBodyData() {}

  explicit CreateIndexResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~CreateIndexResponseBodyData() = default;
};
class CreateIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateIndexResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  CreateIndexResponseBody() {}

  explicit CreateIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        CreateIndexResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateIndexResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateIndexResponseBody() = default;
};
class CreateIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIndexResponseBody> body{};

  CreateIndexResponse() {}

  explicit CreateIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIndexResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIndexResponse() = default;
};
class CreateMemoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  CreateMemoryRequest() {}

  explicit CreateMemoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~CreateMemoryRequest() = default;
};
class CreateMemoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> memoryId{};
  shared_ptr<string> requestId{};

  CreateMemoryResponseBody() {}

  explicit CreateMemoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memoryId) {
      res["memoryId"] = boost::any(*memoryId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("memoryId") != m.end() && !m["memoryId"].empty()) {
      memoryId = make_shared<string>(boost::any_cast<string>(m["memoryId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateMemoryResponseBody() = default;
};
class CreateMemoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemoryResponseBody> body{};

  CreateMemoryResponse() {}

  explicit CreateMemoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMemoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemoryResponse() = default;
};
class CreateMemoryNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  CreateMemoryNodeRequest() {}

  explicit CreateMemoryNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~CreateMemoryNodeRequest() = default;
};
class CreateMemoryNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> memoryNodeId{};
  shared_ptr<string> requestId{};

  CreateMemoryNodeResponseBody() {}

  explicit CreateMemoryNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memoryNodeId) {
      res["memoryNodeId"] = boost::any(*memoryNodeId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("memoryNodeId") != m.end() && !m["memoryNodeId"].empty()) {
      memoryNodeId = make_shared<string>(boost::any_cast<string>(m["memoryNodeId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateMemoryNodeResponseBody() = default;
};
class CreateMemoryNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMemoryNodeResponseBody> body{};

  CreateMemoryNodeResponse() {}

  explicit CreateMemoryNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMemoryNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMemoryNodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMemoryNodeResponse() = default;
};
class CreatePromptTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> name{};

  CreatePromptTemplateRequest() {}

  explicit CreatePromptTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreatePromptTemplateRequest() = default;
};
class CreatePromptTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> promptTemplateId{};
  shared_ptr<string> requestId{};

  CreatePromptTemplateResponseBody() {}

  explicit CreatePromptTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promptTemplateId) {
      res["promptTemplateId"] = boost::any(*promptTemplateId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("promptTemplateId") != m.end() && !m["promptTemplateId"].empty()) {
      promptTemplateId = make_shared<string>(boost::any_cast<string>(m["promptTemplateId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreatePromptTemplateResponseBody() = default;
};
class CreatePromptTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePromptTemplateResponseBody> body{};

  CreatePromptTemplateResponse() {}

  explicit CreatePromptTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePromptTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePromptTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePromptTemplateResponse() = default;
};
class DeleteAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteAgentResponseBody() {}

  explicit DeleteAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DeleteAgentResponseBody() = default;
};
class DeleteAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAgentResponseBody> body{};

  DeleteAgentResponse() {}

  explicit DeleteAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAgentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAgentResponse() = default;
};
class DeleteCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};

  DeleteCategoryResponseBodyData() {}

  explicit DeleteCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
  }


  virtual ~DeleteCategoryResponseBodyData() = default;
};
class DeleteCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteCategoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteCategoryResponseBody() {}

  explicit DeleteCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        DeleteCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteCategoryResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCategoryResponseBody() = default;
};
class DeleteCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCategoryResponseBody> body{};

  DeleteCategoryResponse() {}

  explicit DeleteCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCategoryResponse() = default;
};
class DeleteFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};

  DeleteFileResponseBodyData() {}

  explicit DeleteFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
  }


  virtual ~DeleteFileResponseBodyData() = default;
};
class DeleteFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteFileResponseBody() {}

  explicit DeleteFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        DeleteFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFileResponseBody() = default;
};
class DeleteFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFileResponseBody> body{};

  DeleteFileResponse() {}

  explicit DeleteFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileResponse() = default;
};
class DeleteIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexId{};

  DeleteIndexRequest() {}

  explicit DeleteIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~DeleteIndexRequest() = default;
};
class DeleteIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteIndexResponseBody() {}

  explicit DeleteIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteIndexResponseBody() = default;
};
class DeleteIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndexResponseBody> body{};

  DeleteIndexResponse() {}

  explicit DeleteIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndexResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndexResponse() = default;
};
class DeleteIndexDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> indexId{};

  DeleteIndexDocumentRequest() {}

  explicit DeleteIndexDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~DeleteIndexDocumentRequest() = default;
};
class DeleteIndexDocumentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentIdsShrink{};
  shared_ptr<string> indexId{};

  DeleteIndexDocumentShrinkRequest() {}

  explicit DeleteIndexDocumentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentIdsShrink) {
      res["DocumentIds"] = boost::any(*documentIdsShrink);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      documentIdsShrink = make_shared<string>(boost::any_cast<string>(m["DocumentIds"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~DeleteIndexDocumentShrinkRequest() = default;
};
class DeleteIndexDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deletedDocument{};

  DeleteIndexDocumentResponseBodyData() {}

  explicit DeleteIndexDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletedDocument) {
      res["DeletedDocument"] = boost::any(*deletedDocument);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletedDocument") != m.end() && !m["DeletedDocument"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeletedDocument"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeletedDocument"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deletedDocument = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DeleteIndexDocumentResponseBodyData() = default;
};
class DeleteIndexDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteIndexDocumentResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DeleteIndexDocumentResponseBody() {}

  explicit DeleteIndexDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        DeleteIndexDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteIndexDocumentResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteIndexDocumentResponseBody() = default;
};
class DeleteIndexDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndexDocumentResponseBody> body{};

  DeleteIndexDocumentResponse() {}

  explicit DeleteIndexDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIndexDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndexDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndexDocumentResponse() = default;
};
class DeleteMemoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMemoryResponseBody() {}

  explicit DeleteMemoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteMemoryResponseBody() = default;
};
class DeleteMemoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMemoryResponseBody> body{};

  DeleteMemoryResponse() {}

  explicit DeleteMemoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMemoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMemoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMemoryResponse() = default;
};
class DeleteMemoryNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteMemoryNodeResponseBody() {}

  explicit DeleteMemoryNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeleteMemoryNodeResponseBody() = default;
};
class DeleteMemoryNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteMemoryNodeResponseBody> body{};

  DeleteMemoryNodeResponse() {}

  explicit DeleteMemoryNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteMemoryNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteMemoryNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteMemoryNodeResponse() = default;
};
class DeletePromptTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePromptTemplateResponseBody() {}

  explicit DeletePromptTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~DeletePromptTemplateResponseBody() = default;
};
class DeletePromptTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePromptTemplateResponseBody> body{};

  DeletePromptTemplateResponse() {}

  explicit DeletePromptTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePromptTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePromptTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePromptTemplateResponse() = default;
};
class DescribeFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> parser{};
  shared_ptr<long> sizeInBytes{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tags{};

  DescribeFileResponseBodyData() {}

  explicit DescribeFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (sizeInBytes) {
      res["SizeInBytes"] = boost::any(*sizeInBytes);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("SizeInBytes") != m.end() && !m["SizeInBytes"].empty()) {
      sizeInBytes = make_shared<long>(boost::any_cast<long>(m["SizeInBytes"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeFileResponseBodyData() = default;
};
class DescribeFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DescribeFileResponseBody() {}

  explicit DescribeFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        DescribeFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DescribeFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeFileResponseBody() = default;
};
class DescribeFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFileResponseBody> body{};

  DescribeFileResponse() {}

  explicit DescribeFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFileResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFileResponse() = default;
};
class GetIndexJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexId{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  GetIndexJobStatusRequest() {}

  explicit GetIndexJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~GetIndexJobStatusRequest() = default;
};
class GetIndexJobStatusResponseBodyDataDocuments : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> docId{};
  shared_ptr<string> docName{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> message{};
  shared_ptr<string> status{};

  GetIndexJobStatusResponseBodyDataDocuments() {}

  explicit GetIndexJobStatusResponseBodyDataDocuments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (docName) {
      res["DocName"] = boost::any(*docName);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("DocName") != m.end() && !m["DocName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["DocName"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetIndexJobStatusResponseBodyDataDocuments() = default;
};
class GetIndexJobStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetIndexJobStatusResponseBodyDataDocuments>> documents{};
  shared_ptr<string> jobId{};
  shared_ptr<string> status{};

  GetIndexJobStatusResponseBodyData() {}

  explicit GetIndexJobStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documents) {
      vector<boost::any> temp1;
      for(auto item1:*documents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Documents"] = boost::any(temp1);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Documents") != m.end() && !m["Documents"].empty()) {
      if (typeid(vector<boost::any>) == m["Documents"].type()) {
        vector<GetIndexJobStatusResponseBodyDataDocuments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Documents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetIndexJobStatusResponseBodyDataDocuments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documents = make_shared<vector<GetIndexJobStatusResponseBodyDataDocuments>>(expect1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetIndexJobStatusResponseBodyData() = default;
};
class GetIndexJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetIndexJobStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetIndexJobStatusResponseBody() {}

  explicit GetIndexJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        GetIndexJobStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetIndexJobStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetIndexJobStatusResponseBody() = default;
};
class GetIndexJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIndexJobStatusResponseBody> body{};

  GetIndexJobStatusResponse() {}

  explicit GetIndexJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetIndexJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexJobStatusResponse() = default;
};
class GetMemoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> memoryId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetMemoryResponseBody() {}

  explicit GetMemoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (memoryId) {
      res["memoryId"] = boost::any(*memoryId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("memoryId") != m.end() && !m["memoryId"].empty()) {
      memoryId = make_shared<string>(boost::any_cast<string>(m["memoryId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~GetMemoryResponseBody() = default;
};
class GetMemoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMemoryResponseBody> body{};

  GetMemoryResponse() {}

  explicit GetMemoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMemoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMemoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetMemoryResponse() = default;
};
class GetMemoryNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> memoryId{};
  shared_ptr<string> memoryNodeId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetMemoryNodeResponseBody() {}

  explicit GetMemoryNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (memoryId) {
      res["memoryId"] = boost::any(*memoryId);
    }
    if (memoryNodeId) {
      res["memoryNodeId"] = boost::any(*memoryNodeId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("memoryId") != m.end() && !m["memoryId"].empty()) {
      memoryId = make_shared<string>(boost::any_cast<string>(m["memoryId"]));
    }
    if (m.find("memoryNodeId") != m.end() && !m["memoryNodeId"].empty()) {
      memoryNodeId = make_shared<string>(boost::any_cast<string>(m["memoryNodeId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~GetMemoryNodeResponseBody() = default;
};
class GetMemoryNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMemoryNodeResponseBody> body{};

  GetMemoryNodeResponse() {}

  explicit GetMemoryNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMemoryNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMemoryNodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetMemoryNodeResponse() = default;
};
class GetPromptTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> name{};
  shared_ptr<string> promptTemplateId{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> variables{};
  shared_ptr<string> workspaceId{};

  GetPromptTemplateResponseBody() {}

  explicit GetPromptTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (promptTemplateId) {
      res["promptTemplateId"] = boost::any(*promptTemplateId);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("promptTemplateId") != m.end() && !m["promptTemplateId"].empty()) {
      promptTemplateId = make_shared<string>(boost::any_cast<string>(m["promptTemplateId"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["variables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      variables = make_shared<vector<string>>(toVec1);
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~GetPromptTemplateResponseBody() = default;
};
class GetPromptTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPromptTemplateResponseBody> body{};

  GetPromptTemplateResponse() {}

  explicit GetPromptTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPromptTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPromptTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetPromptTemplateResponse() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableAdbRecord{};
  shared_ptr<bool> enableRecord{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> storeCode{};

  GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAdbRecord) {
      res["enableAdbRecord"] = boost::any(*enableAdbRecord);
    }
    if (enableRecord) {
      res["enableRecord"] = boost::any(*enableRecord);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (storeCode) {
      res["storeCode"] = boost::any(*storeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableAdbRecord") != m.end() && !m["enableAdbRecord"].empty()) {
      enableAdbRecord = make_shared<bool>(boost::any_cast<bool>(m["enableAdbRecord"]));
    }
    if (m.find("enableRecord") != m.end() && !m["enableRecord"].empty()) {
      enableRecord = make_shared<bool>(boost::any_cast<bool>(m["enableRecord"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("storeCode") != m.end() && !m["storeCode"].empty()) {
      storeCode = make_shared<string>(boost::any_cast<string>(m["storeCode"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigParameters : public Darabonba::Model {
public:
  shared_ptr<long> dialogRound{};
  shared_ptr<long> maxTokens{};
  shared_ptr<double> temperature{};

  GetPublishedAgentResponseBodyDataApplicationConfigParameters() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogRound) {
      res["dialogRound"] = boost::any(*dialogRound);
    }
    if (maxTokens) {
      res["maxTokens"] = boost::any(*maxTokens);
    }
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogRound") != m.end() && !m["dialogRound"].empty()) {
      dialogRound = make_shared<long>(boost::any_cast<long>(m["dialogRound"]));
    }
    if (m.find("maxTokens") != m.end() && !m["maxTokens"].empty()) {
      maxTokens = make_shared<long>(boost::any_cast<long>(m["maxTokens"]));
    }
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigParameters() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigRagConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableCitation{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<vector<string>> knowledgeBaseCodeList{};
  shared_ptr<long> topK{};

  GetPublishedAgentResponseBodyDataApplicationConfigRagConfig() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigRagConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableCitation) {
      res["enableCitation"] = boost::any(*enableCitation);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (knowledgeBaseCodeList) {
      res["knowledgeBaseCodeList"] = boost::any(*knowledgeBaseCodeList);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableCitation") != m.end() && !m["enableCitation"].empty()) {
      enableCitation = make_shared<bool>(boost::any_cast<bool>(m["enableCitation"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("knowledgeBaseCodeList") != m.end() && !m["knowledgeBaseCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["knowledgeBaseCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["knowledgeBaseCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      knowledgeBaseCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigRagConfig() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigSecurity : public Darabonba::Model {
public:
  shared_ptr<string> processingStrategy{};

  GetPublishedAgentResponseBodyDataApplicationConfigSecurity() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigSecurity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processingStrategy) {
      res["processingStrategy"] = boost::any(*processingStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("processingStrategy") != m.end() && !m["processingStrategy"].empty()) {
      processingStrategy = make_shared<string>(boost::any_cast<string>(m["processingStrategy"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigSecurity() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigTools : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  GetPublishedAgentResponseBodyDataApplicationConfigTools() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigTools() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows() = default;
};
class GetPublishedAgentResponseBodyDataApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig> historyConfig{};
  shared_ptr<GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory> longTermMemory{};
  shared_ptr<GetPublishedAgentResponseBodyDataApplicationConfigParameters> parameters{};
  shared_ptr<GetPublishedAgentResponseBodyDataApplicationConfigRagConfig> ragConfig{};
  shared_ptr<GetPublishedAgentResponseBodyDataApplicationConfigSecurity> security{};
  shared_ptr<vector<GetPublishedAgentResponseBodyDataApplicationConfigTools>> tools{};
  shared_ptr<vector<GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows>> workFlows{};

  GetPublishedAgentResponseBodyDataApplicationConfig() {}

  explicit GetPublishedAgentResponseBodyDataApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyConfig) {
      res["historyConfig"] = historyConfig ? boost::any(historyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (longTermMemory) {
      res["longTermMemory"] = longTermMemory ? boost::any(longTermMemory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ragConfig) {
      res["ragConfig"] = ragConfig ? boost::any(ragConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (security) {
      res["security"] = security ? boost::any(security->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tools) {
      vector<boost::any> temp1;
      for(auto item1:*tools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tools"] = boost::any(temp1);
    }
    if (workFlows) {
      vector<boost::any> temp1;
      for(auto item1:*workFlows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workFlows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("historyConfig") != m.end() && !m["historyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["historyConfig"].type()) {
        GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["historyConfig"]));
        historyConfig = make_shared<GetPublishedAgentResponseBodyDataApplicationConfigHistoryConfig>(model1);
      }
    }
    if (m.find("longTermMemory") != m.end() && !m["longTermMemory"].empty()) {
      if (typeid(map<string, boost::any>) == m["longTermMemory"].type()) {
        GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["longTermMemory"]));
        longTermMemory = make_shared<GetPublishedAgentResponseBodyDataApplicationConfigLongTermMemory>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameters"].type()) {
        GetPublishedAgentResponseBodyDataApplicationConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameters"]));
        parameters = make_shared<GetPublishedAgentResponseBodyDataApplicationConfigParameters>(model1);
      }
    }
    if (m.find("ragConfig") != m.end() && !m["ragConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ragConfig"].type()) {
        GetPublishedAgentResponseBodyDataApplicationConfigRagConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ragConfig"]));
        ragConfig = make_shared<GetPublishedAgentResponseBodyDataApplicationConfigRagConfig>(model1);
      }
    }
    if (m.find("security") != m.end() && !m["security"].empty()) {
      if (typeid(map<string, boost::any>) == m["security"].type()) {
        GetPublishedAgentResponseBodyDataApplicationConfigSecurity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["security"]));
        security = make_shared<GetPublishedAgentResponseBodyDataApplicationConfigSecurity>(model1);
      }
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(vector<boost::any>) == m["tools"].type()) {
        vector<GetPublishedAgentResponseBodyDataApplicationConfigTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPublishedAgentResponseBodyDataApplicationConfigTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tools = make_shared<vector<GetPublishedAgentResponseBodyDataApplicationConfigTools>>(expect1);
      }
    }
    if (m.find("workFlows") != m.end() && !m["workFlows"].empty()) {
      if (typeid(vector<boost::any>) == m["workFlows"].type()) {
        vector<GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workFlows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workFlows = make_shared<vector<GetPublishedAgentResponseBodyDataApplicationConfigWorkFlows>>(expect1);
      }
    }
  }


  virtual ~GetPublishedAgentResponseBodyDataApplicationConfig() = default;
};
class GetPublishedAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetPublishedAgentResponseBodyDataApplicationConfig> applicationConfig{};
  shared_ptr<string> code{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};

  GetPublishedAgentResponseBodyData() {}

  explicit GetPublishedAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfig) {
      res["applicationConfig"] = applicationConfig ? boost::any(applicationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["applicationConfig"].type()) {
        GetPublishedAgentResponseBodyDataApplicationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["applicationConfig"]));
        applicationConfig = make_shared<GetPublishedAgentResponseBodyDataApplicationConfig>(model1);
      }
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetPublishedAgentResponseBodyData() = default;
};
class GetPublishedAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPublishedAgentResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPublishedAgentResponseBody() {}

  explicit GetPublishedAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPublishedAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPublishedAgentResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetPublishedAgentResponseBody() = default;
};
class GetPublishedAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublishedAgentResponseBody> body{};

  GetPublishedAgentResponse() {}

  explicit GetPublishedAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublishedAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublishedAgentResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublishedAgentResponse() = default;
};
class ListCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryName{};
  shared_ptr<string> categoryType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> parentCategoryId{};

  ListCategoryRequest() {}

  explicit ListCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<string>(boost::any_cast<string>(m["CategoryType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~ListCategoryRequest() = default;
};
class ListCategoryResponseBodyDataCategoryList : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> categoryType{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> parentCategoryId{};

  ListCategoryResponseBodyDataCategoryList() {}

  explicit ListCategoryResponseBodyDataCategoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<string>(boost::any_cast<string>(m["CategoryType"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~ListCategoryResponseBodyDataCategoryList() = default;
};
class ListCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCategoryResponseBodyDataCategoryList>> categoryList{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  ListCategoryResponseBodyData() {}

  explicit ListCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryList) {
      vector<boost::any> temp1;
      for(auto item1:*categoryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CategoryList"] = boost::any(temp1);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryList") != m.end() && !m["CategoryList"].empty()) {
      if (typeid(vector<boost::any>) == m["CategoryList"].type()) {
        vector<ListCategoryResponseBodyDataCategoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CategoryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCategoryResponseBodyDataCategoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryList = make_shared<vector<ListCategoryResponseBodyDataCategoryList>>(expect1);
      }
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListCategoryResponseBodyData() = default;
};
class ListCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListCategoryResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListCategoryResponseBody() {}

  explicit ListCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ListCategoryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCategoryResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListCategoryResponseBody() = default;
};
class ListCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCategoryResponseBody> body{};

  ListCategoryResponse() {}

  explicit ListCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListCategoryResponse() = default;
};
class ListChunksRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> fields{};
  shared_ptr<string> fileId{};
  shared_ptr<string> filed{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNum{};
  shared_ptr<long> pageSize{};

  ListChunksRequest() {}

  explicit ListChunksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (filed) {
      res["Filed"] = boost::any(*filed);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Fields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Filed") != m.end() && !m["Filed"].empty()) {
      filed = make_shared<string>(boost::any_cast<string>(m["Filed"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListChunksRequest() = default;
};
class ListChunksResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  ListChunksResponseBodyDataNodes() {}

  explicit ListChunksResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ListChunksResponseBodyDataNodes() = default;
};
class ListChunksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListChunksResponseBodyDataNodes>> nodes{};
  shared_ptr<long> total{};

  ListChunksResponseBodyData() {}

  explicit ListChunksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListChunksResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChunksResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListChunksResponseBodyDataNodes>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListChunksResponseBodyData() = default;
};
class ListChunksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListChunksResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListChunksResponseBody() {}

  explicit ListChunksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ListChunksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListChunksResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListChunksResponseBody() = default;
};
class ListChunksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChunksResponseBody> body{};

  ListChunksResponse() {}

  explicit ListChunksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChunksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChunksResponseBody>(model1);
      }
    }
  }


  virtual ~ListChunksResponse() = default;
};
class ListFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> fileName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListFileRequest() {}

  explicit ListFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListFileRequest() = default;
};
class ListFileResponseBodyDataFileList : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> fileId{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> parser{};
  shared_ptr<long> sizeInBytes{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> tags{};

  ListFileResponseBodyDataFileList() {}

  explicit ListFileResponseBodyDataFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (parser) {
      res["Parser"] = boost::any(*parser);
    }
    if (sizeInBytes) {
      res["SizeInBytes"] = boost::any(*sizeInBytes);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Parser") != m.end() && !m["Parser"].empty()) {
      parser = make_shared<string>(boost::any_cast<string>(m["Parser"]));
    }
    if (m.find("SizeInBytes") != m.end() && !m["SizeInBytes"].empty()) {
      sizeInBytes = make_shared<long>(boost::any_cast<long>(m["SizeInBytes"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFileResponseBodyDataFileList() = default;
};
class ListFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListFileResponseBodyDataFileList>> fileList{};
  shared_ptr<bool> hasNext{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> totalCount{};

  ListFileResponseBodyData() {}

  explicit ListFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<ListFileResponseBodyDataFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFileResponseBodyDataFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<ListFileResponseBodyDataFileList>>(expect1);
      }
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<bool>(boost::any_cast<bool>(m["HasNext"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFileResponseBodyData() = default;
};
class ListFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListFileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListFileResponseBody() {}

  explicit ListFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ListFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListFileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListFileResponseBody() = default;
};
class ListFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFileResponseBody> body{};

  ListFileResponse() {}

  explicit ListFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFileResponseBody>(model1);
      }
    }
  }


  virtual ~ListFileResponse() = default;
};
class ListIndexDocumentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> documentName{};
  shared_ptr<string> documentStatus{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListIndexDocumentsRequest() {}

  explicit ListIndexDocumentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documentName) {
      res["DocumentName"] = boost::any(*documentName);
    }
    if (documentStatus) {
      res["DocumentStatus"] = boost::any(*documentStatus);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
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
    if (m.find("DocumentName") != m.end() && !m["DocumentName"].empty()) {
      documentName = make_shared<string>(boost::any_cast<string>(m["DocumentName"]));
    }
    if (m.find("DocumentStatus") != m.end() && !m["DocumentStatus"].empty()) {
      documentStatus = make_shared<string>(boost::any_cast<string>(m["DocumentStatus"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListIndexDocumentsRequest() = default;
};
class ListIndexDocumentsResponseBodyDataDocuments : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> documentType{};
  shared_ptr<long> gmtModified{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> sourceId{};
  shared_ptr<string> status{};

  ListIndexDocumentsResponseBodyDataDocuments() {}

  explicit ListIndexDocumentsResponseBodyDataDocuments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (documentType) {
      res["DocumentType"] = boost::any(*documentType);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (sourceId) {
      res["SourceId"] = boost::any(*sourceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DocumentType") != m.end() && !m["DocumentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["DocumentType"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SourceId") != m.end() && !m["SourceId"].empty()) {
      sourceId = make_shared<string>(boost::any_cast<string>(m["SourceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListIndexDocumentsResponseBodyDataDocuments() = default;
};
class ListIndexDocumentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListIndexDocumentsResponseBodyDataDocuments>> documents{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListIndexDocumentsResponseBodyData() {}

  explicit ListIndexDocumentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (documents) {
      vector<boost::any> temp1;
      for(auto item1:*documents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Documents"] = boost::any(temp1);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
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
    if (m.find("Documents") != m.end() && !m["Documents"].empty()) {
      if (typeid(vector<boost::any>) == m["Documents"].type()) {
        vector<ListIndexDocumentsResponseBodyDataDocuments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Documents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexDocumentsResponseBodyDataDocuments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documents = make_shared<vector<ListIndexDocumentsResponseBodyDataDocuments>>(expect1);
      }
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
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


  virtual ~ListIndexDocumentsResponseBodyData() = default;
};
class ListIndexDocumentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListIndexDocumentsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListIndexDocumentsResponseBody() {}

  explicit ListIndexDocumentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ListIndexDocumentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListIndexDocumentsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListIndexDocumentsResponseBody() = default;
};
class ListIndexDocumentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndexDocumentsResponseBody> body{};

  ListIndexDocumentsResponse() {}

  explicit ListIndexDocumentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndexDocumentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndexDocumentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndexDocumentsResponse() = default;
};
class ListIndicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexName{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  ListIndicesRequest() {}

  explicit ListIndicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexName) {
      res["IndexName"] = boost::any(*indexName);
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
    if (m.find("IndexName") != m.end() && !m["IndexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["IndexName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListIndicesRequest() = default;
};
class ListIndicesResponseBodyDataIndices : public Darabonba::Model {
public:
  shared_ptr<long> chunkSize{};
  shared_ptr<string> description{};
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> embeddingModelName{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> overlapSize{};
  shared_ptr<string> rerankMinScore{};
  shared_ptr<string> rerankModelName{};
  shared_ptr<string> separator{};
  shared_ptr<string> sinkInstanceId{};
  shared_ptr<string> sinkRegion{};
  shared_ptr<string> sinkType{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> structureType{};

  ListIndicesResponseBodyDataIndices() {}

  explicit ListIndicesResponseBodyDataIndices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (embeddingModelName) {
      res["EmbeddingModelName"] = boost::any(*embeddingModelName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankModelName) {
      res["RerankModelName"] = boost::any(*rerankModelName);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sinkInstanceId) {
      res["SinkInstanceId"] = boost::any(*sinkInstanceId);
    }
    if (sinkRegion) {
      res["SinkRegion"] = boost::any(*sinkRegion);
    }
    if (sinkType) {
      res["SinkType"] = boost::any(*sinkType);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (structureType) {
      res["StructureType"] = boost::any(*structureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EmbeddingModelName") != m.end() && !m["EmbeddingModelName"].empty()) {
      embeddingModelName = make_shared<string>(boost::any_cast<string>(m["EmbeddingModelName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<string>(boost::any_cast<string>(m["RerankMinScore"]));
    }
    if (m.find("RerankModelName") != m.end() && !m["RerankModelName"].empty()) {
      rerankModelName = make_shared<string>(boost::any_cast<string>(m["RerankModelName"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SinkInstanceId") != m.end() && !m["SinkInstanceId"].empty()) {
      sinkInstanceId = make_shared<string>(boost::any_cast<string>(m["SinkInstanceId"]));
    }
    if (m.find("SinkRegion") != m.end() && !m["SinkRegion"].empty()) {
      sinkRegion = make_shared<string>(boost::any_cast<string>(m["SinkRegion"]));
    }
    if (m.find("SinkType") != m.end() && !m["SinkType"].empty()) {
      sinkType = make_shared<string>(boost::any_cast<string>(m["SinkType"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("StructureType") != m.end() && !m["StructureType"].empty()) {
      structureType = make_shared<string>(boost::any_cast<string>(m["StructureType"]));
    }
  }


  virtual ~ListIndicesResponseBodyDataIndices() = default;
};
class ListIndicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListIndicesResponseBodyDataIndices>> indices{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListIndicesResponseBodyData() {}

  explicit ListIndicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indices) {
      vector<boost::any> temp1;
      for(auto item1:*indices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Indices"] = boost::any(temp1);
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
    if (m.find("Indices") != m.end() && !m["Indices"].empty()) {
      if (typeid(vector<boost::any>) == m["Indices"].type()) {
        vector<ListIndicesResponseBodyDataIndices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Indices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndicesResponseBodyDataIndices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indices = make_shared<vector<ListIndicesResponseBodyDataIndices>>(expect1);
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


  virtual ~ListIndicesResponseBodyData() = default;
};
class ListIndicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListIndicesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  ListIndicesResponseBody() {}

  explicit ListIndicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        ListIndicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListIndicesResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListIndicesResponseBody() = default;
};
class ListIndicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndicesResponseBody> body{};

  ListIndicesResponse() {}

  explicit ListIndicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIndicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndicesResponse() = default;
};
class ListMemoriesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListMemoriesRequest() {}

  explicit ListMemoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListMemoriesRequest() = default;
};
class ListMemoriesResponseBodyMemories : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> memoryId{};

  ListMemoriesResponseBodyMemories() {}

  explicit ListMemoriesResponseBodyMemories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (memoryId) {
      res["memoryId"] = boost::any(*memoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("memoryId") != m.end() && !m["memoryId"].empty()) {
      memoryId = make_shared<string>(boost::any_cast<string>(m["memoryId"]));
    }
  }


  virtual ~ListMemoriesResponseBodyMemories() = default;
};
class ListMemoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListMemoriesResponseBodyMemories>> memories{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> workspaceId{};

  ListMemoriesResponseBody() {}

  explicit ListMemoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (memories) {
      vector<boost::any> temp1;
      for(auto item1:*memories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["memories"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("memories") != m.end() && !m["memories"].empty()) {
      if (typeid(vector<boost::any>) == m["memories"].type()) {
        vector<ListMemoriesResponseBodyMemories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["memories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMemoriesResponseBodyMemories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memories = make_shared<vector<ListMemoriesResponseBodyMemories>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListMemoriesResponseBody() = default;
};
class ListMemoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMemoriesResponseBody> body{};

  ListMemoriesResponse() {}

  explicit ListMemoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMemoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMemoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMemoriesResponse() = default;
};
class ListMemoryNodesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListMemoryNodesRequest() {}

  explicit ListMemoryNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
  }


  virtual ~ListMemoryNodesRequest() = default;
};
class ListMemoryNodesResponseBodyMemoryNodes : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> memoryNodeId{};

  ListMemoryNodesResponseBodyMemoryNodes() {}

  explicit ListMemoryNodesResponseBodyMemoryNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (memoryNodeId) {
      res["memoryNodeId"] = boost::any(*memoryNodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("memoryNodeId") != m.end() && !m["memoryNodeId"].empty()) {
      memoryNodeId = make_shared<string>(boost::any_cast<string>(m["memoryNodeId"]));
    }
  }


  virtual ~ListMemoryNodesResponseBodyMemoryNodes() = default;
};
class ListMemoryNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<vector<ListMemoryNodesResponseBodyMemoryNodes>> memoryNodes{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListMemoryNodesResponseBody() {}

  explicit ListMemoryNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (memoryNodes) {
      vector<boost::any> temp1;
      for(auto item1:*memoryNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["memoryNodes"] = boost::any(temp1);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("memoryNodes") != m.end() && !m["memoryNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["memoryNodes"].type()) {
        vector<ListMemoryNodesResponseBodyMemoryNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["memoryNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListMemoryNodesResponseBodyMemoryNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        memoryNodes = make_shared<vector<ListMemoryNodesResponseBodyMemoryNodes>>(expect1);
      }
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListMemoryNodesResponseBody() = default;
};
class ListMemoryNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListMemoryNodesResponseBody> body{};

  ListMemoryNodesResponse() {}

  explicit ListMemoryNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListMemoryNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListMemoryNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListMemoryNodesResponse() = default;
};
class ListPromptTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> type{};

  ListPromptTemplatesRequest() {}

  explicit ListPromptTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListPromptTemplatesRequest() = default;
};
class ListPromptTemplatesResponseBodyPromptTemplates : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> name{};
  shared_ptr<string> promptTemplateId{};
  shared_ptr<string> type{};
  shared_ptr<vector<string>> variables{};

  ListPromptTemplatesResponseBodyPromptTemplates() {}

  explicit ListPromptTemplatesResponseBodyPromptTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (promptTemplateId) {
      res["promptTemplateId"] = boost::any(*promptTemplateId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (variables) {
      res["variables"] = boost::any(*variables);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("promptTemplateId") != m.end() && !m["promptTemplateId"].empty()) {
      promptTemplateId = make_shared<string>(boost::any_cast<string>(m["promptTemplateId"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["variables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      variables = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListPromptTemplatesResponseBodyPromptTemplates() = default;
};
class ListPromptTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPromptTemplatesResponseBodyPromptTemplates>> promptTemplates{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> workspaceId{};

  ListPromptTemplatesResponseBody() {}

  explicit ListPromptTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["nextToken"] = boost::any(*nextToken);
    }
    if (promptTemplates) {
      vector<boost::any> temp1;
      for(auto item1:*promptTemplates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["promptTemplates"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("nextToken") != m.end() && !m["nextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["nextToken"]));
    }
    if (m.find("promptTemplates") != m.end() && !m["promptTemplates"].empty()) {
      if (typeid(vector<boost::any>) == m["promptTemplates"].type()) {
        vector<ListPromptTemplatesResponseBodyPromptTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["promptTemplates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPromptTemplatesResponseBodyPromptTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        promptTemplates = make_shared<vector<ListPromptTemplatesResponseBodyPromptTemplates>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListPromptTemplatesResponseBody() = default;
};
class ListPromptTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPromptTemplatesResponseBody> body{};

  ListPromptTemplatesResponse() {}

  explicit ListPromptTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPromptTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPromptTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPromptTemplatesResponse() = default;
};
class ListPublishedAgentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListPublishedAgentRequest() {}

  explicit ListPublishedAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["pageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNo") != m.end() && !m["pageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["pageNo"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~ListPublishedAgentRequest() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableAdbRecord{};
  shared_ptr<bool> enableRecord{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> storeCode{};

  ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAdbRecord) {
      res["enableAdbRecord"] = boost::any(*enableAdbRecord);
    }
    if (enableRecord) {
      res["enableRecord"] = boost::any(*enableRecord);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (storeCode) {
      res["storeCode"] = boost::any(*storeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableAdbRecord") != m.end() && !m["enableAdbRecord"].empty()) {
      enableAdbRecord = make_shared<bool>(boost::any_cast<bool>(m["enableAdbRecord"]));
    }
    if (m.find("enableRecord") != m.end() && !m["enableRecord"].empty()) {
      enableRecord = make_shared<bool>(boost::any_cast<bool>(m["enableRecord"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("storeCode") != m.end() && !m["storeCode"].empty()) {
      storeCode = make_shared<string>(boost::any_cast<string>(m["storeCode"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigParameters : public Darabonba::Model {
public:
  shared_ptr<long> dialogRound{};
  shared_ptr<long> maxTokens{};
  shared_ptr<double> temperature{};

  ListPublishedAgentResponseBodyDataListApplicationConfigParameters() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogRound) {
      res["dialogRound"] = boost::any(*dialogRound);
    }
    if (maxTokens) {
      res["maxTokens"] = boost::any(*maxTokens);
    }
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogRound") != m.end() && !m["dialogRound"].empty()) {
      dialogRound = make_shared<long>(boost::any_cast<long>(m["dialogRound"]));
    }
    if (m.find("maxTokens") != m.end() && !m["maxTokens"].empty()) {
      maxTokens = make_shared<long>(boost::any_cast<long>(m["maxTokens"]));
    }
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigParameters() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableCitation{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<vector<string>> knowledgeBaseCodeList{};
  shared_ptr<long> topK{};

  ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableCitation) {
      res["enableCitation"] = boost::any(*enableCitation);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (knowledgeBaseCodeList) {
      res["knowledgeBaseCodeList"] = boost::any(*knowledgeBaseCodeList);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableCitation") != m.end() && !m["enableCitation"].empty()) {
      enableCitation = make_shared<bool>(boost::any_cast<bool>(m["enableCitation"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("knowledgeBaseCodeList") != m.end() && !m["knowledgeBaseCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["knowledgeBaseCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["knowledgeBaseCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      knowledgeBaseCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigSecurity : public Darabonba::Model {
public:
  shared_ptr<string> processingStrategy{};

  ListPublishedAgentResponseBodyDataListApplicationConfigSecurity() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigSecurity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processingStrategy) {
      res["processingStrategy"] = boost::any(*processingStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("processingStrategy") != m.end() && !m["processingStrategy"].empty()) {
      processingStrategy = make_shared<string>(boost::any_cast<string>(m["processingStrategy"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigSecurity() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigTools : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListPublishedAgentResponseBodyDataListApplicationConfigTools() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigTools() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows() = default;
};
class ListPublishedAgentResponseBodyDataListApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig> historyConfig{};
  shared_ptr<ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory> longTermMemory{};
  shared_ptr<ListPublishedAgentResponseBodyDataListApplicationConfigParameters> parameters{};
  shared_ptr<ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig> ragConfig{};
  shared_ptr<ListPublishedAgentResponseBodyDataListApplicationConfigSecurity> security{};
  shared_ptr<vector<ListPublishedAgentResponseBodyDataListApplicationConfigTools>> tools{};
  shared_ptr<vector<ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows>> workFlows{};

  ListPublishedAgentResponseBodyDataListApplicationConfig() {}

  explicit ListPublishedAgentResponseBodyDataListApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyConfig) {
      res["historyConfig"] = historyConfig ? boost::any(historyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (longTermMemory) {
      res["longTermMemory"] = longTermMemory ? boost::any(longTermMemory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ragConfig) {
      res["ragConfig"] = ragConfig ? boost::any(ragConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (security) {
      res["security"] = security ? boost::any(security->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tools) {
      vector<boost::any> temp1;
      for(auto item1:*tools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tools"] = boost::any(temp1);
    }
    if (workFlows) {
      vector<boost::any> temp1;
      for(auto item1:*workFlows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workFlows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("historyConfig") != m.end() && !m["historyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["historyConfig"].type()) {
        ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["historyConfig"]));
        historyConfig = make_shared<ListPublishedAgentResponseBodyDataListApplicationConfigHistoryConfig>(model1);
      }
    }
    if (m.find("longTermMemory") != m.end() && !m["longTermMemory"].empty()) {
      if (typeid(map<string, boost::any>) == m["longTermMemory"].type()) {
        ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["longTermMemory"]));
        longTermMemory = make_shared<ListPublishedAgentResponseBodyDataListApplicationConfigLongTermMemory>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameters"].type()) {
        ListPublishedAgentResponseBodyDataListApplicationConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameters"]));
        parameters = make_shared<ListPublishedAgentResponseBodyDataListApplicationConfigParameters>(model1);
      }
    }
    if (m.find("ragConfig") != m.end() && !m["ragConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ragConfig"].type()) {
        ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ragConfig"]));
        ragConfig = make_shared<ListPublishedAgentResponseBodyDataListApplicationConfigRagConfig>(model1);
      }
    }
    if (m.find("security") != m.end() && !m["security"].empty()) {
      if (typeid(map<string, boost::any>) == m["security"].type()) {
        ListPublishedAgentResponseBodyDataListApplicationConfigSecurity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["security"]));
        security = make_shared<ListPublishedAgentResponseBodyDataListApplicationConfigSecurity>(model1);
      }
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(vector<boost::any>) == m["tools"].type()) {
        vector<ListPublishedAgentResponseBodyDataListApplicationConfigTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishedAgentResponseBodyDataListApplicationConfigTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tools = make_shared<vector<ListPublishedAgentResponseBodyDataListApplicationConfigTools>>(expect1);
      }
    }
    if (m.find("workFlows") != m.end() && !m["workFlows"].empty()) {
      if (typeid(vector<boost::any>) == m["workFlows"].type()) {
        vector<ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workFlows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workFlows = make_shared<vector<ListPublishedAgentResponseBodyDataListApplicationConfigWorkFlows>>(expect1);
      }
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataListApplicationConfig() = default;
};
class ListPublishedAgentResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<ListPublishedAgentResponseBodyDataListApplicationConfig> applicationConfig{};
  shared_ptr<string> code{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};

  ListPublishedAgentResponseBodyDataList() {}

  explicit ListPublishedAgentResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfig) {
      res["applicationConfig"] = applicationConfig ? boost::any(applicationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["applicationConfig"].type()) {
        ListPublishedAgentResponseBodyDataListApplicationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["applicationConfig"]));
        applicationConfig = make_shared<ListPublishedAgentResponseBodyDataListApplicationConfig>(model1);
      }
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyDataList() = default;
};
class ListPublishedAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublishedAgentResponseBodyDataList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListPublishedAgentResponseBodyData() {}

  explicit ListPublishedAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["list"] = boost::any(temp1);
    }
    if (pageNo) {
      res["pageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("list") != m.end() && !m["list"].empty()) {
      if (typeid(vector<boost::any>) == m["list"].type()) {
        vector<ListPublishedAgentResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["list"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishedAgentResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListPublishedAgentResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("pageNo") != m.end() && !m["pageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["pageNo"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListPublishedAgentResponseBodyData() = default;
};
class ListPublishedAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListPublishedAgentResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ListPublishedAgentResponseBody() {}

  explicit ListPublishedAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListPublishedAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListPublishedAgentResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~ListPublishedAgentResponseBody() = default;
};
class ListPublishedAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublishedAgentResponseBody> body{};

  ListPublishedAgentResponse() {}

  explicit ListPublishedAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishedAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublishedAgentResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublishedAgentResponse() = default;
};
class RetrieveRequestQueryHistory : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  RetrieveRequestQueryHistory() {}

  explicit RetrieveRequestQueryHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~RetrieveRequestQueryHistory() = default;
};
class RetrieveRequestRerank : public Darabonba::Model {
public:
  shared_ptr<string> modelName{};

  RetrieveRequestRerank() {}

  explicit RetrieveRequestRerank(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
  }


  virtual ~RetrieveRequestRerank() = default;
};
class RetrieveRequestRewrite : public Darabonba::Model {
public:
  shared_ptr<string> modelName{};

  RetrieveRequestRewrite() {}

  explicit RetrieveRequestRewrite(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
  }


  virtual ~RetrieveRequestRewrite() = default;
};
class RetrieveRequest : public Darabonba::Model {
public:
  shared_ptr<long> denseSimilarityTopK{};
  shared_ptr<bool> enableReranking{};
  shared_ptr<bool> enableRewrite{};
  shared_ptr<vector<string>> images{};
  shared_ptr<string> indexId{};
  shared_ptr<string> query{};
  shared_ptr<vector<RetrieveRequestQueryHistory>> queryHistory{};
  shared_ptr<vector<RetrieveRequestRerank>> rerank{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<long> rerankTopN{};
  shared_ptr<vector<RetrieveRequestRewrite>> rewrite{};
  shared_ptr<bool> saveRetrieverHistory{};
  shared_ptr<vector<map<string, string>>> searchFilters{};
  shared_ptr<long> sparseSimilarityTopK{};

  RetrieveRequest() {}

  explicit RetrieveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (denseSimilarityTopK) {
      res["DenseSimilarityTopK"] = boost::any(*denseSimilarityTopK);
    }
    if (enableReranking) {
      res["EnableReranking"] = boost::any(*enableReranking);
    }
    if (enableRewrite) {
      res["EnableRewrite"] = boost::any(*enableRewrite);
    }
    if (images) {
      res["Images"] = boost::any(*images);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (queryHistory) {
      vector<boost::any> temp1;
      for(auto item1:*queryHistory){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueryHistory"] = boost::any(temp1);
    }
    if (rerank) {
      vector<boost::any> temp1;
      for(auto item1:*rerank){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rerank"] = boost::any(temp1);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankTopN) {
      res["RerankTopN"] = boost::any(*rerankTopN);
    }
    if (rewrite) {
      vector<boost::any> temp1;
      for(auto item1:*rewrite){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rewrite"] = boost::any(temp1);
    }
    if (saveRetrieverHistory) {
      res["SaveRetrieverHistory"] = boost::any(*saveRetrieverHistory);
    }
    if (searchFilters) {
      res["SearchFilters"] = boost::any(*searchFilters);
    }
    if (sparseSimilarityTopK) {
      res["SparseSimilarityTopK"] = boost::any(*sparseSimilarityTopK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DenseSimilarityTopK") != m.end() && !m["DenseSimilarityTopK"].empty()) {
      denseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["DenseSimilarityTopK"]));
    }
    if (m.find("EnableReranking") != m.end() && !m["EnableReranking"].empty()) {
      enableReranking = make_shared<bool>(boost::any_cast<bool>(m["EnableReranking"]));
    }
    if (m.find("EnableRewrite") != m.end() && !m["EnableRewrite"].empty()) {
      enableRewrite = make_shared<bool>(boost::any_cast<bool>(m["EnableRewrite"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Images"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      images = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryHistory") != m.end() && !m["QueryHistory"].empty()) {
      if (typeid(vector<boost::any>) == m["QueryHistory"].type()) {
        vector<RetrieveRequestQueryHistory> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueryHistory"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveRequestQueryHistory model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queryHistory = make_shared<vector<RetrieveRequestQueryHistory>>(expect1);
      }
    }
    if (m.find("Rerank") != m.end() && !m["Rerank"].empty()) {
      if (typeid(vector<boost::any>) == m["Rerank"].type()) {
        vector<RetrieveRequestRerank> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rerank"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveRequestRerank model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rerank = make_shared<vector<RetrieveRequestRerank>>(expect1);
      }
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankTopN") != m.end() && !m["RerankTopN"].empty()) {
      rerankTopN = make_shared<long>(boost::any_cast<long>(m["RerankTopN"]));
    }
    if (m.find("Rewrite") != m.end() && !m["Rewrite"].empty()) {
      if (typeid(vector<boost::any>) == m["Rewrite"].type()) {
        vector<RetrieveRequestRewrite> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rewrite"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveRequestRewrite model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rewrite = make_shared<vector<RetrieveRequestRewrite>>(expect1);
      }
    }
    if (m.find("SaveRetrieverHistory") != m.end() && !m["SaveRetrieverHistory"].empty()) {
      saveRetrieverHistory = make_shared<bool>(boost::any_cast<bool>(m["SaveRetrieverHistory"]));
    }
    if (m.find("SearchFilters") != m.end() && !m["SearchFilters"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["SearchFilters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SearchFilters"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      searchFilters = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("SparseSimilarityTopK") != m.end() && !m["SparseSimilarityTopK"].empty()) {
      sparseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["SparseSimilarityTopK"]));
    }
  }


  virtual ~RetrieveRequest() = default;
};
class RetrieveShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> denseSimilarityTopK{};
  shared_ptr<bool> enableReranking{};
  shared_ptr<bool> enableRewrite{};
  shared_ptr<string> imagesShrink{};
  shared_ptr<string> indexId{};
  shared_ptr<string> query{};
  shared_ptr<string> queryHistoryShrink{};
  shared_ptr<string> rerankShrink{};
  shared_ptr<double> rerankMinScore{};
  shared_ptr<long> rerankTopN{};
  shared_ptr<string> rewriteShrink{};
  shared_ptr<bool> saveRetrieverHistory{};
  shared_ptr<string> searchFiltersShrink{};
  shared_ptr<long> sparseSimilarityTopK{};

  RetrieveShrinkRequest() {}

  explicit RetrieveShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (denseSimilarityTopK) {
      res["DenseSimilarityTopK"] = boost::any(*denseSimilarityTopK);
    }
    if (enableReranking) {
      res["EnableReranking"] = boost::any(*enableReranking);
    }
    if (enableRewrite) {
      res["EnableRewrite"] = boost::any(*enableRewrite);
    }
    if (imagesShrink) {
      res["Images"] = boost::any(*imagesShrink);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (queryHistoryShrink) {
      res["QueryHistory"] = boost::any(*queryHistoryShrink);
    }
    if (rerankShrink) {
      res["Rerank"] = boost::any(*rerankShrink);
    }
    if (rerankMinScore) {
      res["RerankMinScore"] = boost::any(*rerankMinScore);
    }
    if (rerankTopN) {
      res["RerankTopN"] = boost::any(*rerankTopN);
    }
    if (rewriteShrink) {
      res["Rewrite"] = boost::any(*rewriteShrink);
    }
    if (saveRetrieverHistory) {
      res["SaveRetrieverHistory"] = boost::any(*saveRetrieverHistory);
    }
    if (searchFiltersShrink) {
      res["SearchFilters"] = boost::any(*searchFiltersShrink);
    }
    if (sparseSimilarityTopK) {
      res["SparseSimilarityTopK"] = boost::any(*sparseSimilarityTopK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DenseSimilarityTopK") != m.end() && !m["DenseSimilarityTopK"].empty()) {
      denseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["DenseSimilarityTopK"]));
    }
    if (m.find("EnableReranking") != m.end() && !m["EnableReranking"].empty()) {
      enableReranking = make_shared<bool>(boost::any_cast<bool>(m["EnableReranking"]));
    }
    if (m.find("EnableRewrite") != m.end() && !m["EnableRewrite"].empty()) {
      enableRewrite = make_shared<bool>(boost::any_cast<bool>(m["EnableRewrite"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      imagesShrink = make_shared<string>(boost::any_cast<string>(m["Images"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("QueryHistory") != m.end() && !m["QueryHistory"].empty()) {
      queryHistoryShrink = make_shared<string>(boost::any_cast<string>(m["QueryHistory"]));
    }
    if (m.find("Rerank") != m.end() && !m["Rerank"].empty()) {
      rerankShrink = make_shared<string>(boost::any_cast<string>(m["Rerank"]));
    }
    if (m.find("RerankMinScore") != m.end() && !m["RerankMinScore"].empty()) {
      rerankMinScore = make_shared<double>(boost::any_cast<double>(m["RerankMinScore"]));
    }
    if (m.find("RerankTopN") != m.end() && !m["RerankTopN"].empty()) {
      rerankTopN = make_shared<long>(boost::any_cast<long>(m["RerankTopN"]));
    }
    if (m.find("Rewrite") != m.end() && !m["Rewrite"].empty()) {
      rewriteShrink = make_shared<string>(boost::any_cast<string>(m["Rewrite"]));
    }
    if (m.find("SaveRetrieverHistory") != m.end() && !m["SaveRetrieverHistory"].empty()) {
      saveRetrieverHistory = make_shared<bool>(boost::any_cast<bool>(m["SaveRetrieverHistory"]));
    }
    if (m.find("SearchFilters") != m.end() && !m["SearchFilters"].empty()) {
      searchFiltersShrink = make_shared<string>(boost::any_cast<string>(m["SearchFilters"]));
    }
    if (m.find("SparseSimilarityTopK") != m.end() && !m["SparseSimilarityTopK"].empty()) {
      sparseSimilarityTopK = make_shared<long>(boost::any_cast<long>(m["SparseSimilarityTopK"]));
    }
  }


  virtual ~RetrieveShrinkRequest() = default;
};
class RetrieveResponseBodyDataNodes : public Darabonba::Model {
public:
  shared_ptr<boost::any> metadata{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};

  RetrieveResponseBodyDataNodes() {}

  explicit RetrieveResponseBodyDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metadata) {
      res["Metadata"] = boost::any(*metadata);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Metadata") != m.end() && !m["Metadata"].empty()) {
      metadata = make_shared<boost::any>(boost::any_cast<boost::any>(m["Metadata"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RetrieveResponseBodyDataNodes() = default;
};
class RetrieveResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RetrieveResponseBodyDataNodes>> nodes{};

  RetrieveResponseBodyData() {}

  explicit RetrieveResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<RetrieveResponseBodyDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RetrieveResponseBodyDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<RetrieveResponseBodyDataNodes>>(expect1);
      }
    }
  }


  virtual ~RetrieveResponseBodyData() = default;
};
class RetrieveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RetrieveResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  RetrieveResponseBody() {}

  explicit RetrieveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        RetrieveResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RetrieveResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RetrieveResponseBody() = default;
};
class RetrieveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RetrieveResponseBody> body{};

  RetrieveResponse() {}

  explicit RetrieveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RetrieveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RetrieveResponseBody>(model1);
      }
    }
  }


  virtual ~RetrieveResponse() = default;
};
class SubmitIndexAddDocumentsJobRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> categoryIds{};
  shared_ptr<string> chunkMode{};
  shared_ptr<long> chunkSize{};
  shared_ptr<vector<string>> documentIds{};
  shared_ptr<string> indexId{};
  shared_ptr<long> overlapSize{};
  shared_ptr<string> separator{};
  shared_ptr<string> sourceType{};

  SubmitIndexAddDocumentsJobRequest() {}

  explicit SubmitIndexAddDocumentsJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (chunkMode) {
      res["ChunkMode"] = boost::any(*chunkMode);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (documentIds) {
      res["DocumentIds"] = boost::any(*documentIds);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      categoryIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ChunkMode") != m.end() && !m["ChunkMode"].empty()) {
      chunkMode = make_shared<string>(boost::any_cast<string>(m["ChunkMode"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      documentIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobRequest() = default;
};
class SubmitIndexAddDocumentsJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> categoryIdsShrink{};
  shared_ptr<string> chunkMode{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> documentIdsShrink{};
  shared_ptr<string> indexId{};
  shared_ptr<long> overlapSize{};
  shared_ptr<string> separator{};
  shared_ptr<string> sourceType{};

  SubmitIndexAddDocumentsJobShrinkRequest() {}

  explicit SubmitIndexAddDocumentsJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryIdsShrink) {
      res["CategoryIds"] = boost::any(*categoryIdsShrink);
    }
    if (chunkMode) {
      res["ChunkMode"] = boost::any(*chunkMode);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (documentIdsShrink) {
      res["DocumentIds"] = boost::any(*documentIdsShrink);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (overlapSize) {
      res["OverlapSize"] = boost::any(*overlapSize);
    }
    if (separator) {
      res["Separator"] = boost::any(*separator);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      categoryIdsShrink = make_shared<string>(boost::any_cast<string>(m["CategoryIds"]));
    }
    if (m.find("ChunkMode") != m.end() && !m["ChunkMode"].empty()) {
      chunkMode = make_shared<string>(boost::any_cast<string>(m["ChunkMode"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("DocumentIds") != m.end() && !m["DocumentIds"].empty()) {
      documentIdsShrink = make_shared<string>(boost::any_cast<string>(m["DocumentIds"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("OverlapSize") != m.end() && !m["OverlapSize"].empty()) {
      overlapSize = make_shared<long>(boost::any_cast<long>(m["OverlapSize"]));
    }
    if (m.find("Separator") != m.end() && !m["Separator"].empty()) {
      separator = make_shared<string>(boost::any_cast<string>(m["Separator"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobShrinkRequest() = default;
};
class SubmitIndexAddDocumentsJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};

  SubmitIndexAddDocumentsJobResponseBodyData() {}

  explicit SubmitIndexAddDocumentsJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobResponseBodyData() = default;
};
class SubmitIndexAddDocumentsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitIndexAddDocumentsJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SubmitIndexAddDocumentsJobResponseBody() {}

  explicit SubmitIndexAddDocumentsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        SubmitIndexAddDocumentsJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitIndexAddDocumentsJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitIndexAddDocumentsJobResponseBody() = default;
};
class SubmitIndexAddDocumentsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitIndexAddDocumentsJobResponseBody> body{};

  SubmitIndexAddDocumentsJobResponse() {}

  explicit SubmitIndexAddDocumentsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIndexAddDocumentsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIndexAddDocumentsJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIndexAddDocumentsJobResponse() = default;
};
class SubmitIndexJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> indexId{};

  SubmitIndexJobRequest() {}

  explicit SubmitIndexJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~SubmitIndexJobRequest() = default;
};
class SubmitIndexJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> indexId{};

  SubmitIndexJobResponseBodyData() {}

  explicit SubmitIndexJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~SubmitIndexJobResponseBodyData() = default;
};
class SubmitIndexJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SubmitIndexJobResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  SubmitIndexJobResponseBody() {}

  explicit SubmitIndexJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        SubmitIndexJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitIndexJobResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SubmitIndexJobResponseBody() = default;
};
class SubmitIndexJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitIndexJobResponseBody> body{};

  SubmitIndexJobResponse() {}

  explicit SubmitIndexJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIndexJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIndexJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIndexJobResponse() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigHistoryConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableAdbRecord{};
  shared_ptr<bool> enableRecord{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> storeCode{};

  UpdateAndPublishAgentRequestApplicationConfigHistoryConfig() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigHistoryConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAdbRecord) {
      res["enableAdbRecord"] = boost::any(*enableAdbRecord);
    }
    if (enableRecord) {
      res["enableRecord"] = boost::any(*enableRecord);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (storeCode) {
      res["storeCode"] = boost::any(*storeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableAdbRecord") != m.end() && !m["enableAdbRecord"].empty()) {
      enableAdbRecord = make_shared<bool>(boost::any_cast<bool>(m["enableAdbRecord"]));
    }
    if (m.find("enableRecord") != m.end() && !m["enableRecord"].empty()) {
      enableRecord = make_shared<bool>(boost::any_cast<bool>(m["enableRecord"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("storeCode") != m.end() && !m["storeCode"].empty()) {
      storeCode = make_shared<string>(boost::any_cast<string>(m["storeCode"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigHistoryConfig() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigLongTermMemory : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  UpdateAndPublishAgentRequestApplicationConfigLongTermMemory() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigLongTermMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigLongTermMemory() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigParameters : public Darabonba::Model {
public:
  shared_ptr<long> dialogRound{};
  shared_ptr<long> maxTokens{};
  shared_ptr<double> temperature{};

  UpdateAndPublishAgentRequestApplicationConfigParameters() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogRound) {
      res["dialogRound"] = boost::any(*dialogRound);
    }
    if (maxTokens) {
      res["maxTokens"] = boost::any(*maxTokens);
    }
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogRound") != m.end() && !m["dialogRound"].empty()) {
      dialogRound = make_shared<long>(boost::any_cast<long>(m["dialogRound"]));
    }
    if (m.find("maxTokens") != m.end() && !m["maxTokens"].empty()) {
      maxTokens = make_shared<long>(boost::any_cast<long>(m["maxTokens"]));
    }
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigParameters() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigRagConfig : public Darabonba::Model {
public:
  shared_ptr<string> answerScope{};
  shared_ptr<bool> enableCitation{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<bool> enableWebSearch{};
  shared_ptr<string> fixedReplyDetail{};
  shared_ptr<vector<string>> knowledgeBaseCodeList{};
  shared_ptr<string> promptStrategy{};
  shared_ptr<string> ragRejectType{};
  shared_ptr<string> rejectFilterPrompt{};
  shared_ptr<string> rejectFilterType{};
  shared_ptr<long> retrieveMaxLength{};
  shared_ptr<long> topK{};

  UpdateAndPublishAgentRequestApplicationConfigRagConfig() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigRagConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerScope) {
      res["answerScope"] = boost::any(*answerScope);
    }
    if (enableCitation) {
      res["enableCitation"] = boost::any(*enableCitation);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (enableWebSearch) {
      res["enableWebSearch"] = boost::any(*enableWebSearch);
    }
    if (fixedReplyDetail) {
      res["fixedReplyDetail"] = boost::any(*fixedReplyDetail);
    }
    if (knowledgeBaseCodeList) {
      res["knowledgeBaseCodeList"] = boost::any(*knowledgeBaseCodeList);
    }
    if (promptStrategy) {
      res["promptStrategy"] = boost::any(*promptStrategy);
    }
    if (ragRejectType) {
      res["ragRejectType"] = boost::any(*ragRejectType);
    }
    if (rejectFilterPrompt) {
      res["rejectFilterPrompt"] = boost::any(*rejectFilterPrompt);
    }
    if (rejectFilterType) {
      res["rejectFilterType"] = boost::any(*rejectFilterType);
    }
    if (retrieveMaxLength) {
      res["retrieveMaxLength"] = boost::any(*retrieveMaxLength);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answerScope") != m.end() && !m["answerScope"].empty()) {
      answerScope = make_shared<string>(boost::any_cast<string>(m["answerScope"]));
    }
    if (m.find("enableCitation") != m.end() && !m["enableCitation"].empty()) {
      enableCitation = make_shared<bool>(boost::any_cast<bool>(m["enableCitation"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("enableWebSearch") != m.end() && !m["enableWebSearch"].empty()) {
      enableWebSearch = make_shared<bool>(boost::any_cast<bool>(m["enableWebSearch"]));
    }
    if (m.find("fixedReplyDetail") != m.end() && !m["fixedReplyDetail"].empty()) {
      fixedReplyDetail = make_shared<string>(boost::any_cast<string>(m["fixedReplyDetail"]));
    }
    if (m.find("knowledgeBaseCodeList") != m.end() && !m["knowledgeBaseCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["knowledgeBaseCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["knowledgeBaseCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      knowledgeBaseCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("promptStrategy") != m.end() && !m["promptStrategy"].empty()) {
      promptStrategy = make_shared<string>(boost::any_cast<string>(m["promptStrategy"]));
    }
    if (m.find("ragRejectType") != m.end() && !m["ragRejectType"].empty()) {
      ragRejectType = make_shared<string>(boost::any_cast<string>(m["ragRejectType"]));
    }
    if (m.find("rejectFilterPrompt") != m.end() && !m["rejectFilterPrompt"].empty()) {
      rejectFilterPrompt = make_shared<string>(boost::any_cast<string>(m["rejectFilterPrompt"]));
    }
    if (m.find("rejectFilterType") != m.end() && !m["rejectFilterType"].empty()) {
      rejectFilterType = make_shared<string>(boost::any_cast<string>(m["rejectFilterType"]));
    }
    if (m.find("retrieveMaxLength") != m.end() && !m["retrieveMaxLength"].empty()) {
      retrieveMaxLength = make_shared<long>(boost::any_cast<long>(m["retrieveMaxLength"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigRagConfig() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigSecurity : public Darabonba::Model {
public:
  shared_ptr<string> processingStrategy{};

  UpdateAndPublishAgentRequestApplicationConfigSecurity() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigSecurity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processingStrategy) {
      res["processingStrategy"] = boost::any(*processingStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("processingStrategy") != m.end() && !m["processingStrategy"].empty()) {
      processingStrategy = make_shared<string>(boost::any_cast<string>(m["processingStrategy"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigSecurity() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigTools : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  UpdateAndPublishAgentRequestApplicationConfigTools() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigTools() = default;
};
class UpdateAndPublishAgentRequestApplicationConfigWorkFlows : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  UpdateAndPublishAgentRequestApplicationConfigWorkFlows() {}

  explicit UpdateAndPublishAgentRequestApplicationConfigWorkFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfigWorkFlows() = default;
};
class UpdateAndPublishAgentRequestApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateAndPublishAgentRequestApplicationConfigHistoryConfig> historyConfig{};
  shared_ptr<UpdateAndPublishAgentRequestApplicationConfigLongTermMemory> longTermMemory{};
  shared_ptr<UpdateAndPublishAgentRequestApplicationConfigParameters> parameters{};
  shared_ptr<UpdateAndPublishAgentRequestApplicationConfigRagConfig> ragConfig{};
  shared_ptr<UpdateAndPublishAgentRequestApplicationConfigSecurity> security{};
  shared_ptr<vector<UpdateAndPublishAgentRequestApplicationConfigTools>> tools{};
  shared_ptr<vector<UpdateAndPublishAgentRequestApplicationConfigWorkFlows>> workFlows{};

  UpdateAndPublishAgentRequestApplicationConfig() {}

  explicit UpdateAndPublishAgentRequestApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyConfig) {
      res["historyConfig"] = historyConfig ? boost::any(historyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (longTermMemory) {
      res["longTermMemory"] = longTermMemory ? boost::any(longTermMemory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ragConfig) {
      res["ragConfig"] = ragConfig ? boost::any(ragConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (security) {
      res["security"] = security ? boost::any(security->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tools) {
      vector<boost::any> temp1;
      for(auto item1:*tools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tools"] = boost::any(temp1);
    }
    if (workFlows) {
      vector<boost::any> temp1;
      for(auto item1:*workFlows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workFlows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("historyConfig") != m.end() && !m["historyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["historyConfig"].type()) {
        UpdateAndPublishAgentRequestApplicationConfigHistoryConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["historyConfig"]));
        historyConfig = make_shared<UpdateAndPublishAgentRequestApplicationConfigHistoryConfig>(model1);
      }
    }
    if (m.find("longTermMemory") != m.end() && !m["longTermMemory"].empty()) {
      if (typeid(map<string, boost::any>) == m["longTermMemory"].type()) {
        UpdateAndPublishAgentRequestApplicationConfigLongTermMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["longTermMemory"]));
        longTermMemory = make_shared<UpdateAndPublishAgentRequestApplicationConfigLongTermMemory>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameters"].type()) {
        UpdateAndPublishAgentRequestApplicationConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameters"]));
        parameters = make_shared<UpdateAndPublishAgentRequestApplicationConfigParameters>(model1);
      }
    }
    if (m.find("ragConfig") != m.end() && !m["ragConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ragConfig"].type()) {
        UpdateAndPublishAgentRequestApplicationConfigRagConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ragConfig"]));
        ragConfig = make_shared<UpdateAndPublishAgentRequestApplicationConfigRagConfig>(model1);
      }
    }
    if (m.find("security") != m.end() && !m["security"].empty()) {
      if (typeid(map<string, boost::any>) == m["security"].type()) {
        UpdateAndPublishAgentRequestApplicationConfigSecurity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["security"]));
        security = make_shared<UpdateAndPublishAgentRequestApplicationConfigSecurity>(model1);
      }
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(vector<boost::any>) == m["tools"].type()) {
        vector<UpdateAndPublishAgentRequestApplicationConfigTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAndPublishAgentRequestApplicationConfigTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tools = make_shared<vector<UpdateAndPublishAgentRequestApplicationConfigTools>>(expect1);
      }
    }
    if (m.find("workFlows") != m.end() && !m["workFlows"].empty()) {
      if (typeid(vector<boost::any>) == m["workFlows"].type()) {
        vector<UpdateAndPublishAgentRequestApplicationConfigWorkFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workFlows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAndPublishAgentRequestApplicationConfigWorkFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workFlows = make_shared<vector<UpdateAndPublishAgentRequestApplicationConfigWorkFlows>>(expect1);
      }
    }
  }


  virtual ~UpdateAndPublishAgentRequestApplicationConfig() = default;
};
class UpdateAndPublishAgentRequestSampleLibrary : public Darabonba::Model {
public:
  shared_ptr<bool> enableSample{};
  shared_ptr<vector<string>> sampleLibraryIdList{};
  shared_ptr<long> topK{};

  UpdateAndPublishAgentRequestSampleLibrary() {}

  explicit UpdateAndPublishAgentRequestSampleLibrary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSample) {
      res["enableSample"] = boost::any(*enableSample);
    }
    if (sampleLibraryIdList) {
      res["sampleLibraryIdList"] = boost::any(*sampleLibraryIdList);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableSample") != m.end() && !m["enableSample"].empty()) {
      enableSample = make_shared<bool>(boost::any_cast<bool>(m["enableSample"]));
    }
    if (m.find("sampleLibraryIdList") != m.end() && !m["sampleLibraryIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sampleLibraryIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sampleLibraryIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sampleLibraryIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~UpdateAndPublishAgentRequestSampleLibrary() = default;
};
class UpdateAndPublishAgentRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateAndPublishAgentRequestApplicationConfig> applicationConfig{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<UpdateAndPublishAgentRequestSampleLibrary> sampleLibrary{};

  UpdateAndPublishAgentRequest() {}

  explicit UpdateAndPublishAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfig) {
      res["applicationConfig"] = applicationConfig ? boost::any(applicationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sampleLibrary) {
      res["sampleLibrary"] = sampleLibrary ? boost::any(sampleLibrary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["applicationConfig"].type()) {
        UpdateAndPublishAgentRequestApplicationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["applicationConfig"]));
        applicationConfig = make_shared<UpdateAndPublishAgentRequestApplicationConfig>(model1);
      }
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sampleLibrary") != m.end() && !m["sampleLibrary"].empty()) {
      if (typeid(map<string, boost::any>) == m["sampleLibrary"].type()) {
        UpdateAndPublishAgentRequestSampleLibrary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sampleLibrary"]));
        sampleLibrary = make_shared<UpdateAndPublishAgentRequestSampleLibrary>(model1);
      }
    }
  }


  virtual ~UpdateAndPublishAgentRequest() = default;
};
class UpdateAndPublishAgentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationConfigShrink{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> sampleLibraryShrink{};

  UpdateAndPublishAgentShrinkRequest() {}

  explicit UpdateAndPublishAgentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigShrink) {
      res["applicationConfig"] = boost::any(*applicationConfigShrink);
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sampleLibraryShrink) {
      res["sampleLibrary"] = boost::any(*sampleLibraryShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      applicationConfigShrink = make_shared<string>(boost::any_cast<string>(m["applicationConfig"]));
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sampleLibrary") != m.end() && !m["sampleLibrary"].empty()) {
      sampleLibraryShrink = make_shared<string>(boost::any_cast<string>(m["sampleLibrary"]));
    }
  }


  virtual ~UpdateAndPublishAgentShrinkRequest() = default;
};
class UpdateAndPublishAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAndPublishAgentResponseBody() {}

  explicit UpdateAndPublishAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateAndPublishAgentResponseBody() = default;
};
class UpdateAndPublishAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAndPublishAgentResponseBody> body{};

  UpdateAndPublishAgentResponse() {}

  explicit UpdateAndPublishAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAndPublishAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAndPublishAgentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAndPublishAgentResponse() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig : public Darabonba::Model {
public:
  shared_ptr<bool> enableAdbRecord{};
  shared_ptr<bool> enableRecord{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> region{};
  shared_ptr<string> storeCode{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableAdbRecord) {
      res["enableAdbRecord"] = boost::any(*enableAdbRecord);
    }
    if (enableRecord) {
      res["enableRecord"] = boost::any(*enableRecord);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (storeCode) {
      res["storeCode"] = boost::any(*storeCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableAdbRecord") != m.end() && !m["enableAdbRecord"].empty()) {
      enableAdbRecord = make_shared<bool>(boost::any_cast<bool>(m["enableAdbRecord"]));
    }
    if (m.find("enableRecord") != m.end() && !m["enableRecord"].empty()) {
      enableRecord = make_shared<bool>(boost::any_cast<bool>(m["enableRecord"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("storeCode") != m.end() && !m["storeCode"].empty()) {
      storeCode = make_shared<string>(boost::any_cast<string>(m["storeCode"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory : public Darabonba::Model {
public:
  shared_ptr<bool> enable{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enable) {
      res["enable"] = boost::any(*enable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enable") != m.end() && !m["enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["enable"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters : public Darabonba::Model {
public:
  shared_ptr<long> dialogRound{};
  shared_ptr<long> maxTokens{};
  shared_ptr<double> temperature{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogRound) {
      res["dialogRound"] = boost::any(*dialogRound);
    }
    if (maxTokens) {
      res["maxTokens"] = boost::any(*maxTokens);
    }
    if (temperature) {
      res["temperature"] = boost::any(*temperature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogRound") != m.end() && !m["dialogRound"].empty()) {
      dialogRound = make_shared<long>(boost::any_cast<long>(m["dialogRound"]));
    }
    if (m.find("maxTokens") != m.end() && !m["maxTokens"].empty()) {
      maxTokens = make_shared<long>(boost::any_cast<long>(m["maxTokens"]));
    }
    if (m.find("temperature") != m.end() && !m["temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["temperature"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig : public Darabonba::Model {
public:
  shared_ptr<string> answerScope{};
  shared_ptr<bool> enableCitation{};
  shared_ptr<bool> enableSearch{};
  shared_ptr<bool> enableWebSearch{};
  shared_ptr<string> fixedReplyDetail{};
  shared_ptr<vector<string>> knowledgeBaseCodeList{};
  shared_ptr<string> promptStrategy{};
  shared_ptr<string> ragRejectType{};
  shared_ptr<string> rejectFilterPrompt{};
  shared_ptr<string> rejectFilterType{};
  shared_ptr<long> retrieveMaxLength{};
  shared_ptr<long> topK{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerScope) {
      res["answerScope"] = boost::any(*answerScope);
    }
    if (enableCitation) {
      res["enableCitation"] = boost::any(*enableCitation);
    }
    if (enableSearch) {
      res["enableSearch"] = boost::any(*enableSearch);
    }
    if (enableWebSearch) {
      res["enableWebSearch"] = boost::any(*enableWebSearch);
    }
    if (fixedReplyDetail) {
      res["fixedReplyDetail"] = boost::any(*fixedReplyDetail);
    }
    if (knowledgeBaseCodeList) {
      res["knowledgeBaseCodeList"] = boost::any(*knowledgeBaseCodeList);
    }
    if (promptStrategy) {
      res["promptStrategy"] = boost::any(*promptStrategy);
    }
    if (ragRejectType) {
      res["ragRejectType"] = boost::any(*ragRejectType);
    }
    if (rejectFilterPrompt) {
      res["rejectFilterPrompt"] = boost::any(*rejectFilterPrompt);
    }
    if (rejectFilterType) {
      res["rejectFilterType"] = boost::any(*rejectFilterType);
    }
    if (retrieveMaxLength) {
      res["retrieveMaxLength"] = boost::any(*retrieveMaxLength);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answerScope") != m.end() && !m["answerScope"].empty()) {
      answerScope = make_shared<string>(boost::any_cast<string>(m["answerScope"]));
    }
    if (m.find("enableCitation") != m.end() && !m["enableCitation"].empty()) {
      enableCitation = make_shared<bool>(boost::any_cast<bool>(m["enableCitation"]));
    }
    if (m.find("enableSearch") != m.end() && !m["enableSearch"].empty()) {
      enableSearch = make_shared<bool>(boost::any_cast<bool>(m["enableSearch"]));
    }
    if (m.find("enableWebSearch") != m.end() && !m["enableWebSearch"].empty()) {
      enableWebSearch = make_shared<bool>(boost::any_cast<bool>(m["enableWebSearch"]));
    }
    if (m.find("fixedReplyDetail") != m.end() && !m["fixedReplyDetail"].empty()) {
      fixedReplyDetail = make_shared<string>(boost::any_cast<string>(m["fixedReplyDetail"]));
    }
    if (m.find("knowledgeBaseCodeList") != m.end() && !m["knowledgeBaseCodeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["knowledgeBaseCodeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["knowledgeBaseCodeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      knowledgeBaseCodeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("promptStrategy") != m.end() && !m["promptStrategy"].empty()) {
      promptStrategy = make_shared<string>(boost::any_cast<string>(m["promptStrategy"]));
    }
    if (m.find("ragRejectType") != m.end() && !m["ragRejectType"].empty()) {
      ragRejectType = make_shared<string>(boost::any_cast<string>(m["ragRejectType"]));
    }
    if (m.find("rejectFilterPrompt") != m.end() && !m["rejectFilterPrompt"].empty()) {
      rejectFilterPrompt = make_shared<string>(boost::any_cast<string>(m["rejectFilterPrompt"]));
    }
    if (m.find("rejectFilterType") != m.end() && !m["rejectFilterType"].empty()) {
      rejectFilterType = make_shared<string>(boost::any_cast<string>(m["rejectFilterType"]));
    }
    if (m.find("retrieveMaxLength") != m.end() && !m["retrieveMaxLength"].empty()) {
      retrieveMaxLength = make_shared<long>(boost::any_cast<long>(m["retrieveMaxLength"]));
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity : public Darabonba::Model {
public:
  shared_ptr<string> processingStrategy{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (processingStrategy) {
      res["processingStrategy"] = boost::any(*processingStrategy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("processingStrategy") != m.end() && !m["processingStrategy"].empty()) {
      processingStrategy = make_shared<string>(boost::any_cast<string>(m["processingStrategy"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigTools : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigTools() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigTools(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigTools() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows() = default;
};
class UpdateAndPublishAgentSelectiveRequestApplicationConfig : public Darabonba::Model {
public:
  shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig> historyConfig{};
  shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory> longTermMemory{};
  shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters> parameters{};
  shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig> ragConfig{};
  shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity> security{};
  shared_ptr<vector<UpdateAndPublishAgentSelectiveRequestApplicationConfigTools>> tools{};
  shared_ptr<vector<UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows>> workFlows{};

  UpdateAndPublishAgentSelectiveRequestApplicationConfig() {}

  explicit UpdateAndPublishAgentSelectiveRequestApplicationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyConfig) {
      res["historyConfig"] = historyConfig ? boost::any(historyConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (longTermMemory) {
      res["longTermMemory"] = longTermMemory ? boost::any(longTermMemory->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parameters) {
      res["parameters"] = parameters ? boost::any(parameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ragConfig) {
      res["ragConfig"] = ragConfig ? boost::any(ragConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (security) {
      res["security"] = security ? boost::any(security->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tools) {
      vector<boost::any> temp1;
      for(auto item1:*tools){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tools"] = boost::any(temp1);
    }
    if (workFlows) {
      vector<boost::any> temp1;
      for(auto item1:*workFlows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["workFlows"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("historyConfig") != m.end() && !m["historyConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["historyConfig"].type()) {
        UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["historyConfig"]));
        historyConfig = make_shared<UpdateAndPublishAgentSelectiveRequestApplicationConfigHistoryConfig>(model1);
      }
    }
    if (m.find("longTermMemory") != m.end() && !m["longTermMemory"].empty()) {
      if (typeid(map<string, boost::any>) == m["longTermMemory"].type()) {
        UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["longTermMemory"]));
        longTermMemory = make_shared<UpdateAndPublishAgentSelectiveRequestApplicationConfigLongTermMemory>(model1);
      }
    }
    if (m.find("parameters") != m.end() && !m["parameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["parameters"].type()) {
        UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["parameters"]));
        parameters = make_shared<UpdateAndPublishAgentSelectiveRequestApplicationConfigParameters>(model1);
      }
    }
    if (m.find("ragConfig") != m.end() && !m["ragConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ragConfig"].type()) {
        UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ragConfig"]));
        ragConfig = make_shared<UpdateAndPublishAgentSelectiveRequestApplicationConfigRagConfig>(model1);
      }
    }
    if (m.find("security") != m.end() && !m["security"].empty()) {
      if (typeid(map<string, boost::any>) == m["security"].type()) {
        UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["security"]));
        security = make_shared<UpdateAndPublishAgentSelectiveRequestApplicationConfigSecurity>(model1);
      }
    }
    if (m.find("tools") != m.end() && !m["tools"].empty()) {
      if (typeid(vector<boost::any>) == m["tools"].type()) {
        vector<UpdateAndPublishAgentSelectiveRequestApplicationConfigTools> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tools"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAndPublishAgentSelectiveRequestApplicationConfigTools model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tools = make_shared<vector<UpdateAndPublishAgentSelectiveRequestApplicationConfigTools>>(expect1);
      }
    }
    if (m.find("workFlows") != m.end() && !m["workFlows"].empty()) {
      if (typeid(vector<boost::any>) == m["workFlows"].type()) {
        vector<UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["workFlows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workFlows = make_shared<vector<UpdateAndPublishAgentSelectiveRequestApplicationConfigWorkFlows>>(expect1);
      }
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestApplicationConfig() = default;
};
class UpdateAndPublishAgentSelectiveRequestSampleLibrary : public Darabonba::Model {
public:
  shared_ptr<bool> enableSample{};
  shared_ptr<vector<string>> sampleLibraryIdList{};
  shared_ptr<long> topK{};

  UpdateAndPublishAgentSelectiveRequestSampleLibrary() {}

  explicit UpdateAndPublishAgentSelectiveRequestSampleLibrary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableSample) {
      res["enableSample"] = boost::any(*enableSample);
    }
    if (sampleLibraryIdList) {
      res["sampleLibraryIdList"] = boost::any(*sampleLibraryIdList);
    }
    if (topK) {
      res["topK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("enableSample") != m.end() && !m["enableSample"].empty()) {
      enableSample = make_shared<bool>(boost::any_cast<bool>(m["enableSample"]));
    }
    if (m.find("sampleLibraryIdList") != m.end() && !m["sampleLibraryIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sampleLibraryIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sampleLibraryIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sampleLibraryIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topK") != m.end() && !m["topK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["topK"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequestSampleLibrary() = default;
};
class UpdateAndPublishAgentSelectiveRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateAndPublishAgentSelectiveRequestApplicationConfig> applicationConfig{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<UpdateAndPublishAgentSelectiveRequestSampleLibrary> sampleLibrary{};

  UpdateAndPublishAgentSelectiveRequest() {}

  explicit UpdateAndPublishAgentSelectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfig) {
      res["applicationConfig"] = applicationConfig ? boost::any(applicationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sampleLibrary) {
      res["sampleLibrary"] = sampleLibrary ? boost::any(sampleLibrary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["applicationConfig"].type()) {
        UpdateAndPublishAgentSelectiveRequestApplicationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["applicationConfig"]));
        applicationConfig = make_shared<UpdateAndPublishAgentSelectiveRequestApplicationConfig>(model1);
      }
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sampleLibrary") != m.end() && !m["sampleLibrary"].empty()) {
      if (typeid(map<string, boost::any>) == m["sampleLibrary"].type()) {
        UpdateAndPublishAgentSelectiveRequestSampleLibrary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sampleLibrary"]));
        sampleLibrary = make_shared<UpdateAndPublishAgentSelectiveRequestSampleLibrary>(model1);
      }
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveRequest() = default;
};
class UpdateAndPublishAgentSelectiveShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationConfigShrink{};
  shared_ptr<string> instructions{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> sampleLibraryShrink{};

  UpdateAndPublishAgentSelectiveShrinkRequest() {}

  explicit UpdateAndPublishAgentSelectiveShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationConfigShrink) {
      res["applicationConfig"] = boost::any(*applicationConfigShrink);
    }
    if (instructions) {
      res["instructions"] = boost::any(*instructions);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sampleLibraryShrink) {
      res["sampleLibrary"] = boost::any(*sampleLibraryShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationConfig") != m.end() && !m["applicationConfig"].empty()) {
      applicationConfigShrink = make_shared<string>(boost::any_cast<string>(m["applicationConfig"]));
    }
    if (m.find("instructions") != m.end() && !m["instructions"].empty()) {
      instructions = make_shared<string>(boost::any_cast<string>(m["instructions"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sampleLibrary") != m.end() && !m["sampleLibrary"].empty()) {
      sampleLibraryShrink = make_shared<string>(boost::any_cast<string>(m["sampleLibrary"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveShrinkRequest() = default;
};
class UpdateAndPublishAgentSelectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAndPublishAgentSelectiveResponseBody() {}

  explicit UpdateAndPublishAgentSelectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveResponseBody() = default;
};
class UpdateAndPublishAgentSelectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAndPublishAgentSelectiveResponseBody> body{};

  UpdateAndPublishAgentSelectiveResponse() {}

  explicit UpdateAndPublishAgentSelectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAndPublishAgentSelectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAndPublishAgentSelectiveResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAndPublishAgentSelectiveResponse() = default;
};
class UpdateFileTagRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> tags{};

  UpdateFileTagRequest() {}

  explicit UpdateFileTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateFileTagRequest() = default;
};
class UpdateFileTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> tagsShrink{};

  UpdateFileTagShrinkRequest() {}

  explicit UpdateFileTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~UpdateFileTagShrinkRequest() = default;
};
class UpdateFileTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};

  UpdateFileTagResponseBodyData() {}

  explicit UpdateFileTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
  }


  virtual ~UpdateFileTagResponseBodyData() = default;
};
class UpdateFileTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateFileTagResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  UpdateFileTagResponseBody() {}

  explicit UpdateFileTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
        UpdateFileTagResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateFileTagResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFileTagResponseBody() = default;
};
class UpdateFileTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFileTagResponseBody> body{};

  UpdateFileTagResponse() {}

  explicit UpdateFileTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFileTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFileTagResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFileTagResponse() = default;
};
class UpdateMemoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};

  UpdateMemoryRequest() {}

  explicit UpdateMemoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
  }


  virtual ~UpdateMemoryRequest() = default;
};
class UpdateMemoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMemoryResponseBody() {}

  explicit UpdateMemoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateMemoryResponseBody() = default;
};
class UpdateMemoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMemoryResponseBody> body{};

  UpdateMemoryResponse() {}

  explicit UpdateMemoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMemoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMemoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMemoryResponse() = default;
};
class UpdateMemoryNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  UpdateMemoryNodeRequest() {}

  explicit UpdateMemoryNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~UpdateMemoryNodeRequest() = default;
};
class UpdateMemoryNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateMemoryNodeResponseBody() {}

  explicit UpdateMemoryNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdateMemoryNodeResponseBody() = default;
};
class UpdateMemoryNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateMemoryNodeResponseBody> body{};

  UpdateMemoryNodeResponse() {}

  explicit UpdateMemoryNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateMemoryNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateMemoryNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateMemoryNodeResponse() = default;
};
class UpdatePromptTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> name{};

  UpdatePromptTemplateRequest() {}

  explicit UpdatePromptTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~UpdatePromptTemplateRequest() = default;
};
class UpdatePromptTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePromptTemplateResponseBody() {}

  explicit UpdatePromptTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UpdatePromptTemplateResponseBody() = default;
};
class UpdatePromptTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePromptTemplateResponseBody> body{};

  UpdatePromptTemplateResponse() {}

  explicit UpdatePromptTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePromptTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePromptTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePromptTemplateResponse() = default;
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
  AddCategoryResponse addCategoryWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<AddCategoryRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCategoryResponse addCategory(shared_ptr<string> WorkspaceId, shared_ptr<AddCategoryRequest> request);
  AddFileResponse addFileWithOptions(shared_ptr<string> WorkspaceId,
                                     shared_ptr<AddFileRequest> tmpReq,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFileResponse addFile(shared_ptr<string> WorkspaceId, shared_ptr<AddFileRequest> request);
  ApplyFileUploadLeaseResponse applyFileUploadLeaseWithOptions(shared_ptr<string> CategoryId,
                                                               shared_ptr<string> WorkspaceId,
                                                               shared_ptr<ApplyFileUploadLeaseRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyFileUploadLeaseResponse applyFileUploadLease(shared_ptr<string> CategoryId, shared_ptr<string> WorkspaceId, shared_ptr<ApplyFileUploadLeaseRequest> request);
  CreateAndPulishAgentResponse createAndPulishAgentWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<CreateAndPulishAgentRequest> tmpReq,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAndPulishAgentResponse createAndPulishAgent(shared_ptr<string> workspaceId, shared_ptr<CreateAndPulishAgentRequest> request);
  CreateIndexResponse createIndexWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<CreateIndexRequest> tmpReq,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndexResponse createIndex(shared_ptr<string> WorkspaceId, shared_ptr<CreateIndexRequest> request);
  CreateMemoryResponse createMemoryWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<CreateMemoryRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemoryResponse createMemory(shared_ptr<string> workspaceId, shared_ptr<CreateMemoryRequest> request);
  CreateMemoryNodeResponse createMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                       shared_ptr<string> memoryId,
                                                       shared_ptr<CreateMemoryNodeRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMemoryNodeResponse createMemoryNode(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<CreateMemoryNodeRequest> request);
  CreatePromptTemplateResponse createPromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<CreatePromptTemplateRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePromptTemplateResponse createPromptTemplate(shared_ptr<string> workspaceId, shared_ptr<CreatePromptTemplateRequest> request);
  DeleteAgentResponse deleteAgentWithOptions(shared_ptr<string> workspaceId,
                                             shared_ptr<string> appCode,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAgentResponse deleteAgent(shared_ptr<string> workspaceId, shared_ptr<string> appCode);
  DeleteCategoryResponse deleteCategoryWithOptions(shared_ptr<string> CategoryId,
                                                   shared_ptr<string> WorkspaceId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCategoryResponse deleteCategory(shared_ptr<string> CategoryId, shared_ptr<string> WorkspaceId);
  DeleteFileResponse deleteFileWithOptions(shared_ptr<string> FileId,
                                           shared_ptr<string> WorkspaceId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileResponse deleteFile(shared_ptr<string> FileId, shared_ptr<string> WorkspaceId);
  DeleteIndexResponse deleteIndexWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<DeleteIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexResponse deleteIndex(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexRequest> request);
  DeleteIndexDocumentResponse deleteIndexDocumentWithOptions(shared_ptr<string> WorkspaceId,
                                                             shared_ptr<DeleteIndexDocumentRequest> tmpReq,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexDocumentResponse deleteIndexDocument(shared_ptr<string> WorkspaceId, shared_ptr<DeleteIndexDocumentRequest> request);
  DeleteMemoryResponse deleteMemoryWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<string> memoryId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMemoryResponse deleteMemory(shared_ptr<string> workspaceId, shared_ptr<string> memoryId);
  DeleteMemoryNodeResponse deleteMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                       shared_ptr<string> memoryId,
                                                       shared_ptr<string> memoryNodeId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteMemoryNodeResponse deleteMemoryNode(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<string> memoryNodeId);
  DeletePromptTemplateResponse deletePromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<string> promptTemplateId,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePromptTemplateResponse deletePromptTemplate(shared_ptr<string> workspaceId, shared_ptr<string> promptTemplateId);
  DescribeFileResponse describeFileWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<string> FileId,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFileResponse describeFile(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId);
  GetIndexJobStatusResponse getIndexJobStatusWithOptions(shared_ptr<string> WorkspaceId,
                                                         shared_ptr<GetIndexJobStatusRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexJobStatusResponse getIndexJobStatus(shared_ptr<string> WorkspaceId, shared_ptr<GetIndexJobStatusRequest> request);
  GetMemoryResponse getMemoryWithOptions(shared_ptr<string> workspaceId,
                                         shared_ptr<string> memoryId,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMemoryResponse getMemory(shared_ptr<string> workspaceId, shared_ptr<string> memoryId);
  GetMemoryNodeResponse getMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<string> memoryId,
                                                 shared_ptr<string> memoryNodeId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMemoryNodeResponse getMemoryNode(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<string> memoryNodeId);
  GetPromptTemplateResponse getPromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<string> promptTemplateId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPromptTemplateResponse getPromptTemplate(shared_ptr<string> workspaceId, shared_ptr<string> promptTemplateId);
  GetPublishedAgentResponse getPublishedAgentWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<string> appCode,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublishedAgentResponse getPublishedAgent(shared_ptr<string> workspaceId, shared_ptr<string> appCode);
  ListCategoryResponse listCategoryWithOptions(shared_ptr<string> WorkspaceId,
                                               shared_ptr<ListCategoryRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCategoryResponse listCategory(shared_ptr<string> WorkspaceId, shared_ptr<ListCategoryRequest> request);
  ListChunksResponse listChunksWithOptions(shared_ptr<string> WorkspaceId,
                                           shared_ptr<ListChunksRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChunksResponse listChunks(shared_ptr<string> WorkspaceId, shared_ptr<ListChunksRequest> request);
  ListFileResponse listFileWithOptions(shared_ptr<string> WorkspaceId,
                                       shared_ptr<ListFileRequest> request,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFileResponse listFile(shared_ptr<string> WorkspaceId, shared_ptr<ListFileRequest> request);
  ListIndexDocumentsResponse listIndexDocumentsWithOptions(shared_ptr<string> WorkspaceId,
                                                           shared_ptr<ListIndexDocumentsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndexDocumentsResponse listIndexDocuments(shared_ptr<string> WorkspaceId, shared_ptr<ListIndexDocumentsRequest> request);
  ListIndicesResponse listIndicesWithOptions(shared_ptr<string> WorkspaceId,
                                             shared_ptr<ListIndicesRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndicesResponse listIndices(shared_ptr<string> WorkspaceId, shared_ptr<ListIndicesRequest> request);
  ListMemoriesResponse listMemoriesWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<ListMemoriesRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMemoriesResponse listMemories(shared_ptr<string> workspaceId, shared_ptr<ListMemoriesRequest> request);
  ListMemoryNodesResponse listMemoryNodesWithOptions(shared_ptr<string> workspaceId,
                                                     shared_ptr<string> memoryId,
                                                     shared_ptr<ListMemoryNodesRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListMemoryNodesResponse listMemoryNodes(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<ListMemoryNodesRequest> request);
  ListPromptTemplatesResponse listPromptTemplatesWithOptions(shared_ptr<string> workspaceId,
                                                             shared_ptr<ListPromptTemplatesRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPromptTemplatesResponse listPromptTemplates(shared_ptr<string> workspaceId, shared_ptr<ListPromptTemplatesRequest> request);
  ListPublishedAgentResponse listPublishedAgentWithOptions(shared_ptr<string> workspaceId,
                                                           shared_ptr<ListPublishedAgentRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublishedAgentResponse listPublishedAgent(shared_ptr<string> workspaceId, shared_ptr<ListPublishedAgentRequest> request);
  RetrieveResponse retrieveWithOptions(shared_ptr<string> WorkspaceId,
                                       shared_ptr<RetrieveRequest> tmpReq,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RetrieveResponse retrieve(shared_ptr<string> WorkspaceId, shared_ptr<RetrieveRequest> request);
  SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJobWithOptions(shared_ptr<string> WorkspaceId,
                                                                           shared_ptr<SubmitIndexAddDocumentsJobRequest> tmpReq,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIndexAddDocumentsJobResponse submitIndexAddDocumentsJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexAddDocumentsJobRequest> request);
  SubmitIndexJobResponse submitIndexJobWithOptions(shared_ptr<string> WorkspaceId,
                                                   shared_ptr<SubmitIndexJobRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIndexJobResponse submitIndexJob(shared_ptr<string> WorkspaceId, shared_ptr<SubmitIndexJobRequest> request);
  UpdateAndPublishAgentResponse updateAndPublishAgentWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<string> appCode,
                                                                 shared_ptr<UpdateAndPublishAgentRequest> tmpReq,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAndPublishAgentResponse updateAndPublishAgent(shared_ptr<string> workspaceId, shared_ptr<string> appCode, shared_ptr<UpdateAndPublishAgentRequest> request);
  UpdateAndPublishAgentSelectiveResponse updateAndPublishAgentSelectiveWithOptions(shared_ptr<string> workspaceId,
                                                                                   shared_ptr<string> appCode,
                                                                                   shared_ptr<UpdateAndPublishAgentSelectiveRequest> tmpReq,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAndPublishAgentSelectiveResponse updateAndPublishAgentSelective(shared_ptr<string> workspaceId, shared_ptr<string> appCode, shared_ptr<UpdateAndPublishAgentSelectiveRequest> request);
  UpdateFileTagResponse updateFileTagWithOptions(shared_ptr<string> WorkspaceId,
                                                 shared_ptr<string> FileId,
                                                 shared_ptr<UpdateFileTagRequest> tmpReq,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileTagResponse updateFileTag(shared_ptr<string> WorkspaceId, shared_ptr<string> FileId, shared_ptr<UpdateFileTagRequest> request);
  UpdateMemoryResponse updateMemoryWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<string> memoryId,
                                               shared_ptr<UpdateMemoryRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMemoryResponse updateMemory(shared_ptr<string> workspaceId, shared_ptr<string> memoryId, shared_ptr<UpdateMemoryRequest> request);
  UpdateMemoryNodeResponse updateMemoryNodeWithOptions(shared_ptr<string> workspaceId,
                                                       shared_ptr<string> memoryId,
                                                       shared_ptr<string> memoryNodeId,
                                                       shared_ptr<UpdateMemoryNodeRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateMemoryNodeResponse updateMemoryNode(shared_ptr<string> workspaceId,
                                            shared_ptr<string> memoryId,
                                            shared_ptr<string> memoryNodeId,
                                            shared_ptr<UpdateMemoryNodeRequest> request);
  UpdatePromptTemplateResponse updatePromptTemplateWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<string> promptTemplateId,
                                                               shared_ptr<UpdatePromptTemplateRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePromptTemplateResponse updatePromptTemplate(shared_ptr<string> workspaceId, shared_ptr<string> promptTemplateId, shared_ptr<UpdatePromptTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Bailian20231229

#endif
