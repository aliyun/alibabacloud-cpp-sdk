// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MINIAPPLCDP20200113_H_
#define ALIBABACLOUD_MINIAPPLCDP20200113_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Miniapplcdp20200113 {
class DataItemsModelDataValue : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> subType{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> content{};
  shared_ptr<string> appId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> description{};
  shared_ptr<string> props{};
  shared_ptr<string> visibility{};
  shared_ptr<string> modelDigest{};

  DataItemsModelDataValue() {}

  explicit DataItemsModelDataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      props = make_shared<string>(boost::any_cast<string>(m["Props"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
  }


  virtual ~DataItemsModelDataValue() = default;
};
class DataItemsResourceDataValue : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> description{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, boost::any>> content{};
  shared_ptr<string> appId{};
  shared_ptr<string> visibility{};

  DataItemsResourceDataValue() {}

  explicit DataItemsResourceDataValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Content"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DataItemsResourceDataValue() = default;
};
class BatchCreateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelDataJson{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};

  BatchCreateModelRequest() {}

  explicit BatchCreateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelDataJson) {
      res["ModelDataJson"] = boost::any(*modelDataJson);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelDataJson") != m.end() && !m["ModelDataJson"].empty()) {
      modelDataJson = make_shared<string>(boost::any_cast<string>(m["ModelDataJson"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~BatchCreateModelRequest() = default;
};
class BatchCreateModelResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelDigest{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  BatchCreateModelResponseBodyDataItems() {}

  explicit BatchCreateModelResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~BatchCreateModelResponseBodyDataItems() = default;
};
class BatchCreateModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchCreateModelResponseBodyDataItems>> items{};

  BatchCreateModelResponseBodyData() {}

  explicit BatchCreateModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<BatchCreateModelResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchCreateModelResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<BatchCreateModelResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~BatchCreateModelResponseBodyData() = default;
};
class BatchCreateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<BatchCreateModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  BatchCreateModelResponseBody() {}

  explicit BatchCreateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchCreateModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchCreateModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchCreateModelResponseBody() = default;
};
class BatchCreateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchCreateModelResponseBody> body{};

  BatchCreateModelResponse() {}

  explicit BatchCreateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchCreateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchCreateModelResponseBody>(model1);
      }
    }
  }


  virtual ~BatchCreateModelResponse() = default;
};
class BatchDeleteModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelIdList{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  BatchDeleteModelRequest() {}

  explicit BatchDeleteModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelIdList) {
      res["ModelIdList"] = boost::any(*modelIdList);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelIdList") != m.end() && !m["ModelIdList"].empty()) {
      modelIdList = make_shared<string>(boost::any_cast<string>(m["ModelIdList"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~BatchDeleteModelRequest() = default;
};
class BatchDeleteModelResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  BatchDeleteModelResponseBodyDataItems() {}

  explicit BatchDeleteModelResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~BatchDeleteModelResponseBodyDataItems() = default;
};
class BatchDeleteModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchDeleteModelResponseBodyDataItems>> items{};

  BatchDeleteModelResponseBodyData() {}

  explicit BatchDeleteModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<BatchDeleteModelResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchDeleteModelResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<BatchDeleteModelResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~BatchDeleteModelResponseBodyData() = default;
};
class BatchDeleteModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<BatchDeleteModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  BatchDeleteModelResponseBody() {}

  explicit BatchDeleteModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchDeleteModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchDeleteModelResponseBody() = default;
};
class BatchDeleteModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchDeleteModelResponseBody> body{};

  BatchDeleteModelResponse() {}

  explicit BatchDeleteModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteModelResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteModelResponse() = default;
};
class BatchDeleteResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceIdList{};
  shared_ptr<string> source{};

  BatchDeleteResourcesRequest() {}

  explicit BatchDeleteResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceIdList) {
      res["ResourceIdList"] = boost::any(*resourceIdList);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceIdList") != m.end() && !m["ResourceIdList"].empty()) {
      resourceIdList = make_shared<string>(boost::any_cast<string>(m["ResourceIdList"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~BatchDeleteResourcesRequest() = default;
};
class BatchDeleteResourcesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  BatchDeleteResourcesResponseBodyDataItems() {}

  explicit BatchDeleteResourcesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~BatchDeleteResourcesResponseBodyDataItems() = default;
};
class BatchDeleteResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchDeleteResourcesResponseBodyDataItems>> items{};

  BatchDeleteResourcesResponseBodyData() {}

  explicit BatchDeleteResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<BatchDeleteResourcesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchDeleteResourcesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<BatchDeleteResourcesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~BatchDeleteResourcesResponseBodyData() = default;
};
class BatchDeleteResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<BatchDeleteResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  BatchDeleteResourcesResponseBody() {}

  explicit BatchDeleteResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchDeleteResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchDeleteResourcesResponseBody() = default;
};
class BatchDeleteResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchDeleteResourcesResponseBody> body{};

  BatchDeleteResourcesResponse() {}

  explicit BatchDeleteResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteResourcesResponse() = default;
};
class BatchRestoreModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelIdList{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  BatchRestoreModelRequest() {}

