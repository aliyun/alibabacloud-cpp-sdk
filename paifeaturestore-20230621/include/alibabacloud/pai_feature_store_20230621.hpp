// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAIFEATURESTORE20230621_H_
#define ALIBABACLOUD_PAIFEATURESTORE20230621_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PaiFeatureStore20230621 {
class FeatureViewConfigValuePartitionsValue : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<vector<string>> values{};
  shared_ptr<string> startValue{};
  shared_ptr<string> endValue{};

  FeatureViewConfigValuePartitionsValue() {}

  explicit FeatureViewConfigValuePartitionsValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (values) {
      res["Values"] = boost::any(*values);
    }
    if (startValue) {
      res["StartValue"] = boost::any(*startValue);
    }
    if (endValue) {
      res["EndValue"] = boost::any(*endValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Values") != m.end() && !m["Values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartValue") != m.end() && !m["StartValue"].empty()) {
      startValue = make_shared<string>(boost::any_cast<string>(m["StartValue"]));
    }
    if (m.find("EndValue") != m.end() && !m["EndValue"].empty()) {
      endValue = make_shared<string>(boost::any_cast<string>(m["EndValue"]));
    }
  }


  virtual ~FeatureViewConfigValuePartitionsValue() = default;
};
class FeatureViewConfigValue : public Darabonba::Model {
public:
  shared_ptr<map<string, FeatureViewConfigValuePartitionsValue>> partitions{};
  shared_ptr<string> eventTime{};
  shared_ptr<bool> equal{};
  shared_ptr<bool> useMock{};

  FeatureViewConfigValue() {}

