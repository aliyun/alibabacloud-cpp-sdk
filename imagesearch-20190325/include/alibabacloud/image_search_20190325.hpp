// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGESEARCH20190325_H_
#define ALIBABACLOUD_IMAGESEARCH20190325_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ImageSearch20190325 {
class AddImageRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> crop{};
  shared_ptr<string> customContent{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> intAttr{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<string> strAttr{};

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
  }


  virtual ~AddImageRequest() = default;
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
class DeleteImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceName{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};

  DeleteImageRequest() {}

  explicit DeleteImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
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
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
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
class DeleteImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
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
class SearchImageRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<bool> crop{};
  shared_ptr<string> filter{};
  shared_ptr<string> instanceName{};
  shared_ptr<long> num{};
  shared_ptr<string> picContent{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<string> region{};
  shared_ptr<long> start{};
  shared_ptr<string> type{};

  SearchImageRequest() {}

  explicit SearchImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (picName) {
      res["PicName"] = boost::any(*picName);
    }
    if (productId) {
      res["ProductId"] = boost::any(*productId);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("PicName") != m.end() && !m["PicName"].empty()) {
      picName = make_shared<string>(boost::any_cast<string>(m["PicName"]));
    }
    if (m.find("ProductId") != m.end() && !m["ProductId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["ProductId"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SearchImageRequest() = default;
};
class SearchImageResponseBodyAuctions : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> customContent{};
  shared_ptr<long> intAttr{};
  shared_ptr<string> picName{};
  shared_ptr<string> productId{};
  shared_ptr<double> score{};
  shared_ptr<string> sortExprValues{};
  shared_ptr<string> strAttr{};

  SearchImageResponseBodyAuctions() {}

  explicit SearchImageResponseBodyAuctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~SearchImageResponseBodyAuctions() = default;
};
class SearchImageResponseBodyHead : public Darabonba::Model {
public:
  shared_ptr<long> docsFound{};
  shared_ptr<long> docsReturn{};
  shared_ptr<long> searchTime{};

  SearchImageResponseBodyHead() {}

  explicit SearchImageResponseBodyHead(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchImageResponseBodyHead() = default;
};
class SearchImageResponseBodyPicInfoAllCategories : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  SearchImageResponseBodyPicInfoAllCategories() {}

  explicit SearchImageResponseBodyPicInfoAllCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchImageResponseBodyPicInfoAllCategories() = default;
};
class SearchImageResponseBodyPicInfoMultiRegion : public Darabonba::Model {
public:
  shared_ptr<string> region{};

  SearchImageResponseBodyPicInfoMultiRegion() {}

  explicit SearchImageResponseBodyPicInfoMultiRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SearchImageResponseBodyPicInfoMultiRegion() = default;
};
class SearchImageResponseBodyPicInfo : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageResponseBodyPicInfoAllCategories>> allCategories{};
  shared_ptr<long> categoryId{};
  shared_ptr<vector<SearchImageResponseBodyPicInfoMultiRegion>> multiRegion{};
  shared_ptr<string> region{};

  SearchImageResponseBodyPicInfo() {}

  explicit SearchImageResponseBodyPicInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SearchImageResponseBodyPicInfoAllCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AllCategories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageResponseBodyPicInfoAllCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        allCategories = make_shared<vector<SearchImageResponseBodyPicInfoAllCategories>>(expect1);
      }
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("MultiRegion") != m.end() && !m["MultiRegion"].empty()) {
      if (typeid(vector<boost::any>) == m["MultiRegion"].type()) {
        vector<SearchImageResponseBodyPicInfoMultiRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MultiRegion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageResponseBodyPicInfoMultiRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        multiRegion = make_shared<vector<SearchImageResponseBodyPicInfoMultiRegion>>(expect1);
      }
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~SearchImageResponseBodyPicInfo() = default;
};
class SearchImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchImageResponseBodyAuctions>> auctions{};
  shared_ptr<long> code{};
  shared_ptr<SearchImageResponseBodyHead> head{};
  shared_ptr<string> msg{};
  shared_ptr<SearchImageResponseBodyPicInfo> picInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchImageResponseBody() {}

  explicit SearchImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<SearchImageResponseBodyAuctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Auctions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchImageResponseBodyAuctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        auctions = make_shared<vector<SearchImageResponseBodyAuctions>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Head") != m.end() && !m["Head"].empty()) {
      if (typeid(map<string, boost::any>) == m["Head"].type()) {
        SearchImageResponseBodyHead model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Head"]));
        head = make_shared<SearchImageResponseBodyHead>(model1);
      }
    }
    if (m.find("Msg") != m.end() && !m["Msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["Msg"]));
    }
    if (m.find("PicInfo") != m.end() && !m["PicInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PicInfo"].type()) {
        SearchImageResponseBodyPicInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PicInfo"]));
        picInfo = make_shared<SearchImageResponseBodyPicInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchImageResponseBody() = default;
};
class SearchImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchImageResponseBody> body{};

  SearchImageResponse() {}

  explicit SearchImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchImageResponseBody>(model1);
      }
    }
  }


  virtual ~SearchImageResponse() = default;
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
  AddImageResponse addImageWithOptions(shared_ptr<AddImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageResponse addImage(shared_ptr<AddImageRequest> request);
  DeleteImageResponse deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImage(shared_ptr<DeleteImageRequest> request);
  SearchImageResponse searchImageWithOptions(shared_ptr<SearchImageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchImageResponse searchImage(shared_ptr<SearchImageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ImageSearch20190325

#endif