  explicit BatchRestoreModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelIdList) {
      res["ModelIdList"] = boost::any(*modelIdList);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelIdList") != m.end() && !m["ModelIdList"].empty()) {
      modelIdList = make_shared<string>(boost::any_cast<string>(m["ModelIdList"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~BatchRestoreModelRequest() = default;
};
class BatchRestoreModelResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  BatchRestoreModelResponseBodyDataItems() {}

  explicit BatchRestoreModelResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~BatchRestoreModelResponseBodyDataItems() = default;
};
class BatchRestoreModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchRestoreModelResponseBodyDataItems>> items{};

  BatchRestoreModelResponseBodyData() {}

  explicit BatchRestoreModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<BatchRestoreModelResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchRestoreModelResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<BatchRestoreModelResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~BatchRestoreModelResponseBodyData() = default;
};
class BatchRestoreModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<BatchRestoreModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  BatchRestoreModelResponseBody() {}

  explicit BatchRestoreModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchRestoreModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchRestoreModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchRestoreModelResponseBody() = default;
};
class BatchRestoreModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchRestoreModelResponseBody> body{};

  BatchRestoreModelResponse() {}

  explicit BatchRestoreModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchRestoreModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchRestoreModelResponseBody>(model1);
      }
    }
  }


  virtual ~BatchRestoreModelResponse() = default;
};
class CheckDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  CheckDomainRequest() {}

  explicit CheckDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CheckDomainRequest() = default;
};
class CheckDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> valid{};

  CheckDomainResponseBodyData() {}

  explicit CheckDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<bool>(boost::any_cast<bool>(m["Valid"]));
    }
  }


  virtual ~CheckDomainResponseBodyData() = default;
};
class CheckDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<CheckDomainResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CheckDomainResponseBody() {}

  explicit CheckDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckDomainResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckDomainResponseBody() = default;
};
class CheckDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckDomainResponseBody> body{};

  CheckDomainResponse() {}

  explicit CheckDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CheckDomainResponse() = default;
};
class CloneAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> source{};

  CloneAppRequest() {}

  explicit CloneAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CloneAppRequest() = default;
};
class CloneAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  CloneAppResponseBodyData() {}

  explicit CloneAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CloneAppResponseBodyData() = default;
};
class CloneAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<CloneAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CloneAppResponseBody() {}

  explicit CloneAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CloneAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneAppResponseBody() = default;
};
class CloneAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneAppResponseBody> body{};

  CloneAppResponse() {}

  explicit CloneAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneAppResponseBody>(model1);
      }
    }
  }


  virtual ~CloneAppResponse() = default;
};
class CloneModelFromCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceCommitId{};
  shared_ptr<string> sourceModuleId{};
  shared_ptr<string> subType{};
  shared_ptr<string> targetModuleId{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetSubType{};

  CloneModelFromCommitRequest() {}

  explicit CloneModelFromCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceCommitId) {
      res["SourceCommitId"] = boost::any(*sourceCommitId);
    }
    if (sourceModuleId) {
      res["SourceModuleId"] = boost::any(*sourceModuleId);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (targetModuleId) {
      res["TargetModuleId"] = boost::any(*targetModuleId);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetSubType) {
      res["TargetSubType"] = boost::any(*targetSubType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceCommitId") != m.end() && !m["SourceCommitId"].empty()) {
      sourceCommitId = make_shared<string>(boost::any_cast<string>(m["SourceCommitId"]));
    }
    if (m.find("SourceModuleId") != m.end() && !m["SourceModuleId"].empty()) {
      sourceModuleId = make_shared<string>(boost::any_cast<string>(m["SourceModuleId"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("TargetModuleId") != m.end() && !m["TargetModuleId"].empty()) {
      targetModuleId = make_shared<string>(boost::any_cast<string>(m["TargetModuleId"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetSubType") != m.end() && !m["TargetSubType"].empty()) {
      targetSubType = make_shared<string>(boost::any_cast<string>(m["TargetSubType"]));
    }
  }


  virtual ~CloneModelFromCommitRequest() = default;
};
class CloneModelFromCommitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  CloneModelFromCommitResponseBodyData() {}

  explicit CloneModelFromCommitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CloneModelFromCommitResponseBodyData() = default;
};
class CloneModelFromCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<CloneModelFromCommitResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CloneModelFromCommitResponseBody() {}

  explicit CloneModelFromCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneModelFromCommitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CloneModelFromCommitResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneModelFromCommitResponseBody() = default;
};
class CloneModelFromCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneModelFromCommitResponseBody> body{};

  CloneModelFromCommitResponse() {}

  explicit CloneModelFromCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneModelFromCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneModelFromCommitResponseBody>(model1);
      }
    }
  }


  virtual ~CloneModelFromCommitResponse() = default;
};
class CloneModelInModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> source{};
  shared_ptr<string> targetName{};
  shared_ptr<string> targetSubType{};

  CloneModelInModuleRequest() {}

  explicit CloneModelInModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (targetName) {
      res["TargetName"] = boost::any(*targetName);
    }
    if (targetSubType) {
      res["TargetSubType"] = boost::any(*targetSubType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TargetName") != m.end() && !m["TargetName"].empty()) {
      targetName = make_shared<string>(boost::any_cast<string>(m["TargetName"]));
    }
    if (m.find("TargetSubType") != m.end() && !m["TargetSubType"].empty()) {
      targetSubType = make_shared<string>(boost::any_cast<string>(m["TargetSubType"]));
    }
  }


  virtual ~CloneModelInModuleRequest() = default;
};
class CloneModelInModuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  CloneModelInModuleResponseBodyData() {}

  explicit CloneModelInModuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CloneModelInModuleResponseBodyData() = default;
};
class CloneModelInModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CloneModelInModuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CloneModelInModuleResponseBody() {}

  explicit CloneModelInModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneModelInModuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CloneModelInModuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneModelInModuleResponseBody() = default;
};
class CloneModelInModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneModelInModuleResponseBody> body{};

  CloneModelInModuleResponse() {}

  explicit CloneModelInModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloneModelInModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneModelInModuleResponseBody>(model1);
      }
    }
  }


  virtual ~CloneModelInModuleResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<bool> asynchronous{};
  shared_ptr<string> categoryId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> platformVersion{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceCommitId{};
  shared_ptr<string> templateId{};
  shared_ptr<bool> templated{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (asynchronous) {
      res["Asynchronous"] = boost::any(*asynchronous);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceCommitId) {
      res["SourceCommitId"] = boost::any(*sourceCommitId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templated) {
      res["Templated"] = boost::any(*templated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Asynchronous") != m.end() && !m["Asynchronous"].empty()) {
      asynchronous = make_shared<bool>(boost::any_cast<bool>(m["Asynchronous"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceCommitId") != m.end() && !m["SourceCommitId"].empty()) {
      sourceCommitId = make_shared<string>(boost::any_cast<string>(m["SourceCommitId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Templated") != m.end() && !m["Templated"].empty()) {
      templated = make_shared<bool>(boost::any_cast<bool>(m["Templated"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBodyDataCategories : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> parentCategoryId{};

  CreateAppResponseBodyDataCategories() {}

  explicit CreateAppResponseBodyDataCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~CreateAppResponseBodyDataCategories() = default;
};
class CreateAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<vector<CreateAppResponseBodyDataCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> platformVersion{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  CreateAppResponseBodyData() {}

  explicit CreateAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<CreateAppResponseBodyDataCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateAppResponseBodyDataCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<CreateAppResponseBodyDataCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateAppResponseBodyData() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> commitType{};
  shared_ptr<string> mainModuleCommitId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> rollbackToCommitId{};
  shared_ptr<string> rollbackType{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  CreateCommitRequest() {}

  explicit CreateCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (commitType) {
      res["CommitType"] = boost::any(*commitType);
    }
    if (mainModuleCommitId) {
      res["MainModuleCommitId"] = boost::any(*mainModuleCommitId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (rollbackToCommitId) {
      res["RollbackToCommitId"] = boost::any(*rollbackToCommitId);
    }
    if (rollbackType) {
      res["RollbackType"] = boost::any(*rollbackType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CommitType") != m.end() && !m["CommitType"].empty()) {
      commitType = make_shared<string>(boost::any_cast<string>(m["CommitType"]));
    }
    if (m.find("MainModuleCommitId") != m.end() && !m["MainModuleCommitId"].empty()) {
      mainModuleCommitId = make_shared<string>(boost::any_cast<string>(m["MainModuleCommitId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("RollbackToCommitId") != m.end() && !m["RollbackToCommitId"].empty()) {
      rollbackToCommitId = make_shared<string>(boost::any_cast<string>(m["RollbackToCommitId"]));
    }
    if (m.find("RollbackType") != m.end() && !m["RollbackType"].empty()) {
      rollbackType = make_shared<string>(boost::any_cast<string>(m["RollbackType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateCommitRequest() = default;
};
class CreateCommitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> commitType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mainModuleCommitId{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modelDataPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDataPath{};
  shared_ptr<map<string, string>> resourceDigest{};
  shared_ptr<string> rollbackToCommitId{};
  shared_ptr<string> rollbackType{};
  shared_ptr<string> schemaVersion{};

  CreateCommitResponseBodyData() {}

  explicit CreateCommitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (commitType) {
      res["CommitType"] = boost::any(*commitType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mainModuleCommitId) {
      res["MainModuleCommitId"] = boost::any(*mainModuleCommitId);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (rollbackToCommitId) {
      res["RollbackToCommitId"] = boost::any(*rollbackToCommitId);
    }
    if (rollbackType) {
      res["RollbackType"] = boost::any(*rollbackType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CommitType") != m.end() && !m["CommitType"].empty()) {
      commitType = make_shared<string>(boost::any_cast<string>(m["CommitType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MainModuleCommitId") != m.end() && !m["MainModuleCommitId"].empty()) {
      mainModuleCommitId = make_shared<string>(boost::any_cast<string>(m["MainModuleCommitId"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      modelDataPath = make_shared<string>(boost::any_cast<string>(m["ModelDataPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      resourceDataPath = make_shared<string>(boost::any_cast<string>(m["ResourceDataPath"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RollbackToCommitId") != m.end() && !m["RollbackToCommitId"].empty()) {
      rollbackToCommitId = make_shared<string>(boost::any_cast<string>(m["RollbackToCommitId"]));
    }
    if (m.find("RollbackType") != m.end() && !m["RollbackType"].empty()) {
      rollbackType = make_shared<string>(boost::any_cast<string>(m["RollbackType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~CreateCommitResponseBodyData() = default;
};
class CreateCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCommitResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateCommitResponseBody() {}

  explicit CreateCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCommitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateCommitResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCommitResponseBody() = default;
};
class CreateCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCommitResponseBody> body{};

  CreateCommitResponse() {}

  explicit CreateCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCommitResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCommitResponse() = default;
};
class CreateDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> path{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> source{};
  shared_ptr<bool> withCertificate{};

  CreateDomainRequest() {}

  explicit CreateDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (withCertificate) {
      res["WithCertificate"] = boost::any(*withCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("WithCertificate") != m.end() && !m["WithCertificate"].empty()) {
      withCertificate = make_shared<bool>(boost::any_cast<bool>(m["WithCertificate"]));
    }
  }


  virtual ~CreateDomainRequest() = default;
};
class CreateDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> applied{};
  shared_ptr<bool> checked{};
  shared_ptr<string> cname{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> path{};
  shared_ptr<bool> withCertificate{};

  CreateDomainResponseBodyData() {}

  explicit CreateDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (applied) {
      res["Applied"] = boost::any(*applied);
    }
    if (checked) {
      res["Checked"] = boost::any(*checked);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (withCertificate) {
      res["WithCertificate"] = boost::any(*withCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Applied") != m.end() && !m["Applied"].empty()) {
      applied = make_shared<bool>(boost::any_cast<bool>(m["Applied"]));
    }
    if (m.find("Checked") != m.end() && !m["Checked"].empty()) {
      checked = make_shared<bool>(boost::any_cast<bool>(m["Checked"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("WithCertificate") != m.end() && !m["WithCertificate"].empty()) {
      withCertificate = make_shared<bool>(boost::any_cast<bool>(m["WithCertificate"]));
    }
  }


  virtual ~CreateDomainResponseBodyData() = default;
};
class CreateDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateDomainResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateDomainResponseBody() {}

  explicit CreateDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateDomainResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDomainResponseBody() = default;
};
class CreateDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDomainResponseBody> body{};

  CreateDomainResponse() {}

  explicit CreateDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDomainResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDomainResponse() = default;
};
class CreateLinkEntityAndAssociationRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> modelData{};
  shared_ptr<string> source{};

  CreateLinkEntityAndAssociationRequest() {}

  explicit CreateLinkEntityAndAssociationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (modelData) {
      res["ModelData"] = boost::any(*modelData);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ModelData") != m.end() && !m["ModelData"].empty()) {
      modelData = make_shared<string>(boost::any_cast<string>(m["ModelData"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateLinkEntityAndAssociationRequest() = default;
};
class CreateLinkEntityAndAssociationResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  CreateLinkEntityAndAssociationResponseBodyDataItems() {}

  explicit CreateLinkEntityAndAssociationResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CreateLinkEntityAndAssociationResponseBodyDataItems() = default;
};
class CreateLinkEntityAndAssociationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CreateLinkEntityAndAssociationResponseBodyDataItems>> items{};

  CreateLinkEntityAndAssociationResponseBodyData() {}

  explicit CreateLinkEntityAndAssociationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<CreateLinkEntityAndAssociationResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLinkEntityAndAssociationResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<CreateLinkEntityAndAssociationResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~CreateLinkEntityAndAssociationResponseBodyData() = default;
};
class CreateLinkEntityAndAssociationResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateLinkEntityAndAssociationResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateLinkEntityAndAssociationResponseBody() {}

  explicit CreateLinkEntityAndAssociationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLinkEntityAndAssociationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateLinkEntityAndAssociationResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLinkEntityAndAssociationResponseBody() = default;
};
class CreateLinkEntityAndAssociationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLinkEntityAndAssociationResponseBody> body{};

  CreateLinkEntityAndAssociationResponse() {}

  explicit CreateLinkEntityAndAssociationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLinkEntityAndAssociationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLinkEntityAndAssociationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLinkEntityAndAssociationResponse() = default;
};
class CreateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  CreateModelRequest() {}

  explicit CreateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CreateModelRequest() = default;
};
class CreateModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelDigest{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  CreateModelResponseBodyData() {}

  explicit CreateModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CreateModelResponseBodyData() = default;
};
class CreateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateModelResponseBody() {}

  explicit CreateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModelResponseBody() = default;
};
class CreateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelResponseBody> body{};

  CreateModelResponse() {}

  explicit CreateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelResponse() = default;
};
class CreateModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleType{};
  shared_ptr<string> platform{};
  shared_ptr<string> source{};
  shared_ptr<string> sourceModuleId{};
  shared_ptr<string> targetAppSource{};

  CreateModuleRequest() {}

  explicit CreateModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (sourceModuleId) {
      res["SourceModuleId"] = boost::any(*sourceModuleId);
    }
    if (targetAppSource) {
      res["TargetAppSource"] = boost::any(*targetAppSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SourceModuleId") != m.end() && !m["SourceModuleId"].empty()) {
      sourceModuleId = make_shared<string>(boost::any_cast<string>(m["SourceModuleId"]));
    }
    if (m.find("TargetAppSource") != m.end() && !m["TargetAppSource"].empty()) {
      targetAppSource = make_shared<string>(boost::any_cast<string>(m["TargetAppSource"]));
    }
  }


  virtual ~CreateModuleRequest() = default;
};
class CreateModuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleType{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> platformVersion{};

  CreateModuleResponseBodyData() {}

  explicit CreateModuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
  }


  virtual ~CreateModuleResponseBodyData() = default;
};
class CreateModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateModuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateModuleResponseBody() {}

  explicit CreateModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateModuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModuleResponseBody() = default;
};
class CreateModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModuleResponseBody> body{};

  CreateModuleResponse() {}

  explicit CreateModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModuleResponse() = default;
};
class CreateModulePublishRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> publishVersion{};
  shared_ptr<string> source{};

  CreateModulePublishRequest() {}

  explicit CreateModulePublishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (publishVersion) {
      res["PublishVersion"] = boost::any(*publishVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("PublishVersion") != m.end() && !m["PublishVersion"].empty()) {
      publishVersion = make_shared<string>(boost::any_cast<string>(m["PublishVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateModulePublishRequest() = default;
};
class CreateModulePublishResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> commitId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> publishId{};
  shared_ptr<string> version{};

  CreateModulePublishResponseBodyData() {}

  explicit CreateModulePublishResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~CreateModulePublishResponseBodyData() = default;
};
class CreateModulePublishResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateModulePublishResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateModulePublishResponseBody() {}

  explicit CreateModulePublishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModulePublishResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateModulePublishResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModulePublishResponseBody() = default;
};
class CreateModulePublishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModulePublishResponseBody> body{};

  CreateModulePublishResponse() {}

  explicit CreateModulePublishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModulePublishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModulePublishResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModulePublishResponse() = default;
};
class CreatePublishRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> commitId{};
  shared_ptr<string> description{};
  shared_ptr<string> envType{};
  shared_ptr<string> publishType{};
  shared_ptr<string> source{};
  shared_ptr<string> versionNumber{};

  CreatePublishRequest() {}

  explicit CreatePublishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~CreatePublishRequest() = default;
};
class CreatePublishResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> completionTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> envId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> publishId{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> publishType{};
  shared_ptr<string> reason{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<map<string, string>>> subTasks{};
  shared_ptr<string> versionNumber{};

  CreatePublishResponseBodyData() {}

  explicit CreatePublishResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (completionTime) {
      res["CompletionTime"] = boost::any(*completionTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subTasks) {
      res["SubTasks"] = boost::any(*subTasks);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CompletionTime") != m.end() && !m["CompletionTime"].empty()) {
      completionTime = make_shared<string>(boost::any_cast<string>(m["CompletionTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubTasks") != m.end() && !m["SubTasks"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["SubTasks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubTasks"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      subTasks = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~CreatePublishResponseBodyData() = default;
};
class CreatePublishResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePublishResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreatePublishResponseBody() {}

  explicit CreatePublishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublishResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreatePublishResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePublishResponseBody() = default;
};
class CreatePublishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePublishResponseBody> body{};

  CreatePublishResponse() {}

  explicit CreatePublishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePublishResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePublishResponse() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> visibility{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDigest{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  CreateResourceResponseBodyData() {}

  explicit CreateResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      resourceDigest = make_shared<string>(boost::any_cast<string>(m["ResourceDigest"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~CreateResourceResponseBodyData() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceResponseBody() = default;
};
class CreateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceResponseBody> body{};

  CreateResourceResponse() {}

  explicit CreateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> source{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  DeleteAppResponseBodyData() {}

  explicit DeleteAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteAppResponseBodyData() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> source{};

  DeleteCommitRequest() {}

  explicit DeleteCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteCommitRequest() = default;
};
class DeleteCommitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> commitType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mainModuleCommitId{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modelDataPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDataPath{};
  shared_ptr<map<string, string>> resourceDigest{};
  shared_ptr<string> rollbackToCommitId{};
  shared_ptr<string> rollbackType{};
  shared_ptr<string> schemaVersion{};

  DeleteCommitResponseBodyData() {}

  explicit DeleteCommitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (commitType) {
      res["CommitType"] = boost::any(*commitType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mainModuleCommitId) {
      res["MainModuleCommitId"] = boost::any(*mainModuleCommitId);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (rollbackToCommitId) {
      res["RollbackToCommitId"] = boost::any(*rollbackToCommitId);
    }
    if (rollbackType) {
      res["RollbackType"] = boost::any(*rollbackType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CommitType") != m.end() && !m["CommitType"].empty()) {
      commitType = make_shared<string>(boost::any_cast<string>(m["CommitType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MainModuleCommitId") != m.end() && !m["MainModuleCommitId"].empty()) {
      mainModuleCommitId = make_shared<string>(boost::any_cast<string>(m["MainModuleCommitId"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      modelDataPath = make_shared<string>(boost::any_cast<string>(m["ModelDataPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      resourceDataPath = make_shared<string>(boost::any_cast<string>(m["ResourceDataPath"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RollbackToCommitId") != m.end() && !m["RollbackToCommitId"].empty()) {
      rollbackToCommitId = make_shared<string>(boost::any_cast<string>(m["RollbackToCommitId"]));
    }
    if (m.find("RollbackType") != m.end() && !m["RollbackType"].empty()) {
      rollbackType = make_shared<string>(boost::any_cast<string>(m["RollbackType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~DeleteCommitResponseBodyData() = default;
};
class DeleteCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteCommitResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteCommitResponseBody() {}

  explicit DeleteCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCommitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteCommitResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteCommitResponseBody() = default;
};
class DeleteCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCommitResponseBody> body{};

  DeleteCommitResponse() {}

  explicit DeleteCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCommitResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCommitResponse() = default;
};
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> domain{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteDomainRequest() = default;
};
class DeleteDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> applied{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> path{};

  DeleteDomainResponseBodyData() {}

  explicit DeleteDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (applied) {
      res["Applied"] = boost::any(*applied);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Applied") != m.end() && !m["Applied"].empty()) {
      applied = make_shared<bool>(boost::any_cast<bool>(m["Applied"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~DeleteDomainResponseBodyData() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteDomainResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteDomainResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainResponseBody() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  DeleteModelRequest() {}

  explicit DeleteModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteModelRequest() = default;
};
class DeleteModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  DeleteModelResponseBodyData() {}

  explicit DeleteModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DeleteModelResponseBodyData() = default;
};
class DeleteModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteModelResponseBody() {}

  explicit DeleteModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteModelResponseBody() = default;
};
class DeleteModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelResponseBody> body{};

  DeleteModelResponse() {}

  explicit DeleteModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelResponse() = default;
};
class DeleteModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> moduleId{};
  shared_ptr<string> source{};

  DeleteModuleRequest() {}

  explicit DeleteModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteModuleRequest() = default;
};
class DeleteModuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};

  DeleteModuleResponseBodyData() {}

  explicit DeleteModuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~DeleteModuleResponseBodyData() = default;
};
class DeleteModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteModuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteModuleResponseBody() {}

  explicit DeleteModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteModuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteModuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteModuleResponseBody() = default;
};
class DeleteModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModuleResponseBody> body{};

  DeleteModuleResponse() {}

  explicit DeleteModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModuleResponse() = default;
};
class DeleteResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> source{};

  DeleteResourceRequest() {}

  explicit DeleteResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~DeleteResourceRequest() = default;
};
class DeleteResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  DeleteResourceResponseBodyData() {}

  explicit DeleteResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~DeleteResourceResponseBodyData() = default;
};
class DeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeleteResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeleteResourceResponseBody() {}

  explicit DeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteResourceResponseBody() = default;
};
class DeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceResponseBody> body{};

  DeleteResourceResponse() {}

  explicit DeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceResponse() = default;
};
class GenerateAppUserPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};
  shared_ptr<string> userName{};

  GenerateAppUserPasswordRequest() {}

  explicit GenerateAppUserPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GenerateAppUserPasswordRequest() = default;
};
class GenerateAppUserPasswordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> userName{};

  GenerateAppUserPasswordResponseBodyData() {}

  explicit GenerateAppUserPasswordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GenerateAppUserPasswordResponseBodyData() = default;
};
class GenerateAppUserPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateAppUserPasswordResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GenerateAppUserPasswordResponseBody() {}

  explicit GenerateAppUserPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAppUserPasswordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateAppUserPasswordResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateAppUserPasswordResponseBody() = default;
};
class GenerateAppUserPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateAppUserPasswordResponseBody> body{};

  GenerateAppUserPasswordResponse() {}

  explicit GenerateAppUserPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAppUserPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAppUserPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAppUserPasswordResponse() = default;
};
class GenerateAuthTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> source{};

  GenerateAuthTokenRequest() {}

  explicit GenerateAuthTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GenerateAuthTokenRequest() = default;
};
class GenerateAuthTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jwtToken{};

  GenerateAuthTokenResponseBodyData() {}

  explicit GenerateAuthTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jwtToken) {
      res["JwtToken"] = boost::any(*jwtToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JwtToken") != m.end() && !m["JwtToken"].empty()) {
      jwtToken = make_shared<string>(boost::any_cast<string>(m["JwtToken"]));
    }
  }


  virtual ~GenerateAuthTokenResponseBodyData() = default;
};
class GenerateAuthTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateAuthTokenResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GenerateAuthTokenResponseBody() {}

  explicit GenerateAuthTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAuthTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateAuthTokenResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateAuthTokenResponseBody() = default;
};
class GenerateAuthTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateAuthTokenResponseBody> body{};

  GenerateAuthTokenResponse() {}

  explicit GenerateAuthTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateAuthTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateAuthTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateAuthTokenResponse() = default;
};
class GenerateUploadTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> materialId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> source{};
  shared_ptr<string> uploadTokenType{};

  GenerateUploadTokenRequest() {}

  explicit GenerateUploadTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (materialId) {
      res["MaterialId"] = boost::any(*materialId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (uploadTokenType) {
      res["UploadTokenType"] = boost::any(*uploadTokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("MaterialId") != m.end() && !m["MaterialId"].empty()) {
      materialId = make_shared<string>(boost::any_cast<string>(m["MaterialId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UploadTokenType") != m.end() && !m["UploadTokenType"].empty()) {
      uploadTokenType = make_shared<string>(boost::any_cast<string>(m["UploadTokenType"]));
    }
  }


  virtual ~GenerateUploadTokenRequest() = default;
};
class GenerateUploadTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> ossAccessKeyId{};
  shared_ptr<string> policy{};
  shared_ptr<string> serverURL{};
  shared_ptr<string> signature{};
  shared_ptr<string> xAmzAlgorithm{};
  shared_ptr<string> xAmzCredential{};
  shared_ptr<string> xAmzDate{};
  shared_ptr<string> xAmzSignature{};

  GenerateUploadTokenResponseBodyData() {}

  explicit GenerateUploadTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (ossAccessKeyId) {
      res["OssAccessKeyId"] = boost::any(*ossAccessKeyId);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (serverURL) {
      res["ServerURL"] = boost::any(*serverURL);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (xAmzAlgorithm) {
      res["X-Amz-Algorithm"] = boost::any(*xAmzAlgorithm);
    }
    if (xAmzCredential) {
      res["X-Amz-Credential"] = boost::any(*xAmzCredential);
    }
    if (xAmzDate) {
      res["X-Amz-Date"] = boost::any(*xAmzDate);
    }
    if (xAmzSignature) {
      res["X-Amz-Signature"] = boost::any(*xAmzSignature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("OssAccessKeyId") != m.end() && !m["OssAccessKeyId"].empty()) {
      ossAccessKeyId = make_shared<string>(boost::any_cast<string>(m["OssAccessKeyId"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("ServerURL") != m.end() && !m["ServerURL"].empty()) {
      serverURL = make_shared<string>(boost::any_cast<string>(m["ServerURL"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("X-Amz-Algorithm") != m.end() && !m["X-Amz-Algorithm"].empty()) {
      xAmzAlgorithm = make_shared<string>(boost::any_cast<string>(m["X-Amz-Algorithm"]));
    }
    if (m.find("X-Amz-Credential") != m.end() && !m["X-Amz-Credential"].empty()) {
      xAmzCredential = make_shared<string>(boost::any_cast<string>(m["X-Amz-Credential"]));
    }
    if (m.find("X-Amz-Date") != m.end() && !m["X-Amz-Date"].empty()) {
      xAmzDate = make_shared<string>(boost::any_cast<string>(m["X-Amz-Date"]));
    }
    if (m.find("X-Amz-Signature") != m.end() && !m["X-Amz-Signature"].empty()) {
      xAmzSignature = make_shared<string>(boost::any_cast<string>(m["X-Amz-Signature"]));
    }
  }


  virtual ~GenerateUploadTokenResponseBodyData() = default;
};
class GenerateUploadTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateUploadTokenResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GenerateUploadTokenResponseBody() {}

  explicit GenerateUploadTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUploadTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateUploadTokenResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateUploadTokenResponseBody() = default;
};
class GenerateUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateUploadTokenResponseBody> body{};

  GenerateUploadTokenResponse() {}

  explicit GenerateUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUploadTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateUploadTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateUploadTokenResponse() = default;
};
class GetAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> source{};

  GetAppRequest() {}

  explicit GetAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetAppRequest() = default;
};
class GetAppResponseBodyDataCategories : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> parentCategoryId{};

  GetAppResponseBodyDataCategories() {}

  explicit GetAppResponseBodyDataCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~GetAppResponseBodyDataCategories() = default;
};
class GetAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<vector<GetAppResponseBodyDataCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> platformVersion{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  GetAppResponseBodyData() {}

  explicit GetAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<GetAppResponseBodyDataCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAppResponseBodyDataCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<GetAppResponseBodyDataCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetAppResponseBodyData() = default;
};
class GetAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAppResponseBody() {}

  explicit GetAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppResponseBody() = default;
};
class GetAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppResponseBody> body{};

  GetAppResponse() {}

  explicit GetAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppResponse() = default;
};
class GetAppModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};

  GetAppModelRequest() {}

  explicit GetAppModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~GetAppModelRequest() = default;
};
class GetAppModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelDigest{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  GetAppModelResponseBodyData() {}

  explicit GetAppModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~GetAppModelResponseBodyData() = default;
};
class GetAppModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAppModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAppModelResponseBody() {}

  explicit GetAppModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAppModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppModelResponseBody() = default;
};
class GetAppModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppModelResponseBody> body{};

  GetAppModelResponse() {}

  explicit GetAppModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppModelResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppModelResponse() = default;
};
class GetAppSecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> source{};

  GetAppSecretRequest() {}

  explicit GetAppSecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetAppSecretRequest() = default;
};
class GetAppSecretResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appSecret{};

  GetAppSecretResponseBodyData() {}

  explicit GetAppSecretResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
  }


  virtual ~GetAppSecretResponseBodyData() = default;
};
class GetAppSecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAppSecretResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAppSecretResponseBody() {}

  explicit GetAppSecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppSecretResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAppSecretResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAppSecretResponseBody() = default;
};
class GetAppSecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAppSecretResponseBody> body{};

  GetAppSecretResponse() {}

  explicit GetAppSecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAppSecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAppSecretResponseBody>(model1);
      }
    }
  }


  virtual ~GetAppSecretResponse() = default;
};
class GetArtifactRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> source{};

  GetArtifactRequest() {}

  explicit GetArtifactRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetArtifactRequest() = default;
};
class GetArtifactResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactType{};
  shared_ptr<bool> available{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> url{};

  GetArtifactResponseBodyData() {}

  explicit GetArtifactResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["Available"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetArtifactResponseBodyData() = default;
};
class GetArtifactResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetArtifactResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetArtifactResponseBody() {}

  explicit GetArtifactResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetArtifactResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetArtifactResponseBody() = default;
};
class GetArtifactResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetArtifactResponseBody> body{};

  GetArtifactResponse() {}

  explicit GetArtifactResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetArtifactResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetArtifactResponseBody>(model1);
      }
    }
  }


  virtual ~GetArtifactResponse() = default;
};
class GetCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  GetCommitRequest() {}

  explicit GetCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetCommitRequest() = default;
};
class GetCommitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitDigest{};
  shared_ptr<string> commitId{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> commitType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mainModuleCommitId{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modelDataPath{};
  shared_ptr<map<string, string>> modelDigest{};
  shared_ptr<vector<boost::any>> modelPack{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDataPath{};
  shared_ptr<map<string, string>> resourceDigest{};
  shared_ptr<vector<map<string, string>>> resourcePack{};
  shared_ptr<string> rollbackToCommitId{};
  shared_ptr<string> rollbackType{};
  shared_ptr<string> schemaVersion{};

  GetCommitResponseBodyData() {}

  explicit GetCommitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitDigest) {
      res["CommitDigest"] = boost::any(*commitDigest);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (commitType) {
      res["CommitType"] = boost::any(*commitType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mainModuleCommitId) {
      res["MainModuleCommitId"] = boost::any(*mainModuleCommitId);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelPack) {
      res["ModelPack"] = boost::any(*modelPack);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (resourcePack) {
      res["ResourcePack"] = boost::any(*resourcePack);
    }
    if (rollbackToCommitId) {
      res["RollbackToCommitId"] = boost::any(*rollbackToCommitId);
    }
    if (rollbackType) {
      res["RollbackType"] = boost::any(*rollbackType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitDigest") != m.end() && !m["CommitDigest"].empty()) {
      commitDigest = make_shared<string>(boost::any_cast<string>(m["CommitDigest"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CommitType") != m.end() && !m["CommitType"].empty()) {
      commitType = make_shared<string>(boost::any_cast<string>(m["CommitType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MainModuleCommitId") != m.end() && !m["MainModuleCommitId"].empty()) {
      mainModuleCommitId = make_shared<string>(boost::any_cast<string>(m["MainModuleCommitId"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      modelDataPath = make_shared<string>(boost::any_cast<string>(m["ModelDataPath"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ModelDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modelDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ModelPack") != m.end() && !m["ModelPack"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ModelPack"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ModelPack"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      modelPack = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      resourceDataPath = make_shared<string>(boost::any_cast<string>(m["ResourceDataPath"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ResourcePack") != m.end() && !m["ResourcePack"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["ResourcePack"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourcePack"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      resourcePack = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("RollbackToCommitId") != m.end() && !m["RollbackToCommitId"].empty()) {
      rollbackToCommitId = make_shared<string>(boost::any_cast<string>(m["RollbackToCommitId"]));
    }
    if (m.find("RollbackType") != m.end() && !m["RollbackType"].empty()) {
      rollbackType = make_shared<string>(boost::any_cast<string>(m["RollbackType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~GetCommitResponseBodyData() = default;
};
class GetCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCommitResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetCommitResponseBody() {}

  explicit GetCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCommitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCommitResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCommitResponseBody() = default;
};
class GetCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCommitResponseBody> body{};

  GetCommitResponse() {}

  explicit GetCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCommitResponseBody>(model1);
      }
    }
  }


  virtual ~GetCommitResponse() = default;
};
class GetDefaultAppUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  GetDefaultAppUserRequest() {}

  explicit GetDefaultAppUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetDefaultAppUserRequest() = default;
};
class GetDefaultAppUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> hasPassword{};
  shared_ptr<string> userName{};

  GetDefaultAppUserResponseBodyData() {}

  explicit GetDefaultAppUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPassword) {
      res["HasPassword"] = boost::any(*hasPassword);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HasPassword") != m.end() && !m["HasPassword"].empty()) {
      hasPassword = make_shared<bool>(boost::any_cast<bool>(m["HasPassword"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetDefaultAppUserResponseBodyData() = default;
};
class GetDefaultAppUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDefaultAppUserResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDefaultAppUserResponseBody() {}

  explicit GetDefaultAppUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDefaultAppUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDefaultAppUserResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDefaultAppUserResponseBody() = default;
};
class GetDefaultAppUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDefaultAppUserResponseBody> body{};

  GetDefaultAppUserResponse() {}

  explicit GetDefaultAppUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDefaultAppUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDefaultAppUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetDefaultAppUserResponse() = default;
};
class GetDomainCnameRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  GetDomainCnameRequest() {}

  explicit GetDomainCnameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetDomainCnameRequest() = default;
};
class GetDomainCnameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cname{};

  GetDomainCnameResponseBodyData() {}

  explicit GetDomainCnameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
  }


  virtual ~GetDomainCnameResponseBodyData() = default;
};
class GetDomainCnameResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDomainCnameResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDomainCnameResponseBody() {}

  explicit GetDomainCnameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainCnameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDomainCnameResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDomainCnameResponseBody() = default;
};
class GetDomainCnameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainCnameResponseBody> body{};

  GetDomainCnameResponse() {}

  explicit GetDomainCnameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainCnameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainCnameResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainCnameResponse() = default;
};
class GetDomainOverviewRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> domain{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  GetDomainOverviewRequest() {}

  explicit GetDomainOverviewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetDomainOverviewRequest() = default;
};
class GetDomainOverviewResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> applied{};
  shared_ptr<map<string, string>> certificate{};
  shared_ptr<string> cname{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> path{};
  shared_ptr<bool> withCertificate{};

  GetDomainOverviewResponseBodyData() {}

  explicit GetDomainOverviewResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (applied) {
      res["Applied"] = boost::any(*applied);
    }
    if (certificate) {
      res["Certificate"] = boost::any(*certificate);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (withCertificate) {
      res["WithCertificate"] = boost::any(*withCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Applied") != m.end() && !m["Applied"].empty()) {
      applied = make_shared<bool>(boost::any_cast<bool>(m["Applied"]));
    }
    if (m.find("Certificate") != m.end() && !m["Certificate"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Certificate"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      certificate = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("WithCertificate") != m.end() && !m["WithCertificate"].empty()) {
      withCertificate = make_shared<bool>(boost::any_cast<bool>(m["WithCertificate"]));
    }
  }


  virtual ~GetDomainOverviewResponseBodyData() = default;
};
class GetDomainOverviewResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDomainOverviewResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDomainOverviewResponseBody() {}

  explicit GetDomainOverviewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainOverviewResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDomainOverviewResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDomainOverviewResponseBody() = default;
};
class GetDomainOverviewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDomainOverviewResponseBody> body{};

  GetDomainOverviewResponse() {}

  explicit GetDomainOverviewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDomainOverviewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDomainOverviewResponseBody>(model1);
      }
    }
  }


  virtual ~GetDomainOverviewResponse() = default;
};
class GetEnvironmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  GetEnvironmentRequest() {}

  explicit GetEnvironmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetEnvironmentRequest() = default;
};
class GetEnvironmentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountOpsEndpoint{};
  shared_ptr<string> appId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentPublishId{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> envId{};
  shared_ptr<string> envType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> publishingId{};

  GetEnvironmentResponseBodyData() {}

  explicit GetEnvironmentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountOpsEndpoint) {
      res["AccountOpsEndpoint"] = boost::any(*accountOpsEndpoint);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentPublishId) {
      res["CurrentPublishId"] = boost::any(*currentPublishId);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (publishingId) {
      res["PublishingId"] = boost::any(*publishingId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountOpsEndpoint") != m.end() && !m["AccountOpsEndpoint"].empty()) {
      accountOpsEndpoint = make_shared<string>(boost::any_cast<string>(m["AccountOpsEndpoint"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentPublishId") != m.end() && !m["CurrentPublishId"].empty()) {
      currentPublishId = make_shared<string>(boost::any_cast<string>(m["CurrentPublishId"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PublishingId") != m.end() && !m["PublishingId"].empty()) {
      publishingId = make_shared<string>(boost::any_cast<string>(m["PublishingId"]));
    }
  }


  virtual ~GetEnvironmentResponseBodyData() = default;
};
class GetEnvironmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetEnvironmentResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetEnvironmentResponseBody() {}

  explicit GetEnvironmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnvironmentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEnvironmentResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEnvironmentResponseBody() = default;
};
class GetEnvironmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnvironmentResponseBody> body{};

  GetEnvironmentResponse() {}

  explicit GetEnvironmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnvironmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnvironmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnvironmentResponse() = default;
};
class GetHistoryStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> source{};
  shared_ptr<string> startDate{};

  GetHistoryStatsRequest() {}

  explicit GetHistoryStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~GetHistoryStatsRequest() = default;
};
class GetHistoryStatsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> historyPv{};
  shared_ptr<map<string, string>> historyUv{};

  GetHistoryStatsResponseBodyData() {}

  explicit GetHistoryStatsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (historyPv) {
      res["HistoryPv"] = boost::any(*historyPv);
    }
    if (historyUv) {
      res["HistoryUv"] = boost::any(*historyUv);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HistoryPv") != m.end() && !m["HistoryPv"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["HistoryPv"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      historyPv = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("HistoryUv") != m.end() && !m["HistoryUv"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["HistoryUv"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      historyUv = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetHistoryStatsResponseBodyData() = default;
};
class GetHistoryStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetHistoryStatsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetHistoryStatsResponseBody() {}

  explicit GetHistoryStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryStatsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetHistoryStatsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetHistoryStatsResponseBody() = default;
};
class GetHistoryStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHistoryStatsResponseBody> body{};

  GetHistoryStatsResponse() {}

  explicit GetHistoryStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHistoryStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHistoryStatsResponseBody>(model1);
      }
    }
  }


  virtual ~GetHistoryStatsResponse() = default;
};
class GetLatestCommitRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> source{};

  GetLatestCommitRequest() {}

  explicit GetLatestCommitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetLatestCommitRequest() = default;
};
class GetLatestCommitResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> commitType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mainModuleCommitId{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modelDataPath{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDataPath{};
  shared_ptr<map<string, string>> resourceDigest{};
  shared_ptr<string> rollbackToCommitId{};
  shared_ptr<string> rollbackType{};
  shared_ptr<string> schemaVersion{};

  GetLatestCommitResponseBodyData() {}

  explicit GetLatestCommitResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (commitType) {
      res["CommitType"] = boost::any(*commitType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mainModuleCommitId) {
      res["MainModuleCommitId"] = boost::any(*mainModuleCommitId);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (rollbackToCommitId) {
      res["RollbackToCommitId"] = boost::any(*rollbackToCommitId);
    }
    if (rollbackType) {
      res["RollbackType"] = boost::any(*rollbackType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CommitType") != m.end() && !m["CommitType"].empty()) {
      commitType = make_shared<string>(boost::any_cast<string>(m["CommitType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MainModuleCommitId") != m.end() && !m["MainModuleCommitId"].empty()) {
      mainModuleCommitId = make_shared<string>(boost::any_cast<string>(m["MainModuleCommitId"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      modelDataPath = make_shared<string>(boost::any_cast<string>(m["ModelDataPath"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      resourceDataPath = make_shared<string>(boost::any_cast<string>(m["ResourceDataPath"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RollbackToCommitId") != m.end() && !m["RollbackToCommitId"].empty()) {
      rollbackToCommitId = make_shared<string>(boost::any_cast<string>(m["RollbackToCommitId"]));
    }
    if (m.find("RollbackType") != m.end() && !m["RollbackType"].empty()) {
      rollbackType = make_shared<string>(boost::any_cast<string>(m["RollbackType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~GetLatestCommitResponseBodyData() = default;
};
class GetLatestCommitResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetLatestCommitResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetLatestCommitResponseBody() {}

  explicit GetLatestCommitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLatestCommitResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetLatestCommitResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLatestCommitResponseBody() = default;
};
class GetLatestCommitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLatestCommitResponseBody> body{};

  GetLatestCommitResponse() {}

  explicit GetLatestCommitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLatestCommitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLatestCommitResponseBody>(model1);
      }
    }
  }


  virtual ~GetLatestCommitResponse() = default;
};
class GetModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  GetModelRequest() {}

  explicit GetModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetModelRequest() = default;
};
class GetModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  GetModelResponseBodyData() {}

  explicit GetModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~GetModelResponseBodyData() = default;
};
class GetModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetModelResponseBody() {}

  explicit GetModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetModelResponseBody() = default;
};
class GetModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelResponseBody> body{};

  GetModelResponse() {}

  explicit GetModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelResponse() = default;
};
class GetModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleType{};
  shared_ptr<string> source{};

  GetModuleRequest() {}

  explicit GetModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetModuleRequest() = default;
};
class GetModuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> platformVersion{};

  GetModuleResponseBodyData() {}

  explicit GetModuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
  }


  virtual ~GetModuleResponseBodyData() = default;
};
class GetModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetModuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetModuleResponseBody() {}

  explicit GetModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetModuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetModuleResponseBody() = default;
};
class GetModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModuleResponseBody> body{};

  GetModuleResponse() {}

  explicit GetModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModuleResponseBody>(model1);
      }
    }
  }


  virtual ~GetModuleResponse() = default;
};
class GetPublishRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> publishId{};
  shared_ptr<string> source{};

  GetPublishRequest() {}

  explicit GetPublishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetPublishRequest() = default;
};
class GetPublishResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> completionTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> envId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> publishId{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> publishType{};
  shared_ptr<string> reason{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<map<string, string>>> subTasks{};
  shared_ptr<string> versionNumber{};

  GetPublishResponseBodyData() {}

  explicit GetPublishResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (completionTime) {
      res["CompletionTime"] = boost::any(*completionTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subTasks) {
      res["SubTasks"] = boost::any(*subTasks);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CompletionTime") != m.end() && !m["CompletionTime"].empty()) {
      completionTime = make_shared<string>(boost::any_cast<string>(m["CompletionTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubTasks") != m.end() && !m["SubTasks"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["SubTasks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubTasks"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      subTasks = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~GetPublishResponseBodyData() = default;
};
class GetPublishResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPublishResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetPublishResponseBody() {}

  explicit GetPublishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublishResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPublishResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPublishResponseBody() = default;
};
class GetPublishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublishResponseBody> body{};

  GetPublishResponse() {}

  explicit GetPublishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublishResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublishResponse() = default;
};
class GetRealtimeStatsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> source{};

  GetRealtimeStatsRequest() {}

  explicit GetRealtimeStatsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetRealtimeStatsRequest() = default;
};
class GetRealtimeStatsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> todayPvCount{};
  shared_ptr<map<string, string>> todayUvCount{};
  shared_ptr<map<string, string>> totalPvCount{};
  shared_ptr<map<string, string>> totalUvCount{};

  GetRealtimeStatsResponseBodyData() {}

  explicit GetRealtimeStatsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (todayPvCount) {
      res["TodayPvCount"] = boost::any(*todayPvCount);
    }
    if (todayUvCount) {
      res["TodayUvCount"] = boost::any(*todayUvCount);
    }
    if (totalPvCount) {
      res["TotalPvCount"] = boost::any(*totalPvCount);
    }
    if (totalUvCount) {
      res["TotalUvCount"] = boost::any(*totalUvCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TodayPvCount") != m.end() && !m["TodayPvCount"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TodayPvCount"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      todayPvCount = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TodayUvCount") != m.end() && !m["TodayUvCount"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TodayUvCount"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      todayUvCount = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TotalPvCount") != m.end() && !m["TotalPvCount"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TotalPvCount"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      totalPvCount = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("TotalUvCount") != m.end() && !m["TotalUvCount"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TotalUvCount"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      totalUvCount = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetRealtimeStatsResponseBodyData() = default;
};
class GetRealtimeStatsResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetRealtimeStatsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetRealtimeStatsResponseBody() {}

  explicit GetRealtimeStatsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealtimeStatsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetRealtimeStatsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRealtimeStatsResponseBody() = default;
};
class GetRealtimeStatsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRealtimeStatsResponseBody> body{};

  GetRealtimeStatsResponse() {}

  explicit GetRealtimeStatsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealtimeStatsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRealtimeStatsResponseBody>(model1);
      }
    }
  }


  virtual ~GetRealtimeStatsResponse() = default;
};
class GetResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> imageProcessParameter{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> source{};

  GetResourceRequest() {}

  explicit GetResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (imageProcessParameter) {
      res["ImageProcessParameter"] = boost::any(*imageProcessParameter);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ImageProcessParameter") != m.end() && !m["ImageProcessParameter"].empty()) {
      imageProcessParameter = make_shared<string>(boost::any_cast<string>(m["ImageProcessParameter"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetResourceRequest() = default;
};
class GetResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDigest{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  GetResourceResponseBodyData() {}

  explicit GetResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      resourceDigest = make_shared<string>(boost::any_cast<string>(m["ResourceDigest"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~GetResourceResponseBodyData() = default;
};
class GetResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetResourceResponseBody() {}

  explicit GetResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetResourceResponseBody() = default;
};
class GetResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceResponseBody> body{};

  GetResourceResponse() {}

  explicit GetResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> source{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> platformVersion{};
  shared_ptr<string> userSecret{};
  shared_ptr<string> userStatus{};
  shared_ptr<string> userType{};

  GetUserResponseBodyData() {}

  explicit GetUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    if (userSecret) {
      res["UserSecret"] = boost::any(*userSecret);
    }
    if (userStatus) {
      res["UserStatus"] = boost::any(*userStatus);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
    if (m.find("UserSecret") != m.end() && !m["UserSecret"].empty()) {
      userSecret = make_shared<string>(boost::any_cast<string>(m["UserSecret"]));
    }
    if (m.find("UserStatus") != m.end() && !m["UserStatus"].empty()) {
      userStatus = make_shared<string>(boost::any_cast<string>(m["UserStatus"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetUserResponseBodyData() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetUserResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetUserResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class ListAppModulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> source{};

  ListAppModulesRequest() {}

  explicit ListAppModulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListAppModulesRequest() = default;
};
class ListAppModulesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> commitId{};
  shared_ptr<string> description{};
  shared_ptr<bool> directDependency{};
  shared_ptr<string> icon{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListAppModulesResponseBodyDataItems() {}

  explicit ListAppModulesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directDependency) {
      res["DirectDependency"] = boost::any(*directDependency);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectDependency") != m.end() && !m["DirectDependency"].empty()) {
      directDependency = make_shared<bool>(boost::any_cast<bool>(m["DirectDependency"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListAppModulesResponseBodyDataItems() = default;
};
class ListAppModulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppModulesResponseBodyDataItems>> items{};

  ListAppModulesResponseBodyData() {}

  explicit ListAppModulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListAppModulesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppModulesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListAppModulesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListAppModulesResponseBodyData() = default;
};
class ListAppModulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAppModulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListAppModulesResponseBody() {}

  explicit ListAppModulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppModulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAppModulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAppModulesResponseBody() = default;
};
class ListAppModulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppModulesResponseBody> body{};

  ListAppModulesResponse() {}

  explicit ListAppModulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppModulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppModulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppModulesResponse() = default;
};
class ListAppTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<string> source{};
  shared_ptr<string> templateType{};

  ListAppTemplatesRequest() {}

  explicit ListAppTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListAppTemplatesRequest() = default;
};
class ListAppTemplatesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> appType{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateType{};

  ListAppTemplatesResponseBodyDataItems() {}

  explicit ListAppTemplatesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListAppTemplatesResponseBodyDataItems() = default;
};
class ListAppTemplatesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppTemplatesResponseBodyDataItems>> items{};

  ListAppTemplatesResponseBodyData() {}

  explicit ListAppTemplatesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListAppTemplatesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppTemplatesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListAppTemplatesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListAppTemplatesResponseBodyData() = default;
};
class ListAppTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAppTemplatesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListAppTemplatesResponseBody() {}

  explicit ListAppTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppTemplatesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAppTemplatesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAppTemplatesResponseBody() = default;
};
class ListAppTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppTemplatesResponseBody> body{};

  ListAppTemplatesResponse() {}

  explicit ListAppTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppTemplatesResponse() = default;
};
class ListAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<string> customParentId{};
  shared_ptr<string> description{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> source{};
  shared_ptr<bool> template_{};

  ListAppsRequest() {}

  explicit ListAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (customParentId) {
      res["CustomParentId"] = boost::any(*customParentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (template_) {
      res["Template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("CustomParentId") != m.end() && !m["CustomParentId"].empty()) {
      customParentId = make_shared<string>(boost::any_cast<string>(m["CustomParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      template_ = make_shared<bool>(boost::any_cast<bool>(m["Template"]));
    }
  }


  virtual ~ListAppsRequest() = default;
};
class ListAppsResponseBodyDataItemsCategories : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> parentCategoryId{};

  ListAppsResponseBodyDataItemsCategories() {}

  explicit ListAppsResponseBodyDataItemsCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~ListAppsResponseBodyDataItemsCategories() = default;
};
class ListAppsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<vector<ListAppsResponseBodyDataItemsCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> platformVersion{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  ListAppsResponseBodyDataItems() {}

  explicit ListAppsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<ListAppsResponseBodyDataItemsCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyDataItemsCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<ListAppsResponseBodyDataItemsCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListAppsResponseBodyDataItems() = default;
};
class ListAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListAppsResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListAppsResponseBodyData() {}

  explicit ListAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListAppsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAppsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListAppsResponseBodyDataItems>>(expect1);
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


  virtual ~ListAppsResponseBodyData() = default;
};
class ListAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListAppsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListAppsResponseBody() {}

  explicit ListAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListAppsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListAppsResponseBody() = default;
};
class ListAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAppsResponseBody> body{};

  ListAppsResponse() {}

  explicit ListAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAppsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAppsResponse() = default;
};
class ListArtifactsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> publishId{};
  shared_ptr<string> source{};

  ListArtifactsRequest() {}

  explicit ListArtifactsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListArtifactsRequest() = default;
};
class ListArtifactsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> artifactId{};
  shared_ptr<string> artifactType{};
  shared_ptr<bool> available{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> url{};

  ListArtifactsResponseBodyDataItems() {}

  explicit ListArtifactsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (artifactId) {
      res["ArtifactId"] = boost::any(*artifactId);
    }
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (available) {
      res["Available"] = boost::any(*available);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ArtifactId") != m.end() && !m["ArtifactId"].empty()) {
      artifactId = make_shared<string>(boost::any_cast<string>(m["ArtifactId"]));
    }
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Available") != m.end() && !m["Available"].empty()) {
      available = make_shared<bool>(boost::any_cast<bool>(m["Available"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListArtifactsResponseBodyDataItems() = default;
};
class ListArtifactsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListArtifactsResponseBodyDataItems>> items{};

  ListArtifactsResponseBodyData() {}

  explicit ListArtifactsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListArtifactsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListArtifactsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListArtifactsResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListArtifactsResponseBodyData() = default;
};
class ListArtifactsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListArtifactsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListArtifactsResponseBody() {}

  explicit ListArtifactsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListArtifactsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListArtifactsResponseBody() = default;
};
class ListArtifactsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListArtifactsResponseBody> body{};

  ListArtifactsResponse() {}

  explicit ListArtifactsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListArtifactsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListArtifactsResponseBody>(model1);
      }
    }
  }


  virtual ~ListArtifactsResponse() = default;
};
class ListCommitsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> customParentId{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> source{};

  ListCommitsRequest() {}

  explicit ListCommitsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (customParentId) {
      res["CustomParentId"] = boost::any(*customParentId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CustomParentId") != m.end() && !m["CustomParentId"].empty()) {
      customParentId = make_shared<string>(boost::any_cast<string>(m["CustomParentId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListCommitsRequest() = default;
};
class ListCommitsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitDigest{};
  shared_ptr<string> commitId{};
  shared_ptr<string> commitLog{};
  shared_ptr<string> commitType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> mainModuleCommitId{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modelDataPath{};
  shared_ptr<map<string, string>> modelDigest{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDataPath{};
  shared_ptr<map<string, string>> resourceDigest{};
  shared_ptr<string> rollbackToCommitId{};
  shared_ptr<string> rollbackType{};
  shared_ptr<string> schemaVersion{};

  ListCommitsResponseBodyDataItems() {}

  explicit ListCommitsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitDigest) {
      res["CommitDigest"] = boost::any(*commitDigest);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (commitLog) {
      res["CommitLog"] = boost::any(*commitLog);
    }
    if (commitType) {
      res["CommitType"] = boost::any(*commitType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (mainModuleCommitId) {
      res["MainModuleCommitId"] = boost::any(*mainModuleCommitId);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (rollbackToCommitId) {
      res["RollbackToCommitId"] = boost::any(*rollbackToCommitId);
    }
    if (rollbackType) {
      res["RollbackType"] = boost::any(*rollbackType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitDigest") != m.end() && !m["CommitDigest"].empty()) {
      commitDigest = make_shared<string>(boost::any_cast<string>(m["CommitDigest"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CommitLog") != m.end() && !m["CommitLog"].empty()) {
      commitLog = make_shared<string>(boost::any_cast<string>(m["CommitLog"]));
    }
    if (m.find("CommitType") != m.end() && !m["CommitType"].empty()) {
      commitType = make_shared<string>(boost::any_cast<string>(m["CommitType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("MainModuleCommitId") != m.end() && !m["MainModuleCommitId"].empty()) {
      mainModuleCommitId = make_shared<string>(boost::any_cast<string>(m["MainModuleCommitId"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      modelDataPath = make_shared<string>(boost::any_cast<string>(m["ModelDataPath"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ModelDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modelDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      resourceDataPath = make_shared<string>(boost::any_cast<string>(m["ResourceDataPath"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("RollbackToCommitId") != m.end() && !m["RollbackToCommitId"].empty()) {
      rollbackToCommitId = make_shared<string>(boost::any_cast<string>(m["RollbackToCommitId"]));
    }
    if (m.find("RollbackType") != m.end() && !m["RollbackType"].empty()) {
      rollbackType = make_shared<string>(boost::any_cast<string>(m["RollbackType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~ListCommitsResponseBodyDataItems() = default;
};
class ListCommitsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCommitsResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListCommitsResponseBodyData() {}

  explicit ListCommitsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListCommitsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCommitsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListCommitsResponseBodyDataItems>>(expect1);
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


  virtual ~ListCommitsResponseBodyData() = default;
};
class ListCommitsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCommitsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListCommitsResponseBody() {}

  explicit ListCommitsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommitsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCommitsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCommitsResponseBody() = default;
};
class ListCommitsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCommitsResponseBody> body{};

  ListCommitsResponse() {}

  explicit ListCommitsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCommitsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCommitsResponseBody>(model1);
      }
    }
  }


  virtual ~ListCommitsResponse() = default;
};
class ListDomainsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  ListDomainsRequest() {}

  explicit ListDomainsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListDomainsRequest() = default;
};
class ListDomainsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<bool> applied{};
  shared_ptr<bool> checked{};
  shared_ptr<string> cname{};
  shared_ptr<bool> deleted{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> path{};
  shared_ptr<bool> withCertificate{};

  ListDomainsResponseBodyDataItems() {}

  explicit ListDomainsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (applied) {
      res["Applied"] = boost::any(*applied);
    }
    if (checked) {
      res["Checked"] = boost::any(*checked);
    }
    if (cname) {
      res["Cname"] = boost::any(*cname);
    }
    if (deleted) {
      res["Deleted"] = boost::any(*deleted);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (withCertificate) {
      res["WithCertificate"] = boost::any(*withCertificate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Applied") != m.end() && !m["Applied"].empty()) {
      applied = make_shared<bool>(boost::any_cast<bool>(m["Applied"]));
    }
    if (m.find("Checked") != m.end() && !m["Checked"].empty()) {
      checked = make_shared<bool>(boost::any_cast<bool>(m["Checked"]));
    }
    if (m.find("Cname") != m.end() && !m["Cname"].empty()) {
      cname = make_shared<string>(boost::any_cast<string>(m["Cname"]));
    }
    if (m.find("Deleted") != m.end() && !m["Deleted"].empty()) {
      deleted = make_shared<bool>(boost::any_cast<bool>(m["Deleted"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("WithCertificate") != m.end() && !m["WithCertificate"].empty()) {
      withCertificate = make_shared<bool>(boost::any_cast<bool>(m["WithCertificate"]));
    }
  }


  virtual ~ListDomainsResponseBodyDataItems() = default;
};
class ListDomainsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDomainsResponseBodyDataItems>> items{};

  ListDomainsResponseBodyData() {}

  explicit ListDomainsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListDomainsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDomainsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListDomainsResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListDomainsResponseBodyData() = default;
};
class ListDomainsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDomainsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListDomainsResponseBody() {}

  explicit ListDomainsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDomainsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDomainsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDomainsResponseBody() = default;
};
class ListDomainsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDomainsResponseBody> body{};

  ListDomainsResponse() {}

  explicit ListDomainsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDomainsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDomainsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDomainsResponse() = default;
};
class ListEnvironmentOverviewsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> source{};

  ListEnvironmentOverviewsRequest() {}

  explicit ListEnvironmentOverviewsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListEnvironmentOverviewsRequest() = default;
};
class ListEnvironmentOverviewsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> config{};
  shared_ptr<string> createTime{};
  shared_ptr<map<string, string>> currentPublish{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> envId{};
  shared_ptr<string> envStatus{};
  shared_ptr<string> envType{};
  shared_ptr<string> latestAppAccessTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<map<string, string>> opsRecord{};
  shared_ptr<map<string, string>> publishing{};

  ListEnvironmentOverviewsResponseBodyDataItems() {}

  explicit ListEnvironmentOverviewsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentPublish) {
      res["CurrentPublish"] = boost::any(*currentPublish);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (envStatus) {
      res["EnvStatus"] = boost::any(*envStatus);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (latestAppAccessTime) {
      res["LatestAppAccessTime"] = boost::any(*latestAppAccessTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (opsRecord) {
      res["OpsRecord"] = boost::any(*opsRecord);
    }
    if (publishing) {
      res["Publishing"] = boost::any(*publishing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Config"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentPublish") != m.end() && !m["CurrentPublish"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["CurrentPublish"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      currentPublish = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("EnvStatus") != m.end() && !m["EnvStatus"].empty()) {
      envStatus = make_shared<string>(boost::any_cast<string>(m["EnvStatus"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("LatestAppAccessTime") != m.end() && !m["LatestAppAccessTime"].empty()) {
      latestAppAccessTime = make_shared<string>(boost::any_cast<string>(m["LatestAppAccessTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OpsRecord") != m.end() && !m["OpsRecord"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["OpsRecord"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      opsRecord = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Publishing") != m.end() && !m["Publishing"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Publishing"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      publishing = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListEnvironmentOverviewsResponseBodyDataItems() = default;
};
class ListEnvironmentOverviewsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEnvironmentOverviewsResponseBodyDataItems>> items{};

  ListEnvironmentOverviewsResponseBodyData() {}

  explicit ListEnvironmentOverviewsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListEnvironmentOverviewsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentOverviewsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListEnvironmentOverviewsResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListEnvironmentOverviewsResponseBodyData() = default;
};
class ListEnvironmentOverviewsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListEnvironmentOverviewsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListEnvironmentOverviewsResponseBody() {}

  explicit ListEnvironmentOverviewsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentOverviewsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEnvironmentOverviewsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEnvironmentOverviewsResponseBody() = default;
};
class ListEnvironmentOverviewsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentOverviewsResponseBody> body{};

  ListEnvironmentOverviewsResponse() {}

  explicit ListEnvironmentOverviewsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentOverviewsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentOverviewsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentOverviewsResponse() = default;
};
class ListEnvironmentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envType{};
  shared_ptr<string> source{};

  ListEnvironmentsRequest() {}

  explicit ListEnvironmentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListEnvironmentsRequest() = default;
};
class ListEnvironmentsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> accountOpsEndpoint{};
  shared_ptr<string> appId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> currentPublishId{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> envId{};
  shared_ptr<string> envType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> publishingId{};

  ListEnvironmentsResponseBodyDataItems() {}

  explicit ListEnvironmentsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountOpsEndpoint) {
      res["AccountOpsEndpoint"] = boost::any(*accountOpsEndpoint);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (currentPublishId) {
      res["CurrentPublishId"] = boost::any(*currentPublishId);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (publishingId) {
      res["PublishingId"] = boost::any(*publishingId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountOpsEndpoint") != m.end() && !m["AccountOpsEndpoint"].empty()) {
      accountOpsEndpoint = make_shared<string>(boost::any_cast<string>(m["AccountOpsEndpoint"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CurrentPublishId") != m.end() && !m["CurrentPublishId"].empty()) {
      currentPublishId = make_shared<string>(boost::any_cast<string>(m["CurrentPublishId"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PublishingId") != m.end() && !m["PublishingId"].empty()) {
      publishingId = make_shared<string>(boost::any_cast<string>(m["PublishingId"]));
    }
  }


  virtual ~ListEnvironmentsResponseBodyDataItems() = default;
};
class ListEnvironmentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListEnvironmentsResponseBodyDataItems>> items{};

  ListEnvironmentsResponseBodyData() {}

  explicit ListEnvironmentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListEnvironmentsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListEnvironmentsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListEnvironmentsResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListEnvironmentsResponseBodyData() = default;
};
class ListEnvironmentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListEnvironmentsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListEnvironmentsResponseBody() {}

  explicit ListEnvironmentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListEnvironmentsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListEnvironmentsResponseBody() = default;
};
class ListEnvironmentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEnvironmentsResponseBody> body{};

  ListEnvironmentsResponse() {}

  explicit ListEnvironmentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEnvironmentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEnvironmentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEnvironmentsResponse() = default;
};
class ListModelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};
  shared_ptr<bool> withContent{};

  ListModelsRequest() {}

  explicit ListModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (withContent) {
      res["WithContent"] = boost::any(*withContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("WithContent") != m.end() && !m["WithContent"].empty()) {
      withContent = make_shared<bool>(boost::any_cast<bool>(m["WithContent"]));
    }
  }


  virtual ~ListModelsRequest() = default;
};
class ListModelsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelDigest{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  ListModelsResponseBodyDataItems() {}

  explicit ListModelsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~ListModelsResponseBodyDataItems() = default;
};
class ListModelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModelsResponseBodyDataItems>> items{};

  ListModelsResponseBodyData() {}

  explicit ListModelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModelsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModelsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModelsResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListModelsResponseBodyData() = default;
};
class ListModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModelsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModelsResponseBody() {}

  explicit ListModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModelsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModelsResponseBody() = default;
};
class ListModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelsResponseBody> body{};

  ListModelsResponse() {}

  explicit ListModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelsResponse() = default;
};
class ListModelsByPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelType{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};
  shared_ptr<bool> withContent{};

  ListModelsByPageRequest() {}

  explicit ListModelsByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (withContent) {
      res["WithContent"] = boost::any(*withContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("WithContent") != m.end() && !m["WithContent"].empty()) {
      withContent = make_shared<bool>(boost::any_cast<bool>(m["WithContent"]));
    }
  }


  virtual ~ListModelsByPageRequest() = default;
};
class ListModelsByPageResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  ListModelsByPageResponseBodyDataItems() {}

  explicit ListModelsByPageResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~ListModelsByPageResponseBodyDataItems() = default;
};
class ListModelsByPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModelsByPageResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListModelsByPageResponseBodyData() {}

  explicit ListModelsByPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModelsByPageResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModelsByPageResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModelsByPageResponseBodyDataItems>>(expect1);
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


  virtual ~ListModelsByPageResponseBodyData() = default;
};
class ListModelsByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModelsByPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModelsByPageResponseBody() {}

  explicit ListModelsByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModelsByPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModelsByPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModelsByPageResponseBody() = default;
};
class ListModelsByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelsByPageResponseBody> body{};

  ListModelsByPageResponse() {}

  explicit ListModelsByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModelsByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelsByPageResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelsByPageResponse() = default;
};
class ListModuleDependenciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> moduleId{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> source{};

  ListModuleDependenciesRequest() {}

  explicit ListModuleDependenciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListModuleDependenciesRequest() = default;
};
class ListModuleDependenciesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> commitId{};
  shared_ptr<string> description{};
  shared_ptr<bool> directDependency{};
  shared_ptr<string> icon{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> origin{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> version{};

  ListModuleDependenciesResponseBodyDataItems() {}

  explicit ListModuleDependenciesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (directDependency) {
      res["DirectDependency"] = boost::any(*directDependency);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DirectDependency") != m.end() && !m["DirectDependency"].empty()) {
      directDependency = make_shared<bool>(boost::any_cast<bool>(m["DirectDependency"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListModuleDependenciesResponseBodyDataItems() = default;
};
class ListModuleDependenciesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModuleDependenciesResponseBodyDataItems>> items{};

  ListModuleDependenciesResponseBodyData() {}

  explicit ListModuleDependenciesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModuleDependenciesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModuleDependenciesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModuleDependenciesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListModuleDependenciesResponseBodyData() = default;
};
class ListModuleDependenciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModuleDependenciesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModuleDependenciesResponseBody() {}

  explicit ListModuleDependenciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleDependenciesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModuleDependenciesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModuleDependenciesResponseBody() = default;
};
class ListModuleDependenciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModuleDependenciesResponseBody> body{};

  ListModuleDependenciesResponse() {}

  explicit ListModuleDependenciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleDependenciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModuleDependenciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListModuleDependenciesResponse() = default;
};
class ListModuleModelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> moduleList{};
  shared_ptr<string> source{};
  shared_ptr<string> subTypes{};
  shared_ptr<bool> withContent{};

  ListModuleModelsRequest() {}

  explicit ListModuleModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleList) {
      res["ModuleList"] = boost::any(*moduleList);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subTypes) {
      res["SubTypes"] = boost::any(*subTypes);
    }
    if (withContent) {
      res["WithContent"] = boost::any(*withContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      moduleList = make_shared<string>(boost::any_cast<string>(m["ModuleList"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubTypes") != m.end() && !m["SubTypes"].empty()) {
      subTypes = make_shared<string>(boost::any_cast<string>(m["SubTypes"]));
    }
    if (m.find("WithContent") != m.end() && !m["WithContent"].empty()) {
      withContent = make_shared<bool>(boost::any_cast<bool>(m["WithContent"]));
    }
  }


  virtual ~ListModuleModelsRequest() = default;
};
class ListModuleModelsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> commitId{};
  shared_ptr<map<string, vector<DataItemsModelDataValue>>> modelData{};
  shared_ptr<map<string, string>> modelDataPath{};
  shared_ptr<map<string, string>> modelDigest{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> resourceData{};
  shared_ptr<map<string, string>> resourceDataPath{};

  ListModuleModelsResponseBodyDataItems() {}

  explicit ListModuleModelsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (modelData) {
      map<string, boost::any> temp1;
      for(auto item1:*modelData){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["ModelData"] = boost::any(temp1);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceData) {
      res["ResourceData"] = boost::any(*resourceData);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("ModelData") != m.end() && !m["ModelData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelData"].type()) {
        map<string, vector<DataItemsModelDataValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["ModelData"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataItemsModelDataValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataItemsModelDataValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        modelData = make_shared<map<string, vector<DataItemsModelDataValue>>>(expect1);
      }
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ModelDataPath"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modelDataPath = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ModelDigest"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modelDigest = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceData") != m.end() && !m["ResourceData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDataPath"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDataPath = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListModuleModelsResponseBodyDataItems() = default;
};
class ListModuleModelsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModuleModelsResponseBodyDataItems>> items{};

  ListModuleModelsResponseBodyData() {}

  explicit ListModuleModelsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModuleModelsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModuleModelsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModuleModelsResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListModuleModelsResponseBodyData() = default;
};
class ListModuleModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModuleModelsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModuleModelsResponseBody() {}

  explicit ListModuleModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleModelsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModuleModelsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModuleModelsResponseBody() = default;
};
class ListModuleModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModuleModelsResponseBody> body{};

  ListModuleModelsResponse() {}

  explicit ListModuleModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModuleModelsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModuleModelsResponse() = default;
};
class ListModulePublishVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> customParentId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleVersion{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> source{};

  ListModulePublishVersionsRequest() {}

  explicit ListModulePublishVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customParentId) {
      res["CustomParentId"] = boost::any(*customParentId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleVersion) {
      res["ModuleVersion"] = boost::any(*moduleVersion);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomParentId") != m.end() && !m["CustomParentId"].empty()) {
      customParentId = make_shared<string>(boost::any_cast<string>(m["CustomParentId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleVersion") != m.end() && !m["ModuleVersion"].empty()) {
      moduleVersion = make_shared<string>(boost::any_cast<string>(m["ModuleVersion"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListModulePublishVersionsRequest() = default;
};
class ListModulePublishVersionsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> commitId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> platformVersion{};
  shared_ptr<string> publishId{};
  shared_ptr<string> version{};

  ListModulePublishVersionsResponseBodyDataItems() {}

  explicit ListModulePublishVersionsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~ListModulePublishVersionsResponseBodyDataItems() = default;
};
class ListModulePublishVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModulePublishVersionsResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListModulePublishVersionsResponseBodyData() {}

  explicit ListModulePublishVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModulePublishVersionsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModulePublishVersionsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModulePublishVersionsResponseBodyDataItems>>(expect1);
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


  virtual ~ListModulePublishVersionsResponseBodyData() = default;
};
class ListModulePublishVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModulePublishVersionsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModulePublishVersionsResponseBody() {}

  explicit ListModulePublishVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulePublishVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModulePublishVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModulePublishVersionsResponseBody() = default;
};
class ListModulePublishVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModulePublishVersionsResponseBody> body{};

  ListModulePublishVersionsResponse() {}

  explicit ListModulePublishVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulePublishVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModulePublishVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListModulePublishVersionsResponse() = default;
};
class ListModuleResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> moduleList{};
  shared_ptr<string> source{};
  shared_ptr<string> types{};
  shared_ptr<bool> withContent{};

  ListModuleResourcesRequest() {}

  explicit ListModuleResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (moduleList) {
      res["ModuleList"] = boost::any(*moduleList);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    if (withContent) {
      res["WithContent"] = boost::any(*withContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModuleList") != m.end() && !m["ModuleList"].empty()) {
      moduleList = make_shared<string>(boost::any_cast<string>(m["ModuleList"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
    if (m.find("WithContent") != m.end() && !m["WithContent"].empty()) {
      withContent = make_shared<bool>(boost::any_cast<bool>(m["WithContent"]));
    }
  }


  virtual ~ListModuleResourcesRequest() = default;
};
class ListModuleResourcesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> commitId{};
  shared_ptr<map<string, string>> modelData{};
  shared_ptr<map<string, string>> modelDataPath{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, vector<DataItemsResourceDataValue>>> resourceData{};
  shared_ptr<map<string, string>> resourceDataPath{};

  ListModuleResourcesResponseBodyDataItems() {}

  explicit ListModuleResourcesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (modelData) {
      res["ModelData"] = boost::any(*modelData);
    }
    if (modelDataPath) {
      res["ModelDataPath"] = boost::any(*modelDataPath);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceData) {
      map<string, boost::any> temp1;
      for(auto item1:*resourceData){
        vector<boost::any> temp2;
        for(auto item2:item1.second){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1[item1.first] = boost::any(temp2);
      }
      res["ResourceData"] = boost::any(temp1);
    }
    if (resourceDataPath) {
      res["ResourceDataPath"] = boost::any(*resourceDataPath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("ModelData") != m.end() && !m["ModelData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ModelData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modelData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ModelDataPath") != m.end() && !m["ModelDataPath"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ModelDataPath"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      modelDataPath = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceData") != m.end() && !m["ResourceData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceData"].type()) {
        map<string, vector<DataItemsResourceDataValue>> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["ResourceData"])){
          if (typeid(vector<boost::any>) == item1.second.type()) {
            vector<DataItemsResourceDataValue> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1.second)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                DataItemsResourceDataValue model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1[item1.first] = expect2;
          }
        }
        resourceData = make_shared<map<string, vector<DataItemsResourceDataValue>>>(expect1);
      }
    }
    if (m.find("ResourceDataPath") != m.end() && !m["ResourceDataPath"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ResourceDataPath"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      resourceDataPath = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ListModuleResourcesResponseBodyDataItems() = default;
};
class ListModuleResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModuleResourcesResponseBodyDataItems>> items{};

  ListModuleResourcesResponseBodyData() {}

  explicit ListModuleResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModuleResourcesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModuleResourcesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModuleResourcesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListModuleResourcesResponseBodyData() = default;
};
class ListModuleResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModuleResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModuleResourcesResponseBody() {}

  explicit ListModuleResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModuleResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModuleResourcesResponseBody() = default;
};
class ListModuleResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModuleResourcesResponseBody> body{};

  ListModuleResourcesResponse() {}

  explicit ListModuleResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModuleResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModuleResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListModuleResourcesResponse() = default;
};
class ListModulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> hasOwnerApp{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> platform{};
  shared_ptr<string> source{};

  ListModulesRequest() {}

  explicit ListModulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hasOwnerApp) {
      res["HasOwnerApp"] = boost::any(*hasOwnerApp);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HasOwnerApp") != m.end() && !m["HasOwnerApp"].empty()) {
      hasOwnerApp = make_shared<bool>(boost::any_cast<bool>(m["HasOwnerApp"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListModulesRequest() = default;
};
class ListModulesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> platformVersion{};

  ListModulesResponseBodyDataItems() {}

  explicit ListModulesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
  }


  virtual ~ListModulesResponseBodyDataItems() = default;
};
class ListModulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModulesResponseBodyDataItems>> items{};

  ListModulesResponseBodyData() {}

  explicit ListModulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModulesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModulesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModulesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListModulesResponseBodyData() = default;
};
class ListModulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModulesResponseBody() {}

  explicit ListModulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModulesResponseBody() = default;
};
class ListModulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModulesResponseBody> body{};

  ListModulesResponse() {}

  explicit ListModulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListModulesResponse() = default;
};
class ListModulesByPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> customParentId{};
  shared_ptr<string> description{};
  shared_ptr<bool> hasOwnerApp{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> platform{};
  shared_ptr<string> source{};

  ListModulesByPageRequest() {}

  explicit ListModulesByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customParentId) {
      res["CustomParentId"] = boost::any(*customParentId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hasOwnerApp) {
      res["HasOwnerApp"] = boost::any(*hasOwnerApp);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomParentId") != m.end() && !m["CustomParentId"].empty()) {
      customParentId = make_shared<string>(boost::any_cast<string>(m["CustomParentId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HasOwnerApp") != m.end() && !m["HasOwnerApp"].empty()) {
      hasOwnerApp = make_shared<bool>(boost::any_cast<bool>(m["HasOwnerApp"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListModulesByPageRequest() = default;
};
class ListModulesByPageResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleType{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> platformVersion{};

  ListModulesByPageResponseBodyDataItems() {}

  explicit ListModulesByPageResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
  }


  virtual ~ListModulesByPageResponseBodyDataItems() = default;
};
class ListModulesByPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListModulesByPageResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListModulesByPageResponseBodyData() {}

  explicit ListModulesByPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListModulesByPageResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModulesByPageResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListModulesByPageResponseBodyDataItems>>(expect1);
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


  virtual ~ListModulesByPageResponseBodyData() = default;
};
class ListModulesByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListModulesByPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListModulesByPageResponseBody() {}

  explicit ListModulesByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulesByPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListModulesByPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListModulesByPageResponseBody() = default;
};
class ListModulesByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModulesByPageResponseBody> body{};

  ListModulesByPageResponse() {}

  explicit ListModulesByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModulesByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModulesByPageResponseBody>(model1);
      }
    }
  }


  virtual ~ListModulesByPageResponse() = default;
};
class ListPublishVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> source{};

  ListPublishVersionsRequest() {}

  explicit ListPublishVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListPublishVersionsRequest() = default;
};
class ListPublishVersionsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> completionTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> envId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> publishId{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> publishType{};
  shared_ptr<string> reason{};
  shared_ptr<string> startTime{};
  shared_ptr<vector<map<string, string>>> subTasks{};
  shared_ptr<string> versionNumber{};

  ListPublishVersionsResponseBodyDataItems() {}

  explicit ListPublishVersionsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (completionTime) {
      res["CompletionTime"] = boost::any(*completionTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subTasks) {
      res["SubTasks"] = boost::any(*subTasks);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CompletionTime") != m.end() && !m["CompletionTime"].empty()) {
      completionTime = make_shared<string>(boost::any_cast<string>(m["CompletionTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("SubTasks") != m.end() && !m["SubTasks"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["SubTasks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SubTasks"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      subTasks = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~ListPublishVersionsResponseBodyDataItems() = default;
};
class ListPublishVersionsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublishVersionsResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListPublishVersionsResponseBodyData() {}

  explicit ListPublishVersionsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListPublishVersionsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishVersionsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListPublishVersionsResponseBodyDataItems>>(expect1);
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


  virtual ~ListPublishVersionsResponseBodyData() = default;
};
class ListPublishVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPublishVersionsResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListPublishVersionsResponseBody() {}

  explicit ListPublishVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishVersionsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPublishVersionsResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPublishVersionsResponseBody() = default;
};
class ListPublishVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublishVersionsResponseBody> body{};

  ListPublishVersionsResponse() {}

  explicit ListPublishVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublishVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublishVersionsResponse() = default;
};
class ListPublishedModulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> excludeAppId{};
  shared_ptr<string> excludeModuleId{};
  shared_ptr<bool> hasOwnerApp{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> platform{};
  shared_ptr<string> source{};

  ListPublishedModulesRequest() {}

  explicit ListPublishedModulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (excludeAppId) {
      res["ExcludeAppId"] = boost::any(*excludeAppId);
    }
    if (excludeModuleId) {
      res["ExcludeModuleId"] = boost::any(*excludeModuleId);
    }
    if (hasOwnerApp) {
      res["HasOwnerApp"] = boost::any(*hasOwnerApp);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExcludeAppId") != m.end() && !m["ExcludeAppId"].empty()) {
      excludeAppId = make_shared<string>(boost::any_cast<string>(m["ExcludeAppId"]));
    }
    if (m.find("ExcludeModuleId") != m.end() && !m["ExcludeModuleId"].empty()) {
      excludeModuleId = make_shared<string>(boost::any_cast<string>(m["ExcludeModuleId"]));
    }
    if (m.find("HasOwnerApp") != m.end() && !m["HasOwnerApp"].empty()) {
      hasOwnerApp = make_shared<bool>(boost::any_cast<bool>(m["HasOwnerApp"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListPublishedModulesRequest() = default;
};
class ListPublishedModulesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> moduleType{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};
  shared_ptr<string> platformVersion{};

  ListPublishedModulesResponseBodyDataItems() {}

  explicit ListPublishedModulesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (moduleType) {
      res["ModuleType"] = boost::any(*moduleType);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (platformVersion) {
      res["PlatformVersion"] = boost::any(*platformVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("ModuleType") != m.end() && !m["ModuleType"].empty()) {
      moduleType = make_shared<string>(boost::any_cast<string>(m["ModuleType"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("PlatformVersion") != m.end() && !m["PlatformVersion"].empty()) {
      platformVersion = make_shared<string>(boost::any_cast<string>(m["PlatformVersion"]));
    }
  }


  virtual ~ListPublishedModulesResponseBodyDataItems() = default;
};
class ListPublishedModulesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublishedModulesResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListPublishedModulesResponseBodyData() {}

  explicit ListPublishedModulesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListPublishedModulesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishedModulesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListPublishedModulesResponseBodyDataItems>>(expect1);
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


  virtual ~ListPublishedModulesResponseBodyData() = default;
};
class ListPublishedModulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPublishedModulesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListPublishedModulesResponseBody() {}

  explicit ListPublishedModulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishedModulesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPublishedModulesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPublishedModulesResponseBody() = default;
};
class ListPublishedModulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublishedModulesResponseBody> body{};

  ListPublishedModulesResponse() {}

  explicit ListPublishedModulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishedModulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublishedModulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublishedModulesResponse() = default;
};
class ListPublishesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> publishType{};
  shared_ptr<string> source{};

  ListPublishesRequest() {}

  explicit ListPublishesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~ListPublishesRequest() = default;
};
class ListPublishesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> completionTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> envId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> publishId{};
  shared_ptr<string> publishStatus{};
  shared_ptr<string> publishType{};
  shared_ptr<string> reason{};
  shared_ptr<string> startTime{};
  shared_ptr<string> versionNumber{};

  ListPublishesResponseBodyDataItems() {}

  explicit ListPublishesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (completionTime) {
      res["CompletionTime"] = boost::any(*completionTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (publishId) {
      res["PublishId"] = boost::any(*publishId);
    }
    if (publishStatus) {
      res["PublishStatus"] = boost::any(*publishStatus);
    }
    if (publishType) {
      res["PublishType"] = boost::any(*publishType);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("CompletionTime") != m.end() && !m["CompletionTime"].empty()) {
      completionTime = make_shared<string>(boost::any_cast<string>(m["CompletionTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("PublishId") != m.end() && !m["PublishId"].empty()) {
      publishId = make_shared<string>(boost::any_cast<string>(m["PublishId"]));
    }
    if (m.find("PublishStatus") != m.end() && !m["PublishStatus"].empty()) {
      publishStatus = make_shared<string>(boost::any_cast<string>(m["PublishStatus"]));
    }
    if (m.find("PublishType") != m.end() && !m["PublishType"].empty()) {
      publishType = make_shared<string>(boost::any_cast<string>(m["PublishType"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~ListPublishesResponseBodyDataItems() = default;
};
class ListPublishesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListPublishesResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListPublishesResponseBodyData() {}

  explicit ListPublishesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListPublishesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublishesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListPublishesResponseBodyDataItems>>(expect1);
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


  virtual ~ListPublishesResponseBodyData() = default;
};
class ListPublishesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListPublishesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListPublishesResponseBody() {}

  explicit ListPublishesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListPublishesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPublishesResponseBody() = default;
};
class ListPublishesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublishesResponseBody> body{};

  ListPublishesResponse() {}

  explicit ListPublishesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublishesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublishesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublishesResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> imageProcessParameter{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<bool> withContent{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageProcessParameter) {
      res["ImageProcessParameter"] = boost::any(*imageProcessParameter);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (withContent) {
      res["WithContent"] = boost::any(*withContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageProcessParameter") != m.end() && !m["ImageProcessParameter"].empty()) {
      imageProcessParameter = make_shared<string>(boost::any_cast<string>(m["ImageProcessParameter"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("WithContent") != m.end() && !m["WithContent"].empty()) {
      withContent = make_shared<bool>(boost::any_cast<bool>(m["WithContent"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<boost::any> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDigest{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  ListResourcesResponseBodyDataItems() {}

  explicit ListResourcesResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<boost::any>(boost::any_cast<boost::any>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      resourceDigest = make_shared<string>(boost::any_cast<string>(m["ResourceDigest"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~ListResourcesResponseBodyDataItems() = default;
};
class ListResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcesResponseBodyDataItems>> items{};

  ListResourcesResponseBodyData() {}

  explicit ListResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListResourcesResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListResourcesResponseBodyDataItems>>(expect1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyData() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListResourcesByPageRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> imageProcessParameter{};
  shared_ptr<string> moduleId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> source{};
  shared_ptr<bool> withContent{};

  ListResourcesByPageRequest() {}

  explicit ListResourcesByPageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (imageProcessParameter) {
      res["ImageProcessParameter"] = boost::any(*imageProcessParameter);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (withContent) {
      res["WithContent"] = boost::any(*withContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ImageProcessParameter") != m.end() && !m["ImageProcessParameter"].empty()) {
      imageProcessParameter = make_shared<string>(boost::any_cast<string>(m["ImageProcessParameter"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("WithContent") != m.end() && !m["WithContent"].empty()) {
      withContent = make_shared<bool>(boost::any_cast<bool>(m["WithContent"]));
    }
  }


  virtual ~ListResourcesByPageRequest() = default;
};
class ListResourcesByPageResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDigest{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  ListResourcesByPageResponseBodyDataItems() {}

  explicit ListResourcesByPageResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      resourceDigest = make_shared<string>(boost::any_cast<string>(m["ResourceDigest"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~ListResourcesByPageResponseBodyDataItems() = default;
};
class ListResourcesByPageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListResourcesByPageResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListResourcesByPageResponseBodyData() {}

  explicit ListResourcesByPageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListResourcesByPageResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesByPageResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListResourcesByPageResponseBodyDataItems>>(expect1);
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


  virtual ~ListResourcesByPageResponseBodyData() = default;
};
class ListResourcesByPageResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourcesByPageResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListResourcesByPageResponseBody() {}

  explicit ListResourcesByPageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesByPageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListResourcesByPageResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListResourcesByPageResponseBody() = default;
};
class ListResourcesByPageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesByPageResponseBody> body{};

  ListResourcesByPageResponse() {}

  explicit ListResourcesByPageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListResourcesByPageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesByPageResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesByPageResponse() = default;
};
class ResetAppUserPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};
  shared_ptr<string> userName{};

  ResetAppUserPasswordRequest() {}

  explicit ResetAppUserPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ResetAppUserPasswordRequest() = default;
};
class ResetAppUserPasswordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> userName{};

  ResetAppUserPasswordResponseBodyData() {}

  explicit ResetAppUserPasswordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~ResetAppUserPasswordResponseBodyData() = default;
};
class ResetAppUserPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<ResetAppUserPasswordResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ResetAppUserPasswordResponseBody() {}

  explicit ResetAppUserPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAppUserPasswordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ResetAppUserPasswordResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAppUserPasswordResponseBody() = default;
};
class ResetAppUserPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAppUserPasswordResponseBody> body{};

  ResetAppUserPasswordResponse() {}

  explicit ResetAppUserPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetAppUserPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAppUserPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAppUserPasswordResponse() = default;
};
class RestoreModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  RestoreModelRequest() {}

  explicit RestoreModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~RestoreModelRequest() = default;
};
class RestoreModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  RestoreModelResponseBodyData() {}

  explicit RestoreModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~RestoreModelResponseBodyData() = default;
};
class RestoreModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<RestoreModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RestoreModelResponseBody() {}

  explicit RestoreModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestoreModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RestoreModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RestoreModelResponseBody() = default;
};
class RestoreModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestoreModelResponseBody> body{};

  RestoreModelResponse() {}

  explicit RestoreModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestoreModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestoreModelResponseBody>(model1);
      }
    }
  }


  virtual ~RestoreModelResponse() = default;
};
class RunLogicModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> commitId{};
  shared_ptr<string> content{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> parameters{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};

  RunLogicModelRequest() {}

  explicit RunLogicModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (commitId) {
      res["CommitId"] = boost::any(*commitId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("CommitId") != m.end() && !m["CommitId"].empty()) {
      commitId = make_shared<string>(boost::any_cast<string>(m["CommitId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~RunLogicModelRequest() = default;
};
class RunLogicModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> body{};
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> status{};

  RunLogicModelResponseBodyData() {}

  explicit RunLogicModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["Body"] = boost::any(*body);
    }
    if (headers) {
      res["Headers"] = boost::any(*headers);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Body") != m.end() && !m["Body"].empty()) {
      body = make_shared<string>(boost::any_cast<string>(m["Body"]));
    }
    if (m.find("Headers") != m.end() && !m["Headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~RunLogicModelResponseBodyData() = default;
};
class RunLogicModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<RunLogicModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RunLogicModelResponseBody() {}

  explicit RunLogicModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunLogicModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RunLogicModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunLogicModelResponseBody() = default;
};
class RunLogicModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunLogicModelResponseBody> body{};

  RunLogicModelResponse() {}

  explicit RunLogicModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunLogicModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunLogicModelResponseBody>(model1);
      }
    }
  }


  virtual ~RunLogicModelResponse() = default;
};
class SetEnvironmentDefaultDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> domain{};
  shared_ptr<string> domainType{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  SetEnvironmentDefaultDomainRequest() {}

  explicit SetEnvironmentDefaultDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (domain) {
      res["Domain"] = boost::any(*domain);
    }
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Domain") != m.end() && !m["Domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["Domain"]));
    }
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~SetEnvironmentDefaultDomainRequest() = default;
};
class SetEnvironmentDefaultDomainResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> configChanged{};
  shared_ptr<string> defaultMasterDomain{};
  shared_ptr<string> defaultStaticDomain{};
  shared_ptr<string> masterDomain{};
  shared_ptr<bool> masterDomainApplied{};
  shared_ptr<string> staticDomain{};
  shared_ptr<bool> staticDomainApplied{};

  SetEnvironmentDefaultDomainResponseBodyData() {}

  explicit SetEnvironmentDefaultDomainResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configChanged) {
      res["ConfigChanged"] = boost::any(*configChanged);
    }
    if (defaultMasterDomain) {
      res["DefaultMasterDomain"] = boost::any(*defaultMasterDomain);
    }
    if (defaultStaticDomain) {
      res["DefaultStaticDomain"] = boost::any(*defaultStaticDomain);
    }
    if (masterDomain) {
      res["MasterDomain"] = boost::any(*masterDomain);
    }
    if (masterDomainApplied) {
      res["MasterDomainApplied"] = boost::any(*masterDomainApplied);
    }
    if (staticDomain) {
      res["StaticDomain"] = boost::any(*staticDomain);
    }
    if (staticDomainApplied) {
      res["StaticDomainApplied"] = boost::any(*staticDomainApplied);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigChanged") != m.end() && !m["ConfigChanged"].empty()) {
      configChanged = make_shared<bool>(boost::any_cast<bool>(m["ConfigChanged"]));
    }
    if (m.find("DefaultMasterDomain") != m.end() && !m["DefaultMasterDomain"].empty()) {
      defaultMasterDomain = make_shared<string>(boost::any_cast<string>(m["DefaultMasterDomain"]));
    }
    if (m.find("DefaultStaticDomain") != m.end() && !m["DefaultStaticDomain"].empty()) {
      defaultStaticDomain = make_shared<string>(boost::any_cast<string>(m["DefaultStaticDomain"]));
    }
    if (m.find("MasterDomain") != m.end() && !m["MasterDomain"].empty()) {
      masterDomain = make_shared<string>(boost::any_cast<string>(m["MasterDomain"]));
    }
    if (m.find("MasterDomainApplied") != m.end() && !m["MasterDomainApplied"].empty()) {
      masterDomainApplied = make_shared<bool>(boost::any_cast<bool>(m["MasterDomainApplied"]));
    }
    if (m.find("StaticDomain") != m.end() && !m["StaticDomain"].empty()) {
      staticDomain = make_shared<string>(boost::any_cast<string>(m["StaticDomain"]));
    }
    if (m.find("StaticDomainApplied") != m.end() && !m["StaticDomainApplied"].empty()) {
      staticDomainApplied = make_shared<bool>(boost::any_cast<bool>(m["StaticDomainApplied"]));
    }
  }


  virtual ~SetEnvironmentDefaultDomainResponseBodyData() = default;
};
class SetEnvironmentDefaultDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<SetEnvironmentDefaultDomainResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SetEnvironmentDefaultDomainResponseBody() {}

  explicit SetEnvironmentDefaultDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetEnvironmentDefaultDomainResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SetEnvironmentDefaultDomainResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetEnvironmentDefaultDomainResponseBody() = default;
};
class SetEnvironmentDefaultDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetEnvironmentDefaultDomainResponseBody> body{};

  SetEnvironmentDefaultDomainResponse() {}

  explicit SetEnvironmentDefaultDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetEnvironmentDefaultDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetEnvironmentDefaultDomainResponseBody>(model1);
      }
    }
  }


  virtual ~SetEnvironmentDefaultDomainResponse() = default;
};
class StartAppServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  StartAppServerRequest() {}

  explicit StartAppServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~StartAppServerRequest() = default;
};
class StartAppServerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appServerStatus{};
  shared_ptr<string> envId{};

  StartAppServerResponseBodyData() {}

  explicit StartAppServerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appServerStatus) {
      res["AppServerStatus"] = boost::any(*appServerStatus);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppServerStatus") != m.end() && !m["AppServerStatus"].empty()) {
      appServerStatus = make_shared<string>(boost::any_cast<string>(m["AppServerStatus"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~StartAppServerResponseBodyData() = default;
};
class StartAppServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<StartAppServerResponseBodyData> data{};
  shared_ptr<string> requestId{};

  StartAppServerResponseBody() {}

  explicit StartAppServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAppServerResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StartAppServerResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StartAppServerResponseBody() = default;
};
class StartAppServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartAppServerResponseBody> body{};

  StartAppServerResponse() {}

  explicit StartAppServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAppServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAppServerResponseBody>(model1);
      }
    }
  }


  virtual ~StartAppServerResponse() = default;
};
class StopAppServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> envId{};
  shared_ptr<string> source{};

  StopAppServerRequest() {}

  explicit StopAppServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~StopAppServerRequest() = default;
};
class StopAppServerResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appServerStatus{};
  shared_ptr<string> envId{};

  StopAppServerResponseBodyData() {}

  explicit StopAppServerResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appServerStatus) {
      res["AppServerStatus"] = boost::any(*appServerStatus);
    }
    if (envId) {
      res["EnvId"] = boost::any(*envId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppServerStatus") != m.end() && !m["AppServerStatus"].empty()) {
      appServerStatus = make_shared<string>(boost::any_cast<string>(m["AppServerStatus"]));
    }
    if (m.find("EnvId") != m.end() && !m["EnvId"].empty()) {
      envId = make_shared<string>(boost::any_cast<string>(m["EnvId"]));
    }
  }


  virtual ~StopAppServerResponseBodyData() = default;
};
class StopAppServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<StopAppServerResponseBodyData> data{};
  shared_ptr<string> requestId{};

  StopAppServerResponseBody() {}

  explicit StopAppServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppServerResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<StopAppServerResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~StopAppServerResponseBody() = default;
};
class StopAppServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopAppServerResponseBody> body{};

  StopAppServerResponse() {}

  explicit StopAppServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopAppServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopAppServerResponseBody>(model1);
      }
    }
  }


  virtual ~StopAppServerResponse() = default;
};
class UpdateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> source{};

  UpdateAppRequest() {}

  explicit UpdateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateAppRequest() = default;
};
class UpdateAppResponseBodyDataCategories : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> parentCategoryId{};

  UpdateAppResponseBodyDataCategories() {}

  explicit UpdateAppResponseBodyDataCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<string>(boost::any_cast<string>(m["ParentCategoryId"]));
    }
  }


  virtual ~UpdateAppResponseBodyDataCategories() = default;
};
class UpdateAppResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> appStatus{};
  shared_ptr<string> appType{};
  shared_ptr<vector<UpdateAppResponseBodyDataCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> lastEditTime{};
  shared_ptr<string> mainModuleId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  UpdateAppResponseBodyData() {}

  explicit UpdateAppResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appStatus) {
      res["AppStatus"] = boost::any(*appStatus);
    }
    if (appType) {
      res["AppType"] = boost::any(*appType);
    }
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (isTemplate) {
      res["IsTemplate"] = boost::any(*isTemplate);
    }
    if (lastEditTime) {
      res["LastEditTime"] = boost::any(*lastEditTime);
    }
    if (mainModuleId) {
      res["MainModuleId"] = boost::any(*mainModuleId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppStatus") != m.end() && !m["AppStatus"].empty()) {
      appStatus = make_shared<string>(boost::any_cast<string>(m["AppStatus"]));
    }
    if (m.find("AppType") != m.end() && !m["AppType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["AppType"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<UpdateAppResponseBodyDataCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateAppResponseBodyDataCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<UpdateAppResponseBodyDataCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("IsTemplate") != m.end() && !m["IsTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["IsTemplate"]));
    }
    if (m.find("LastEditTime") != m.end() && !m["LastEditTime"].empty()) {
      lastEditTime = make_shared<string>(boost::any_cast<string>(m["LastEditTime"]));
    }
    if (m.find("MainModuleId") != m.end() && !m["MainModuleId"].empty()) {
      mainModuleId = make_shared<string>(boost::any_cast<string>(m["MainModuleId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateAppResponseBodyData() = default;
};
class UpdateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateAppResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateAppResponseBody() {}

  explicit UpdateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateAppResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAppResponseBody() = default;
};
class UpdateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppResponseBody> body{};

  UpdateAppResponse() {}

  explicit UpdateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppResponse() = default;
};
class UpdateAppModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};
  shared_ptr<string> subType{};

  UpdateAppModelRequest() {}

  explicit UpdateAppModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
  }


  virtual ~UpdateAppModelRequest() = default;
};
class UpdateAppModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelDigest{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  UpdateAppModelResponseBodyData() {}

  explicit UpdateAppModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~UpdateAppModelResponseBodyData() = default;
};
class UpdateAppModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateAppModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateAppModelResponseBody() {}

  explicit UpdateAppModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateAppModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateAppModelResponseBody() = default;
};
class UpdateAppModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAppModelResponseBody> body{};

  UpdateAppModelResponse() {}

  explicit UpdateAppModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAppModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAppModelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAppModelResponse() = default;
};
class UpdateModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> encodeType{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> source{};

  UpdateModelRequest() {}

  explicit UpdateModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (encodeType) {
      res["EncodeType"] = boost::any(*encodeType);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EncodeType") != m.end() && !m["EncodeType"].empty()) {
      encodeType = make_shared<string>(boost::any_cast<string>(m["EncodeType"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateModelRequest() = default;
};
class UpdateModelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<vector<map<string, string>>> attributes{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> linkModelId{};
  shared_ptr<string> linkModuleId{};
  shared_ptr<bool> linked{};
  shared_ptr<string> modelDigest{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelStatus{};
  shared_ptr<string> modelType{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<map<string, string>> props{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> subType{};
  shared_ptr<string> visibility{};

  UpdateModelResponseBodyData() {}

  explicit UpdateModelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (linkModelId) {
      res["LinkModelId"] = boost::any(*linkModelId);
    }
    if (linkModuleId) {
      res["LinkModuleId"] = boost::any(*linkModuleId);
    }
    if (linked) {
      res["Linked"] = boost::any(*linked);
    }
    if (modelDigest) {
      res["ModelDigest"] = boost::any(*modelDigest);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelStatus) {
      res["ModelStatus"] = boost::any(*modelStatus);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (props) {
      res["Props"] = boost::any(*props);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (subType) {
      res["SubType"] = boost::any(*subType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<map<string, string>> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
          map<string, string> map2 = boost::any_cast<map<string, string>>(item);
          map<string, string> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      attributes = make_shared<vector<map<string, string>>>(toVec1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("LinkModelId") != m.end() && !m["LinkModelId"].empty()) {
      linkModelId = make_shared<string>(boost::any_cast<string>(m["LinkModelId"]));
    }
    if (m.find("LinkModuleId") != m.end() && !m["LinkModuleId"].empty()) {
      linkModuleId = make_shared<string>(boost::any_cast<string>(m["LinkModuleId"]));
    }
    if (m.find("Linked") != m.end() && !m["Linked"].empty()) {
      linked = make_shared<bool>(boost::any_cast<bool>(m["Linked"]));
    }
    if (m.find("ModelDigest") != m.end() && !m["ModelDigest"].empty()) {
      modelDigest = make_shared<string>(boost::any_cast<string>(m["ModelDigest"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelStatus") != m.end() && !m["ModelStatus"].empty()) {
      modelStatus = make_shared<string>(boost::any_cast<string>(m["ModelStatus"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("Props") != m.end() && !m["Props"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Props"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      props = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("SubType") != m.end() && !m["SubType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["SubType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~UpdateModelResponseBodyData() = default;
};
class UpdateModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateModelResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateModelResponseBody() {}

  explicit UpdateModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModelResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateModelResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateModelResponseBody() = default;
};
class UpdateModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelResponseBody> body{};

  UpdateModelResponse() {}

  explicit UpdateModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelResponse() = default;
};
class UpdateModuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> source{};

  UpdateModuleRequest() {}

  explicit UpdateModuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateModuleRequest() = default;
};
class UpdateModuleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> icon{};
  shared_ptr<string> latestPublishedCommit{};
  shared_ptr<string> latestPublishedVersion{};
  shared_ptr<string> minimumPlatformVersion{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> moduleName{};
  shared_ptr<string> ownerAppId{};
  shared_ptr<string> ownerUserId{};
  shared_ptr<string> platform{};

  UpdateModuleResponseBodyData() {}

  explicit UpdateModuleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (latestPublishedCommit) {
      res["LatestPublishedCommit"] = boost::any(*latestPublishedCommit);
    }
    if (latestPublishedVersion) {
      res["LatestPublishedVersion"] = boost::any(*latestPublishedVersion);
    }
    if (minimumPlatformVersion) {
      res["MinimumPlatformVersion"] = boost::any(*minimumPlatformVersion);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (moduleName) {
      res["ModuleName"] = boost::any(*moduleName);
    }
    if (ownerAppId) {
      res["OwnerAppId"] = boost::any(*ownerAppId);
    }
    if (ownerUserId) {
      res["OwnerUserId"] = boost::any(*ownerUserId);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("LatestPublishedCommit") != m.end() && !m["LatestPublishedCommit"].empty()) {
      latestPublishedCommit = make_shared<string>(boost::any_cast<string>(m["LatestPublishedCommit"]));
    }
    if (m.find("LatestPublishedVersion") != m.end() && !m["LatestPublishedVersion"].empty()) {
      latestPublishedVersion = make_shared<string>(boost::any_cast<string>(m["LatestPublishedVersion"]));
    }
    if (m.find("MinimumPlatformVersion") != m.end() && !m["MinimumPlatformVersion"].empty()) {
      minimumPlatformVersion = make_shared<string>(boost::any_cast<string>(m["MinimumPlatformVersion"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ModuleName") != m.end() && !m["ModuleName"].empty()) {
      moduleName = make_shared<string>(boost::any_cast<string>(m["ModuleName"]));
    }
    if (m.find("OwnerAppId") != m.end() && !m["OwnerAppId"].empty()) {
      ownerAppId = make_shared<string>(boost::any_cast<string>(m["OwnerAppId"]));
    }
    if (m.find("OwnerUserId") != m.end() && !m["OwnerUserId"].empty()) {
      ownerUserId = make_shared<string>(boost::any_cast<string>(m["OwnerUserId"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~UpdateModuleResponseBodyData() = default;
};
class UpdateModuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateModuleResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateModuleResponseBody() {}

  explicit UpdateModuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModuleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateModuleResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateModuleResponseBody() = default;
};
class UpdateModuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModuleResponseBody> body{};

  UpdateModuleResponse() {}

  explicit UpdateModuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModuleResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModuleResponse() = default;
};
class UpdateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> source{};

  UpdateResourceRequest() {}

  explicit UpdateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateResourceRequest() = default;
};
class UpdateResourceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceDigest{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  UpdateResourceResponseBodyData() {}

  explicit UpdateResourceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceDigest) {
      res["ResourceDigest"] = boost::any(*resourceDigest);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceDigest") != m.end() && !m["ResourceDigest"].empty()) {
      resourceDigest = make_shared<string>(boost::any_cast<string>(m["ResourceDigest"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~UpdateResourceResponseBodyData() = default;
};
class UpdateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateResourceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateResourceResponseBody() {}

  explicit UpdateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateResourceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateResourceResponseBody() = default;
};
class UpdateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceResponseBody> body{};

  UpdateResourceResponse() {}

  explicit UpdateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceResponse() = default;
};
class UpdateResourceContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> content{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> source{};

  UpdateResourceContentRequest() {}

  explicit UpdateResourceContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateResourceContentRequest() = default;
};
class UpdateResourceContentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  UpdateResourceContentResponseBodyData() {}

  explicit UpdateResourceContentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~UpdateResourceContentResponseBodyData() = default;
};
class UpdateResourceContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateResourceContentResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateResourceContentResponseBody() {}

  explicit UpdateResourceContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceContentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateResourceContentResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateResourceContentResponseBody() = default;
};
class UpdateResourceContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceContentResponseBody> body{};

  UpdateResourceContentResponse() {}

  explicit UpdateResourceContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceContentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceContentResponse() = default;
};
class UpdateResourceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> source{};

  UpdateResourceInfoRequest() {}

  explicit UpdateResourceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~UpdateResourceInfoRequest() = default;
};
class UpdateResourceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<map<string, string>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> moduleId{};
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceName{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> revision{};
  shared_ptr<string> schemaVersion{};

  UpdateResourceInfoResponseBodyData() {}

  explicit UpdateResourceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (moduleId) {
      res["ModuleId"] = boost::any(*moduleId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceName) {
      res["ResourceName"] = boost::any(*resourceName);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (revision) {
      res["Revision"] = boost::any(*revision);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Content"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      content = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ModuleId") != m.end() && !m["ModuleId"].empty()) {
      moduleId = make_shared<string>(boost::any_cast<string>(m["ModuleId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceName") != m.end() && !m["ResourceName"].empty()) {
      resourceName = make_shared<string>(boost::any_cast<string>(m["ResourceName"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Revision") != m.end() && !m["Revision"].empty()) {
      revision = make_shared<long>(boost::any_cast<long>(m["Revision"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
  }


  virtual ~UpdateResourceInfoResponseBodyData() = default;
};
class UpdateResourceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateResourceInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  UpdateResourceInfoResponseBody() {}

  explicit UpdateResourceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateResourceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateResourceInfoResponseBody() = default;
};
class UpdateResourceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceInfoResponseBody> body{};

  UpdateResourceInfoResponse() {}

  explicit UpdateResourceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateResourceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceInfoResponse() = default;
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
  BatchCreateModelResponse batchCreateModelWithOptions(shared_ptr<BatchCreateModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchCreateModelResponse batchCreateModel(shared_ptr<BatchCreateModelRequest> request);
  BatchDeleteModelResponse batchDeleteModelWithOptions(shared_ptr<BatchDeleteModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteModelResponse batchDeleteModel(shared_ptr<BatchDeleteModelRequest> request);
  BatchDeleteResourcesResponse batchDeleteResourcesWithOptions(shared_ptr<BatchDeleteResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteResourcesResponse batchDeleteResources(shared_ptr<BatchDeleteResourcesRequest> request);
  BatchRestoreModelResponse batchRestoreModelWithOptions(shared_ptr<BatchRestoreModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchRestoreModelResponse batchRestoreModel(shared_ptr<BatchRestoreModelRequest> request);
  CheckDomainResponse checkDomainWithOptions(shared_ptr<CheckDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckDomainResponse checkDomain(shared_ptr<CheckDomainRequest> request);
  CloneAppResponse cloneAppWithOptions(shared_ptr<CloneAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneAppResponse cloneApp(shared_ptr<CloneAppRequest> request);
  CloneModelFromCommitResponse cloneModelFromCommitWithOptions(shared_ptr<CloneModelFromCommitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneModelFromCommitResponse cloneModelFromCommit(shared_ptr<CloneModelFromCommitRequest> request);
  CloneModelInModuleResponse cloneModelInModuleWithOptions(shared_ptr<CloneModelInModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneModelInModuleResponse cloneModelInModule(shared_ptr<CloneModelInModuleRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateCommitResponse createCommitWithOptions(shared_ptr<CreateCommitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCommitResponse createCommit(shared_ptr<CreateCommitRequest> request);
  CreateDomainResponse createDomainWithOptions(shared_ptr<CreateDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDomainResponse createDomain(shared_ptr<CreateDomainRequest> request);
  CreateLinkEntityAndAssociationResponse createLinkEntityAndAssociationWithOptions(shared_ptr<CreateLinkEntityAndAssociationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLinkEntityAndAssociationResponse createLinkEntityAndAssociation(shared_ptr<CreateLinkEntityAndAssociationRequest> request);
  CreateModelResponse createModelWithOptions(shared_ptr<CreateModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelResponse createModel(shared_ptr<CreateModelRequest> request);
  CreateModuleResponse createModuleWithOptions(shared_ptr<CreateModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModuleResponse createModule(shared_ptr<CreateModuleRequest> request);
  CreateModulePublishResponse createModulePublishWithOptions(shared_ptr<CreateModulePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModulePublishResponse createModulePublish(shared_ptr<CreateModulePublishRequest> request);
  CreatePublishResponse createPublishWithOptions(shared_ptr<CreatePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePublishResponse createPublish(shared_ptr<CreatePublishRequest> request);
  CreateResourceResponse createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<CreateResourceRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteCommitResponse deleteCommitWithOptions(shared_ptr<DeleteCommitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCommitResponse deleteCommit(shared_ptr<DeleteCommitRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DeleteModelResponse deleteModelWithOptions(shared_ptr<DeleteModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelResponse deleteModel(shared_ptr<DeleteModelRequest> request);
  DeleteModuleResponse deleteModuleWithOptions(shared_ptr<DeleteModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModuleResponse deleteModule(shared_ptr<DeleteModuleRequest> request);
  DeleteResourceResponse deleteResourceWithOptions(shared_ptr<DeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceResponse deleteResource(shared_ptr<DeleteResourceRequest> request);
  GenerateAppUserPasswordResponse generateAppUserPasswordWithOptions(shared_ptr<GenerateAppUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAppUserPasswordResponse generateAppUserPassword(shared_ptr<GenerateAppUserPasswordRequest> request);
  GenerateAuthTokenResponse generateAuthTokenWithOptions(shared_ptr<GenerateAuthTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateAuthTokenResponse generateAuthToken(shared_ptr<GenerateAuthTokenRequest> request);
  GenerateUploadTokenResponse generateUploadTokenWithOptions(shared_ptr<GenerateUploadTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateUploadTokenResponse generateUploadToken(shared_ptr<GenerateUploadTokenRequest> request);
  GetAppResponse getAppWithOptions(shared_ptr<GetAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppResponse getApp(shared_ptr<GetAppRequest> request);
  GetAppModelResponse getAppModelWithOptions(shared_ptr<GetAppModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppModelResponse getAppModel(shared_ptr<GetAppModelRequest> request);
  GetAppSecretResponse getAppSecretWithOptions(shared_ptr<GetAppSecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAppSecretResponse getAppSecret(shared_ptr<GetAppSecretRequest> request);
  GetArtifactResponse getArtifactWithOptions(shared_ptr<GetArtifactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetArtifactResponse getArtifact(shared_ptr<GetArtifactRequest> request);
  GetCommitResponse getCommitWithOptions(shared_ptr<GetCommitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCommitResponse getCommit(shared_ptr<GetCommitRequest> request);
  GetDefaultAppUserResponse getDefaultAppUserWithOptions(shared_ptr<GetDefaultAppUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDefaultAppUserResponse getDefaultAppUser(shared_ptr<GetDefaultAppUserRequest> request);
  GetDomainCnameResponse getDomainCnameWithOptions(shared_ptr<GetDomainCnameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainCnameResponse getDomainCname(shared_ptr<GetDomainCnameRequest> request);
  GetDomainOverviewResponse getDomainOverviewWithOptions(shared_ptr<GetDomainOverviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDomainOverviewResponse getDomainOverview(shared_ptr<GetDomainOverviewRequest> request);
  GetEnvironmentResponse getEnvironmentWithOptions(shared_ptr<GetEnvironmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnvironmentResponse getEnvironment(shared_ptr<GetEnvironmentRequest> request);
  GetHistoryStatsResponse getHistoryStatsWithOptions(shared_ptr<GetHistoryStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHistoryStatsResponse getHistoryStats(shared_ptr<GetHistoryStatsRequest> request);
  GetLatestCommitResponse getLatestCommitWithOptions(shared_ptr<GetLatestCommitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLatestCommitResponse getLatestCommit(shared_ptr<GetLatestCommitRequest> request);
  GetModelResponse getModelWithOptions(shared_ptr<GetModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelResponse getModel(shared_ptr<GetModelRequest> request);
  GetModuleResponse getModuleWithOptions(shared_ptr<GetModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModuleResponse getModule(shared_ptr<GetModuleRequest> request);
  GetPublishResponse getPublishWithOptions(shared_ptr<GetPublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublishResponse getPublish(shared_ptr<GetPublishRequest> request);
  GetRealtimeStatsResponse getRealtimeStatsWithOptions(shared_ptr<GetRealtimeStatsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRealtimeStatsResponse getRealtimeStats(shared_ptr<GetRealtimeStatsRequest> request);
  GetResourceResponse getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceResponse getResource(shared_ptr<GetResourceRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  ListAppModulesResponse listAppModulesWithOptions(shared_ptr<ListAppModulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppModulesResponse listAppModules(shared_ptr<ListAppModulesRequest> request);
  ListAppTemplatesResponse listAppTemplatesWithOptions(shared_ptr<ListAppTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppTemplatesResponse listAppTemplates(shared_ptr<ListAppTemplatesRequest> request);
  ListAppsResponse listAppsWithOptions(shared_ptr<ListAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAppsResponse listApps(shared_ptr<ListAppsRequest> request);
  ListArtifactsResponse listArtifactsWithOptions(shared_ptr<ListArtifactsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListArtifactsResponse listArtifacts(shared_ptr<ListArtifactsRequest> request);
  ListCommitsResponse listCommitsWithOptions(shared_ptr<ListCommitsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCommitsResponse listCommits(shared_ptr<ListCommitsRequest> request);
  ListDomainsResponse listDomainsWithOptions(shared_ptr<ListDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDomainsResponse listDomains(shared_ptr<ListDomainsRequest> request);
  ListEnvironmentOverviewsResponse listEnvironmentOverviewsWithOptions(shared_ptr<ListEnvironmentOverviewsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentOverviewsResponse listEnvironmentOverviews(shared_ptr<ListEnvironmentOverviewsRequest> request);
  ListEnvironmentsResponse listEnvironmentsWithOptions(shared_ptr<ListEnvironmentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEnvironmentsResponse listEnvironments(shared_ptr<ListEnvironmentsRequest> request);
  ListModelsResponse listModelsWithOptions(shared_ptr<ListModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelsResponse listModels(shared_ptr<ListModelsRequest> request);
  ListModelsByPageResponse listModelsByPageWithOptions(shared_ptr<ListModelsByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelsByPageResponse listModelsByPage(shared_ptr<ListModelsByPageRequest> request);
  ListModuleDependenciesResponse listModuleDependenciesWithOptions(shared_ptr<ListModuleDependenciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModuleDependenciesResponse listModuleDependencies(shared_ptr<ListModuleDependenciesRequest> request);
  ListModuleModelsResponse listModuleModelsWithOptions(shared_ptr<ListModuleModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModuleModelsResponse listModuleModels(shared_ptr<ListModuleModelsRequest> request);
  ListModulePublishVersionsResponse listModulePublishVersionsWithOptions(shared_ptr<ListModulePublishVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModulePublishVersionsResponse listModulePublishVersions(shared_ptr<ListModulePublishVersionsRequest> request);
  ListModuleResourcesResponse listModuleResourcesWithOptions(shared_ptr<ListModuleResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModuleResourcesResponse listModuleResources(shared_ptr<ListModuleResourcesRequest> request);
  ListModulesResponse listModulesWithOptions(shared_ptr<ListModulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModulesResponse listModules(shared_ptr<ListModulesRequest> request);
  ListModulesByPageResponse listModulesByPageWithOptions(shared_ptr<ListModulesByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModulesByPageResponse listModulesByPage(shared_ptr<ListModulesByPageRequest> request);
  ListPublishVersionsResponse listPublishVersionsWithOptions(shared_ptr<ListPublishVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublishVersionsResponse listPublishVersions(shared_ptr<ListPublishVersionsRequest> request);
  ListPublishedModulesResponse listPublishedModulesWithOptions(shared_ptr<ListPublishedModulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublishedModulesResponse listPublishedModules(shared_ptr<ListPublishedModulesRequest> request);
  ListPublishesResponse listPublishesWithOptions(shared_ptr<ListPublishesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublishesResponse listPublishes(shared_ptr<ListPublishesRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListResourcesByPageResponse listResourcesByPageWithOptions(shared_ptr<ListResourcesByPageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesByPageResponse listResourcesByPage(shared_ptr<ListResourcesByPageRequest> request);
  ResetAppUserPasswordResponse resetAppUserPasswordWithOptions(shared_ptr<ResetAppUserPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAppUserPasswordResponse resetAppUserPassword(shared_ptr<ResetAppUserPasswordRequest> request);
  RestoreModelResponse restoreModelWithOptions(shared_ptr<RestoreModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestoreModelResponse restoreModel(shared_ptr<RestoreModelRequest> request);
  RunLogicModelResponse runLogicModelWithOptions(shared_ptr<RunLogicModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunLogicModelResponse runLogicModel(shared_ptr<RunLogicModelRequest> request);
  SetEnvironmentDefaultDomainResponse setEnvironmentDefaultDomainWithOptions(shared_ptr<SetEnvironmentDefaultDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetEnvironmentDefaultDomainResponse setEnvironmentDefaultDomain(shared_ptr<SetEnvironmentDefaultDomainRequest> request);
  StartAppServerResponse startAppServerWithOptions(shared_ptr<StartAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAppServerResponse startAppServer(shared_ptr<StartAppServerRequest> request);
  StopAppServerResponse stopAppServerWithOptions(shared_ptr<StopAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopAppServerResponse stopAppServer(shared_ptr<StopAppServerRequest> request);
  UpdateAppResponse updateAppWithOptions(shared_ptr<UpdateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppResponse updateApp(shared_ptr<UpdateAppRequest> request);
  UpdateAppModelResponse updateAppModelWithOptions(shared_ptr<UpdateAppModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppModelResponse updateAppModel(shared_ptr<UpdateAppModelRequest> request);
  UpdateModelResponse updateModelWithOptions(shared_ptr<UpdateModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelResponse updateModel(shared_ptr<UpdateModelRequest> request);
  UpdateModuleResponse updateModuleWithOptions(shared_ptr<UpdateModuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModuleResponse updateModule(shared_ptr<UpdateModuleRequest> request);
  UpdateResourceResponse updateResourceWithOptions(shared_ptr<UpdateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceResponse updateResource(shared_ptr<UpdateResourceRequest> request);
  UpdateResourceContentResponse updateResourceContentWithOptions(shared_ptr<UpdateResourceContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceContentResponse updateResourceContent(shared_ptr<UpdateResourceContentRequest> request);
  UpdateResourceInfoResponse updateResourceInfoWithOptions(shared_ptr<UpdateResourceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceInfoResponse updateResourceInfo(shared_ptr<UpdateResourceInfoRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Miniapplcdp20200113

#endif