  explicit FeatureViewConfigValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partitions) {
      map<string, boost::any> temp1;
      for(auto item1:*partitions){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Partitions"] = boost::any(temp1);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (equal) {
      res["Equal"] = boost::any(*equal);
    }
    if (useMock) {
      res["UseMock"] = boost::any(*useMock);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Partitions") != m.end() && !m["Partitions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Partitions"].type()) {
        map<string, FeatureViewConfigValuePartitionsValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Partitions"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            FeatureViewConfigValuePartitionsValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        partitions = make_shared<map<string, FeatureViewConfigValuePartitionsValue>>(expect1);
      }
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("Equal") != m.end() && !m["Equal"].empty()) {
      equal = make_shared<bool>(boost::any_cast<bool>(m["Equal"]));
    }
    if (m.find("UseMock") != m.end() && !m["UseMock"].empty()) {
      useMock = make_shared<bool>(boost::any_cast<bool>(m["UseMock"]));
    }
  }


  virtual ~FeatureViewConfigValue() = default;
};
class CheckInstanceDatasourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};

  CheckInstanceDatasourceRequest() {}

  explicit CheckInstanceDatasourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~CheckInstanceDatasourceRequest() = default;
};
class CheckInstanceDatasourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CheckInstanceDatasourceResponseBody() {}

  explicit CheckInstanceDatasourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CheckInstanceDatasourceResponseBody() = default;
};
class CheckInstanceDatasourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckInstanceDatasourceResponseBody> body{};

  CheckInstanceDatasourceResponse() {}

  explicit CheckInstanceDatasourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckInstanceDatasourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckInstanceDatasourceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckInstanceDatasourceResponse() = default;
};
class CreateDatasourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};
  shared_ptr<string> workspaceId{};

  CreateDatasourceRequest() {}

  explicit CreateDatasourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateDatasourceRequest() = default;
};
class CreateDatasourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasourceId{};
  shared_ptr<string> requestId{};

  CreateDatasourceResponseBody() {}

  explicit CreateDatasourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasourceResponseBody() = default;
};
class CreateDatasourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasourceResponseBody> body{};

  CreateDatasourceResponse() {}

  explicit CreateDatasourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDatasourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasourceResponse() = default;
};
class CreateFeatureEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> joinId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  CreateFeatureEntityRequest() {}

  explicit CreateFeatureEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinId) {
      res["JoinId"] = boost::any(*joinId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinId") != m.end() && !m["JoinId"].empty()) {
      joinId = make_shared<string>(boost::any_cast<string>(m["JoinId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~CreateFeatureEntityRequest() = default;
};
class CreateFeatureEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureEntityId{};
  shared_ptr<string> requestId{};

  CreateFeatureEntityResponseBody() {}

  explicit CreateFeatureEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntityId) {
      res["FeatureEntityId"] = boost::any(*featureEntityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureEntityId") != m.end() && !m["FeatureEntityId"].empty()) {
      featureEntityId = make_shared<string>(boost::any_cast<string>(m["FeatureEntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFeatureEntityResponseBody() = default;
};
class CreateFeatureEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFeatureEntityResponseBody> body{};

  CreateFeatureEntityResponse() {}

  explicit CreateFeatureEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFeatureEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFeatureEntityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFeatureEntityResponse() = default;
};
class CreateFeatureViewRequestFieldsTransformInput : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateFeatureViewRequestFieldsTransformInput() {}

  explicit CreateFeatureViewRequestFieldsTransformInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFeatureViewRequestFieldsTransformInput() = default;
};
class CreateFeatureViewRequestFieldsTransform : public Darabonba::Model {
public:
  shared_ptr<vector<CreateFeatureViewRequestFieldsTransformInput>> input{};
  shared_ptr<long> LLMConfigId{};
  shared_ptr<string> type{};

  CreateFeatureViewRequestFieldsTransform() {}

  explicit CreateFeatureViewRequestFieldsTransform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      vector<boost::any> temp1;
      for(auto item1:*input){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Input"] = boost::any(temp1);
    }
    if (LLMConfigId) {
      res["LLMConfigId"] = boost::any(*LLMConfigId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(vector<boost::any>) == m["Input"].type()) {
        vector<CreateFeatureViewRequestFieldsTransformInput> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Input"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFeatureViewRequestFieldsTransformInput model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        input = make_shared<vector<CreateFeatureViewRequestFieldsTransformInput>>(expect1);
      }
    }
    if (m.find("LLMConfigId") != m.end() && !m["LLMConfigId"].empty()) {
      LLMConfigId = make_shared<long>(boost::any_cast<long>(m["LLMConfigId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFeatureViewRequestFieldsTransform() = default;
};
class CreateFeatureViewRequestFields : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateFeatureViewRequestFieldsTransform>> transform{};
  shared_ptr<string> type{};

  CreateFeatureViewRequestFields() {}

  explicit CreateFeatureViewRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (transform) {
      vector<boost::any> temp1;
      for(auto item1:*transform){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Transform"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Transform") != m.end() && !m["Transform"].empty()) {
      if (typeid(vector<boost::any>) == m["Transform"].type()) {
        vector<CreateFeatureViewRequestFieldsTransform> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Transform"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFeatureViewRequestFieldsTransform model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transform = make_shared<vector<CreateFeatureViewRequestFieldsTransform>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateFeatureViewRequestFields() = default;
};
class CreateFeatureViewRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> featureEntityId{};
  shared_ptr<vector<CreateFeatureViewRequestFields>> fields{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<string> registerDatasourceId{};
  shared_ptr<string> registerTable{};
  shared_ptr<bool> syncOnlineTable{};
  shared_ptr<long> TTL{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> writeMethod{};
  shared_ptr<bool> writeToFeatureDB{};

  CreateFeatureViewRequest() {}

  explicit CreateFeatureViewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (featureEntityId) {
      res["FeatureEntityId"] = boost::any(*featureEntityId);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (registerDatasourceId) {
      res["RegisterDatasourceId"] = boost::any(*registerDatasourceId);
    }
    if (registerTable) {
      res["RegisterTable"] = boost::any(*registerTable);
    }
    if (syncOnlineTable) {
      res["SyncOnlineTable"] = boost::any(*syncOnlineTable);
    }
    if (TTL) {
      res["TTL"] = boost::any(*TTL);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (writeMethod) {
      res["WriteMethod"] = boost::any(*writeMethod);
    }
    if (writeToFeatureDB) {
      res["WriteToFeatureDB"] = boost::any(*writeToFeatureDB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("FeatureEntityId") != m.end() && !m["FeatureEntityId"].empty()) {
      featureEntityId = make_shared<string>(boost::any_cast<string>(m["FeatureEntityId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<CreateFeatureViewRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFeatureViewRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<CreateFeatureViewRequestFields>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RegisterDatasourceId") != m.end() && !m["RegisterDatasourceId"].empty()) {
      registerDatasourceId = make_shared<string>(boost::any_cast<string>(m["RegisterDatasourceId"]));
    }
    if (m.find("RegisterTable") != m.end() && !m["RegisterTable"].empty()) {
      registerTable = make_shared<string>(boost::any_cast<string>(m["RegisterTable"]));
    }
    if (m.find("SyncOnlineTable") != m.end() && !m["SyncOnlineTable"].empty()) {
      syncOnlineTable = make_shared<bool>(boost::any_cast<bool>(m["SyncOnlineTable"]));
    }
    if (m.find("TTL") != m.end() && !m["TTL"].empty()) {
      TTL = make_shared<long>(boost::any_cast<long>(m["TTL"]));
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WriteMethod") != m.end() && !m["WriteMethod"].empty()) {
      writeMethod = make_shared<string>(boost::any_cast<string>(m["WriteMethod"]));
    }
    if (m.find("WriteToFeatureDB") != m.end() && !m["WriteToFeatureDB"].empty()) {
      writeToFeatureDB = make_shared<bool>(boost::any_cast<bool>(m["WriteToFeatureDB"]));
    }
  }


  virtual ~CreateFeatureViewRequest() = default;
};
class CreateFeatureViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureViewId{};
  shared_ptr<string> requestId{};

  CreateFeatureViewResponseBody() {}

  explicit CreateFeatureViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureViewId) {
      res["FeatureViewId"] = boost::any(*featureViewId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureViewId") != m.end() && !m["FeatureViewId"].empty()) {
      featureViewId = make_shared<string>(boost::any_cast<string>(m["FeatureViewId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFeatureViewResponseBody() = default;
};
class CreateFeatureViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFeatureViewResponseBody> body{};

  CreateFeatureViewResponse() {}

  explicit CreateFeatureViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFeatureViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFeatureViewResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFeatureViewResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateLabelTableRequestFields : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateLabelTableRequestFields() {}

  explicit CreateLabelTableRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
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
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateLabelTableRequestFields() = default;
};
class CreateLabelTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasourceId{};
  shared_ptr<vector<CreateLabelTableRequestFields>> fields{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  CreateLabelTableRequest() {}

  explicit CreateLabelTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<CreateLabelTableRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLabelTableRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<CreateLabelTableRequestFields>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~CreateLabelTableRequest() = default;
};
class CreateLabelTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> labelTableId{};
  shared_ptr<string> requestId{};

  CreateLabelTableResponseBody() {}

  explicit CreateLabelTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelTableId) {
      res["LabelTableId"] = boost::any(*labelTableId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelTableId") != m.end() && !m["LabelTableId"].empty()) {
      labelTableId = make_shared<string>(boost::any_cast<string>(m["LabelTableId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLabelTableResponseBody() = default;
};
class CreateLabelTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLabelTableResponseBody> body{};

  CreateLabelTableResponse() {}

  explicit CreateLabelTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLabelTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLabelTableResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLabelTableResponse() = default;
};
class CreateModelFeatureRequestFeatures : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> featureViewId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  CreateModelFeatureRequestFeatures() {}

  explicit CreateModelFeatureRequestFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (featureViewId) {
      res["FeatureViewId"] = boost::any(*featureViewId);
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
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("FeatureViewId") != m.end() && !m["FeatureViewId"].empty()) {
      featureViewId = make_shared<string>(boost::any_cast<string>(m["FeatureViewId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateModelFeatureRequestFeatures() = default;
};
class CreateModelFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateModelFeatureRequestFeatures>> features{};
  shared_ptr<long> labelPriorityLevel{};
  shared_ptr<string> labelTableId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<string>> sequenceFeatureViewIds{};

  CreateModelFeatureRequest() {}

  explicit CreateModelFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (features) {
      vector<boost::any> temp1;
      for(auto item1:*features){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Features"] = boost::any(temp1);
    }
    if (labelPriorityLevel) {
      res["LabelPriorityLevel"] = boost::any(*labelPriorityLevel);
    }
    if (labelTableId) {
      res["LabelTableId"] = boost::any(*labelTableId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sequenceFeatureViewIds) {
      res["SequenceFeatureViewIds"] = boost::any(*sequenceFeatureViewIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<CreateModelFeatureRequestFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Features"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateModelFeatureRequestFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        features = make_shared<vector<CreateModelFeatureRequestFeatures>>(expect1);
      }
    }
    if (m.find("LabelPriorityLevel") != m.end() && !m["LabelPriorityLevel"].empty()) {
      labelPriorityLevel = make_shared<long>(boost::any_cast<long>(m["LabelPriorityLevel"]));
    }
    if (m.find("LabelTableId") != m.end() && !m["LabelTableId"].empty()) {
      labelTableId = make_shared<string>(boost::any_cast<string>(m["LabelTableId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SequenceFeatureViewIds") != m.end() && !m["SequenceFeatureViewIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SequenceFeatureViewIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SequenceFeatureViewIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sequenceFeatureViewIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateModelFeatureRequest() = default;
};
class CreateModelFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> modelFeatureId{};
  shared_ptr<string> requestId{};

  CreateModelFeatureResponseBody() {}

  explicit CreateModelFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelFeatureId) {
      res["ModelFeatureId"] = boost::any(*modelFeatureId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelFeatureId") != m.end() && !m["ModelFeatureId"].empty()) {
      modelFeatureId = make_shared<string>(boost::any_cast<string>(m["ModelFeatureId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateModelFeatureResponseBody() = default;
};
class CreateModelFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateModelFeatureResponseBody> body{};

  CreateModelFeatureResponse() {}

  explicit CreateModelFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateModelFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateModelFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~CreateModelFeatureResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineDatasourceId{};
  shared_ptr<long> offlineLifeCycle{};
  shared_ptr<string> onlineDatasourceId{};
  shared_ptr<string> workspaceId{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (offlineDatasourceId) {
      res["OfflineDatasourceId"] = boost::any(*offlineDatasourceId);
    }
    if (offlineLifeCycle) {
      res["OfflineLifeCycle"] = boost::any(*offlineLifeCycle);
    }
    if (onlineDatasourceId) {
      res["OnlineDatasourceId"] = boost::any(*onlineDatasourceId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OfflineDatasourceId") != m.end() && !m["OfflineDatasourceId"].empty()) {
      offlineDatasourceId = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceId"]));
    }
    if (m.find("OfflineLifeCycle") != m.end() && !m["OfflineLifeCycle"].empty()) {
      offlineLifeCycle = make_shared<long>(boost::any_cast<long>(m["OfflineLifeCycle"]));
    }
    if (m.find("OnlineDatasourceId") != m.end() && !m["OnlineDatasourceId"].empty()) {
      onlineDatasourceId = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateServiceIdentityRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleName{};

  CreateServiceIdentityRoleRequest() {}

  explicit CreateServiceIdentityRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateServiceIdentityRoleRequest() = default;
};
class CreateServiceIdentityRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleName{};

  CreateServiceIdentityRoleResponseBody() {}

  explicit CreateServiceIdentityRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateServiceIdentityRoleResponseBody() = default;
};
class CreateServiceIdentityRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceIdentityRoleResponseBody> body{};

  CreateServiceIdentityRoleResponse() {}

  explicit CreateServiceIdentityRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceIdentityRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceIdentityRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceIdentityRoleResponse() = default;
};
class DeleteDatasourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasourceResponseBody() {}

  explicit DeleteDatasourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasourceResponseBody() = default;
};
class DeleteDatasourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasourceResponseBody> body{};

  DeleteDatasourceResponse() {}

  explicit DeleteDatasourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDatasourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasourceResponse() = default;
};
class DeleteFeatureEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFeatureEntityResponseBody() {}

  explicit DeleteFeatureEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFeatureEntityResponseBody() = default;
};
class DeleteFeatureEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFeatureEntityResponseBody> body{};

  DeleteFeatureEntityResponse() {}

  explicit DeleteFeatureEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFeatureEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFeatureEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFeatureEntityResponse() = default;
};
class DeleteFeatureViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFeatureViewResponseBody() {}

  explicit DeleteFeatureViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFeatureViewResponseBody() = default;
};
class DeleteFeatureViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFeatureViewResponseBody> body{};

  DeleteFeatureViewResponse() {}

  explicit DeleteFeatureViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFeatureViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFeatureViewResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFeatureViewResponse() = default;
};
class DeleteLabelTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteLabelTableResponseBody() {}

  explicit DeleteLabelTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteLabelTableResponseBody() = default;
};
class DeleteLabelTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLabelTableResponseBody> body{};

  DeleteLabelTableResponse() {}

  explicit DeleteLabelTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLabelTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLabelTableResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLabelTableResponse() = default;
};
class DeleteModelFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteModelFeatureResponseBody() {}

  explicit DeleteModelFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteModelFeatureResponseBody() = default;
};
class DeleteModelFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteModelFeatureResponseBody> body{};

  DeleteModelFeatureResponse() {}

  explicit DeleteModelFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteModelFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteModelFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteModelFeatureResponse() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class ExportModelFeatureTrainingSetTableRequestLabelInputConfig : public Darabonba::Model {
public:
  shared_ptr<string> eventTime{};
  shared_ptr<map<string, map<string, boost::any>>> partitions{};

  ExportModelFeatureTrainingSetTableRequestLabelInputConfig() {}

  explicit ExportModelFeatureTrainingSetTableRequestLabelInputConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (partitions) {
      res["Partitions"] = boost::any(*partitions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("Partitions") != m.end() && !m["Partitions"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Partitions"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      partitions = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
  }


  virtual ~ExportModelFeatureTrainingSetTableRequestLabelInputConfig() = default;
};
class ExportModelFeatureTrainingSetTableRequestTrainingSetConfig : public Darabonba::Model {
public:
  shared_ptr<map<string, map<string, boost::any>>> partitions{};

  ExportModelFeatureTrainingSetTableRequestTrainingSetConfig() {}

  explicit ExportModelFeatureTrainingSetTableRequestTrainingSetConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partitions) {
      res["Partitions"] = boost::any(*partitions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Partitions") != m.end() && !m["Partitions"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Partitions"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      partitions = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
  }


  virtual ~ExportModelFeatureTrainingSetTableRequestTrainingSetConfig() = default;
};
class ExportModelFeatureTrainingSetTableRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, FeatureViewConfigValue>> featureViewConfig{};
  shared_ptr<ExportModelFeatureTrainingSetTableRequestLabelInputConfig> labelInputConfig{};
  shared_ptr<long> realTimeIterateInterval{};
  shared_ptr<long> realTimePartitionCountValue{};
  shared_ptr<ExportModelFeatureTrainingSetTableRequestTrainingSetConfig> trainingSetConfig{};

  ExportModelFeatureTrainingSetTableRequest() {}

  explicit ExportModelFeatureTrainingSetTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureViewConfig) {
      map<string, boost::any> temp1;
      for(auto item1:*featureViewConfig){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["FeatureViewConfig"] = boost::any(temp1);
    }
    if (labelInputConfig) {
      res["LabelInputConfig"] = labelInputConfig ? boost::any(labelInputConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (realTimeIterateInterval) {
      res["RealTimeIterateInterval"] = boost::any(*realTimeIterateInterval);
    }
    if (realTimePartitionCountValue) {
      res["RealTimePartitionCountValue"] = boost::any(*realTimePartitionCountValue);
    }
    if (trainingSetConfig) {
      res["TrainingSetConfig"] = trainingSetConfig ? boost::any(trainingSetConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureViewConfig") != m.end() && !m["FeatureViewConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FeatureViewConfig"].type()) {
        map<string, FeatureViewConfigValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["FeatureViewConfig"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            FeatureViewConfigValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        featureViewConfig = make_shared<map<string, FeatureViewConfigValue>>(expect1);
      }
    }
    if (m.find("LabelInputConfig") != m.end() && !m["LabelInputConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["LabelInputConfig"].type()) {
        ExportModelFeatureTrainingSetTableRequestLabelInputConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LabelInputConfig"]));
        labelInputConfig = make_shared<ExportModelFeatureTrainingSetTableRequestLabelInputConfig>(model1);
      }
    }
    if (m.find("RealTimeIterateInterval") != m.end() && !m["RealTimeIterateInterval"].empty()) {
      realTimeIterateInterval = make_shared<long>(boost::any_cast<long>(m["RealTimeIterateInterval"]));
    }
    if (m.find("RealTimePartitionCountValue") != m.end() && !m["RealTimePartitionCountValue"].empty()) {
      realTimePartitionCountValue = make_shared<long>(boost::any_cast<long>(m["RealTimePartitionCountValue"]));
    }
    if (m.find("TrainingSetConfig") != m.end() && !m["TrainingSetConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrainingSetConfig"].type()) {
        ExportModelFeatureTrainingSetTableRequestTrainingSetConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrainingSetConfig"]));
        trainingSetConfig = make_shared<ExportModelFeatureTrainingSetTableRequestTrainingSetConfig>(model1);
      }
    }
  }


  virtual ~ExportModelFeatureTrainingSetTableRequest() = default;
};
class ExportModelFeatureTrainingSetTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  ExportModelFeatureTrainingSetTableResponseBody() {}

  explicit ExportModelFeatureTrainingSetTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExportModelFeatureTrainingSetTableResponseBody() = default;
};
class ExportModelFeatureTrainingSetTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportModelFeatureTrainingSetTableResponseBody> body{};

  ExportModelFeatureTrainingSetTableResponse() {}

  explicit ExportModelFeatureTrainingSetTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportModelFeatureTrainingSetTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportModelFeatureTrainingSetTableResponseBody>(model1);
      }
    }
  }


  virtual ~ExportModelFeatureTrainingSetTableResponse() = default;
};
class GetDatasourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> datasourceId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};
  shared_ptr<string> workspaceId{};

  GetDatasourceResponseBody() {}

  explicit GetDatasourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetDatasourceResponseBody() = default;
};
class GetDatasourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasourceResponseBody> body{};

  GetDatasourceResponse() {}

  explicit GetDatasourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDatasourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasourceResponse() = default;
};
class GetDatasourceTableResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetDatasourceTableResponseBodyFields() {}

  explicit GetDatasourceTableResponseBodyFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
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
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDatasourceTableResponseBodyFields() = default;
};
class GetDatasourceTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetDatasourceTableResponseBodyFields>> fields{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tableName{};

  GetDatasourceTableResponseBody() {}

  explicit GetDatasourceTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<GetDatasourceTableResponseBodyFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDatasourceTableResponseBodyFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<GetDatasourceTableResponseBodyFields>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~GetDatasourceTableResponseBody() = default;
};
class GetDatasourceTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasourceTableResponseBody> body{};

  GetDatasourceTableResponse() {}

  explicit GetDatasourceTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDatasourceTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasourceTableResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasourceTableResponse() = default;
};
class GetFeatureEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> joinId{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};

  GetFeatureEntityResponseBody() {}

  explicit GetFeatureEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (joinId) {
      res["JoinId"] = boost::any(*joinId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("JoinId") != m.end() && !m["JoinId"].empty()) {
      joinId = make_shared<string>(boost::any_cast<string>(m["JoinId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFeatureEntityResponseBody() = default;
};
class GetFeatureEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureEntityResponseBody> body{};

  GetFeatureEntityResponse() {}

  explicit GetFeatureEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureEntityResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureEntityResponse() = default;
};
class GetFeatureViewResponseBodyFieldsTransformInput : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetFeatureViewResponseBodyFieldsTransformInput() {}

  explicit GetFeatureViewResponseBodyFieldsTransformInput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetFeatureViewResponseBodyFieldsTransformInput() = default;
};
class GetFeatureViewResponseBodyFieldsTransform : public Darabonba::Model {
public:
  shared_ptr<vector<GetFeatureViewResponseBodyFieldsTransformInput>> input{};
  shared_ptr<long> LLMConfigId{};
  shared_ptr<string> type{};

  GetFeatureViewResponseBodyFieldsTransform() {}

  explicit GetFeatureViewResponseBodyFieldsTransform(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      vector<boost::any> temp1;
      for(auto item1:*input){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Input"] = boost::any(temp1);
    }
    if (LLMConfigId) {
      res["LLMConfigId"] = boost::any(*LLMConfigId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      if (typeid(vector<boost::any>) == m["Input"].type()) {
        vector<GetFeatureViewResponseBodyFieldsTransformInput> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Input"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFeatureViewResponseBodyFieldsTransformInput model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        input = make_shared<vector<GetFeatureViewResponseBodyFieldsTransformInput>>(expect1);
      }
    }
    if (m.find("LLMConfigId") != m.end() && !m["LLMConfigId"].empty()) {
      LLMConfigId = make_shared<long>(boost::any_cast<long>(m["LLMConfigId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetFeatureViewResponseBodyFieldsTransform() = default;
};
class GetFeatureViewResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<GetFeatureViewResponseBodyFieldsTransform> transform{};
  shared_ptr<string> type{};

  GetFeatureViewResponseBodyFields() {}

  explicit GetFeatureViewResponseBodyFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (transform) {
      res["Transform"] = transform ? boost::any(transform->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Transform") != m.end() && !m["Transform"].empty()) {
      if (typeid(map<string, boost::any>) == m["Transform"].type()) {
        GetFeatureViewResponseBodyFieldsTransform model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Transform"]));
        transform = make_shared<GetFeatureViewResponseBodyFieldsTransform>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetFeatureViewResponseBodyFields() = default;
};
class GetFeatureViewResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> featureEntityId{};
  shared_ptr<string> featureEntityName{};
  shared_ptr<vector<GetFeatureViewResponseBodyFields>> fields{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> gmtSyncTime{};
  shared_ptr<string> joinId{};
  shared_ptr<string> lastSyncConfig{};
  shared_ptr<string> mockTableName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> publishTableScript{};
  shared_ptr<string> registerDatasourceId{};
  shared_ptr<string> registerDatasourceName{};
  shared_ptr<string> registerTable{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> syncOnlineTable{};
  shared_ptr<long> TTL{};
  shared_ptr<vector<string>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> writeMethod{};
  shared_ptr<bool> writeToFeatureDB{};

  GetFeatureViewResponseBody() {}

  explicit GetFeatureViewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (featureEntityId) {
      res["FeatureEntityId"] = boost::any(*featureEntityId);
    }
    if (featureEntityName) {
      res["FeatureEntityName"] = boost::any(*featureEntityName);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (gmtSyncTime) {
      res["GmtSyncTime"] = boost::any(*gmtSyncTime);
    }
    if (joinId) {
      res["JoinId"] = boost::any(*joinId);
    }
    if (lastSyncConfig) {
      res["LastSyncConfig"] = boost::any(*lastSyncConfig);
    }
    if (mockTableName) {
      res["MockTableName"] = boost::any(*mockTableName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (publishTableScript) {
      res["PublishTableScript"] = boost::any(*publishTableScript);
    }
    if (registerDatasourceId) {
      res["RegisterDatasourceId"] = boost::any(*registerDatasourceId);
    }
    if (registerDatasourceName) {
      res["RegisterDatasourceName"] = boost::any(*registerDatasourceName);
    }
    if (registerTable) {
      res["RegisterTable"] = boost::any(*registerTable);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (syncOnlineTable) {
      res["SyncOnlineTable"] = boost::any(*syncOnlineTable);
    }
    if (TTL) {
      res["TTL"] = boost::any(*TTL);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (writeMethod) {
      res["WriteMethod"] = boost::any(*writeMethod);
    }
    if (writeToFeatureDB) {
      res["WriteToFeatureDB"] = boost::any(*writeToFeatureDB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("FeatureEntityId") != m.end() && !m["FeatureEntityId"].empty()) {
      featureEntityId = make_shared<string>(boost::any_cast<string>(m["FeatureEntityId"]));
    }
    if (m.find("FeatureEntityName") != m.end() && !m["FeatureEntityName"].empty()) {
      featureEntityName = make_shared<string>(boost::any_cast<string>(m["FeatureEntityName"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<GetFeatureViewResponseBodyFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFeatureViewResponseBodyFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<GetFeatureViewResponseBodyFields>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("GmtSyncTime") != m.end() && !m["GmtSyncTime"].empty()) {
      gmtSyncTime = make_shared<string>(boost::any_cast<string>(m["GmtSyncTime"]));
    }
    if (m.find("JoinId") != m.end() && !m["JoinId"].empty()) {
      joinId = make_shared<string>(boost::any_cast<string>(m["JoinId"]));
    }
    if (m.find("LastSyncConfig") != m.end() && !m["LastSyncConfig"].empty()) {
      lastSyncConfig = make_shared<string>(boost::any_cast<string>(m["LastSyncConfig"]));
    }
    if (m.find("MockTableName") != m.end() && !m["MockTableName"].empty()) {
      mockTableName = make_shared<string>(boost::any_cast<string>(m["MockTableName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("PublishTableScript") != m.end() && !m["PublishTableScript"].empty()) {
      publishTableScript = make_shared<string>(boost::any_cast<string>(m["PublishTableScript"]));
    }
    if (m.find("RegisterDatasourceId") != m.end() && !m["RegisterDatasourceId"].empty()) {
      registerDatasourceId = make_shared<string>(boost::any_cast<string>(m["RegisterDatasourceId"]));
    }
    if (m.find("RegisterDatasourceName") != m.end() && !m["RegisterDatasourceName"].empty()) {
      registerDatasourceName = make_shared<string>(boost::any_cast<string>(m["RegisterDatasourceName"]));
    }
    if (m.find("RegisterTable") != m.end() && !m["RegisterTable"].empty()) {
      registerTable = make_shared<string>(boost::any_cast<string>(m["RegisterTable"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SyncOnlineTable") != m.end() && !m["SyncOnlineTable"].empty()) {
      syncOnlineTable = make_shared<bool>(boost::any_cast<bool>(m["SyncOnlineTable"]));
    }
    if (m.find("TTL") != m.end() && !m["TTL"].empty()) {
      TTL = make_shared<long>(boost::any_cast<long>(m["TTL"]));
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
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WriteMethod") != m.end() && !m["WriteMethod"].empty()) {
      writeMethod = make_shared<string>(boost::any_cast<string>(m["WriteMethod"]));
    }
    if (m.find("WriteToFeatureDB") != m.end() && !m["WriteToFeatureDB"].empty()) {
      writeToFeatureDB = make_shared<bool>(boost::any_cast<bool>(m["WriteToFeatureDB"]));
    }
  }


  virtual ~GetFeatureViewResponseBody() = default;
};
class GetFeatureViewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFeatureViewResponseBody> body{};

  GetFeatureViewResponse() {}

  explicit GetFeatureViewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFeatureViewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFeatureViewResponseBody>(model1);
      }
    }
  }


  virtual ~GetFeatureViewResponse() = default;
};
class GetInstanceResponseBodyFeatureDBInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  GetInstanceResponseBodyFeatureDBInstanceInfo() {}

  explicit GetInstanceResponseBodyFeatureDBInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetInstanceResponseBodyFeatureDBInstanceInfo() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInstanceResponseBodyFeatureDBInstanceInfo> featureDBInstanceInfo{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> message{};
  shared_ptr<double> progress{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureDBInstanceInfo) {
      res["FeatureDBInstanceInfo"] = featureDBInstanceInfo ? boost::any(featureDBInstanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureDBInstanceInfo") != m.end() && !m["FeatureDBInstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FeatureDBInstanceInfo"].type()) {
        GetInstanceResponseBodyFeatureDBInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FeatureDBInstanceInfo"]));
        featureDBInstanceInfo = make_shared<GetInstanceResponseBodyFeatureDBInstanceInfo>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<double>(boost::any_cast<double>(m["Progress"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetInstanceResponseBody() = default;
};
class GetInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstanceResponseBody> body{};

  GetInstanceResponse() {}

  explicit GetInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstanceResponse() = default;
};
class GetLabelTableResponseBodyFields : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetLabelTableResponseBodyFields() {}

  explicit GetLabelTableResponseBodyFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
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
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetLabelTableResponseBodyFields() = default;
};
class GetLabelTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> datasourceId{};
  shared_ptr<string> datasourceName{};
  shared_ptr<vector<GetLabelTableResponseBodyFields>> fields{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<string>> relatedModelFeatures{};
  shared_ptr<string> requestId{};

  GetLabelTableResponseBody() {}

  explicit GetLabelTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (datasourceName) {
      res["DatasourceName"] = boost::any(*datasourceName);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (relatedModelFeatures) {
      res["RelatedModelFeatures"] = boost::any(*relatedModelFeatures);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("DatasourceName") != m.end() && !m["DatasourceName"].empty()) {
      datasourceName = make_shared<string>(boost::any_cast<string>(m["DatasourceName"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<GetLabelTableResponseBodyFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetLabelTableResponseBodyFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<GetLabelTableResponseBodyFields>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RelatedModelFeatures") != m.end() && !m["RelatedModelFeatures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RelatedModelFeatures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RelatedModelFeatures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      relatedModelFeatures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetLabelTableResponseBody() = default;
};
class GetLabelTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetLabelTableResponseBody> body{};

  GetLabelTableResponse() {}

  explicit GetLabelTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetLabelTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetLabelTableResponseBody>(model1);
      }
    }
  }


  virtual ~GetLabelTableResponse() = default;
};
class GetModelFeatureResponseBodyFeatures : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> featureViewId{};
  shared_ptr<string> featureViewName{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetModelFeatureResponseBodyFeatures() {}

  explicit GetModelFeatureResponseBodyFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (featureViewId) {
      res["FeatureViewId"] = boost::any(*featureViewId);
    }
    if (featureViewName) {
      res["FeatureViewName"] = boost::any(*featureViewName);
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
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("FeatureViewId") != m.end() && !m["FeatureViewId"].empty()) {
      featureViewId = make_shared<string>(boost::any_cast<string>(m["FeatureViewId"]));
    }
    if (m.find("FeatureViewName") != m.end() && !m["FeatureViewName"].empty()) {
      featureViewName = make_shared<string>(boost::any_cast<string>(m["FeatureViewName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetModelFeatureResponseBodyFeatures() = default;
};
class GetModelFeatureResponseBodyRelationsDomains : public Darabonba::Model {
public:
  shared_ptr<string> domainType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  GetModelFeatureResponseBodyRelationsDomains() {}

  explicit GetModelFeatureResponseBodyRelationsDomains(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainType) {
      res["DomainType"] = boost::any(*domainType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainType") != m.end() && !m["DomainType"].empty()) {
      domainType = make_shared<string>(boost::any_cast<string>(m["DomainType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetModelFeatureResponseBodyRelationsDomains() = default;
};
class GetModelFeatureResponseBodyRelationsLinks : public Darabonba::Model {
public:
  shared_ptr<string> from{};
  shared_ptr<string> link{};
  shared_ptr<string> to{};

  GetModelFeatureResponseBodyRelationsLinks() {}

  explicit GetModelFeatureResponseBodyRelationsLinks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (link) {
      res["Link"] = boost::any(*link);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Link") != m.end() && !m["Link"].empty()) {
      link = make_shared<string>(boost::any_cast<string>(m["Link"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~GetModelFeatureResponseBodyRelationsLinks() = default;
};
class GetModelFeatureResponseBodyRelations : public Darabonba::Model {
public:
  shared_ptr<vector<GetModelFeatureResponseBodyRelationsDomains>> domains{};
  shared_ptr<vector<GetModelFeatureResponseBodyRelationsLinks>> links{};

  GetModelFeatureResponseBodyRelations() {}

  explicit GetModelFeatureResponseBodyRelations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domains) {
      vector<boost::any> temp1;
      for(auto item1:*domains){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Domains"] = boost::any(temp1);
    }
    if (links) {
      vector<boost::any> temp1;
      for(auto item1:*links){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Links"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Domains") != m.end() && !m["Domains"].empty()) {
      if (typeid(vector<boost::any>) == m["Domains"].type()) {
        vector<GetModelFeatureResponseBodyRelationsDomains> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Domains"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureResponseBodyRelationsDomains model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domains = make_shared<vector<GetModelFeatureResponseBodyRelationsDomains>>(expect1);
      }
    }
    if (m.find("Links") != m.end() && !m["Links"].empty()) {
      if (typeid(vector<boost::any>) == m["Links"].type()) {
        vector<GetModelFeatureResponseBodyRelationsLinks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Links"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureResponseBodyRelationsLinks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        links = make_shared<vector<GetModelFeatureResponseBodyRelationsLinks>>(expect1);
      }
    }
  }


  virtual ~GetModelFeatureResponseBodyRelations() = default;
};
class GetModelFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTrainingSetTableScript{};
  shared_ptr<vector<GetModelFeatureResponseBodyFeatures>> features{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> labelPriorityLevel{};
  shared_ptr<string> labelTableId{};
  shared_ptr<string> labelTableName{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<GetModelFeatureResponseBodyRelations> relations{};
  shared_ptr<string> requestId{};
  shared_ptr<string> trainingSetFGTable{};
  shared_ptr<string> trainingSetTable{};

  GetModelFeatureResponseBody() {}

  explicit GetModelFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTrainingSetTableScript) {
      res["ExportTrainingSetTableScript"] = boost::any(*exportTrainingSetTableScript);
    }
    if (features) {
      vector<boost::any> temp1;
      for(auto item1:*features){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Features"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labelPriorityLevel) {
      res["LabelPriorityLevel"] = boost::any(*labelPriorityLevel);
    }
    if (labelTableId) {
      res["LabelTableId"] = boost::any(*labelTableId);
    }
    if (labelTableName) {
      res["LabelTableName"] = boost::any(*labelTableName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (relations) {
      res["Relations"] = relations ? boost::any(relations->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trainingSetFGTable) {
      res["TrainingSetFGTable"] = boost::any(*trainingSetFGTable);
    }
    if (trainingSetTable) {
      res["TrainingSetTable"] = boost::any(*trainingSetTable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportTrainingSetTableScript") != m.end() && !m["ExportTrainingSetTableScript"].empty()) {
      exportTrainingSetTableScript = make_shared<string>(boost::any_cast<string>(m["ExportTrainingSetTableScript"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<GetModelFeatureResponseBodyFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Features"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureResponseBodyFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        features = make_shared<vector<GetModelFeatureResponseBodyFeatures>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LabelPriorityLevel") != m.end() && !m["LabelPriorityLevel"].empty()) {
      labelPriorityLevel = make_shared<long>(boost::any_cast<long>(m["LabelPriorityLevel"]));
    }
    if (m.find("LabelTableId") != m.end() && !m["LabelTableId"].empty()) {
      labelTableId = make_shared<string>(boost::any_cast<string>(m["LabelTableId"]));
    }
    if (m.find("LabelTableName") != m.end() && !m["LabelTableName"].empty()) {
      labelTableName = make_shared<string>(boost::any_cast<string>(m["LabelTableName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Relations") != m.end() && !m["Relations"].empty()) {
      if (typeid(map<string, boost::any>) == m["Relations"].type()) {
        GetModelFeatureResponseBodyRelations model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Relations"]));
        relations = make_shared<GetModelFeatureResponseBodyRelations>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrainingSetFGTable") != m.end() && !m["TrainingSetFGTable"].empty()) {
      trainingSetFGTable = make_shared<string>(boost::any_cast<string>(m["TrainingSetFGTable"]));
    }
    if (m.find("TrainingSetTable") != m.end() && !m["TrainingSetTable"].empty()) {
      trainingSetTable = make_shared<string>(boost::any_cast<string>(m["TrainingSetTable"]));
    }
  }


  virtual ~GetModelFeatureResponseBody() = default;
};
class GetModelFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelFeatureResponseBody> body{};

  GetModelFeatureResponse() {}

  explicit GetModelFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelFeatureResponse() = default;
};
class GetModelFeatureFGFeatureResponseBodyLookupFeatures : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> featureName{};
  shared_ptr<string> keyFeatureDomain{};
  shared_ptr<string> keyFeatureName{};
  shared_ptr<string> mapFeatureDomain{};
  shared_ptr<string> mapFeatureName{};
  shared_ptr<string> valueType{};

  GetModelFeatureFGFeatureResponseBodyLookupFeatures() {}

  explicit GetModelFeatureFGFeatureResponseBodyLookupFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (keyFeatureDomain) {
      res["KeyFeatureDomain"] = boost::any(*keyFeatureDomain);
    }
    if (keyFeatureName) {
      res["KeyFeatureName"] = boost::any(*keyFeatureName);
    }
    if (mapFeatureDomain) {
      res["MapFeatureDomain"] = boost::any(*mapFeatureDomain);
    }
    if (mapFeatureName) {
      res["MapFeatureName"] = boost::any(*mapFeatureName);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("KeyFeatureDomain") != m.end() && !m["KeyFeatureDomain"].empty()) {
      keyFeatureDomain = make_shared<string>(boost::any_cast<string>(m["KeyFeatureDomain"]));
    }
    if (m.find("KeyFeatureName") != m.end() && !m["KeyFeatureName"].empty()) {
      keyFeatureName = make_shared<string>(boost::any_cast<string>(m["KeyFeatureName"]));
    }
    if (m.find("MapFeatureDomain") != m.end() && !m["MapFeatureDomain"].empty()) {
      mapFeatureDomain = make_shared<string>(boost::any_cast<string>(m["MapFeatureDomain"]));
    }
    if (m.find("MapFeatureName") != m.end() && !m["MapFeatureName"].empty()) {
      mapFeatureName = make_shared<string>(boost::any_cast<string>(m["MapFeatureName"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~GetModelFeatureFGFeatureResponseBodyLookupFeatures() = default;
};
class GetModelFeatureFGFeatureResponseBodyRawFeatures : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> featureDomain{};
  shared_ptr<string> featureName{};
  shared_ptr<string> featureType{};
  shared_ptr<string> inputFeatureName{};
  shared_ptr<string> valueType{};

  GetModelFeatureFGFeatureResponseBodyRawFeatures() {}

  explicit GetModelFeatureFGFeatureResponseBodyRawFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (featureDomain) {
      res["FeatureDomain"] = boost::any(*featureDomain);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (inputFeatureName) {
      res["InputFeatureName"] = boost::any(*inputFeatureName);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("FeatureDomain") != m.end() && !m["FeatureDomain"].empty()) {
      featureDomain = make_shared<string>(boost::any_cast<string>(m["FeatureDomain"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<string>(boost::any_cast<string>(m["FeatureType"]));
    }
    if (m.find("InputFeatureName") != m.end() && !m["InputFeatureName"].empty()) {
      inputFeatureName = make_shared<string>(boost::any_cast<string>(m["InputFeatureName"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~GetModelFeatureFGFeatureResponseBodyRawFeatures() = default;
};
class GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> featureDomain{};
  shared_ptr<string> featureName{};
  shared_ptr<string> featureType{};
  shared_ptr<string> inputFeatureName{};
  shared_ptr<string> valueType{};

  GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures() {}

  explicit GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (featureDomain) {
      res["FeatureDomain"] = boost::any(*featureDomain);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (inputFeatureName) {
      res["InputFeatureName"] = boost::any(*inputFeatureName);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("FeatureDomain") != m.end() && !m["FeatureDomain"].empty()) {
      featureDomain = make_shared<string>(boost::any_cast<string>(m["FeatureDomain"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<string>(boost::any_cast<string>(m["FeatureType"]));
    }
    if (m.find("InputFeatureName") != m.end() && !m["InputFeatureName"].empty()) {
      inputFeatureName = make_shared<string>(boost::any_cast<string>(m["InputFeatureName"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures() = default;
};
class GetModelFeatureFGFeatureResponseBodySequenceFeatures : public Darabonba::Model {
public:
  shared_ptr<string> attributeDelim{};
  shared_ptr<string> featureName{};
  shared_ptr<string> sequenceDelim{};
  shared_ptr<long> sequenceLength{};
  shared_ptr<vector<GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures>> subFeatures{};

  GetModelFeatureFGFeatureResponseBodySequenceFeatures() {}

  explicit GetModelFeatureFGFeatureResponseBodySequenceFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeDelim) {
      res["AttributeDelim"] = boost::any(*attributeDelim);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (sequenceDelim) {
      res["SequenceDelim"] = boost::any(*sequenceDelim);
    }
    if (sequenceLength) {
      res["SequenceLength"] = boost::any(*sequenceLength);
    }
    if (subFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*subFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubFeatures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeDelim") != m.end() && !m["AttributeDelim"].empty()) {
      attributeDelim = make_shared<string>(boost::any_cast<string>(m["AttributeDelim"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("SequenceDelim") != m.end() && !m["SequenceDelim"].empty()) {
      sequenceDelim = make_shared<string>(boost::any_cast<string>(m["SequenceDelim"]));
    }
    if (m.find("SequenceLength") != m.end() && !m["SequenceLength"].empty()) {
      sequenceLength = make_shared<long>(boost::any_cast<long>(m["SequenceLength"]));
    }
    if (m.find("SubFeatures") != m.end() && !m["SubFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["SubFeatures"].type()) {
        vector<GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFeatures = make_shared<vector<GetModelFeatureFGFeatureResponseBodySequenceFeaturesSubFeatures>>(expect1);
      }
    }
  }


  virtual ~GetModelFeatureFGFeatureResponseBodySequenceFeatures() = default;
};
class GetModelFeatureFGFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures>> lookupFeatures{};
  shared_ptr<vector<GetModelFeatureFGFeatureResponseBodyRawFeatures>> rawFeatures{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> reserves{};
  shared_ptr<vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures>> sequenceFeatures{};

  GetModelFeatureFGFeatureResponseBody() {}

  explicit GetModelFeatureFGFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lookupFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*lookupFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LookupFeatures"] = boost::any(temp1);
    }
    if (rawFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*rawFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RawFeatures"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (reserves) {
      res["Reserves"] = boost::any(*reserves);
    }
    if (sequenceFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*sequenceFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SequenceFeatures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LookupFeatures") != m.end() && !m["LookupFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["LookupFeatures"].type()) {
        vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LookupFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureFGFeatureResponseBodyLookupFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lookupFeatures = make_shared<vector<GetModelFeatureFGFeatureResponseBodyLookupFeatures>>(expect1);
      }
    }
    if (m.find("RawFeatures") != m.end() && !m["RawFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["RawFeatures"].type()) {
        vector<GetModelFeatureFGFeatureResponseBodyRawFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RawFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureFGFeatureResponseBodyRawFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rawFeatures = make_shared<vector<GetModelFeatureFGFeatureResponseBodyRawFeatures>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Reserves") != m.end() && !m["Reserves"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Reserves"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Reserves"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reserves = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SequenceFeatures") != m.end() && !m["SequenceFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["SequenceFeatures"].type()) {
        vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SequenceFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelFeatureFGFeatureResponseBodySequenceFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sequenceFeatures = make_shared<vector<GetModelFeatureFGFeatureResponseBodySequenceFeatures>>(expect1);
      }
    }
  }


  virtual ~GetModelFeatureFGFeatureResponseBody() = default;
};
class GetModelFeatureFGFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelFeatureFGFeatureResponseBody> body{};

  GetModelFeatureFGFeatureResponse() {}

  explicit GetModelFeatureFGFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelFeatureFGFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelFeatureFGFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelFeatureFGFeatureResponse() = default;
};
class GetModelFeatureFGInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};

  GetModelFeatureFGInfoResponseBody() {}

  explicit GetModelFeatureFGInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetModelFeatureFGInfoResponseBody() = default;
};
class GetModelFeatureFGInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelFeatureFGInfoResponseBody> body{};

  GetModelFeatureFGInfoResponse() {}

  explicit GetModelFeatureFGInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelFeatureFGInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelFeatureFGInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelFeatureFGInfoResponse() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> featureEntityCount{};
  shared_ptr<long> featureViewCount{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> modelCount{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineDatasourceId{};
  shared_ptr<string> offlineDatasourceName{};
  shared_ptr<string> offlineDatasourceType{};
  shared_ptr<long> offlineLifecycle{};
  shared_ptr<string> onlineDatasourceId{};
  shared_ptr<string> onlineDatasourceName{};
  shared_ptr<string> onlineDatasourceType{};
  shared_ptr<string> owner{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (featureEntityCount) {
      res["FeatureEntityCount"] = boost::any(*featureEntityCount);
    }
    if (featureViewCount) {
      res["FeatureViewCount"] = boost::any(*featureViewCount);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (modelCount) {
      res["ModelCount"] = boost::any(*modelCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (offlineDatasourceId) {
      res["OfflineDatasourceId"] = boost::any(*offlineDatasourceId);
    }
    if (offlineDatasourceName) {
      res["OfflineDatasourceName"] = boost::any(*offlineDatasourceName);
    }
    if (offlineDatasourceType) {
      res["OfflineDatasourceType"] = boost::any(*offlineDatasourceType);
    }
    if (offlineLifecycle) {
      res["OfflineLifecycle"] = boost::any(*offlineLifecycle);
    }
    if (onlineDatasourceId) {
      res["OnlineDatasourceId"] = boost::any(*onlineDatasourceId);
    }
    if (onlineDatasourceName) {
      res["OnlineDatasourceName"] = boost::any(*onlineDatasourceName);
    }
    if (onlineDatasourceType) {
      res["OnlineDatasourceType"] = boost::any(*onlineDatasourceType);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FeatureEntityCount") != m.end() && !m["FeatureEntityCount"].empty()) {
      featureEntityCount = make_shared<long>(boost::any_cast<long>(m["FeatureEntityCount"]));
    }
    if (m.find("FeatureViewCount") != m.end() && !m["FeatureViewCount"].empty()) {
      featureViewCount = make_shared<long>(boost::any_cast<long>(m["FeatureViewCount"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ModelCount") != m.end() && !m["ModelCount"].empty()) {
      modelCount = make_shared<long>(boost::any_cast<long>(m["ModelCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OfflineDatasourceId") != m.end() && !m["OfflineDatasourceId"].empty()) {
      offlineDatasourceId = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceId"]));
    }
    if (m.find("OfflineDatasourceName") != m.end() && !m["OfflineDatasourceName"].empty()) {
      offlineDatasourceName = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceName"]));
    }
    if (m.find("OfflineDatasourceType") != m.end() && !m["OfflineDatasourceType"].empty()) {
      offlineDatasourceType = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceType"]));
    }
    if (m.find("OfflineLifecycle") != m.end() && !m["OfflineLifecycle"].empty()) {
      offlineLifecycle = make_shared<long>(boost::any_cast<long>(m["OfflineLifecycle"]));
    }
    if (m.find("OnlineDatasourceId") != m.end() && !m["OnlineDatasourceId"].empty()) {
      onlineDatasourceId = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceId"]));
    }
    if (m.find("OnlineDatasourceName") != m.end() && !m["OnlineDatasourceName"].empty()) {
      onlineDatasourceName = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceName"]));
    }
    if (m.find("OnlineDatasourceType") != m.end() && !m["OnlineDatasourceType"].empty()) {
      onlineDatasourceType = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceType"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetProjectFeatureEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> featureEntityId{};
  shared_ptr<string> joinId{};
  shared_ptr<string> name{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> workspaceId{};

  GetProjectFeatureEntityResponseBody() {}

  explicit GetProjectFeatureEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntityId) {
      res["FeatureEntityId"] = boost::any(*featureEntityId);
    }
    if (joinId) {
      res["JoinId"] = boost::any(*joinId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureEntityId") != m.end() && !m["FeatureEntityId"].empty()) {
      featureEntityId = make_shared<string>(boost::any_cast<string>(m["FeatureEntityId"]));
    }
    if (m.find("JoinId") != m.end() && !m["JoinId"].empty()) {
      joinId = make_shared<string>(boost::any_cast<string>(m["JoinId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~GetProjectFeatureEntityResponseBody() = default;
};
class GetProjectFeatureEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectFeatureEntityResponseBody> body{};

  GetProjectFeatureEntityResponse() {}

  explicit GetProjectFeatureEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectFeatureEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectFeatureEntityResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectFeatureEntityResponse() = default;
};
class GetServiceIdentityRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> policy{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleName{};

  GetServiceIdentityRoleResponseBody() {}

  explicit GetServiceIdentityRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetServiceIdentityRoleResponseBody() = default;
};
class GetServiceIdentityRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceIdentityRoleResponseBody> body{};

  GetServiceIdentityRoleResponse() {}

  explicit GetServiceIdentityRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceIdentityRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceIdentityRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceIdentityRoleResponse() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtExecutedTime{};
  shared_ptr<string> gmtFinishedTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> runningConfig{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtExecutedTime) {
      res["GmtExecutedTime"] = boost::any(*gmtExecutedTime);
    }
    if (gmtFinishedTime) {
      res["GmtFinishedTime"] = boost::any(*gmtFinishedTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (runningConfig) {
      res["RunningConfig"] = boost::any(*runningConfig);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtExecutedTime") != m.end() && !m["GmtExecutedTime"].empty()) {
      gmtExecutedTime = make_shared<string>(boost::any_cast<string>(m["GmtExecutedTime"]));
    }
    if (m.find("GmtFinishedTime") != m.end() && !m["GmtFinishedTime"].empty()) {
      gmtFinishedTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishedTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RunningConfig") != m.end() && !m["RunningConfig"].empty()) {
      runningConfig = make_shared<string>(boost::any_cast<string>(m["RunningConfig"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class ListDatasourceTablesRequest : public Darabonba::Model {
public:
  shared_ptr<string> tableName{};

  ListDatasourceTablesRequest() {}

  explicit ListDatasourceTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
  }


  virtual ~ListDatasourceTablesRequest() = default;
};
class ListDatasourceTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<string>> tables{};
  shared_ptr<long> totalCount{};

  ListDatasourceTablesResponseBody() {}

  explicit ListDatasourceTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tables) {
      res["Tables"] = boost::any(*tables);
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
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tables"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tables = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasourceTablesResponseBody() = default;
};
class ListDatasourceTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasourceTablesResponseBody> body{};

  ListDatasourceTablesResponse() {}

  explicit ListDatasourceTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDatasourceTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasourceTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasourceTablesResponse() = default;
};
class ListDatasourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> type{};
  shared_ptr<string> workspaceId{};

  ListDatasourcesRequest() {}

  explicit ListDatasourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasourcesRequest() = default;
};
class ListDatasourcesResponseBodyDatasources : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> datasourceId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> uri{};
  shared_ptr<string> workspaceId{};

  ListDatasourcesResponseBodyDatasources() {}

  explicit ListDatasourcesResponseBodyDatasources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListDatasourcesResponseBodyDatasources() = default;
};
class ListDatasourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDatasourcesResponseBodyDatasources>> datasources{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDatasourcesResponseBody() {}

  explicit ListDatasourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasources) {
      vector<boost::any> temp1;
      for(auto item1:*datasources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasources"] = boost::any(temp1);
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
    if (m.find("Datasources") != m.end() && !m["Datasources"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasources"].type()) {
        vector<ListDatasourcesResponseBodyDatasources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDatasourcesResponseBodyDatasources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasources = make_shared<vector<ListDatasourcesResponseBodyDatasources>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDatasourcesResponseBody() = default;
};
class ListDatasourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasourcesResponseBody> body{};

  ListDatasourcesResponse() {}

  explicit ListDatasourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDatasourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasourcesResponse() = default;
};
class ListFeatureEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> featureEntityIds{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};

  ListFeatureEntitiesRequest() {}

  explicit ListFeatureEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntityIds) {
      res["FeatureEntityIds"] = boost::any(*featureEntityIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureEntityIds") != m.end() && !m["FeatureEntityIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FeatureEntityIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FeatureEntityIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      featureEntityIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListFeatureEntitiesRequest() = default;
};
class ListFeatureEntitiesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureEntityIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};

  ListFeatureEntitiesShrinkRequest() {}

  explicit ListFeatureEntitiesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntityIdsShrink) {
      res["FeatureEntityIds"] = boost::any(*featureEntityIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureEntityIds") != m.end() && !m["FeatureEntityIds"].empty()) {
      featureEntityIdsShrink = make_shared<string>(boost::any_cast<string>(m["FeatureEntityIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListFeatureEntitiesShrinkRequest() = default;
};
class ListFeatureEntitiesResponseBodyFeatureEntities : public Darabonba::Model {
public:
  shared_ptr<string> featureEntityId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> joinId{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  ListFeatureEntitiesResponseBodyFeatureEntities() {}

  explicit ListFeatureEntitiesResponseBodyFeatureEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntityId) {
      res["FeatureEntityId"] = boost::any(*featureEntityId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (joinId) {
      res["JoinId"] = boost::any(*joinId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureEntityId") != m.end() && !m["FeatureEntityId"].empty()) {
      featureEntityId = make_shared<string>(boost::any_cast<string>(m["FeatureEntityId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("JoinId") != m.end() && !m["JoinId"].empty()) {
      joinId = make_shared<string>(boost::any_cast<string>(m["JoinId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListFeatureEntitiesResponseBodyFeatureEntities() = default;
};
class ListFeatureEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeatureEntitiesResponseBodyFeatureEntities>> featureEntities{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFeatureEntitiesResponseBody() {}

  explicit ListFeatureEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntities) {
      vector<boost::any> temp1;
      for(auto item1:*featureEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureEntities"] = boost::any(temp1);
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
    if (m.find("FeatureEntities") != m.end() && !m["FeatureEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureEntities"].type()) {
        vector<ListFeatureEntitiesResponseBodyFeatureEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureEntitiesResponseBodyFeatureEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureEntities = make_shared<vector<ListFeatureEntitiesResponseBodyFeatureEntities>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFeatureEntitiesResponseBody() = default;
};
class ListFeatureEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureEntitiesResponseBody> body{};

  ListFeatureEntitiesResponse() {}

  explicit ListFeatureEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureEntitiesResponse() = default;
};
class ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels : public Darabonba::Model {
public:
  shared_ptr<string> featureAliasName{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};

  ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels() {}

  explicit ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureAliasName) {
      res["FeatureAliasName"] = boost::any(*featureAliasName);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureAliasName") != m.end() && !m["FeatureAliasName"].empty()) {
      featureAliasName = make_shared<string>(boost::any_cast<string>(m["FeatureAliasName"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
  }


  virtual ~ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels() = default;
};
class ListFeatureViewFieldRelationshipsResponseBodyRelationships : public Darabonba::Model {
public:
  shared_ptr<string> featureName{};
  shared_ptr<vector<ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels>> models{};
  shared_ptr<string> offlineTableName{};
  shared_ptr<string> onlineTableName{};

  ListFeatureViewFieldRelationshipsResponseBodyRelationships() {}

  explicit ListFeatureViewFieldRelationshipsResponseBodyRelationships(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (offlineTableName) {
      res["OfflineTableName"] = boost::any(*offlineTableName);
    }
    if (onlineTableName) {
      res["OnlineTableName"] = boost::any(*onlineTableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<ListFeatureViewFieldRelationshipsResponseBodyRelationshipsModels>>(expect1);
      }
    }
    if (m.find("OfflineTableName") != m.end() && !m["OfflineTableName"].empty()) {
      offlineTableName = make_shared<string>(boost::any_cast<string>(m["OfflineTableName"]));
    }
    if (m.find("OnlineTableName") != m.end() && !m["OnlineTableName"].empty()) {
      onlineTableName = make_shared<string>(boost::any_cast<string>(m["OnlineTableName"]));
    }
  }


  virtual ~ListFeatureViewFieldRelationshipsResponseBodyRelationships() = default;
};
class ListFeatureViewFieldRelationshipsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeatureViewFieldRelationshipsResponseBodyRelationships>> relationships{};
  shared_ptr<string> requestId{};

  ListFeatureViewFieldRelationshipsResponseBody() {}

  explicit ListFeatureViewFieldRelationshipsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationships) {
      vector<boost::any> temp1;
      for(auto item1:*relationships){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Relationships"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Relationships") != m.end() && !m["Relationships"].empty()) {
      if (typeid(vector<boost::any>) == m["Relationships"].type()) {
        vector<ListFeatureViewFieldRelationshipsResponseBodyRelationships> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Relationships"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureViewFieldRelationshipsResponseBodyRelationships model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationships = make_shared<vector<ListFeatureViewFieldRelationshipsResponseBodyRelationships>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFeatureViewFieldRelationshipsResponseBody() = default;
};
class ListFeatureViewFieldRelationshipsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureViewFieldRelationshipsResponseBody> body{};

  ListFeatureViewFieldRelationshipsResponse() {}

  explicit ListFeatureViewFieldRelationshipsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureViewFieldRelationshipsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureViewFieldRelationshipsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureViewFieldRelationshipsResponse() = default;
};
class ListFeatureViewOnlineFeaturesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> joinIds{};

  ListFeatureViewOnlineFeaturesRequest() {}

  explicit ListFeatureViewOnlineFeaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinIds) {
      res["JoinIds"] = boost::any(*joinIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinIds") != m.end() && !m["JoinIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["JoinIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["JoinIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      joinIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFeatureViewOnlineFeaturesRequest() = default;
};
class ListFeatureViewOnlineFeaturesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> joinIdsShrink{};

  ListFeatureViewOnlineFeaturesShrinkRequest() {}

  explicit ListFeatureViewOnlineFeaturesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (joinIdsShrink) {
      res["JoinIds"] = boost::any(*joinIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JoinIds") != m.end() && !m["JoinIds"].empty()) {
      joinIdsShrink = make_shared<string>(boost::any_cast<string>(m["JoinIds"]));
    }
  }


  virtual ~ListFeatureViewOnlineFeaturesShrinkRequest() = default;
};
class ListFeatureViewOnlineFeaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> onlineFeatures{};
  shared_ptr<string> requestId{};

  ListFeatureViewOnlineFeaturesResponseBody() {}

  explicit ListFeatureViewOnlineFeaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineFeatures) {
      res["OnlineFeatures"] = boost::any(*onlineFeatures);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineFeatures") != m.end() && !m["OnlineFeatures"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OnlineFeatures"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OnlineFeatures"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      onlineFeatures = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFeatureViewOnlineFeaturesResponseBody() = default;
};
class ListFeatureViewOnlineFeaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureViewOnlineFeaturesResponseBody> body{};

  ListFeatureViewOnlineFeaturesResponse() {}

  explicit ListFeatureViewOnlineFeaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureViewOnlineFeaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureViewOnlineFeaturesResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureViewOnlineFeaturesResponse() = default;
};
class ListFeatureViewRelationshipsResponseBodyRelationshipsModels : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};

  ListFeatureViewRelationshipsResponseBodyRelationshipsModels() {}

  explicit ListFeatureViewRelationshipsResponseBodyRelationshipsModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
  }


  virtual ~ListFeatureViewRelationshipsResponseBodyRelationshipsModels() = default;
};
class ListFeatureViewRelationshipsResponseBodyRelationships : public Darabonba::Model {
public:
  shared_ptr<string> featureViewName{};
  shared_ptr<vector<ListFeatureViewRelationshipsResponseBodyRelationshipsModels>> models{};
  shared_ptr<string> projectName{};

  ListFeatureViewRelationshipsResponseBodyRelationships() {}

  explicit ListFeatureViewRelationshipsResponseBodyRelationships(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureViewName) {
      res["FeatureViewName"] = boost::any(*featureViewName);
    }
    if (models) {
      vector<boost::any> temp1;
      for(auto item1:*models){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Models"] = boost::any(temp1);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureViewName") != m.end() && !m["FeatureViewName"].empty()) {
      featureViewName = make_shared<string>(boost::any_cast<string>(m["FeatureViewName"]));
    }
    if (m.find("Models") != m.end() && !m["Models"].empty()) {
      if (typeid(vector<boost::any>) == m["Models"].type()) {
        vector<ListFeatureViewRelationshipsResponseBodyRelationshipsModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Models"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureViewRelationshipsResponseBodyRelationshipsModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        models = make_shared<vector<ListFeatureViewRelationshipsResponseBodyRelationshipsModels>>(expect1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListFeatureViewRelationshipsResponseBodyRelationships() = default;
};
class ListFeatureViewRelationshipsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeatureViewRelationshipsResponseBodyRelationships>> relationships{};
  shared_ptr<string> requestId{};

  ListFeatureViewRelationshipsResponseBody() {}

  explicit ListFeatureViewRelationshipsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (relationships) {
      vector<boost::any> temp1;
      for(auto item1:*relationships){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Relationships"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Relationships") != m.end() && !m["Relationships"].empty()) {
      if (typeid(vector<boost::any>) == m["Relationships"].type()) {
        vector<ListFeatureViewRelationshipsResponseBodyRelationships> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Relationships"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureViewRelationshipsResponseBodyRelationships model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relationships = make_shared<vector<ListFeatureViewRelationshipsResponseBodyRelationships>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFeatureViewRelationshipsResponseBody() = default;
};
class ListFeatureViewRelationshipsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureViewRelationshipsResponseBody> body{};

  ListFeatureViewRelationshipsResponse() {}

  explicit ListFeatureViewRelationshipsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureViewRelationshipsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureViewRelationshipsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureViewRelationshipsResponse() = default;
};
class ListFeatureViewsRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureName{};
  shared_ptr<vector<string>> featureViewIds{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};

  ListFeatureViewsRequest() {}

  explicit ListFeatureViewsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureViewIds) {
      res["FeatureViewIds"] = boost::any(*featureViewIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureViewIds") != m.end() && !m["FeatureViewIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FeatureViewIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FeatureViewIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      featureViewIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFeatureViewsRequest() = default;
};
class ListFeatureViewsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureName{};
  shared_ptr<string> featureViewIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};

  ListFeatureViewsShrinkRequest() {}

  explicit ListFeatureViewsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureViewIdsShrink) {
      res["FeatureViewIds"] = boost::any(*featureViewIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureViewIds") != m.end() && !m["FeatureViewIds"].empty()) {
      featureViewIdsShrink = make_shared<string>(boost::any_cast<string>(m["FeatureViewIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFeatureViewsShrinkRequest() = default;
};
class ListFeatureViewsResponseBodyFeatureViews : public Darabonba::Model {
public:
  shared_ptr<string> featureEntityName{};
  shared_ptr<string> featureViewId{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> registerDatasourceId{};
  shared_ptr<string> registerDatasourceName{};
  shared_ptr<string> registerTable{};
  shared_ptr<long> TTL{};
  shared_ptr<string> type{};
  shared_ptr<bool> writeToFeatureDB{};

  ListFeatureViewsResponseBodyFeatureViews() {}

  explicit ListFeatureViewsResponseBodyFeatureViews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureEntityName) {
      res["FeatureEntityName"] = boost::any(*featureEntityName);
    }
    if (featureViewId) {
      res["FeatureViewId"] = boost::any(*featureViewId);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (registerDatasourceId) {
      res["RegisterDatasourceId"] = boost::any(*registerDatasourceId);
    }
    if (registerDatasourceName) {
      res["RegisterDatasourceName"] = boost::any(*registerDatasourceName);
    }
    if (registerTable) {
      res["RegisterTable"] = boost::any(*registerTable);
    }
    if (TTL) {
      res["TTL"] = boost::any(*TTL);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (writeToFeatureDB) {
      res["WriteToFeatureDB"] = boost::any(*writeToFeatureDB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureEntityName") != m.end() && !m["FeatureEntityName"].empty()) {
      featureEntityName = make_shared<string>(boost::any_cast<string>(m["FeatureEntityName"]));
    }
    if (m.find("FeatureViewId") != m.end() && !m["FeatureViewId"].empty()) {
      featureViewId = make_shared<string>(boost::any_cast<string>(m["FeatureViewId"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RegisterDatasourceId") != m.end() && !m["RegisterDatasourceId"].empty()) {
      registerDatasourceId = make_shared<string>(boost::any_cast<string>(m["RegisterDatasourceId"]));
    }
    if (m.find("RegisterDatasourceName") != m.end() && !m["RegisterDatasourceName"].empty()) {
      registerDatasourceName = make_shared<string>(boost::any_cast<string>(m["RegisterDatasourceName"]));
    }
    if (m.find("RegisterTable") != m.end() && !m["RegisterTable"].empty()) {
      registerTable = make_shared<string>(boost::any_cast<string>(m["RegisterTable"]));
    }
    if (m.find("TTL") != m.end() && !m["TTL"].empty()) {
      TTL = make_shared<long>(boost::any_cast<long>(m["TTL"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("WriteToFeatureDB") != m.end() && !m["WriteToFeatureDB"].empty()) {
      writeToFeatureDB = make_shared<bool>(boost::any_cast<bool>(m["WriteToFeatureDB"]));
    }
  }


  virtual ~ListFeatureViewsResponseBodyFeatureViews() = default;
};
class ListFeatureViewsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFeatureViewsResponseBodyFeatureViews>> featureViews{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListFeatureViewsResponseBody() {}

  explicit ListFeatureViewsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureViews) {
      vector<boost::any> temp1;
      for(auto item1:*featureViews){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureViews"] = boost::any(temp1);
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
    if (m.find("FeatureViews") != m.end() && !m["FeatureViews"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureViews"].type()) {
        vector<ListFeatureViewsResponseBodyFeatureViews> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureViews"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFeatureViewsResponseBodyFeatureViews model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureViews = make_shared<vector<ListFeatureViewsResponseBodyFeatureViews>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFeatureViewsResponseBody() = default;
};
class ListFeatureViewsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFeatureViewsResponseBody> body{};

  ListFeatureViewsResponse() {}

  explicit ListFeatureViewsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFeatureViewsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFeatureViewsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFeatureViewsResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> status{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstancesFeatureDBInstanceInfo : public Darabonba::Model {
public:
  shared_ptr<string> status{};

  ListInstancesResponseBodyInstancesFeatureDBInstanceInfo() {}

  explicit ListInstancesResponseBodyInstancesFeatureDBInstanceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstancesFeatureDBInstanceInfo() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<ListInstancesResponseBodyInstancesFeatureDBInstanceInfo> featureDBInstanceInfo{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureDBInstanceInfo) {
      res["FeatureDBInstanceInfo"] = featureDBInstanceInfo ? boost::any(featureDBInstanceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureDBInstanceInfo") != m.end() && !m["FeatureDBInstanceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FeatureDBInstanceInfo"].type()) {
        ListInstancesResponseBodyInstancesFeatureDBInstanceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FeatureDBInstanceInfo"]));
        featureDBInstanceInfo = make_shared<ListInstancesResponseBodyInstancesFeatureDBInstanceInfo>(model1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
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
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ListLabelTablesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> labelTableIds{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};

  ListLabelTablesRequest() {}

  explicit ListLabelTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelTableIds) {
      res["LabelTableIds"] = boost::any(*labelTableIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelTableIds") != m.end() && !m["LabelTableIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LabelTableIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LabelTableIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      labelTableIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListLabelTablesRequest() = default;
};
class ListLabelTablesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> labelTableIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};

  ListLabelTablesShrinkRequest() {}

  explicit ListLabelTablesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelTableIdsShrink) {
      res["LabelTableIds"] = boost::any(*labelTableIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LabelTableIds") != m.end() && !m["LabelTableIds"].empty()) {
      labelTableIdsShrink = make_shared<string>(boost::any_cast<string>(m["LabelTableIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListLabelTablesShrinkRequest() = default;
};
class ListLabelTablesResponseBodyLabelTables : public Darabonba::Model {
public:
  shared_ptr<string> datasourceId{};
  shared_ptr<string> datasourceName{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> labelTableId{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  ListLabelTablesResponseBodyLabelTables() {}

  explicit ListLabelTablesResponseBodyLabelTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (datasourceName) {
      res["DatasourceName"] = boost::any(*datasourceName);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labelTableId) {
      res["LabelTableId"] = boost::any(*labelTableId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("DatasourceName") != m.end() && !m["DatasourceName"].empty()) {
      datasourceName = make_shared<string>(boost::any_cast<string>(m["DatasourceName"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LabelTableId") != m.end() && !m["LabelTableId"].empty()) {
      labelTableId = make_shared<string>(boost::any_cast<string>(m["LabelTableId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListLabelTablesResponseBodyLabelTables() = default;
};
class ListLabelTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLabelTablesResponseBodyLabelTables>> labelTables{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLabelTablesResponseBody() {}

  explicit ListLabelTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelTables) {
      vector<boost::any> temp1;
      for(auto item1:*labelTables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LabelTables"] = boost::any(temp1);
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
    if (m.find("LabelTables") != m.end() && !m["LabelTables"].empty()) {
      if (typeid(vector<boost::any>) == m["LabelTables"].type()) {
        vector<ListLabelTablesResponseBodyLabelTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LabelTables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLabelTablesResponseBodyLabelTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labelTables = make_shared<vector<ListLabelTablesResponseBodyLabelTables>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLabelTablesResponseBody() = default;
};
class ListLabelTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLabelTablesResponseBody> body{};

  ListLabelTablesResponse() {}

  explicit ListLabelTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLabelTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLabelTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListLabelTablesResponse() = default;
};
class ListModelFeatureAvailableFeaturesRequest : public Darabonba::Model {
public:
  shared_ptr<string> featureName{};

  ListModelFeatureAvailableFeaturesRequest() {}

  explicit ListModelFeatureAvailableFeaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
  }


  virtual ~ListModelFeatureAvailableFeaturesRequest() = default;
};
class ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> sourceName{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> type{};

  ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures() {}

  explicit ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (sourceName) {
      res["SourceName"] = boost::any(*sourceName);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SourceName") != m.end() && !m["SourceName"].empty()) {
      sourceName = make_shared<string>(boost::any_cast<string>(m["SourceName"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures() = default;
};
class ListModelFeatureAvailableFeaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures>> avaliableFeatures{};
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};

  ListModelFeatureAvailableFeaturesResponseBody() {}

  explicit ListModelFeatureAvailableFeaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avaliableFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*avaliableFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AvaliableFeatures"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvaliableFeatures") != m.end() && !m["AvaliableFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["AvaliableFeatures"].type()) {
        vector<ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AvaliableFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        avaliableFeatures = make_shared<vector<ListModelFeatureAvailableFeaturesResponseBodyAvaliableFeatures>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ListModelFeatureAvailableFeaturesResponseBody() = default;
};
class ListModelFeatureAvailableFeaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelFeatureAvailableFeaturesResponseBody> body{};

  ListModelFeatureAvailableFeaturesResponse() {}

  explicit ListModelFeatureAvailableFeaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModelFeatureAvailableFeaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelFeatureAvailableFeaturesResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelFeatureAvailableFeaturesResponse() = default;
};
class ListModelFeaturesRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> modelFeatureIds{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};

  ListModelFeaturesRequest() {}

  explicit ListModelFeaturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelFeatureIds) {
      res["ModelFeatureIds"] = boost::any(*modelFeatureIds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelFeatureIds") != m.end() && !m["ModelFeatureIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ModelFeatureIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ModelFeatureIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      modelFeatureIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListModelFeaturesRequest() = default;
};
class ListModelFeaturesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> modelFeatureIdsShrink{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> sortBy{};

  ListModelFeaturesShrinkRequest() {}

  explicit ListModelFeaturesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelFeatureIdsShrink) {
      res["ModelFeatureIds"] = boost::any(*modelFeatureIdsShrink);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelFeatureIds") != m.end() && !m["ModelFeatureIds"].empty()) {
      modelFeatureIdsShrink = make_shared<string>(boost::any_cast<string>(m["ModelFeatureIds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
  }


  virtual ~ListModelFeaturesShrinkRequest() = default;
};
class ListModelFeaturesResponseBodyModelFeatures : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<string> labelTableName{};
  shared_ptr<string> modelFeatureId{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  ListModelFeaturesResponseBodyModelFeatures() {}

  explicit ListModelFeaturesResponseBodyModelFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (labelTableName) {
      res["LabelTableName"] = boost::any(*labelTableName);
    }
    if (modelFeatureId) {
      res["ModelFeatureId"] = boost::any(*modelFeatureId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("LabelTableName") != m.end() && !m["LabelTableName"].empty()) {
      labelTableName = make_shared<string>(boost::any_cast<string>(m["LabelTableName"]));
    }
    if (m.find("ModelFeatureId") != m.end() && !m["ModelFeatureId"].empty()) {
      modelFeatureId = make_shared<string>(boost::any_cast<string>(m["ModelFeatureId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListModelFeaturesResponseBodyModelFeatures() = default;
};
class ListModelFeaturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListModelFeaturesResponseBodyModelFeatures>> modelFeatures{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListModelFeaturesResponseBody() {}

  explicit ListModelFeaturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*modelFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelFeatures"] = boost::any(temp1);
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
    if (m.find("ModelFeatures") != m.end() && !m["ModelFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelFeatures"].type()) {
        vector<ListModelFeaturesResponseBodyModelFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListModelFeaturesResponseBodyModelFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelFeatures = make_shared<vector<ListModelFeaturesResponseBodyModelFeatures>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListModelFeaturesResponseBody() = default;
};
class ListModelFeaturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListModelFeaturesResponseBody> body{};

  ListModelFeaturesResponse() {}

  explicit ListModelFeaturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListModelFeaturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListModelFeaturesResponseBody>(model1);
      }
    }
  }


  virtual ~ListModelFeaturesResponse() = default;
};
class ListProjectFeatureViewsResponseBodyFeatureViewsFeatures : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListProjectFeatureViewsResponseBodyFeatureViewsFeatures() {}

  explicit ListProjectFeatureViewsResponseBodyFeatureViewsFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
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
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListProjectFeatureViewsResponseBodyFeatureViewsFeatures() = default;
};
class ListProjectFeatureViewsResponseBodyFeatureViews : public Darabonba::Model {
public:
  shared_ptr<string> featureViewId{};
  shared_ptr<vector<ListProjectFeatureViewsResponseBodyFeatureViewsFeatures>> features{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListProjectFeatureViewsResponseBodyFeatureViews() {}

  explicit ListProjectFeatureViewsResponseBodyFeatureViews(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureViewId) {
      res["FeatureViewId"] = boost::any(*featureViewId);
    }
    if (features) {
      vector<boost::any> temp1;
      for(auto item1:*features){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Features"] = boost::any(temp1);
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
    if (m.find("FeatureViewId") != m.end() && !m["FeatureViewId"].empty()) {
      featureViewId = make_shared<string>(boost::any_cast<string>(m["FeatureViewId"]));
    }
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<ListProjectFeatureViewsResponseBodyFeatureViewsFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Features"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectFeatureViewsResponseBodyFeatureViewsFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        features = make_shared<vector<ListProjectFeatureViewsResponseBodyFeatureViewsFeatures>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListProjectFeatureViewsResponseBodyFeatureViews() = default;
};
class ListProjectFeatureViewsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectFeatureViewsResponseBodyFeatureViews>> featureViews{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProjectFeatureViewsResponseBody() {}

  explicit ListProjectFeatureViewsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (featureViews) {
      vector<boost::any> temp1;
      for(auto item1:*featureViews){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureViews"] = boost::any(temp1);
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
    if (m.find("FeatureViews") != m.end() && !m["FeatureViews"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureViews"].type()) {
        vector<ListProjectFeatureViewsResponseBodyFeatureViews> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureViews"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectFeatureViewsResponseBodyFeatureViews model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureViews = make_shared<vector<ListProjectFeatureViewsResponseBodyFeatureViews>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProjectFeatureViewsResponseBody() = default;
};
class ListProjectFeatureViewsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectFeatureViewsResponseBody> body{};

  ListProjectFeatureViewsResponse() {}

  explicit ListProjectFeatureViewsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectFeatureViewsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectFeatureViewsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectFeatureViewsResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> projectIds{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectIds) {
      res["ProjectIds"] = boost::any(*projectIds);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProjectIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProjectIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectIdsShrink{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> workspaceId{};

  ListProjectsShrinkRequest() {}

  explicit ListProjectsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectIdsShrink) {
      res["ProjectIds"] = boost::any(*projectIdsShrink);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectIds") != m.end() && !m["ProjectIds"].empty()) {
      projectIdsShrink = make_shared<string>(boost::any_cast<string>(m["ProjectIds"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~ListProjectsShrinkRequest() = default;
};
class ListProjectsResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> featureEntityCount{};
  shared_ptr<long> featureViewCount{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtModifiedTime{};
  shared_ptr<long> modelCount{};
  shared_ptr<string> name{};
  shared_ptr<string> offlineDatasourceId{};
  shared_ptr<string> offlineDatasourceName{};
  shared_ptr<string> offlineDatasourceType{};
  shared_ptr<long> offlineLifecycle{};
  shared_ptr<string> onlineDatasourceId{};
  shared_ptr<string> onlineDatasourceName{};
  shared_ptr<string> onlineDatasourceType{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};

  ListProjectsResponseBodyProjects() {}

  explicit ListProjectsResponseBodyProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (featureEntityCount) {
      res["FeatureEntityCount"] = boost::any(*featureEntityCount);
    }
    if (featureViewCount) {
      res["FeatureViewCount"] = boost::any(*featureViewCount);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtModifiedTime) {
      res["GmtModifiedTime"] = boost::any(*gmtModifiedTime);
    }
    if (modelCount) {
      res["ModelCount"] = boost::any(*modelCount);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (offlineDatasourceId) {
      res["OfflineDatasourceId"] = boost::any(*offlineDatasourceId);
    }
    if (offlineDatasourceName) {
      res["OfflineDatasourceName"] = boost::any(*offlineDatasourceName);
    }
    if (offlineDatasourceType) {
      res["OfflineDatasourceType"] = boost::any(*offlineDatasourceType);
    }
    if (offlineLifecycle) {
      res["OfflineLifecycle"] = boost::any(*offlineLifecycle);
    }
    if (onlineDatasourceId) {
      res["OnlineDatasourceId"] = boost::any(*onlineDatasourceId);
    }
    if (onlineDatasourceName) {
      res["OnlineDatasourceName"] = boost::any(*onlineDatasourceName);
    }
    if (onlineDatasourceType) {
      res["OnlineDatasourceType"] = boost::any(*onlineDatasourceType);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FeatureEntityCount") != m.end() && !m["FeatureEntityCount"].empty()) {
      featureEntityCount = make_shared<long>(boost::any_cast<long>(m["FeatureEntityCount"]));
    }
    if (m.find("FeatureViewCount") != m.end() && !m["FeatureViewCount"].empty()) {
      featureViewCount = make_shared<long>(boost::any_cast<long>(m["FeatureViewCount"]));
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtModifiedTime") != m.end() && !m["GmtModifiedTime"].empty()) {
      gmtModifiedTime = make_shared<string>(boost::any_cast<string>(m["GmtModifiedTime"]));
    }
    if (m.find("ModelCount") != m.end() && !m["ModelCount"].empty()) {
      modelCount = make_shared<long>(boost::any_cast<long>(m["ModelCount"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OfflineDatasourceId") != m.end() && !m["OfflineDatasourceId"].empty()) {
      offlineDatasourceId = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceId"]));
    }
    if (m.find("OfflineDatasourceName") != m.end() && !m["OfflineDatasourceName"].empty()) {
      offlineDatasourceName = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceName"]));
    }
    if (m.find("OfflineDatasourceType") != m.end() && !m["OfflineDatasourceType"].empty()) {
      offlineDatasourceType = make_shared<string>(boost::any_cast<string>(m["OfflineDatasourceType"]));
    }
    if (m.find("OfflineLifecycle") != m.end() && !m["OfflineLifecycle"].empty()) {
      offlineLifecycle = make_shared<long>(boost::any_cast<long>(m["OfflineLifecycle"]));
    }
    if (m.find("OnlineDatasourceId") != m.end() && !m["OnlineDatasourceId"].empty()) {
      onlineDatasourceId = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceId"]));
    }
    if (m.find("OnlineDatasourceName") != m.end() && !m["OnlineDatasourceName"].empty()) {
      onlineDatasourceName = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceName"]));
    }
    if (m.find("OnlineDatasourceType") != m.end() && !m["OnlineDatasourceType"].empty()) {
      onlineDatasourceType = make_shared<string>(boost::any_cast<string>(m["OnlineDatasourceType"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListProjectsResponseBodyProjects() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListProjectsResponseBodyProjects>> projects{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Projects"] = boost::any(temp1);
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
    if (m.find("Projects") != m.end() && !m["Projects"].empty()) {
      if (typeid(vector<boost::any>) == m["Projects"].type()) {
        vector<ListProjectsResponseBodyProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyProjects>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListTaskLogsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListTaskLogsRequest() {}

  explicit ListTaskLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListTaskLogsRequest() = default;
};
class ListTaskLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> logs{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListTaskLogsResponseBody() {}

  explicit ListTaskLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logs) {
      res["Logs"] = boost::any(*logs);
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
    if (m.find("Logs") != m.end() && !m["Logs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Logs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Logs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      logs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTaskLogsResponseBody() = default;
};
class ListTaskLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTaskLogsResponseBody> body{};

  ListTaskLogsResponse() {}

  explicit ListTaskLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTaskLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTaskLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTaskLogsResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> taskIds{};
  shared_ptr<string> type{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskIds) {
      res["TaskIds"] = boost::any(*taskIds);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskIdsShrink{};
  shared_ptr<string> type{};

  ListTasksShrinkRequest() {}

  explicit ListTasksShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskIdsShrink) {
      res["TaskIds"] = boost::any(*taskIdsShrink);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskIds") != m.end() && !m["TaskIds"].empty()) {
      taskIdsShrink = make_shared<string>(boost::any_cast<string>(m["TaskIds"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTasksShrinkRequest() = default;
};
class ListTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtExecutedTime{};
  shared_ptr<string> gmtFinishedTime{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> type{};

  ListTasksResponseBodyTasks() {}

  explicit ListTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtExecutedTime) {
      res["GmtExecutedTime"] = boost::any(*gmtExecutedTime);
    }
    if (gmtFinishedTime) {
      res["GmtFinishedTime"] = boost::any(*gmtFinishedTime);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtExecutedTime") != m.end() && !m["GmtExecutedTime"].empty()) {
      gmtExecutedTime = make_shared<string>(boost::any_cast<string>(m["GmtExecutedTime"]));
    }
    if (m.find("GmtFinishedTime") != m.end() && !m["GmtFinishedTime"].empty()) {
      gmtFinishedTime = make_shared<string>(boost::any_cast<string>(m["GmtFinishedTime"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListTasksResponseBodyTasks() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class PublishFeatureViewTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> eventTime{};
  shared_ptr<string> mode{};
  shared_ptr<bool> offlineToOnline{};
  shared_ptr<map<string, map<string, boost::any>>> partitions{};

  PublishFeatureViewTableRequest() {}

  explicit PublishFeatureViewTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (offlineToOnline) {
      res["OfflineToOnline"] = boost::any(*offlineToOnline);
    }
    if (partitions) {
      res["Partitions"] = boost::any(*partitions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("OfflineToOnline") != m.end() && !m["OfflineToOnline"].empty()) {
      offlineToOnline = make_shared<bool>(boost::any_cast<bool>(m["OfflineToOnline"]));
    }
    if (m.find("Partitions") != m.end() && !m["Partitions"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Partitions"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      partitions = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
  }


  virtual ~PublishFeatureViewTableRequest() = default;
};
class PublishFeatureViewTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  PublishFeatureViewTableResponseBody() {}

  explicit PublishFeatureViewTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishFeatureViewTableResponseBody() = default;
};
class PublishFeatureViewTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishFeatureViewTableResponseBody> body{};

  PublishFeatureViewTableResponse() {}

  explicit PublishFeatureViewTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishFeatureViewTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishFeatureViewTableResponseBody>(model1);
      }
    }
  }


  virtual ~PublishFeatureViewTableResponse() = default;
};
class UpdateDatasourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> name{};
  shared_ptr<string> uri{};

  UpdateDatasourceRequest() {}

  explicit UpdateDatasourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["Config"] = boost::any(*config);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (uri) {
      res["Uri"] = boost::any(*uri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Config") != m.end() && !m["Config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["Config"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Uri") != m.end() && !m["Uri"].empty()) {
      uri = make_shared<string>(boost::any_cast<string>(m["Uri"]));
    }
  }


  virtual ~UpdateDatasourceRequest() = default;
};
class UpdateDatasourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasourceResponseBody() {}

  explicit UpdateDatasourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDatasourceResponseBody() = default;
};
class UpdateDatasourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasourceResponseBody> body{};

  UpdateDatasourceResponse() {}

  explicit UpdateDatasourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDatasourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasourceResponse() = default;
};
class UpdateLabelTableRequestFields : public Darabonba::Model {
public:
  shared_ptr<vector<string>> attributes{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateLabelTableRequestFields() {}

  explicit UpdateLabelTableRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributes) {
      res["Attributes"] = boost::any(*attributes);
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
    if (m.find("Attributes") != m.end() && !m["Attributes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Attributes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Attributes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      attributes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateLabelTableRequestFields() = default;
};
class UpdateLabelTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasourceId{};
  shared_ptr<vector<UpdateLabelTableRequestFields>> fields{};
  shared_ptr<string> name{};

  UpdateLabelTableRequest() {}

  explicit UpdateLabelTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasourceId) {
      res["DatasourceId"] = boost::any(*datasourceId);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasourceId") != m.end() && !m["DatasourceId"].empty()) {
      datasourceId = make_shared<string>(boost::any_cast<string>(m["DatasourceId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<UpdateLabelTableRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateLabelTableRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<UpdateLabelTableRequestFields>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateLabelTableRequest() = default;
};
class UpdateLabelTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateLabelTableResponseBody() {}

  explicit UpdateLabelTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateLabelTableResponseBody() = default;
};
class UpdateLabelTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLabelTableResponseBody> body{};

  UpdateLabelTableResponse() {}

  explicit UpdateLabelTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLabelTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLabelTableResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLabelTableResponse() = default;
};
class UpdateModelFeatureRequestFeatures : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> featureViewId{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  UpdateModelFeatureRequestFeatures() {}

  explicit UpdateModelFeatureRequestFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (featureViewId) {
      res["FeatureViewId"] = boost::any(*featureViewId);
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
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("FeatureViewId") != m.end() && !m["FeatureViewId"].empty()) {
      featureViewId = make_shared<string>(boost::any_cast<string>(m["FeatureViewId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateModelFeatureRequestFeatures() = default;
};
class UpdateModelFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateModelFeatureRequestFeatures>> features{};
  shared_ptr<long> labelPriorityLevel{};
  shared_ptr<string> labelTableId{};
  shared_ptr<vector<string>> sequenceFeatureViewIds{};

  UpdateModelFeatureRequest() {}

  explicit UpdateModelFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (features) {
      vector<boost::any> temp1;
      for(auto item1:*features){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Features"] = boost::any(temp1);
    }
    if (labelPriorityLevel) {
      res["LabelPriorityLevel"] = boost::any(*labelPriorityLevel);
    }
    if (labelTableId) {
      res["LabelTableId"] = boost::any(*labelTableId);
    }
    if (sequenceFeatureViewIds) {
      res["SequenceFeatureViewIds"] = boost::any(*sequenceFeatureViewIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Features") != m.end() && !m["Features"].empty()) {
      if (typeid(vector<boost::any>) == m["Features"].type()) {
        vector<UpdateModelFeatureRequestFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Features"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateModelFeatureRequestFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        features = make_shared<vector<UpdateModelFeatureRequestFeatures>>(expect1);
      }
    }
    if (m.find("LabelPriorityLevel") != m.end() && !m["LabelPriorityLevel"].empty()) {
      labelPriorityLevel = make_shared<long>(boost::any_cast<long>(m["LabelPriorityLevel"]));
    }
    if (m.find("LabelTableId") != m.end() && !m["LabelTableId"].empty()) {
      labelTableId = make_shared<string>(boost::any_cast<string>(m["LabelTableId"]));
    }
    if (m.find("SequenceFeatureViewIds") != m.end() && !m["SequenceFeatureViewIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SequenceFeatureViewIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SequenceFeatureViewIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sequenceFeatureViewIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateModelFeatureRequest() = default;
};
class UpdateModelFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModelFeatureResponseBody() {}

  explicit UpdateModelFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateModelFeatureResponseBody() = default;
};
class UpdateModelFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelFeatureResponseBody> body{};

  UpdateModelFeatureResponse() {}

  explicit UpdateModelFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModelFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelFeatureResponse() = default;
};
class UpdateModelFeatureFGFeatureRequestLookupFeatures : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> featureName{};
  shared_ptr<string> keyFeatureDomain{};
  shared_ptr<string> keyFeatureName{};
  shared_ptr<string> mapFeatureDomain{};
  shared_ptr<string> mapFeatureName{};
  shared_ptr<string> valueType{};

  UpdateModelFeatureFGFeatureRequestLookupFeatures() {}

  explicit UpdateModelFeatureFGFeatureRequestLookupFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (keyFeatureDomain) {
      res["KeyFeatureDomain"] = boost::any(*keyFeatureDomain);
    }
    if (keyFeatureName) {
      res["KeyFeatureName"] = boost::any(*keyFeatureName);
    }
    if (mapFeatureDomain) {
      res["MapFeatureDomain"] = boost::any(*mapFeatureDomain);
    }
    if (mapFeatureName) {
      res["MapFeatureName"] = boost::any(*mapFeatureName);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("KeyFeatureDomain") != m.end() && !m["KeyFeatureDomain"].empty()) {
      keyFeatureDomain = make_shared<string>(boost::any_cast<string>(m["KeyFeatureDomain"]));
    }
    if (m.find("KeyFeatureName") != m.end() && !m["KeyFeatureName"].empty()) {
      keyFeatureName = make_shared<string>(boost::any_cast<string>(m["KeyFeatureName"]));
    }
    if (m.find("MapFeatureDomain") != m.end() && !m["MapFeatureDomain"].empty()) {
      mapFeatureDomain = make_shared<string>(boost::any_cast<string>(m["MapFeatureDomain"]));
    }
    if (m.find("MapFeatureName") != m.end() && !m["MapFeatureName"].empty()) {
      mapFeatureName = make_shared<string>(boost::any_cast<string>(m["MapFeatureName"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~UpdateModelFeatureFGFeatureRequestLookupFeatures() = default;
};
class UpdateModelFeatureFGFeatureRequestRawFeatures : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> featureDomain{};
  shared_ptr<string> featureName{};
  shared_ptr<string> featureType{};
  shared_ptr<string> inputFeatureName{};
  shared_ptr<string> valueType{};

  UpdateModelFeatureFGFeatureRequestRawFeatures() {}

  explicit UpdateModelFeatureFGFeatureRequestRawFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (featureDomain) {
      res["FeatureDomain"] = boost::any(*featureDomain);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (inputFeatureName) {
      res["InputFeatureName"] = boost::any(*inputFeatureName);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("FeatureDomain") != m.end() && !m["FeatureDomain"].empty()) {
      featureDomain = make_shared<string>(boost::any_cast<string>(m["FeatureDomain"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<string>(boost::any_cast<string>(m["FeatureType"]));
    }
    if (m.find("InputFeatureName") != m.end() && !m["InputFeatureName"].empty()) {
      inputFeatureName = make_shared<string>(boost::any_cast<string>(m["InputFeatureName"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~UpdateModelFeatureFGFeatureRequestRawFeatures() = default;
};
class UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures : public Darabonba::Model {
public:
  shared_ptr<string> defaultValue{};
  shared_ptr<string> featureDomain{};
  shared_ptr<string> featureName{};
  shared_ptr<string> featureType{};
  shared_ptr<string> inputFeatureName{};
  shared_ptr<string> valueType{};

  UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures() {}

  explicit UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (featureDomain) {
      res["FeatureDomain"] = boost::any(*featureDomain);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (featureType) {
      res["FeatureType"] = boost::any(*featureType);
    }
    if (inputFeatureName) {
      res["InputFeatureName"] = boost::any(*inputFeatureName);
    }
    if (valueType) {
      res["ValueType"] = boost::any(*valueType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("FeatureDomain") != m.end() && !m["FeatureDomain"].empty()) {
      featureDomain = make_shared<string>(boost::any_cast<string>(m["FeatureDomain"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("FeatureType") != m.end() && !m["FeatureType"].empty()) {
      featureType = make_shared<string>(boost::any_cast<string>(m["FeatureType"]));
    }
    if (m.find("InputFeatureName") != m.end() && !m["InputFeatureName"].empty()) {
      inputFeatureName = make_shared<string>(boost::any_cast<string>(m["InputFeatureName"]));
    }
    if (m.find("ValueType") != m.end() && !m["ValueType"].empty()) {
      valueType = make_shared<string>(boost::any_cast<string>(m["ValueType"]));
    }
  }


  virtual ~UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures() = default;
};
class UpdateModelFeatureFGFeatureRequestSequenceFeatures : public Darabonba::Model {
public:
  shared_ptr<string> attributeDelim{};
  shared_ptr<string> featureName{};
  shared_ptr<string> sequenceDelim{};
  shared_ptr<long> sequenceLength{};
  shared_ptr<vector<UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures>> subFeatures{};

  UpdateModelFeatureFGFeatureRequestSequenceFeatures() {}

  explicit UpdateModelFeatureFGFeatureRequestSequenceFeatures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (attributeDelim) {
      res["AttributeDelim"] = boost::any(*attributeDelim);
    }
    if (featureName) {
      res["FeatureName"] = boost::any(*featureName);
    }
    if (sequenceDelim) {
      res["SequenceDelim"] = boost::any(*sequenceDelim);
    }
    if (sequenceLength) {
      res["SequenceLength"] = boost::any(*sequenceLength);
    }
    if (subFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*subFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubFeatures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AttributeDelim") != m.end() && !m["AttributeDelim"].empty()) {
      attributeDelim = make_shared<string>(boost::any_cast<string>(m["AttributeDelim"]));
    }
    if (m.find("FeatureName") != m.end() && !m["FeatureName"].empty()) {
      featureName = make_shared<string>(boost::any_cast<string>(m["FeatureName"]));
    }
    if (m.find("SequenceDelim") != m.end() && !m["SequenceDelim"].empty()) {
      sequenceDelim = make_shared<string>(boost::any_cast<string>(m["SequenceDelim"]));
    }
    if (m.find("SequenceLength") != m.end() && !m["SequenceLength"].empty()) {
      sequenceLength = make_shared<long>(boost::any_cast<long>(m["SequenceLength"]));
    }
    if (m.find("SubFeatures") != m.end() && !m["SubFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["SubFeatures"].type()) {
        vector<UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFeatures = make_shared<vector<UpdateModelFeatureFGFeatureRequestSequenceFeaturesSubFeatures>>(expect1);
      }
    }
  }


  virtual ~UpdateModelFeatureFGFeatureRequestSequenceFeatures() = default;
};
class UpdateModelFeatureFGFeatureRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateModelFeatureFGFeatureRequestLookupFeatures>> lookupFeatures{};
  shared_ptr<vector<UpdateModelFeatureFGFeatureRequestRawFeatures>> rawFeatures{};
  shared_ptr<vector<string>> reserves{};
  shared_ptr<vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures>> sequenceFeatures{};

  UpdateModelFeatureFGFeatureRequest() {}

  explicit UpdateModelFeatureFGFeatureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lookupFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*lookupFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LookupFeatures"] = boost::any(temp1);
    }
    if (rawFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*rawFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RawFeatures"] = boost::any(temp1);
    }
    if (reserves) {
      res["Reserves"] = boost::any(*reserves);
    }
    if (sequenceFeatures) {
      vector<boost::any> temp1;
      for(auto item1:*sequenceFeatures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SequenceFeatures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LookupFeatures") != m.end() && !m["LookupFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["LookupFeatures"].type()) {
        vector<UpdateModelFeatureFGFeatureRequestLookupFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LookupFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateModelFeatureFGFeatureRequestLookupFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lookupFeatures = make_shared<vector<UpdateModelFeatureFGFeatureRequestLookupFeatures>>(expect1);
      }
    }
    if (m.find("RawFeatures") != m.end() && !m["RawFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["RawFeatures"].type()) {
        vector<UpdateModelFeatureFGFeatureRequestRawFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RawFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateModelFeatureFGFeatureRequestRawFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rawFeatures = make_shared<vector<UpdateModelFeatureFGFeatureRequestRawFeatures>>(expect1);
      }
    }
    if (m.find("Reserves") != m.end() && !m["Reserves"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Reserves"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Reserves"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reserves = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SequenceFeatures") != m.end() && !m["SequenceFeatures"].empty()) {
      if (typeid(vector<boost::any>) == m["SequenceFeatures"].type()) {
        vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SequenceFeatures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateModelFeatureFGFeatureRequestSequenceFeatures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sequenceFeatures = make_shared<vector<UpdateModelFeatureFGFeatureRequestSequenceFeatures>>(expect1);
      }
    }
  }


  virtual ~UpdateModelFeatureFGFeatureRequest() = default;
};
class UpdateModelFeatureFGFeatureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateModelFeatureFGFeatureResponseBody() {}

  explicit UpdateModelFeatureFGFeatureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateModelFeatureFGFeatureResponseBody() = default;
};
class UpdateModelFeatureFGFeatureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateModelFeatureFGFeatureResponseBody> body{};

  UpdateModelFeatureFGFeatureResponse() {}

  explicit UpdateModelFeatureFGFeatureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateModelFeatureFGFeatureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateModelFeatureFGFeatureResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateModelFeatureFGFeatureResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class WriteFeatureViewTableRequestUrlDatasource : public Darabonba::Model {
public:
  shared_ptr<string> delimiter{};
  shared_ptr<bool> omitHeader{};
  shared_ptr<string> path{};

  WriteFeatureViewTableRequestUrlDatasource() {}

  explicit WriteFeatureViewTableRequestUrlDatasource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delimiter) {
      res["Delimiter"] = boost::any(*delimiter);
    }
    if (omitHeader) {
      res["OmitHeader"] = boost::any(*omitHeader);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delimiter") != m.end() && !m["Delimiter"].empty()) {
      delimiter = make_shared<string>(boost::any_cast<string>(m["Delimiter"]));
    }
    if (m.find("OmitHeader") != m.end() && !m["OmitHeader"].empty()) {
      omitHeader = make_shared<bool>(boost::any_cast<bool>(m["OmitHeader"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
  }


  virtual ~WriteFeatureViewTableRequestUrlDatasource() = default;
};
class WriteFeatureViewTableRequest : public Darabonba::Model {
public:
  shared_ptr<string> mode{};
  shared_ptr<map<string, map<string, boost::any>>> partitions{};
  shared_ptr<WriteFeatureViewTableRequestUrlDatasource> urlDatasource{};

  WriteFeatureViewTableRequest() {}

  explicit WriteFeatureViewTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (partitions) {
      res["Partitions"] = boost::any(*partitions);
    }
    if (urlDatasource) {
      res["UrlDatasource"] = urlDatasource ? boost::any(urlDatasource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Partitions") != m.end() && !m["Partitions"].empty()) {
      map<string, map<string, boost::any>> map1 = boost::any_cast<map<string, map<string, boost::any>>>(m["Partitions"]);
      map<string, map<string, boost::any>> toMap1;
      for (auto item:map1) {
        map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item.second);
        map<string, boost::any> toMap2;
        for (auto item:map2) {
           toMap2[item.first] = item.second;
        }
         toMap1[item.first] = toMap2;
      }
      partitions = make_shared<map<string, map<string, boost::any>>>(toMap1);
    }
    if (m.find("UrlDatasource") != m.end() && !m["UrlDatasource"].empty()) {
      if (typeid(map<string, boost::any>) == m["UrlDatasource"].type()) {
        WriteFeatureViewTableRequestUrlDatasource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UrlDatasource"]));
        urlDatasource = make_shared<WriteFeatureViewTableRequestUrlDatasource>(model1);
      }
    }
  }


  virtual ~WriteFeatureViewTableRequest() = default;
};
class WriteFeatureViewTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  WriteFeatureViewTableResponseBody() {}

  explicit WriteFeatureViewTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~WriteFeatureViewTableResponseBody() = default;
};
class WriteFeatureViewTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<WriteFeatureViewTableResponseBody> body{};

  WriteFeatureViewTableResponse() {}

  explicit WriteFeatureViewTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        WriteFeatureViewTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WriteFeatureViewTableResponseBody>(model1);
      }
    }
  }


  virtual ~WriteFeatureViewTableResponse() = default;
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
  CheckInstanceDatasourceResponse checkInstanceDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                                     shared_ptr<CheckInstanceDatasourceRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckInstanceDatasourceResponse checkInstanceDatasource(shared_ptr<string> InstanceId, shared_ptr<CheckInstanceDatasourceRequest> request);
  CreateDatasourceResponse createDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<CreateDatasourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasourceResponse createDatasource(shared_ptr<string> InstanceId, shared_ptr<CreateDatasourceRequest> request);
  CreateFeatureEntityResponse createFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<CreateFeatureEntityRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFeatureEntityResponse createFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<CreateFeatureEntityRequest> request);
  CreateFeatureViewResponse createFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                         shared_ptr<CreateFeatureViewRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFeatureViewResponse createFeatureView(shared_ptr<string> InstanceId, shared_ptr<CreateFeatureViewRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateLabelTableResponse createLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<CreateLabelTableRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLabelTableResponse createLabelTable(shared_ptr<string> InstanceId, shared_ptr<CreateLabelTableRequest> request);
  CreateModelFeatureResponse createModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                           shared_ptr<CreateModelFeatureRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateModelFeatureResponse createModelFeature(shared_ptr<string> InstanceId, shared_ptr<CreateModelFeatureRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<string> InstanceId,
                                                 shared_ptr<CreateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<string> InstanceId, shared_ptr<CreateProjectRequest> request);
  CreateServiceIdentityRoleResponse createServiceIdentityRoleWithOptions(shared_ptr<CreateServiceIdentityRoleRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceIdentityRoleResponse createServiceIdentityRole(shared_ptr<CreateServiceIdentityRoleRequest> request);
  DeleteDatasourceResponse deleteDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<string> DatasourceId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasourceResponse deleteDatasource(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId);
  DeleteFeatureEntityResponse deleteFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<string> FeatureEntityId,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFeatureEntityResponse deleteFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<string> FeatureEntityId);
  DeleteFeatureViewResponse deleteFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                         shared_ptr<string> FeatureViewId,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFeatureViewResponse deleteFeatureView(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId);
  DeleteLabelTableResponse deleteLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<string> LabelTableId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLabelTableResponse deleteLabelTable(shared_ptr<string> InstanceId, shared_ptr<string> LabelTableId);
  DeleteModelFeatureResponse deleteModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                           shared_ptr<string> ModelFeatureId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteModelFeatureResponse deleteModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<string> InstanceId,
                                                 shared_ptr<string> ProjectId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId);
  ExportModelFeatureTrainingSetTableResponse exportModelFeatureTrainingSetTableWithOptions(shared_ptr<string> InstanceId,
                                                                                           shared_ptr<string> ModelFeatureId,
                                                                                           shared_ptr<ExportModelFeatureTrainingSetTableRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportModelFeatureTrainingSetTableResponse exportModelFeatureTrainingSetTable(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId, shared_ptr<ExportModelFeatureTrainingSetTableRequest> request);
  GetDatasourceResponse getDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                 shared_ptr<string> DatasourceId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasourceResponse getDatasource(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId);
  GetDatasourceTableResponse getDatasourceTableWithOptions(shared_ptr<string> InstanceId,
                                                           shared_ptr<string> DatasourceId,
                                                           shared_ptr<string> TableName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasourceTableResponse getDatasourceTable(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId, shared_ptr<string> TableName);
  GetFeatureEntityResponse getFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<string> FeatureEntityId,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureEntityResponse getFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<string> FeatureEntityId);
  GetFeatureViewResponse getFeatureViewWithOptions(shared_ptr<string> InstanceId,
                                                   shared_ptr<string> FeatureViewId,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFeatureViewResponse getFeatureView(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> InstanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> InstanceId);
  GetLabelTableResponse getLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                 shared_ptr<string> LabelTableId,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetLabelTableResponse getLabelTable(shared_ptr<string> InstanceId, shared_ptr<string> LabelTableId);
  GetModelFeatureResponse getModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                     shared_ptr<string> ModelFeatureId,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelFeatureResponse getModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId);
  GetModelFeatureFGFeatureResponse getModelFeatureFGFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                       shared_ptr<string> ModelFeatureId,
                                                                       shared_ptr<map<string, string>> headers,
                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelFeatureFGFeatureResponse getModelFeatureFGFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId);
  GetModelFeatureFGInfoResponse getModelFeatureFGInfoWithOptions(shared_ptr<string> InstanceId,
                                                                 shared_ptr<string> ModelFeatureId,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelFeatureFGInfoResponse getModelFeatureFGInfo(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId);
  GetProjectResponse getProjectWithOptions(shared_ptr<string> InstanceId,
                                           shared_ptr<string> ProjectId,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId);
  GetProjectFeatureEntityResponse getProjectFeatureEntityWithOptions(shared_ptr<string> InstanceId,
                                                                     shared_ptr<string> ProjectId,
                                                                     shared_ptr<string> FeatureEntityName,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectFeatureEntityResponse getProjectFeatureEntity(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId, shared_ptr<string> FeatureEntityName);
  GetServiceIdentityRoleResponse getServiceIdentityRoleWithOptions(shared_ptr<string> RoleName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceIdentityRoleResponse getServiceIdentityRole(shared_ptr<string> RoleName);
  GetTaskResponse getTaskWithOptions(shared_ptr<string> InstanceId,
                                     shared_ptr<string> TaskId,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<string> InstanceId, shared_ptr<string> TaskId);
  ListDatasourceTablesResponse listDatasourceTablesWithOptions(shared_ptr<string> InstanceId,
                                                               shared_ptr<string> DatasourceId,
                                                               shared_ptr<ListDatasourceTablesRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasourceTablesResponse listDatasourceTables(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId, shared_ptr<ListDatasourceTablesRequest> request);
  ListDatasourcesResponse listDatasourcesWithOptions(shared_ptr<string> InstanceId,
                                                     shared_ptr<ListDatasourcesRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasourcesResponse listDatasources(shared_ptr<string> InstanceId, shared_ptr<ListDatasourcesRequest> request);
  ListFeatureEntitiesResponse listFeatureEntitiesWithOptions(shared_ptr<string> InstanceId,
                                                             shared_ptr<ListFeatureEntitiesRequest> tmpReq,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureEntitiesResponse listFeatureEntities(shared_ptr<string> InstanceId, shared_ptr<ListFeatureEntitiesRequest> request);
  ListFeatureViewFieldRelationshipsResponse listFeatureViewFieldRelationshipsWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<string> FeatureViewId,
                                                                                         shared_ptr<string> FieldName,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureViewFieldRelationshipsResponse listFeatureViewFieldRelationships(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<string> FieldName);
  ListFeatureViewOnlineFeaturesResponse listFeatureViewOnlineFeaturesWithOptions(shared_ptr<string> InstanceId,
                                                                                 shared_ptr<string> FeatureViewId,
                                                                                 shared_ptr<ListFeatureViewOnlineFeaturesRequest> tmpReq,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureViewOnlineFeaturesResponse listFeatureViewOnlineFeatures(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<ListFeatureViewOnlineFeaturesRequest> request);
  ListFeatureViewRelationshipsResponse listFeatureViewRelationshipsWithOptions(shared_ptr<string> InstanceId,
                                                                               shared_ptr<string> FeatureViewId,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureViewRelationshipsResponse listFeatureViewRelationships(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId);
  ListFeatureViewsResponse listFeatureViewsWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<ListFeatureViewsRequest> tmpReq,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFeatureViewsResponse listFeatureViews(shared_ptr<string> InstanceId, shared_ptr<ListFeatureViewsRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListLabelTablesResponse listLabelTablesWithOptions(shared_ptr<string> InstanceId,
                                                     shared_ptr<ListLabelTablesRequest> tmpReq,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLabelTablesResponse listLabelTables(shared_ptr<string> InstanceId, shared_ptr<ListLabelTablesRequest> request);
  ListModelFeatureAvailableFeaturesResponse listModelFeatureAvailableFeaturesWithOptions(shared_ptr<string> InstanceId,
                                                                                         shared_ptr<string> ModelFeatureId,
                                                                                         shared_ptr<ListModelFeatureAvailableFeaturesRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelFeatureAvailableFeaturesResponse listModelFeatureAvailableFeatures(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId, shared_ptr<ListModelFeatureAvailableFeaturesRequest> request);
  ListModelFeaturesResponse listModelFeaturesWithOptions(shared_ptr<string> InstanceId,
                                                         shared_ptr<ListModelFeaturesRequest> tmpReq,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListModelFeaturesResponse listModelFeatures(shared_ptr<string> InstanceId, shared_ptr<ListModelFeaturesRequest> request);
  ListProjectFeatureViewsResponse listProjectFeatureViewsWithOptions(shared_ptr<string> InstanceId,
                                                                     shared_ptr<string> ProjectId,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectFeatureViewsResponse listProjectFeatureViews(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<string> InstanceId,
                                               shared_ptr<ListProjectsRequest> tmpReq,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<string> InstanceId, shared_ptr<ListProjectsRequest> request);
  ListTaskLogsResponse listTaskLogsWithOptions(shared_ptr<string> InstanceId,
                                               shared_ptr<string> TaskId,
                                               shared_ptr<ListTaskLogsRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTaskLogsResponse listTaskLogs(shared_ptr<string> InstanceId, shared_ptr<string> TaskId, shared_ptr<ListTaskLogsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<string> InstanceId,
                                         shared_ptr<ListTasksRequest> tmpReq,
                                         shared_ptr<map<string, string>> headers,
                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<string> InstanceId, shared_ptr<ListTasksRequest> request);
  PublishFeatureViewTableResponse publishFeatureViewTableWithOptions(shared_ptr<string> InstanceId,
                                                                     shared_ptr<string> FeatureViewId,
                                                                     shared_ptr<PublishFeatureViewTableRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishFeatureViewTableResponse publishFeatureViewTable(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<PublishFeatureViewTableRequest> request);
  UpdateDatasourceResponse updateDatasourceWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<string> DatasourceId,
                                                       shared_ptr<UpdateDatasourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasourceResponse updateDatasource(shared_ptr<string> InstanceId, shared_ptr<string> DatasourceId, shared_ptr<UpdateDatasourceRequest> request);
  UpdateLabelTableResponse updateLabelTableWithOptions(shared_ptr<string> InstanceId,
                                                       shared_ptr<string> LabelTableId,
                                                       shared_ptr<UpdateLabelTableRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLabelTableResponse updateLabelTable(shared_ptr<string> InstanceId, shared_ptr<string> LabelTableId, shared_ptr<UpdateLabelTableRequest> request);
  UpdateModelFeatureResponse updateModelFeatureWithOptions(shared_ptr<string> InstanceId,
                                                           shared_ptr<string> ModelFeatureId,
                                                           shared_ptr<UpdateModelFeatureRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelFeatureResponse updateModelFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId, shared_ptr<UpdateModelFeatureRequest> request);
  UpdateModelFeatureFGFeatureResponse updateModelFeatureFGFeatureWithOptions(shared_ptr<string> InstanceId,
                                                                             shared_ptr<string> ModelFeatureId,
                                                                             shared_ptr<UpdateModelFeatureFGFeatureRequest> request,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateModelFeatureFGFeatureResponse updateModelFeatureFGFeature(shared_ptr<string> InstanceId, shared_ptr<string> ModelFeatureId, shared_ptr<UpdateModelFeatureFGFeatureRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<string> InstanceId,
                                                 shared_ptr<string> ProjectId,
                                                 shared_ptr<UpdateProjectRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<string> InstanceId, shared_ptr<string> ProjectId, shared_ptr<UpdateProjectRequest> request);
  WriteFeatureViewTableResponse writeFeatureViewTableWithOptions(shared_ptr<string> InstanceId,
                                                                 shared_ptr<string> FeatureViewId,
                                                                 shared_ptr<WriteFeatureViewTableRequest> request,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WriteFeatureViewTableResponse writeFeatureViewTable(shared_ptr<string> InstanceId, shared_ptr<string> FeatureViewId, shared_ptr<WriteFeatureViewTableRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PaiFeatureStore20230621

#endif
