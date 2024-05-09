// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SEARCHENGINE20211025_H_
#define ALIBABACLOUD_SEARCHENGINE20211025_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Searchengine20211025 {
class ErrorResponse : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ErrorResponse() {}

  explicit ErrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ErrorResponse() = default;
};
class VariablesValueFuncValue : public Darabonba::Model {
public:
  shared_ptr<string> funcClassName{};
  shared_ptr<string> template_{};

  VariablesValueFuncValue() {}

  explicit VariablesValueFuncValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (funcClassName) {
      res["funcClassName"] = boost::any(*funcClassName);
    }
    if (template_) {
      res["template"] = boost::any(*template_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("funcClassName") != m.end() && !m["funcClassName"].empty()) {
      funcClassName = make_shared<string>(boost::any_cast<string>(m["funcClassName"]));
    }
    if (m.find("template") != m.end() && !m["template"].empty()) {
      template_ = make_shared<string>(boost::any_cast<string>(m["template"]));
    }
  }


  virtual ~VariablesValueFuncValue() = default;
};
class VariablesValue : public Darabonba::Model {
public:
  shared_ptr<bool> disableModify{};
  shared_ptr<bool> isModify{};
  shared_ptr<string> value{};
  shared_ptr<string> description{};
  shared_ptr<string> templateValue{};
  shared_ptr<string> type{};
  shared_ptr<VariablesValueFuncValue> funcValue{};

  VariablesValue() {}

  explicit VariablesValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableModify) {
      res["disableModify"] = boost::any(*disableModify);
    }
    if (isModify) {
      res["isModify"] = boost::any(*isModify);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (templateValue) {
      res["templateValue"] = boost::any(*templateValue);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (funcValue) {
      res["funcValue"] = funcValue ? boost::any(funcValue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("disableModify") != m.end() && !m["disableModify"].empty()) {
      disableModify = make_shared<bool>(boost::any_cast<bool>(m["disableModify"]));
    }
    if (m.find("isModify") != m.end() && !m["isModify"].empty()) {
      isModify = make_shared<bool>(boost::any_cast<bool>(m["isModify"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("templateValue") != m.end() && !m["templateValue"].empty()) {
      templateValue = make_shared<string>(boost::any_cast<string>(m["templateValue"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("funcValue") != m.end() && !m["funcValue"].empty()) {
      if (typeid(map<string, boost::any>) == m["funcValue"].type()) {
        VariablesValueFuncValue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["funcValue"]));
        funcValue = make_shared<VariablesValueFuncValue>(model1);
      }
    }
  }


  virtual ~VariablesValue() = default;
};
class BuildIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildMode{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<long> dataTimeSec{};
  shared_ptr<string> domain{};
  shared_ptr<long> generation{};
  shared_ptr<string> partition{};

  BuildIndexRequest() {}

  explicit BuildIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildMode) {
      res["buildMode"] = boost::any(*buildMode);
    }
    if (dataSourceName) {
      res["dataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceType) {
      res["dataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildMode") != m.end() && !m["buildMode"].empty()) {
      buildMode = make_shared<string>(boost::any_cast<string>(m["buildMode"]));
    }
    if (m.find("dataSourceName") != m.end() && !m["dataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["dataSourceName"]));
    }
    if (m.find("dataSourceType") != m.end() && !m["dataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["dataSourceType"]));
    }
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
  }


  virtual ~BuildIndexRequest() = default;
};
class BuildIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  BuildIndexResponseBody() {}

  explicit BuildIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BuildIndexResponseBody() = default;
};
class BuildIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BuildIndexResponseBody> body{};

  BuildIndexResponse() {}

  explicit BuildIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BuildIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BuildIndexResponseBody>(model1);
      }
    }
  }


  virtual ~BuildIndexResponse() = default;
};
class CreateClusterRequestDataNode : public Darabonba::Model {
public:
  shared_ptr<long> number{};

  CreateClusterRequestDataNode() {}

  explicit CreateClusterRequestDataNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
  }


  virtual ~CreateClusterRequestDataNode() = default;
};
class CreateClusterRequestQueryNode : public Darabonba::Model {
public:
  shared_ptr<long> number{};

  CreateClusterRequestQueryNode() {}

  explicit CreateClusterRequestQueryNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
  }


  virtual ~CreateClusterRequestQueryNode() = default;
};
class CreateClusterRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoLoad{};
  shared_ptr<CreateClusterRequestDataNode> dataNode{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<CreateClusterRequestQueryNode> queryNode{};

  CreateClusterRequest() {}

  explicit CreateClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoLoad) {
      res["autoLoad"] = boost::any(*autoLoad);
    }
    if (dataNode) {
      res["dataNode"] = dataNode ? boost::any(dataNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (queryNode) {
      res["queryNode"] = queryNode ? boost::any(queryNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoLoad") != m.end() && !m["autoLoad"].empty()) {
      autoLoad = make_shared<bool>(boost::any_cast<bool>(m["autoLoad"]));
    }
    if (m.find("dataNode") != m.end() && !m["dataNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataNode"].type()) {
        CreateClusterRequestDataNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataNode"]));
        dataNode = make_shared<CreateClusterRequestDataNode>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("queryNode") != m.end() && !m["queryNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryNode"].type()) {
        CreateClusterRequestQueryNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryNode"]));
        queryNode = make_shared<CreateClusterRequestQueryNode>(model1);
      }
    }
  }


  virtual ~CreateClusterRequest() = default;
};
class CreateClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateClusterResponseBody() {}

  explicit CreateClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateClusterResponseBody() = default;
};
class CreateClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateClusterResponseBody> body{};

  CreateClusterResponse() {}

  explicit CreateClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateClusterResponseBody>(model1);
      }
    }
  }


  virtual ~CreateClusterResponse() = default;
};
class CreateDataSourceRequestConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  CreateDataSourceRequestConfig() {}

  explicit CreateDataSourceRequestConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~CreateDataSourceRequestConfig() = default;
};
class CreateDataSourceRequestSaroConfig : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> tableName{};

  CreateDataSourceRequestSaroConfig() {}

  explicit CreateDataSourceRequestSaroConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~CreateDataSourceRequestSaroConfig() = default;
};
class CreateDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<CreateDataSourceRequestConfig> config{};
  shared_ptr<string> domain{};
  shared_ptr<string> name{};
  shared_ptr<CreateDataSourceRequestSaroConfig> saroConfig{};
  shared_ptr<string> type{};
  shared_ptr<bool> dryRun{};

  CreateDataSourceRequest() {}

  explicit CreateDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (saroConfig) {
      res["saroConfig"] = saroConfig ? boost::any(saroConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        CreateDataSourceRequestConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<CreateDataSourceRequestConfig>(model1);
      }
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("saroConfig") != m.end() && !m["saroConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["saroConfig"].type()) {
        CreateDataSourceRequestSaroConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saroConfig"]));
        saroConfig = make_shared<CreateDataSourceRequestSaroConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateDataSourceRequest() = default;
};
class CreateDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateDataSourceResponseBody() {}

  explicit CreateDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateDataSourceResponseBody() = default;
};
class CreateDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataSourceResponseBody> body{};

  CreateDataSourceResponse() {}

  explicit CreateDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataSourceResponse() = default;
};
class CreateIndexRequestDataSourceInfoConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  CreateIndexRequestDataSourceInfoConfig() {}

  explicit CreateIndexRequestDataSourceInfoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~CreateIndexRequestDataSourceInfoConfig() = default;
};
class CreateIndexRequestDataSourceInfoSaroConfig : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> tableName{};

  CreateIndexRequestDataSourceInfoSaroConfig() {}

  explicit CreateIndexRequestDataSourceInfoSaroConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~CreateIndexRequestDataSourceInfoSaroConfig() = default;
};
class CreateIndexRequestDataSourceInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<CreateIndexRequestDataSourceInfoConfig> config{};
  shared_ptr<long> dataTimeSec{};
  shared_ptr<string> domain{};
  shared_ptr<string> name{};
  shared_ptr<long> processPartitionCount{};
  shared_ptr<CreateIndexRequestDataSourceInfoSaroConfig> saroConfig{};
  shared_ptr<string> type{};

  CreateIndexRequestDataSourceInfo() {}

  explicit CreateIndexRequestDataSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processPartitionCount) {
      res["processPartitionCount"] = boost::any(*processPartitionCount);
    }
    if (saroConfig) {
      res["saroConfig"] = saroConfig ? boost::any(saroConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        CreateIndexRequestDataSourceInfoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<CreateIndexRequestDataSourceInfoConfig>(model1);
      }
    }
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processPartitionCount") != m.end() && !m["processPartitionCount"].empty()) {
      processPartitionCount = make_shared<long>(boost::any_cast<long>(m["processPartitionCount"]));
    }
    if (m.find("saroConfig") != m.end() && !m["saroConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["saroConfig"].type()) {
        CreateIndexRequestDataSourceInfoSaroConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saroConfig"]));
        saroConfig = make_shared<CreateIndexRequestDataSourceInfoSaroConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateIndexRequestDataSourceInfo() = default;
};
class CreateIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> dataSource{};
  shared_ptr<CreateIndexRequestDataSourceInfo> dataSourceInfo{};
  shared_ptr<string> domain{};
  shared_ptr<map<string, boost::any>> extend{};
  shared_ptr<string> name{};
  shared_ptr<long> partition{};
  shared_ptr<bool> dryRun{};

  CreateIndexRequest() {}

  explicit CreateIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (dataSource) {
      res["dataSource"] = boost::any(*dataSource);
    }
    if (dataSourceInfo) {
      res["dataSourceInfo"] = dataSourceInfo ? boost::any(dataSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (extend) {
      res["extend"] = boost::any(*extend);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["dataSource"]));
    }
    if (m.find("dataSourceInfo") != m.end() && !m["dataSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSourceInfo"].type()) {
        CreateIndexRequestDataSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSourceInfo"]));
        dataSourceInfo = make_shared<CreateIndexRequestDataSourceInfo>(model1);
      }
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["extend"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extend = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateIndexRequest() = default;
};
class CreateIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateIndexResponseBody() {}

  explicit CreateIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
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
class CreateInstanceRequestComponents : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> value{};

  CreateInstanceRequestComponents() {}

  explicit CreateInstanceRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~CreateInstanceRequestComponents() = default;
};
class CreateInstanceRequestOrder : public Darabonba::Model {
public:
  shared_ptr<bool> autoRenew{};
  shared_ptr<long> duration{};
  shared_ptr<string> pricingCycle{};

  CreateInstanceRequestOrder() {}

  explicit CreateInstanceRequestOrder(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoRenew) {
      res["autoRenew"] = boost::any(*autoRenew);
    }
    if (duration) {
      res["duration"] = boost::any(*duration);
    }
    if (pricingCycle) {
      res["pricingCycle"] = boost::any(*pricingCycle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoRenew") != m.end() && !m["autoRenew"].empty()) {
      autoRenew = make_shared<bool>(boost::any_cast<bool>(m["autoRenew"]));
    }
    if (m.find("duration") != m.end() && !m["duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["duration"]));
    }
    if (m.find("pricingCycle") != m.end() && !m["pricingCycle"].empty()) {
      pricingCycle = make_shared<string>(boost::any_cast<string>(m["pricingCycle"]));
    }
  }


  virtual ~CreateInstanceRequestOrder() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<vector<CreateInstanceRequestComponents>> components{};
  shared_ptr<CreateInstanceRequestOrder> order{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["components"] = boost::any(temp1);
    }
    if (order) {
      res["order"] = order ? boost::any(order->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("components") != m.end() && !m["components"].empty()) {
      if (typeid(vector<boost::any>) == m["components"].type()) {
        vector<CreateInstanceRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateInstanceRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateInstanceRequestComponents>>(expect1);
      }
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      if (typeid(map<string, boost::any>) == m["order"].type()) {
        CreateInstanceRequestOrder model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["order"]));
        order = make_shared<CreateInstanceRequestOrder>(model1);
      }
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  CreateInstanceResponseBodyResult() {}

  explicit CreateInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
  }


  virtual ~CreateInstanceResponseBodyResult() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreateInstanceResponseBodyResult> result{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        CreateInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<CreateInstanceResponseBodyResult>(model1);
      }
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
class CreateTableRequestDataProcessConfigParamsSrcFieldConfig : public Darabonba::Model {
public:
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> uid{};

  CreateTableRequestDataProcessConfigParamsSrcFieldConfig() {}

  explicit CreateTableRequestDataProcessConfigParamsSrcFieldConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossBucket) {
      res["ossBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["ossEndpoint"] = boost::any(*ossEndpoint);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ossBucket") != m.end() && !m["ossBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["ossBucket"]));
    }
    if (m.find("ossEndpoint") != m.end() && !m["ossEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["ossEndpoint"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~CreateTableRequestDataProcessConfigParamsSrcFieldConfig() = default;
};
class CreateTableRequestDataProcessConfigParams : public Darabonba::Model {
public:
  shared_ptr<CreateTableRequestDataProcessConfigParamsSrcFieldConfig> srcFieldConfig{};
  shared_ptr<string> vectorModal{};
  shared_ptr<string> vectorModel{};

  CreateTableRequestDataProcessConfigParams() {}

  explicit CreateTableRequestDataProcessConfigParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (srcFieldConfig) {
      res["srcFieldConfig"] = srcFieldConfig ? boost::any(srcFieldConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorModal) {
      res["vectorModal"] = boost::any(*vectorModal);
    }
    if (vectorModel) {
      res["vectorModel"] = boost::any(*vectorModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("srcFieldConfig") != m.end() && !m["srcFieldConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["srcFieldConfig"].type()) {
        CreateTableRequestDataProcessConfigParamsSrcFieldConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["srcFieldConfig"]));
        srcFieldConfig = make_shared<CreateTableRequestDataProcessConfigParamsSrcFieldConfig>(model1);
      }
    }
    if (m.find("vectorModal") != m.end() && !m["vectorModal"].empty()) {
      vectorModal = make_shared<string>(boost::any_cast<string>(m["vectorModal"]));
    }
    if (m.find("vectorModel") != m.end() && !m["vectorModel"].empty()) {
      vectorModel = make_shared<string>(boost::any_cast<string>(m["vectorModel"]));
    }
  }


  virtual ~CreateTableRequestDataProcessConfigParams() = default;
};
class CreateTableRequestDataProcessConfig : public Darabonba::Model {
public:
  shared_ptr<string> dstField{};
  shared_ptr<string> operator_{};
  shared_ptr<CreateTableRequestDataProcessConfigParams> params{};
  shared_ptr<string> srcField{};

  CreateTableRequestDataProcessConfig() {}

  explicit CreateTableRequestDataProcessConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstField) {
      res["dstField"] = boost::any(*dstField);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (params) {
      res["params"] = params ? boost::any(params->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (srcField) {
      res["srcField"] = boost::any(*srcField);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dstField") != m.end() && !m["dstField"].empty()) {
      dstField = make_shared<string>(boost::any_cast<string>(m["dstField"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      if (typeid(map<string, boost::any>) == m["params"].type()) {
        CreateTableRequestDataProcessConfigParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["params"]));
        params = make_shared<CreateTableRequestDataProcessConfigParams>(model1);
      }
    }
    if (m.find("srcField") != m.end() && !m["srcField"].empty()) {
      srcField = make_shared<string>(boost::any_cast<string>(m["srcField"]));
    }
  }


  virtual ~CreateTableRequestDataProcessConfig() = default;
};
class CreateTableRequestDataSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  CreateTableRequestDataSourceConfig() {}

  explicit CreateTableRequestDataSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~CreateTableRequestDataSourceConfig() = default;
};
class CreateTableRequestDataSource : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<CreateTableRequestDataSourceConfig> config{};
  shared_ptr<long> dataTimeSec{};
  shared_ptr<string> type{};

  CreateTableRequestDataSource() {}

  explicit CreateTableRequestDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        CreateTableRequestDataSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<CreateTableRequestDataSourceConfig>(model1);
      }
    }
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~CreateTableRequestDataSource() = default;
};
class CreateTableRequestVectorIndexAdvanceParams : public Darabonba::Model {
public:
  shared_ptr<string> buildIndexParams{};
  shared_ptr<string> linearBuildThreshold{};
  shared_ptr<string> minScanDocCnt{};
  shared_ptr<string> searchIndexParams{};

  CreateTableRequestVectorIndexAdvanceParams() {}

  explicit CreateTableRequestVectorIndexAdvanceParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildIndexParams) {
      res["buildIndexParams"] = boost::any(*buildIndexParams);
    }
    if (linearBuildThreshold) {
      res["linearBuildThreshold"] = boost::any(*linearBuildThreshold);
    }
    if (minScanDocCnt) {
      res["minScanDocCnt"] = boost::any(*minScanDocCnt);
    }
    if (searchIndexParams) {
      res["searchIndexParams"] = boost::any(*searchIndexParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildIndexParams") != m.end() && !m["buildIndexParams"].empty()) {
      buildIndexParams = make_shared<string>(boost::any_cast<string>(m["buildIndexParams"]));
    }
    if (m.find("linearBuildThreshold") != m.end() && !m["linearBuildThreshold"].empty()) {
      linearBuildThreshold = make_shared<string>(boost::any_cast<string>(m["linearBuildThreshold"]));
    }
    if (m.find("minScanDocCnt") != m.end() && !m["minScanDocCnt"].empty()) {
      minScanDocCnt = make_shared<string>(boost::any_cast<string>(m["minScanDocCnt"]));
    }
    if (m.find("searchIndexParams") != m.end() && !m["searchIndexParams"].empty()) {
      searchIndexParams = make_shared<string>(boost::any_cast<string>(m["searchIndexParams"]));
    }
  }


  virtual ~CreateTableRequestVectorIndexAdvanceParams() = default;
};
class CreateTableRequestVectorIndex : public Darabonba::Model {
public:
  shared_ptr<CreateTableRequestVectorIndexAdvanceParams> advanceParams{};
  shared_ptr<string> dimension{};
  shared_ptr<string> distanceType{};
  shared_ptr<string> indexName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> sparseIndexField{};
  shared_ptr<string> sparseValueField{};
  shared_ptr<string> vectorField{};
  shared_ptr<string> vectorIndexType{};

  CreateTableRequestVectorIndex() {}

  explicit CreateTableRequestVectorIndex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceParams) {
      res["advanceParams"] = advanceParams ? boost::any(advanceParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dimension) {
      res["dimension"] = boost::any(*dimension);
    }
    if (distanceType) {
      res["distanceType"] = boost::any(*distanceType);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (sparseIndexField) {
      res["sparseIndexField"] = boost::any(*sparseIndexField);
    }
    if (sparseValueField) {
      res["sparseValueField"] = boost::any(*sparseValueField);
    }
    if (vectorField) {
      res["vectorField"] = boost::any(*vectorField);
    }
    if (vectorIndexType) {
      res["vectorIndexType"] = boost::any(*vectorIndexType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advanceParams") != m.end() && !m["advanceParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["advanceParams"].type()) {
        CreateTableRequestVectorIndexAdvanceParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["advanceParams"]));
        advanceParams = make_shared<CreateTableRequestVectorIndexAdvanceParams>(model1);
      }
    }
    if (m.find("dimension") != m.end() && !m["dimension"].empty()) {
      dimension = make_shared<string>(boost::any_cast<string>(m["dimension"]));
    }
    if (m.find("distanceType") != m.end() && !m["distanceType"].empty()) {
      distanceType = make_shared<string>(boost::any_cast<string>(m["distanceType"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("sparseIndexField") != m.end() && !m["sparseIndexField"].empty()) {
      sparseIndexField = make_shared<string>(boost::any_cast<string>(m["sparseIndexField"]));
    }
    if (m.find("sparseValueField") != m.end() && !m["sparseValueField"].empty()) {
      sparseValueField = make_shared<string>(boost::any_cast<string>(m["sparseValueField"]));
    }
    if (m.find("vectorField") != m.end() && !m["vectorField"].empty()) {
      vectorField = make_shared<string>(boost::any_cast<string>(m["vectorField"]));
    }
    if (m.find("vectorIndexType") != m.end() && !m["vectorIndexType"].empty()) {
      vectorIndexType = make_shared<string>(boost::any_cast<string>(m["vectorIndexType"]));
    }
  }


  virtual ~CreateTableRequestVectorIndex() = default;
};
class CreateTableRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTableRequestDataProcessConfig>> dataProcessConfig{};
  shared_ptr<long> dataProcessorCount{};
  shared_ptr<CreateTableRequestDataSource> dataSource{};
  shared_ptr<map<string, string>> fieldSchema{};
  shared_ptr<string> name{};
  shared_ptr<long> partitionCount{};
  shared_ptr<string> primaryKey{};
  shared_ptr<string> rawSchema{};
  shared_ptr<vector<CreateTableRequestVectorIndex>> vectorIndex{};
  shared_ptr<bool> dryRun{};

  CreateTableRequest() {}

  explicit CreateTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataProcessConfig) {
      vector<boost::any> temp1;
      for(auto item1:*dataProcessConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataProcessConfig"] = boost::any(temp1);
    }
    if (dataProcessorCount) {
      res["dataProcessorCount"] = boost::any(*dataProcessorCount);
    }
    if (dataSource) {
      res["dataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fieldSchema) {
      res["fieldSchema"] = boost::any(*fieldSchema);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partitionCount) {
      res["partitionCount"] = boost::any(*partitionCount);
    }
    if (primaryKey) {
      res["primaryKey"] = boost::any(*primaryKey);
    }
    if (rawSchema) {
      res["rawSchema"] = boost::any(*rawSchema);
    }
    if (vectorIndex) {
      vector<boost::any> temp1;
      for(auto item1:*vectorIndex){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vectorIndex"] = boost::any(temp1);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataProcessConfig") != m.end() && !m["dataProcessConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["dataProcessConfig"].type()) {
        vector<CreateTableRequestDataProcessConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataProcessConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTableRequestDataProcessConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataProcessConfig = make_shared<vector<CreateTableRequestDataProcessConfig>>(expect1);
      }
    }
    if (m.find("dataProcessorCount") != m.end() && !m["dataProcessorCount"].empty()) {
      dataProcessorCount = make_shared<long>(boost::any_cast<long>(m["dataProcessorCount"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSource"].type()) {
        CreateTableRequestDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSource"]));
        dataSource = make_shared<CreateTableRequestDataSource>(model1);
      }
    }
    if (m.find("fieldSchema") != m.end() && !m["fieldSchema"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["fieldSchema"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      fieldSchema = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partitionCount") != m.end() && !m["partitionCount"].empty()) {
      partitionCount = make_shared<long>(boost::any_cast<long>(m["partitionCount"]));
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      primaryKey = make_shared<string>(boost::any_cast<string>(m["primaryKey"]));
    }
    if (m.find("rawSchema") != m.end() && !m["rawSchema"].empty()) {
      rawSchema = make_shared<string>(boost::any_cast<string>(m["rawSchema"]));
    }
    if (m.find("vectorIndex") != m.end() && !m["vectorIndex"].empty()) {
      if (typeid(vector<boost::any>) == m["vectorIndex"].type()) {
        vector<CreateTableRequestVectorIndex> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vectorIndex"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTableRequestVectorIndex model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vectorIndex = make_shared<vector<CreateTableRequestVectorIndex>>(expect1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~CreateTableRequest() = default;
};
class CreateTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  CreateTableResponseBody() {}

  explicit CreateTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~CreateTableResponseBody() = default;
};
class CreateTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTableResponseBody> body{};

  CreateTableResponse() {}

  explicit CreateTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTableResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTableResponse() = default;
};
class DeleteAdvanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteAdvanceConfigResponseBody() {}

  explicit DeleteAdvanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteAdvanceConfigResponseBody() = default;
};
class DeleteAdvanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAdvanceConfigResponseBody> body{};

  DeleteAdvanceConfigResponse() {}

  explicit DeleteAdvanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAdvanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAdvanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAdvanceConfigResponse() = default;
};
class DeleteDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteDataSourceResponseBody() {}

  explicit DeleteDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteDataSourceResponseBody() = default;
};
class DeleteDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataSourceResponseBody> body{};

  DeleteDataSourceResponse() {}

  explicit DeleteDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceResponse() = default;
};
class DeleteIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSource{};
  shared_ptr<bool> deleteDataSource{};

  DeleteIndexRequest() {}

  explicit DeleteIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSource) {
      res["dataSource"] = boost::any(*dataSource);
    }
    if (deleteDataSource) {
      res["deleteDataSource"] = boost::any(*deleteDataSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["dataSource"]));
    }
    if (m.find("deleteDataSource") != m.end() && !m["deleteDataSource"].empty()) {
      deleteDataSource = make_shared<bool>(boost::any_cast<bool>(m["deleteDataSource"]));
    }
  }


  virtual ~DeleteIndexRequest() = default;
};
class DeleteIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteIndexResponseBody() {}

  explicit DeleteIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
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
class DeleteIndexVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteIndexVersionResponseBody() {}

  explicit DeleteIndexVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteIndexVersionResponseBody() = default;
};
class DeleteIndexVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIndexVersionResponseBody> body{};

  DeleteIndexVersionResponse() {}

  explicit DeleteIndexVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteIndexVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIndexVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIndexVersionResponse() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  DeleteTableResponseBody() {}

  explicit DeleteTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~DeleteTableResponseBody() = default;
};
class DeleteTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTableResponseBody> body{};

  DeleteTableResponse() {}

  explicit DeleteTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTableResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTableResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["acceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("acceptLanguage") != m.end() && !m["acceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["acceptLanguage"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyResult() {}

  explicit DescribeRegionsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (localName) {
      res["localName"] = boost::any(*localName);
    }
    if (regionId) {
      res["regionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("localName") != m.end() && !m["localName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["localName"]));
    }
    if (m.find("regionId") != m.end() && !m["regionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["regionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyResult() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeRegionsResponseBodyResult>> result{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<DescribeRegionsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<DescribeRegionsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class ForceSwitchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ForceSwitchResponseBody() {}

  explicit ForceSwitchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ForceSwitchResponseBody() = default;
};
class ForceSwitchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ForceSwitchResponseBody> body{};

  ForceSwitchResponse() {}

  explicit ForceSwitchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ForceSwitchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ForceSwitchResponseBody>(model1);
      }
    }
  }


  virtual ~ForceSwitchResponse() = default;
};
class GetAdvanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  GetAdvanceConfigRequest() {}

  explicit GetAdvanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAdvanceConfigRequest() = default;
};
class GetAdvanceConfigResponseBodyResultFiles : public Darabonba::Model {
public:
  shared_ptr<string> fullPathName{};
  shared_ptr<bool> isDir{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> name{};

  GetAdvanceConfigResponseBodyResultFiles() {}

  explicit GetAdvanceConfigResponseBodyResultFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullPathName) {
      res["fullPathName"] = boost::any(*fullPathName);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (isTemplate) {
      res["isTemplate"] = boost::any(*isTemplate);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fullPathName") != m.end() && !m["fullPathName"].empty()) {
      fullPathName = make_shared<string>(boost::any_cast<string>(m["fullPathName"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("isTemplate") != m.end() && !m["isTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["isTemplate"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetAdvanceConfigResponseBodyResultFiles() = default;
};
class GetAdvanceConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> desc{};
  shared_ptr<vector<GetAdvanceConfigResponseBodyResultFiles>> files{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  GetAdvanceConfigResponseBodyResult() {}

  explicit GetAdvanceConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["files"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("files") != m.end() && !m["files"].empty()) {
      if (typeid(vector<boost::any>) == m["files"].type()) {
        vector<GetAdvanceConfigResponseBodyResultFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAdvanceConfigResponseBodyResultFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<GetAdvanceConfigResponseBodyResultFiles>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~GetAdvanceConfigResponseBodyResult() = default;
};
class GetAdvanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAdvanceConfigResponseBodyResult> result{};

  GetAdvanceConfigResponseBody() {}

  explicit GetAdvanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetAdvanceConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetAdvanceConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAdvanceConfigResponseBody() = default;
};
class GetAdvanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAdvanceConfigResponseBody> body{};

  GetAdvanceConfigResponse() {}

  explicit GetAdvanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAdvanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAdvanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAdvanceConfigResponse() = default;
};
class GetAdvanceConfigFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  GetAdvanceConfigFileRequest() {}

  explicit GetAdvanceConfigFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
  }


  virtual ~GetAdvanceConfigFileRequest() = default;
};
class GetAdvanceConfigFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  GetAdvanceConfigFileResponseBodyResult() {}

  explicit GetAdvanceConfigFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAdvanceConfigFileResponseBodyResult() = default;
};
class GetAdvanceConfigFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAdvanceConfigFileResponseBodyResult> result{};

  GetAdvanceConfigFileResponseBody() {}

  explicit GetAdvanceConfigFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetAdvanceConfigFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetAdvanceConfigFileResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetAdvanceConfigFileResponseBody() = default;
};
class GetAdvanceConfigFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAdvanceConfigFileResponseBody> body{};

  GetAdvanceConfigFileResponse() {}

  explicit GetAdvanceConfigFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetAdvanceConfigFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAdvanceConfigFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetAdvanceConfigFileResponse() = default;
};
class GetClusterResponseBodyResultDataNode : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<long> partition{};

  GetClusterResponseBodyResultDataNode() {}

  explicit GetClusterResponseBodyResultDataNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
  }


  virtual ~GetClusterResponseBodyResultDataNode() = default;
};
class GetClusterResponseBodyResultQueryNode : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<long> partition{};

  GetClusterResponseBodyResultQueryNode() {}

  explicit GetClusterResponseBodyResultQueryNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
  }


  virtual ~GetClusterResponseBodyResultQueryNode() = default;
};
class GetClusterResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> configUpdateTime{};
  shared_ptr<string> currentAdvanceConfigVersion{};
  shared_ptr<string> currentOnlineConfigVersion{};
  shared_ptr<GetClusterResponseBodyResultDataNode> dataNode{};
  shared_ptr<string> description{};
  shared_ptr<string> latestAdvanceConfigVersion{};
  shared_ptr<string> latestOnlineConfigVersion{};
  shared_ptr<string> name{};
  shared_ptr<GetClusterResponseBodyResultQueryNode> queryNode{};
  shared_ptr<string> status{};

  GetClusterResponseBodyResult() {}

  explicit GetClusterResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configUpdateTime) {
      res["configUpdateTime"] = boost::any(*configUpdateTime);
    }
    if (currentAdvanceConfigVersion) {
      res["currentAdvanceConfigVersion"] = boost::any(*currentAdvanceConfigVersion);
    }
    if (currentOnlineConfigVersion) {
      res["currentOnlineConfigVersion"] = boost::any(*currentOnlineConfigVersion);
    }
    if (dataNode) {
      res["dataNode"] = dataNode ? boost::any(dataNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (latestAdvanceConfigVersion) {
      res["latestAdvanceConfigVersion"] = boost::any(*latestAdvanceConfigVersion);
    }
    if (latestOnlineConfigVersion) {
      res["latestOnlineConfigVersion"] = boost::any(*latestOnlineConfigVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (queryNode) {
      res["queryNode"] = queryNode ? boost::any(queryNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configUpdateTime") != m.end() && !m["configUpdateTime"].empty()) {
      configUpdateTime = make_shared<string>(boost::any_cast<string>(m["configUpdateTime"]));
    }
    if (m.find("currentAdvanceConfigVersion") != m.end() && !m["currentAdvanceConfigVersion"].empty()) {
      currentAdvanceConfigVersion = make_shared<string>(boost::any_cast<string>(m["currentAdvanceConfigVersion"]));
    }
    if (m.find("currentOnlineConfigVersion") != m.end() && !m["currentOnlineConfigVersion"].empty()) {
      currentOnlineConfigVersion = make_shared<string>(boost::any_cast<string>(m["currentOnlineConfigVersion"]));
    }
    if (m.find("dataNode") != m.end() && !m["dataNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataNode"].type()) {
        GetClusterResponseBodyResultDataNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataNode"]));
        dataNode = make_shared<GetClusterResponseBodyResultDataNode>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("latestAdvanceConfigVersion") != m.end() && !m["latestAdvanceConfigVersion"].empty()) {
      latestAdvanceConfigVersion = make_shared<string>(boost::any_cast<string>(m["latestAdvanceConfigVersion"]));
    }
    if (m.find("latestOnlineConfigVersion") != m.end() && !m["latestOnlineConfigVersion"].empty()) {
      latestOnlineConfigVersion = make_shared<string>(boost::any_cast<string>(m["latestOnlineConfigVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("queryNode") != m.end() && !m["queryNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryNode"].type()) {
        GetClusterResponseBodyResultQueryNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryNode"]));
        queryNode = make_shared<GetClusterResponseBodyResultQueryNode>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetClusterResponseBodyResult() = default;
};
class GetClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetClusterResponseBodyResult> result{};

  GetClusterResponseBody() {}

  explicit GetClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetClusterResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetClusterResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetClusterResponseBody() = default;
};
class GetClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterResponseBody> body{};

  GetClusterResponse() {}

  explicit GetClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterResponse() = default;
};
class GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList : public Darabonba::Model {
public:
  shared_ptr<string> configUpdateTime{};
  shared_ptr<long> donePercent{};
  shared_ptr<long> doneSize{};
  shared_ptr<string> name{};
  shared_ptr<long> totalSize{};

  GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList() {}

  explicit GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configUpdateTime) {
      res["configUpdateTime"] = boost::any(*configUpdateTime);
    }
    if (donePercent) {
      res["donePercent"] = boost::any(*donePercent);
    }
    if (doneSize) {
      res["doneSize"] = boost::any(*doneSize);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configUpdateTime") != m.end() && !m["configUpdateTime"].empty()) {
      configUpdateTime = make_shared<string>(boost::any_cast<string>(m["configUpdateTime"]));
    }
    if (m.find("donePercent") != m.end() && !m["donePercent"].empty()) {
      donePercent = make_shared<long>(boost::any_cast<long>(m["donePercent"]));
    }
    if (m.find("doneSize") != m.end() && !m["doneSize"].empty()) {
      doneSize = make_shared<long>(boost::any_cast<long>(m["doneSize"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList() = default;
};
class GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo : public Darabonba::Model {
public:
  shared_ptr<string> configMetaName{};
  shared_ptr<long> version{};

  GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo() {}

  explicit GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMetaName) {
      res["configMetaName"] = boost::any(*configMetaName);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configMetaName") != m.end() && !m["configMetaName"].empty()) {
      configMetaName = make_shared<string>(boost::any_cast<string>(m["configMetaName"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo() = default;
};
class GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo : public Darabonba::Model {
public:
  shared_ptr<string> configMetaName{};
  shared_ptr<long> version{};

  GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo() {}

  explicit GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configMetaName) {
      res["configMetaName"] = boost::any(*configMetaName);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configMetaName") != m.end() && !m["configMetaName"].empty()) {
      configMetaName = make_shared<string>(boost::any_cast<string>(m["configMetaName"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<long>(boost::any_cast<long>(m["version"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo() = default;
};
class GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList : public Darabonba::Model {
public:
  shared_ptr<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo> advanceConfigInfo{};
  shared_ptr<vector<string>> deployFailedWorker{};
  shared_ptr<long> docSize{};
  shared_ptr<long> donePercent{};
  shared_ptr<long> doneSize{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> fullUpdateTime{};
  shared_ptr<long> fullVersion{};
  shared_ptr<string> incUpdateTime{};
  shared_ptr<long> incVersion{};
  shared_ptr<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo> indexConfigInfo{};
  shared_ptr<long> indexSize{};
  shared_ptr<vector<string>> lackDiskWorker{};
  shared_ptr<vector<string>> lackMemWorker{};
  shared_ptr<string> name{};
  shared_ptr<long> totalSize{};

  GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList() {}

  explicit GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceConfigInfo) {
      res["advanceConfigInfo"] = advanceConfigInfo ? boost::any(advanceConfigInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployFailedWorker) {
      res["deployFailedWorker"] = boost::any(*deployFailedWorker);
    }
    if (docSize) {
      res["docSize"] = boost::any(*docSize);
    }
    if (donePercent) {
      res["donePercent"] = boost::any(*donePercent);
    }
    if (doneSize) {
      res["doneSize"] = boost::any(*doneSize);
    }
    if (errorMsg) {
      res["errorMsg"] = boost::any(*errorMsg);
    }
    if (fullUpdateTime) {
      res["fullUpdateTime"] = boost::any(*fullUpdateTime);
    }
    if (fullVersion) {
      res["fullVersion"] = boost::any(*fullVersion);
    }
    if (incUpdateTime) {
      res["incUpdateTime"] = boost::any(*incUpdateTime);
    }
    if (incVersion) {
      res["incVersion"] = boost::any(*incVersion);
    }
    if (indexConfigInfo) {
      res["indexConfigInfo"] = indexConfigInfo ? boost::any(indexConfigInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (indexSize) {
      res["indexSize"] = boost::any(*indexSize);
    }
    if (lackDiskWorker) {
      res["lackDiskWorker"] = boost::any(*lackDiskWorker);
    }
    if (lackMemWorker) {
      res["lackMemWorker"] = boost::any(*lackMemWorker);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advanceConfigInfo") != m.end() && !m["advanceConfigInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["advanceConfigInfo"].type()) {
        GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["advanceConfigInfo"]));
        advanceConfigInfo = make_shared<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListAdvanceConfigInfo>(model1);
      }
    }
    if (m.find("deployFailedWorker") != m.end() && !m["deployFailedWorker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["deployFailedWorker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["deployFailedWorker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deployFailedWorker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("docSize") != m.end() && !m["docSize"].empty()) {
      docSize = make_shared<long>(boost::any_cast<long>(m["docSize"]));
    }
    if (m.find("donePercent") != m.end() && !m["donePercent"].empty()) {
      donePercent = make_shared<long>(boost::any_cast<long>(m["donePercent"]));
    }
    if (m.find("doneSize") != m.end() && !m["doneSize"].empty()) {
      doneSize = make_shared<long>(boost::any_cast<long>(m["doneSize"]));
    }
    if (m.find("errorMsg") != m.end() && !m["errorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["errorMsg"]));
    }
    if (m.find("fullUpdateTime") != m.end() && !m["fullUpdateTime"].empty()) {
      fullUpdateTime = make_shared<string>(boost::any_cast<string>(m["fullUpdateTime"]));
    }
    if (m.find("fullVersion") != m.end() && !m["fullVersion"].empty()) {
      fullVersion = make_shared<long>(boost::any_cast<long>(m["fullVersion"]));
    }
    if (m.find("incUpdateTime") != m.end() && !m["incUpdateTime"].empty()) {
      incUpdateTime = make_shared<string>(boost::any_cast<string>(m["incUpdateTime"]));
    }
    if (m.find("incVersion") != m.end() && !m["incVersion"].empty()) {
      incVersion = make_shared<long>(boost::any_cast<long>(m["incVersion"]));
    }
    if (m.find("indexConfigInfo") != m.end() && !m["indexConfigInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["indexConfigInfo"].type()) {
        GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["indexConfigInfo"]));
        indexConfigInfo = make_shared<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo>(model1);
      }
    }
    if (m.find("indexSize") != m.end() && !m["indexSize"].empty()) {
      indexSize = make_shared<long>(boost::any_cast<long>(m["indexSize"]));
    }
    if (m.find("lackDiskWorker") != m.end() && !m["lackDiskWorker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["lackDiskWorker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["lackDiskWorker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lackDiskWorker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("lackMemWorker") != m.end() && !m["lackMemWorker"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["lackMemWorker"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["lackMemWorker"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      lackMemWorker = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList() = default;
};
class GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus : public Darabonba::Model {
public:
  shared_ptr<long> donePercent{};
  shared_ptr<long> doneSize{};
  shared_ptr<string> name{};
  shared_ptr<long> totalSize{};

  GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus() {}

  explicit GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (donePercent) {
      res["donePercent"] = boost::any(*donePercent);
    }
    if (doneSize) {
      res["doneSize"] = boost::any(*doneSize);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("donePercent") != m.end() && !m["donePercent"].empty()) {
      donePercent = make_shared<long>(boost::any_cast<long>(m["donePercent"]));
    }
    if (m.find("doneSize") != m.end() && !m["doneSize"].empty()) {
      doneSize = make_shared<long>(boost::any_cast<long>(m["doneSize"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus() = default;
};
class GetClusterRunTimeInfoResponseBodyResultDataNodes : public Darabonba::Model {
public:
  shared_ptr<vector<GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList>> configStatusList{};
  shared_ptr<vector<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList>> dataStatusList{};
  shared_ptr<GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus> serviceStatus{};

  GetClusterRunTimeInfoResponseBodyResultDataNodes() {}

  explicit GetClusterRunTimeInfoResponseBodyResultDataNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*configStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configStatusList"] = boost::any(temp1);
    }
    if (dataStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*dataStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataStatusList"] = boost::any(temp1);
    }
    if (serviceStatus) {
      res["serviceStatus"] = serviceStatus ? boost::any(serviceStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configStatusList") != m.end() && !m["configStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["configStatusList"].type()) {
        vector<GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configStatusList = make_shared<vector<GetClusterRunTimeInfoResponseBodyResultDataNodesConfigStatusList>>(expect1);
      }
    }
    if (m.find("dataStatusList") != m.end() && !m["dataStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["dataStatusList"].type()) {
        vector<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataStatusList = make_shared<vector<GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusList>>(expect1);
      }
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceStatus"].type()) {
        GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceStatus"]));
        serviceStatus = make_shared<GetClusterRunTimeInfoResponseBodyResultDataNodesServiceStatus>(model1);
      }
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodes() = default;
};
class GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList : public Darabonba::Model {
public:
  shared_ptr<string> configUpdateTime{};
  shared_ptr<long> donePercent{};
  shared_ptr<long> doneSize{};
  shared_ptr<string> name{};
  shared_ptr<long> totalSize{};

  GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList() {}

  explicit GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configUpdateTime) {
      res["configUpdateTime"] = boost::any(*configUpdateTime);
    }
    if (donePercent) {
      res["donePercent"] = boost::any(*donePercent);
    }
    if (doneSize) {
      res["doneSize"] = boost::any(*doneSize);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configUpdateTime") != m.end() && !m["configUpdateTime"].empty()) {
      configUpdateTime = make_shared<string>(boost::any_cast<string>(m["configUpdateTime"]));
    }
    if (m.find("donePercent") != m.end() && !m["donePercent"].empty()) {
      donePercent = make_shared<long>(boost::any_cast<long>(m["donePercent"]));
    }
    if (m.find("doneSize") != m.end() && !m["doneSize"].empty()) {
      doneSize = make_shared<long>(boost::any_cast<long>(m["doneSize"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList() = default;
};
class GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus : public Darabonba::Model {
public:
  shared_ptr<long> donePercent{};
  shared_ptr<long> doneSize{};
  shared_ptr<string> name{};
  shared_ptr<long> totalSize{};

  GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus() {}

  explicit GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (donePercent) {
      res["donePercent"] = boost::any(*donePercent);
    }
    if (doneSize) {
      res["doneSize"] = boost::any(*doneSize);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("donePercent") != m.end() && !m["donePercent"].empty()) {
      donePercent = make_shared<long>(boost::any_cast<long>(m["donePercent"]));
    }
    if (m.find("doneSize") != m.end() && !m["doneSize"].empty()) {
      doneSize = make_shared<long>(boost::any_cast<long>(m["doneSize"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus() = default;
};
class GetClusterRunTimeInfoResponseBodyResultQueryNode : public Darabonba::Model {
public:
  shared_ptr<vector<GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList>> configStatusList{};
  shared_ptr<GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus> serviceStatus{};

  GetClusterRunTimeInfoResponseBodyResultQueryNode() {}

  explicit GetClusterRunTimeInfoResponseBodyResultQueryNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*configStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["configStatusList"] = boost::any(temp1);
    }
    if (serviceStatus) {
      res["serviceStatus"] = serviceStatus ? boost::any(serviceStatus->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configStatusList") != m.end() && !m["configStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["configStatusList"].type()) {
        vector<GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["configStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        configStatusList = make_shared<vector<GetClusterRunTimeInfoResponseBodyResultQueryNodeConfigStatusList>>(expect1);
      }
    }
    if (m.find("serviceStatus") != m.end() && !m["serviceStatus"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceStatus"].type()) {
        GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceStatus"]));
        serviceStatus = make_shared<GetClusterRunTimeInfoResponseBodyResultQueryNodeServiceStatus>(model1);
      }
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResultQueryNode() = default;
};
class GetClusterRunTimeInfoResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<vector<GetClusterRunTimeInfoResponseBodyResultDataNodes>> dataNodes{};
  shared_ptr<GetClusterRunTimeInfoResponseBodyResultQueryNode> queryNode{};

  GetClusterRunTimeInfoResponseBodyResult() {}

  explicit GetClusterRunTimeInfoResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["clusterName"] = boost::any(*clusterName);
    }
    if (dataNodes) {
      vector<boost::any> temp1;
      for(auto item1:*dataNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataNodes"] = boost::any(temp1);
    }
    if (queryNode) {
      res["queryNode"] = queryNode ? boost::any(queryNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterName") != m.end() && !m["clusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["clusterName"]));
    }
    if (m.find("dataNodes") != m.end() && !m["dataNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["dataNodes"].type()) {
        vector<GetClusterRunTimeInfoResponseBodyResultDataNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterRunTimeInfoResponseBodyResultDataNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataNodes = make_shared<vector<GetClusterRunTimeInfoResponseBodyResultDataNodes>>(expect1);
      }
    }
    if (m.find("queryNode") != m.end() && !m["queryNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryNode"].type()) {
        GetClusterRunTimeInfoResponseBodyResultQueryNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryNode"]));
        queryNode = make_shared<GetClusterRunTimeInfoResponseBodyResultQueryNode>(model1);
      }
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBodyResult() = default;
};
class GetClusterRunTimeInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<GetClusterRunTimeInfoResponseBodyResult>> result{};

  GetClusterRunTimeInfoResponseBody() {}

  explicit GetClusterRunTimeInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<GetClusterRunTimeInfoResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetClusterRunTimeInfoResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<GetClusterRunTimeInfoResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~GetClusterRunTimeInfoResponseBody() = default;
};
class GetClusterRunTimeInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetClusterRunTimeInfoResponseBody> body{};

  GetClusterRunTimeInfoResponse() {}

  explicit GetClusterRunTimeInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetClusterRunTimeInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetClusterRunTimeInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetClusterRunTimeInfoResponse() = default;
};
class GetDataSourceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<long> lastFulTime{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  GetDataSourceResponseBodyResult() {}

  explicit GetDataSourceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (lastFulTime) {
      res["lastFulTime"] = boost::any(*lastFulTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("lastFulTime") != m.end() && !m["lastFulTime"].empty()) {
      lastFulTime = make_shared<long>(boost::any_cast<long>(m["lastFulTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetDataSourceResponseBodyResult() = default;
};
class GetDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDataSourceResponseBodyResult> result{};

  GetDataSourceResponseBody() {}

  explicit GetDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetDataSourceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetDataSourceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDataSourceResponseBody() = default;
};
class GetDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSourceResponseBody> body{};

  GetDataSourceResponse() {}

  explicit GetDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSourceResponse() = default;
};
class GetDataSourceDeployResponseBodyResultExtendHdfs : public Darabonba::Model {
public:
  shared_ptr<string> path{};

  GetDataSourceDeployResponseBodyResultExtendHdfs() {}

  explicit GetDataSourceDeployResponseBodyResultExtendHdfs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultExtendHdfs() = default;
};
class GetDataSourceDeployResponseBodyResultExtendOdps : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> partitions{};

  GetDataSourceDeployResponseBodyResultExtendOdps() {}

  explicit GetDataSourceDeployResponseBodyResultExtendOdps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (partitions) {
      res["partitions"] = boost::any(*partitions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("partitions") != m.end() && !m["partitions"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["partitions"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      partitions = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultExtendOdps() = default;
};
class GetDataSourceDeployResponseBodyResultExtendOss : public Darabonba::Model {
public:
  shared_ptr<string> path{};

  GetDataSourceDeployResponseBodyResultExtendOss() {}

  explicit GetDataSourceDeployResponseBodyResultExtendOss(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["path"] = boost::any(*path);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultExtendOss() = default;
};
class GetDataSourceDeployResponseBodyResultExtendSaro : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> version{};

  GetDataSourceDeployResponseBodyResultExtendSaro() {}

  explicit GetDataSourceDeployResponseBodyResultExtendSaro(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultExtendSaro() = default;
};
class GetDataSourceDeployResponseBodyResultExtend : public Darabonba::Model {
public:
  shared_ptr<GetDataSourceDeployResponseBodyResultExtendHdfs> hdfs{};
  shared_ptr<GetDataSourceDeployResponseBodyResultExtendOdps> odps{};
  shared_ptr<GetDataSourceDeployResponseBodyResultExtendOss> oss{};
  shared_ptr<GetDataSourceDeployResponseBodyResultExtendSaro> saro{};

  GetDataSourceDeployResponseBodyResultExtend() {}

  explicit GetDataSourceDeployResponseBodyResultExtend(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hdfs) {
      res["hdfs"] = hdfs ? boost::any(hdfs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (odps) {
      res["odps"] = odps ? boost::any(odps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (oss) {
      res["oss"] = oss ? boost::any(oss->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (saro) {
      res["saro"] = saro ? boost::any(saro->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hdfs") != m.end() && !m["hdfs"].empty()) {
      if (typeid(map<string, boost::any>) == m["hdfs"].type()) {
        GetDataSourceDeployResponseBodyResultExtendHdfs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["hdfs"]));
        hdfs = make_shared<GetDataSourceDeployResponseBodyResultExtendHdfs>(model1);
      }
    }
    if (m.find("odps") != m.end() && !m["odps"].empty()) {
      if (typeid(map<string, boost::any>) == m["odps"].type()) {
        GetDataSourceDeployResponseBodyResultExtendOdps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["odps"]));
        odps = make_shared<GetDataSourceDeployResponseBodyResultExtendOdps>(model1);
      }
    }
    if (m.find("oss") != m.end() && !m["oss"].empty()) {
      if (typeid(map<string, boost::any>) == m["oss"].type()) {
        GetDataSourceDeployResponseBodyResultExtendOss model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["oss"]));
        oss = make_shared<GetDataSourceDeployResponseBodyResultExtendOss>(model1);
      }
    }
    if (m.find("saro") != m.end() && !m["saro"].empty()) {
      if (typeid(map<string, boost::any>) == m["saro"].type()) {
        GetDataSourceDeployResponseBodyResultExtendSaro model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saro"]));
        saro = make_shared<GetDataSourceDeployResponseBodyResultExtendSaro>(model1);
      }
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultExtend() = default;
};
class GetDataSourceDeployResponseBodyResultProcessor : public Darabonba::Model {
public:
  shared_ptr<string> args{};
  shared_ptr<string> resource{};

  GetDataSourceDeployResponseBodyResultProcessor() {}

  explicit GetDataSourceDeployResponseBodyResultProcessor(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (args) {
      res["args"] = boost::any(*args);
    }
    if (resource) {
      res["resource"] = boost::any(*resource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("args") != m.end() && !m["args"].empty()) {
      args = make_shared<string>(boost::any_cast<string>(m["args"]));
    }
    if (m.find("resource") != m.end() && !m["resource"].empty()) {
      resource = make_shared<string>(boost::any_cast<string>(m["resource"]));
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultProcessor() = default;
};
class GetDataSourceDeployResponseBodyResultStorage : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  GetDataSourceDeployResponseBodyResultStorage() {}

  explicit GetDataSourceDeployResponseBodyResultStorage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultStorage() = default;
};
class GetDataSourceDeployResponseBodyResultSwift : public Darabonba::Model {
public:
  shared_ptr<string> topic{};
  shared_ptr<string> zk{};

  GetDataSourceDeployResponseBodyResultSwift() {}

  explicit GetDataSourceDeployResponseBodyResultSwift(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (zk) {
      res["zk"] = boost::any(*zk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("zk") != m.end() && !m["zk"].empty()) {
      zk = make_shared<string>(boost::any_cast<string>(m["zk"]));
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResultSwift() = default;
};
class GetDataSourceDeployResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<GetDataSourceDeployResponseBodyResultExtend> extend{};
  shared_ptr<GetDataSourceDeployResponseBodyResultProcessor> processor{};
  shared_ptr<GetDataSourceDeployResponseBodyResultStorage> storage{};
  shared_ptr<GetDataSourceDeployResponseBodyResultSwift> swift{};

  GetDataSourceDeployResponseBodyResult() {}

  explicit GetDataSourceDeployResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (extend) {
      res["extend"] = extend ? boost::any(extend->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (processor) {
      res["processor"] = processor ? boost::any(processor->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storage) {
      res["storage"] = storage ? boost::any(storage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (swift) {
      res["swift"] = swift ? boost::any(swift->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("extend") != m.end() && !m["extend"].empty()) {
      if (typeid(map<string, boost::any>) == m["extend"].type()) {
        GetDataSourceDeployResponseBodyResultExtend model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extend"]));
        extend = make_shared<GetDataSourceDeployResponseBodyResultExtend>(model1);
      }
    }
    if (m.find("processor") != m.end() && !m["processor"].empty()) {
      if (typeid(map<string, boost::any>) == m["processor"].type()) {
        GetDataSourceDeployResponseBodyResultProcessor model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["processor"]));
        processor = make_shared<GetDataSourceDeployResponseBodyResultProcessor>(model1);
      }
    }
    if (m.find("storage") != m.end() && !m["storage"].empty()) {
      if (typeid(map<string, boost::any>) == m["storage"].type()) {
        GetDataSourceDeployResponseBodyResultStorage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["storage"]));
        storage = make_shared<GetDataSourceDeployResponseBodyResultStorage>(model1);
      }
    }
    if (m.find("swift") != m.end() && !m["swift"].empty()) {
      if (typeid(map<string, boost::any>) == m["swift"].type()) {
        GetDataSourceDeployResponseBodyResultSwift model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["swift"]));
        swift = make_shared<GetDataSourceDeployResponseBodyResultSwift>(model1);
      }
    }
  }


  virtual ~GetDataSourceDeployResponseBodyResult() = default;
};
class GetDataSourceDeployResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDataSourceDeployResponseBodyResult> result{};

  GetDataSourceDeployResponseBody() {}

  explicit GetDataSourceDeployResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetDataSourceDeployResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetDataSourceDeployResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDataSourceDeployResponseBody() = default;
};
class GetDataSourceDeployResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSourceDeployResponseBody> body{};

  GetDataSourceDeployResponse() {}

  explicit GetDataSourceDeployResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDataSourceDeployResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSourceDeployResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSourceDeployResponse() = default;
};
class GetDeployGraphResponseBodyResultGraphIndexMetas : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> name{};
  shared_ptr<long> tableDeployId{};
  shared_ptr<string> tableName{};
  shared_ptr<string> tag{};
  shared_ptr<string> zoneName{};

  GetDeployGraphResponseBodyResultGraphIndexMetas() {}

  explicit GetDeployGraphResponseBodyResultGraphIndexMetas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (tableDeployId) {
      res["tableDeployId"] = boost::any(*tableDeployId);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (zoneName) {
      res["zoneName"] = boost::any(*zoneName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("tableDeployId") != m.end() && !m["tableDeployId"].empty()) {
      tableDeployId = make_shared<long>(boost::any_cast<long>(m["tableDeployId"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("zoneName") != m.end() && !m["zoneName"].empty()) {
      zoneName = make_shared<string>(boost::any_cast<string>(m["zoneName"]));
    }
  }


  virtual ~GetDeployGraphResponseBodyResultGraphIndexMetas() = default;
};
class GetDeployGraphResponseBodyResultGraphOnlineMaster : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> hippoId{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  GetDeployGraphResponseBodyResultGraphOnlineMaster() {}

  explicit GetDeployGraphResponseBodyResultGraphOnlineMaster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (hippoId) {
      res["hippoId"] = boost::any(*hippoId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("hippoId") != m.end() && !m["hippoId"].empty()) {
      hippoId = make_shared<string>(boost::any_cast<string>(m["hippoId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetDeployGraphResponseBodyResultGraphOnlineMaster() = default;
};
class GetDeployGraphResponseBodyResultGraphTableMetas : public Darabonba::Model {
public:
  shared_ptr<long> buildDeployId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> name{};
  shared_ptr<long> tableDeployId{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};

  GetDeployGraphResponseBodyResultGraphTableMetas() {}

  explicit GetDeployGraphResponseBodyResultGraphTableMetas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildDeployId) {
      res["buildDeployId"] = boost::any(*buildDeployId);
    }
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (tableDeployId) {
      res["tableDeployId"] = boost::any(*tableDeployId);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildDeployId") != m.end() && !m["buildDeployId"].empty()) {
      buildDeployId = make_shared<long>(boost::any_cast<long>(m["buildDeployId"]));
    }
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("tableDeployId") != m.end() && !m["tableDeployId"].empty()) {
      tableDeployId = make_shared<long>(boost::any_cast<long>(m["tableDeployId"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetDeployGraphResponseBodyResultGraphTableMetas() = default;
};
class GetDeployGraphResponseBodyResultGraphZoneMetas : public Darabonba::Model {
public:
  shared_ptr<string> domainInfo{};
  shared_ptr<string> name{};
  shared_ptr<string> suezAdminName{};
  shared_ptr<string> tag{};
  shared_ptr<string> type{};

  GetDeployGraphResponseBodyResultGraphZoneMetas() {}

  explicit GetDeployGraphResponseBodyResultGraphZoneMetas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainInfo) {
      res["domainInfo"] = boost::any(*domainInfo);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (suezAdminName) {
      res["suezAdminName"] = boost::any(*suezAdminName);
    }
    if (tag) {
      res["tag"] = boost::any(*tag);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainInfo") != m.end() && !m["domainInfo"].empty()) {
      domainInfo = make_shared<string>(boost::any_cast<string>(m["domainInfo"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("suezAdminName") != m.end() && !m["suezAdminName"].empty()) {
      suezAdminName = make_shared<string>(boost::any_cast<string>(m["suezAdminName"]));
    }
    if (m.find("tag") != m.end() && !m["tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["tag"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetDeployGraphResponseBodyResultGraphZoneMetas() = default;
};
class GetDeployGraphResponseBodyResultGraph : public Darabonba::Model {
public:
  shared_ptr<vector<GetDeployGraphResponseBodyResultGraphIndexMetas>> indexMetas{};
  shared_ptr<vector<GetDeployGraphResponseBodyResultGraphOnlineMaster>> onlineMaster{};
  shared_ptr<map<string, vector<string>>> tableIndexRelation{};
  shared_ptr<vector<GetDeployGraphResponseBodyResultGraphTableMetas>> tableMetas{};
  shared_ptr<map<string, vector<string>>> zoneIndexRelation{};
  shared_ptr<vector<GetDeployGraphResponseBodyResultGraphZoneMetas>> zoneMetas{};

  GetDeployGraphResponseBodyResultGraph() {}

  explicit GetDeployGraphResponseBodyResultGraph(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexMetas) {
      vector<boost::any> temp1;
      for(auto item1:*indexMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["indexMetas"] = boost::any(temp1);
    }
    if (onlineMaster) {
      vector<boost::any> temp1;
      for(auto item1:*onlineMaster){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["onlineMaster"] = boost::any(temp1);
    }
    if (tableIndexRelation) {
      res["tableIndexRelation"] = boost::any(*tableIndexRelation);
    }
    if (tableMetas) {
      vector<boost::any> temp1;
      for(auto item1:*tableMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tableMetas"] = boost::any(temp1);
    }
    if (zoneIndexRelation) {
      res["zoneIndexRelation"] = boost::any(*zoneIndexRelation);
    }
    if (zoneMetas) {
      vector<boost::any> temp1;
      for(auto item1:*zoneMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zoneMetas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexMetas") != m.end() && !m["indexMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["indexMetas"].type()) {
        vector<GetDeployGraphResponseBodyResultGraphIndexMetas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["indexMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeployGraphResponseBodyResultGraphIndexMetas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexMetas = make_shared<vector<GetDeployGraphResponseBodyResultGraphIndexMetas>>(expect1);
      }
    }
    if (m.find("onlineMaster") != m.end() && !m["onlineMaster"].empty()) {
      if (typeid(vector<boost::any>) == m["onlineMaster"].type()) {
        vector<GetDeployGraphResponseBodyResultGraphOnlineMaster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["onlineMaster"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeployGraphResponseBodyResultGraphOnlineMaster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlineMaster = make_shared<vector<GetDeployGraphResponseBodyResultGraphOnlineMaster>>(expect1);
      }
    }
    if (m.find("tableIndexRelation") != m.end() && !m["tableIndexRelation"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["tableIndexRelation"]);
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
      tableIndexRelation = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("tableMetas") != m.end() && !m["tableMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["tableMetas"].type()) {
        vector<GetDeployGraphResponseBodyResultGraphTableMetas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tableMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeployGraphResponseBodyResultGraphTableMetas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableMetas = make_shared<vector<GetDeployGraphResponseBodyResultGraphTableMetas>>(expect1);
      }
    }
    if (m.find("zoneIndexRelation") != m.end() && !m["zoneIndexRelation"].empty()) {
      map<string, vector<string>> map1 = boost::any_cast<map<string, vector<string>>>(m["zoneIndexRelation"]);
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
      zoneIndexRelation = make_shared<map<string, vector<string>>>(toMap1);
    }
    if (m.find("zoneMetas") != m.end() && !m["zoneMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["zoneMetas"].type()) {
        vector<GetDeployGraphResponseBodyResultGraphZoneMetas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zoneMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeployGraphResponseBodyResultGraphZoneMetas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zoneMetas = make_shared<vector<GetDeployGraphResponseBodyResultGraphZoneMetas>>(expect1);
      }
    }
  }


  virtual ~GetDeployGraphResponseBodyResultGraph() = default;
};
class GetDeployGraphResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<GetDeployGraphResponseBodyResultGraph> graph{};

  GetDeployGraphResponseBodyResult() {}

  explicit GetDeployGraphResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (graph) {
      res["graph"] = graph ? boost::any(graph->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("graph") != m.end() && !m["graph"].empty()) {
      if (typeid(map<string, boost::any>) == m["graph"].type()) {
        GetDeployGraphResponseBodyResultGraph model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["graph"]));
        graph = make_shared<GetDeployGraphResponseBodyResultGraph>(model1);
      }
    }
  }


  virtual ~GetDeployGraphResponseBodyResult() = default;
};
class GetDeployGraphResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetDeployGraphResponseBodyResult> result{};

  GetDeployGraphResponseBody() {}

  explicit GetDeployGraphResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetDeployGraphResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetDeployGraphResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetDeployGraphResponseBody() = default;
};
class GetDeployGraphResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeployGraphResponseBody> body{};

  GetDeployGraphResponse() {}

  explicit GetDeployGraphResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetDeployGraphResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeployGraphResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeployGraphResponse() = default;
};
class GetFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};

  GetFileRequest() {}

  explicit GetFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
  }


  virtual ~GetFileRequest() = default;
};
class GetFileResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> dataSource{};
  shared_ptr<string> fullPathName{};
  shared_ptr<bool> isDir{};
  shared_ptr<string> name{};
  shared_ptr<long> partition{};

  GetFileResponseBodyResult() {}

  explicit GetFileResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (dataSource) {
      res["dataSource"] = boost::any(*dataSource);
    }
    if (fullPathName) {
      res["fullPathName"] = boost::any(*fullPathName);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["dataSource"]));
    }
    if (m.find("fullPathName") != m.end() && !m["fullPathName"].empty()) {
      fullPathName = make_shared<string>(boost::any_cast<string>(m["fullPathName"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
  }


  virtual ~GetFileResponseBodyResult() = default;
};
class GetFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetFileResponseBodyResult> result{};

  GetFileResponseBody() {}

  explicit GetFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetFileResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetFileResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetFileResponseBody() = default;
};
class GetFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileResponseBody> body{};

  GetFileResponse() {}

  explicit GetFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileResponse() = default;
};
class GetIndexResponseBodyResultDataSourceInfoConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  GetIndexResponseBodyResultDataSourceInfoConfig() {}

  explicit GetIndexResponseBodyResultDataSourceInfoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~GetIndexResponseBodyResultDataSourceInfoConfig() = default;
};
class GetIndexResponseBodyResultDataSourceInfoSaroConfig : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> tableName{};

  GetIndexResponseBodyResultDataSourceInfoSaroConfig() {}

  explicit GetIndexResponseBodyResultDataSourceInfoSaroConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~GetIndexResponseBodyResultDataSourceInfoSaroConfig() = default;
};
class GetIndexResponseBodyResultDataSourceInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<GetIndexResponseBodyResultDataSourceInfoConfig> config{};
  shared_ptr<string> domain{};
  shared_ptr<string> name{};
  shared_ptr<long> processPartitionCount{};
  shared_ptr<GetIndexResponseBodyResultDataSourceInfoSaroConfig> saroConfig{};
  shared_ptr<string> type{};

  GetIndexResponseBodyResultDataSourceInfo() {}

  explicit GetIndexResponseBodyResultDataSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processPartitionCount) {
      res["processPartitionCount"] = boost::any(*processPartitionCount);
    }
    if (saroConfig) {
      res["saroConfig"] = saroConfig ? boost::any(saroConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        GetIndexResponseBodyResultDataSourceInfoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<GetIndexResponseBodyResultDataSourceInfoConfig>(model1);
      }
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processPartitionCount") != m.end() && !m["processPartitionCount"].empty()) {
      processPartitionCount = make_shared<long>(boost::any_cast<long>(m["processPartitionCount"]));
    }
    if (m.find("saroConfig") != m.end() && !m["saroConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["saroConfig"].type()) {
        GetIndexResponseBodyResultDataSourceInfoSaroConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saroConfig"]));
        saroConfig = make_shared<GetIndexResponseBodyResultDataSourceInfoSaroConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetIndexResponseBodyResultDataSourceInfo() = default;
};
class GetIndexResponseBodyResultVersionsFiles : public Darabonba::Model {
public:
  shared_ptr<string> fullPathName{};
  shared_ptr<bool> isDir{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> name{};

  GetIndexResponseBodyResultVersionsFiles() {}

  explicit GetIndexResponseBodyResultVersionsFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullPathName) {
      res["fullPathName"] = boost::any(*fullPathName);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (isTemplate) {
      res["isTemplate"] = boost::any(*isTemplate);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fullPathName") != m.end() && !m["fullPathName"].empty()) {
      fullPathName = make_shared<string>(boost::any_cast<string>(m["fullPathName"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("isTemplate") != m.end() && !m["isTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["isTemplate"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~GetIndexResponseBodyResultVersionsFiles() = default;
};
class GetIndexResponseBodyResultVersions : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<vector<GetIndexResponseBodyResultVersionsFiles>> files{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> versionId{};

  GetIndexResponseBodyResultVersions() {}

  explicit GetIndexResponseBodyResultVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["files"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("files") != m.end() && !m["files"].empty()) {
      if (typeid(vector<boost::any>) == m["files"].type()) {
        vector<GetIndexResponseBodyResultVersionsFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetIndexResponseBodyResultVersionsFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<GetIndexResponseBodyResultVersionsFiles>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["versionId"]));
    }
  }


  virtual ~GetIndexResponseBodyResultVersions() = default;
};
class GetIndexResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> dataSource{};
  shared_ptr<GetIndexResponseBodyResultDataSourceInfo> dataSourceInfo{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> fullUpdateTime{};
  shared_ptr<long> fullVersion{};
  shared_ptr<string> incUpdateTime{};
  shared_ptr<long> indexSize{};
  shared_ptr<string> indexStatus{};
  shared_ptr<string> name{};
  shared_ptr<long> partition{};
  shared_ptr<vector<GetIndexResponseBodyResultVersions>> versions{};

  GetIndexResponseBodyResult() {}

  explicit GetIndexResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (dataSource) {
      res["dataSource"] = boost::any(*dataSource);
    }
    if (dataSourceInfo) {
      res["dataSourceInfo"] = dataSourceInfo ? boost::any(dataSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (fullUpdateTime) {
      res["fullUpdateTime"] = boost::any(*fullUpdateTime);
    }
    if (fullVersion) {
      res["fullVersion"] = boost::any(*fullVersion);
    }
    if (incUpdateTime) {
      res["incUpdateTime"] = boost::any(*incUpdateTime);
    }
    if (indexSize) {
      res["indexSize"] = boost::any(*indexSize);
    }
    if (indexStatus) {
      res["indexStatus"] = boost::any(*indexStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["dataSource"]));
    }
    if (m.find("dataSourceInfo") != m.end() && !m["dataSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSourceInfo"].type()) {
        GetIndexResponseBodyResultDataSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSourceInfo"]));
        dataSourceInfo = make_shared<GetIndexResponseBodyResultDataSourceInfo>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("fullUpdateTime") != m.end() && !m["fullUpdateTime"].empty()) {
      fullUpdateTime = make_shared<string>(boost::any_cast<string>(m["fullUpdateTime"]));
    }
    if (m.find("fullVersion") != m.end() && !m["fullVersion"].empty()) {
      fullVersion = make_shared<long>(boost::any_cast<long>(m["fullVersion"]));
    }
    if (m.find("incUpdateTime") != m.end() && !m["incUpdateTime"].empty()) {
      incUpdateTime = make_shared<string>(boost::any_cast<string>(m["incUpdateTime"]));
    }
    if (m.find("indexSize") != m.end() && !m["indexSize"].empty()) {
      indexSize = make_shared<long>(boost::any_cast<long>(m["indexSize"]));
    }
    if (m.find("indexStatus") != m.end() && !m["indexStatus"].empty()) {
      indexStatus = make_shared<string>(boost::any_cast<string>(m["indexStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<GetIndexResponseBodyResultVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetIndexResponseBodyResultVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<GetIndexResponseBodyResultVersions>>(expect1);
      }
    }
  }


  virtual ~GetIndexResponseBodyResult() = default;
};
class GetIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetIndexResponseBodyResult> result{};

  GetIndexResponseBody() {}

  explicit GetIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetIndexResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetIndexResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetIndexResponseBody() = default;
};
class GetIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIndexResponseBody> body{};

  GetIndexResponse() {}

  explicit GetIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexResponse() = default;
};
class GetIndexVersionResponseBodyResultIndexVersions : public Darabonba::Model {
public:
  shared_ptr<string> buildDeployId{};
  shared_ptr<long> currentVersion{};
  shared_ptr<string> indexName{};
  shared_ptr<vector<long>> versions{};

  GetIndexVersionResponseBodyResultIndexVersions() {}

  explicit GetIndexVersionResponseBodyResultIndexVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildDeployId) {
      res["buildDeployId"] = boost::any(*buildDeployId);
    }
    if (currentVersion) {
      res["currentVersion"] = boost::any(*currentVersion);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (versions) {
      res["versions"] = boost::any(*versions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildDeployId") != m.end() && !m["buildDeployId"].empty()) {
      buildDeployId = make_shared<string>(boost::any_cast<string>(m["buildDeployId"]));
    }
    if (m.find("currentVersion") != m.end() && !m["currentVersion"].empty()) {
      currentVersion = make_shared<long>(boost::any_cast<long>(m["currentVersion"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["versions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      versions = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetIndexVersionResponseBodyResultIndexVersions() = default;
};
class GetIndexVersionResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<vector<GetIndexVersionResponseBodyResultIndexVersions>> indexVersions{};

  GetIndexVersionResponseBodyResult() {}

  explicit GetIndexVersionResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (indexVersions) {
      vector<boost::any> temp1;
      for(auto item1:*indexVersions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["indexVersions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("indexVersions") != m.end() && !m["indexVersions"].empty()) {
      if (typeid(vector<boost::any>) == m["indexVersions"].type()) {
        vector<GetIndexVersionResponseBodyResultIndexVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["indexVersions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetIndexVersionResponseBodyResultIndexVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexVersions = make_shared<vector<GetIndexVersionResponseBodyResultIndexVersions>>(expect1);
      }
    }
  }


  virtual ~GetIndexVersionResponseBodyResult() = default;
};
class GetIndexVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetIndexVersionResponseBodyResult> result{};

  GetIndexVersionResponseBody() {}

  explicit GetIndexVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetIndexVersionResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetIndexVersionResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetIndexVersionResponseBody() = default;
};
class GetIndexVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetIndexVersionResponseBody> body{};

  GetIndexVersionResponse() {}

  explicit GetIndexVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetIndexVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetIndexVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetIndexVersionResponse() = default;
};
class GetInstanceResponseBodyResultTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetInstanceResponseBodyResultTags() {}

  explicit GetInstanceResponseBodyResultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~GetInstanceResponseBodyResultTags() = default;
};
class GetInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<bool> inDebt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetInstanceResponseBodyResultTags>> tags{};
  shared_ptr<string> updateTime{};

  GetInstanceResponseBodyResult() {}

  explicit GetInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (inDebt) {
      res["inDebt"] = boost::any(*inDebt);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("inDebt") != m.end() && !m["inDebt"].empty()) {
      inDebt = make_shared<bool>(boost::any_cast<bool>(m["inDebt"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<GetInstanceResponseBodyResultTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInstanceResponseBodyResultTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetInstanceResponseBodyResultTags>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~GetInstanceResponseBodyResult() = default;
};
class GetInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetInstanceResponseBodyResult> result{};

  GetInstanceResponseBody() {}

  explicit GetInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetInstanceResponseBodyResult>(model1);
      }
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
class GetNodeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterName{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  GetNodeConfigRequest() {}

  explicit GetNodeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterName) {
      res["clusterName"] = boost::any(*clusterName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusterName") != m.end() && !m["clusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["clusterName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetNodeConfigRequest() = default;
};
class GetNodeConfigResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> dataDuplicateNumber{};
  shared_ptr<long> dataFragmentNumber{};
  shared_ptr<long> flowRatio{};
  shared_ptr<long> minServicePercent{};
  shared_ptr<bool> published{};

  GetNodeConfigResponseBodyResult() {}

  explicit GetNodeConfigResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (dataDuplicateNumber) {
      res["dataDuplicateNumber"] = boost::any(*dataDuplicateNumber);
    }
    if (dataFragmentNumber) {
      res["dataFragmentNumber"] = boost::any(*dataFragmentNumber);
    }
    if (flowRatio) {
      res["flowRatio"] = boost::any(*flowRatio);
    }
    if (minServicePercent) {
      res["minServicePercent"] = boost::any(*minServicePercent);
    }
    if (published) {
      res["published"] = boost::any(*published);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("dataDuplicateNumber") != m.end() && !m["dataDuplicateNumber"].empty()) {
      dataDuplicateNumber = make_shared<long>(boost::any_cast<long>(m["dataDuplicateNumber"]));
    }
    if (m.find("dataFragmentNumber") != m.end() && !m["dataFragmentNumber"].empty()) {
      dataFragmentNumber = make_shared<long>(boost::any_cast<long>(m["dataFragmentNumber"]));
    }
    if (m.find("flowRatio") != m.end() && !m["flowRatio"].empty()) {
      flowRatio = make_shared<long>(boost::any_cast<long>(m["flowRatio"]));
    }
    if (m.find("minServicePercent") != m.end() && !m["minServicePercent"].empty()) {
      minServicePercent = make_shared<long>(boost::any_cast<long>(m["minServicePercent"]));
    }
    if (m.find("published") != m.end() && !m["published"].empty()) {
      published = make_shared<bool>(boost::any_cast<bool>(m["published"]));
    }
  }


  virtual ~GetNodeConfigResponseBodyResult() = default;
};
class GetNodeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetNodeConfigResponseBodyResult> result{};

  GetNodeConfigResponseBody() {}

  explicit GetNodeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetNodeConfigResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetNodeConfigResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetNodeConfigResponseBody() = default;
};
class GetNodeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeConfigResponseBody> body{};

  GetNodeConfigResponse() {}

  explicit GetNodeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetNodeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeConfigResponse() = default;
};
class GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig : public Darabonba::Model {
public:
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> uid{};

  GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig() {}

  explicit GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossBucket) {
      res["ossBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["ossEndpoint"] = boost::any(*ossEndpoint);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ossBucket") != m.end() && !m["ossBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["ossBucket"]));
    }
    if (m.find("ossEndpoint") != m.end() && !m["ossEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["ossEndpoint"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig() = default;
};
class GetTableResponseBodyResultDataProcessConfigParams : public Darabonba::Model {
public:
  shared_ptr<GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig> srcFieldConfig{};
  shared_ptr<string> vectorModal{};
  shared_ptr<string> vectorModel{};

  GetTableResponseBodyResultDataProcessConfigParams() {}

  explicit GetTableResponseBodyResultDataProcessConfigParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (srcFieldConfig) {
      res["srcFieldConfig"] = srcFieldConfig ? boost::any(srcFieldConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorModal) {
      res["vectorModal"] = boost::any(*vectorModal);
    }
    if (vectorModel) {
      res["vectorModel"] = boost::any(*vectorModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("srcFieldConfig") != m.end() && !m["srcFieldConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["srcFieldConfig"].type()) {
        GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["srcFieldConfig"]));
        srcFieldConfig = make_shared<GetTableResponseBodyResultDataProcessConfigParamsSrcFieldConfig>(model1);
      }
    }
    if (m.find("vectorModal") != m.end() && !m["vectorModal"].empty()) {
      vectorModal = make_shared<string>(boost::any_cast<string>(m["vectorModal"]));
    }
    if (m.find("vectorModel") != m.end() && !m["vectorModel"].empty()) {
      vectorModel = make_shared<string>(boost::any_cast<string>(m["vectorModel"]));
    }
  }


  virtual ~GetTableResponseBodyResultDataProcessConfigParams() = default;
};
class GetTableResponseBodyResultDataProcessConfig : public Darabonba::Model {
public:
  shared_ptr<string> dstField{};
  shared_ptr<string> operator_{};
  shared_ptr<GetTableResponseBodyResultDataProcessConfigParams> params{};
  shared_ptr<string> srcField{};

  GetTableResponseBodyResultDataProcessConfig() {}

  explicit GetTableResponseBodyResultDataProcessConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstField) {
      res["dstField"] = boost::any(*dstField);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (params) {
      res["params"] = params ? boost::any(params->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (srcField) {
      res["srcField"] = boost::any(*srcField);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dstField") != m.end() && !m["dstField"].empty()) {
      dstField = make_shared<string>(boost::any_cast<string>(m["dstField"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      if (typeid(map<string, boost::any>) == m["params"].type()) {
        GetTableResponseBodyResultDataProcessConfigParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["params"]));
        params = make_shared<GetTableResponseBodyResultDataProcessConfigParams>(model1);
      }
    }
    if (m.find("srcField") != m.end() && !m["srcField"].empty()) {
      srcField = make_shared<string>(boost::any_cast<string>(m["srcField"]));
    }
  }


  virtual ~GetTableResponseBodyResultDataProcessConfig() = default;
};
class GetTableResponseBodyResultDataSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  GetTableResponseBodyResultDataSourceConfig() {}

  explicit GetTableResponseBodyResultDataSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~GetTableResponseBodyResultDataSourceConfig() = default;
};
class GetTableResponseBodyResultDataSource : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<GetTableResponseBodyResultDataSourceConfig> config{};
  shared_ptr<long> dataTimeSec{};
  shared_ptr<string> type{};

  GetTableResponseBodyResultDataSource() {}

  explicit GetTableResponseBodyResultDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        GetTableResponseBodyResultDataSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<GetTableResponseBodyResultDataSourceConfig>(model1);
      }
    }
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetTableResponseBodyResultDataSource() = default;
};
class GetTableResponseBodyResultVectorIndexAdvanceParams : public Darabonba::Model {
public:
  shared_ptr<string> buildIndexParams{};
  shared_ptr<string> linearBuildThreshold{};
  shared_ptr<string> minScanDocCnt{};
  shared_ptr<string> searchIndexParams{};

  GetTableResponseBodyResultVectorIndexAdvanceParams() {}

  explicit GetTableResponseBodyResultVectorIndexAdvanceParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildIndexParams) {
      res["buildIndexParams"] = boost::any(*buildIndexParams);
    }
    if (linearBuildThreshold) {
      res["linearBuildThreshold"] = boost::any(*linearBuildThreshold);
    }
    if (minScanDocCnt) {
      res["minScanDocCnt"] = boost::any(*minScanDocCnt);
    }
    if (searchIndexParams) {
      res["searchIndexParams"] = boost::any(*searchIndexParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildIndexParams") != m.end() && !m["buildIndexParams"].empty()) {
      buildIndexParams = make_shared<string>(boost::any_cast<string>(m["buildIndexParams"]));
    }
    if (m.find("linearBuildThreshold") != m.end() && !m["linearBuildThreshold"].empty()) {
      linearBuildThreshold = make_shared<string>(boost::any_cast<string>(m["linearBuildThreshold"]));
    }
    if (m.find("minScanDocCnt") != m.end() && !m["minScanDocCnt"].empty()) {
      minScanDocCnt = make_shared<string>(boost::any_cast<string>(m["minScanDocCnt"]));
    }
    if (m.find("searchIndexParams") != m.end() && !m["searchIndexParams"].empty()) {
      searchIndexParams = make_shared<string>(boost::any_cast<string>(m["searchIndexParams"]));
    }
  }


  virtual ~GetTableResponseBodyResultVectorIndexAdvanceParams() = default;
};
class GetTableResponseBodyResultVectorIndex : public Darabonba::Model {
public:
  shared_ptr<GetTableResponseBodyResultVectorIndexAdvanceParams> advanceParams{};
  shared_ptr<string> dimension{};
  shared_ptr<string> distanceType{};
  shared_ptr<string> indexName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> sparseIndexField{};
  shared_ptr<string> sparseValueField{};
  shared_ptr<string> vectorField{};
  shared_ptr<string> vectorIndexType{};

  GetTableResponseBodyResultVectorIndex() {}

  explicit GetTableResponseBodyResultVectorIndex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceParams) {
      res["advanceParams"] = advanceParams ? boost::any(advanceParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dimension) {
      res["dimension"] = boost::any(*dimension);
    }
    if (distanceType) {
      res["distanceType"] = boost::any(*distanceType);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (sparseIndexField) {
      res["sparseIndexField"] = boost::any(*sparseIndexField);
    }
    if (sparseValueField) {
      res["sparseValueField"] = boost::any(*sparseValueField);
    }
    if (vectorField) {
      res["vectorField"] = boost::any(*vectorField);
    }
    if (vectorIndexType) {
      res["vectorIndexType"] = boost::any(*vectorIndexType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advanceParams") != m.end() && !m["advanceParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["advanceParams"].type()) {
        GetTableResponseBodyResultVectorIndexAdvanceParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["advanceParams"]));
        advanceParams = make_shared<GetTableResponseBodyResultVectorIndexAdvanceParams>(model1);
      }
    }
    if (m.find("dimension") != m.end() && !m["dimension"].empty()) {
      dimension = make_shared<string>(boost::any_cast<string>(m["dimension"]));
    }
    if (m.find("distanceType") != m.end() && !m["distanceType"].empty()) {
      distanceType = make_shared<string>(boost::any_cast<string>(m["distanceType"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("sparseIndexField") != m.end() && !m["sparseIndexField"].empty()) {
      sparseIndexField = make_shared<string>(boost::any_cast<string>(m["sparseIndexField"]));
    }
    if (m.find("sparseValueField") != m.end() && !m["sparseValueField"].empty()) {
      sparseValueField = make_shared<string>(boost::any_cast<string>(m["sparseValueField"]));
    }
    if (m.find("vectorField") != m.end() && !m["vectorField"].empty()) {
      vectorField = make_shared<string>(boost::any_cast<string>(m["vectorField"]));
    }
    if (m.find("vectorIndexType") != m.end() && !m["vectorIndexType"].empty()) {
      vectorIndexType = make_shared<string>(boost::any_cast<string>(m["vectorIndexType"]));
    }
  }


  virtual ~GetTableResponseBodyResultVectorIndex() = default;
};
class GetTableResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<vector<GetTableResponseBodyResultDataProcessConfig>> dataProcessConfig{};
  shared_ptr<long> dataProcessorCount{};
  shared_ptr<GetTableResponseBodyResultDataSource> dataSource{};
  shared_ptr<map<string, string>> fieldSchema{};
  shared_ptr<string> name{};
  shared_ptr<long> partitionCount{};
  shared_ptr<string> primaryKey{};
  shared_ptr<string> rawSchema{};
  shared_ptr<string> status{};
  shared_ptr<vector<GetTableResponseBodyResultVectorIndex>> vectorIndex{};

  GetTableResponseBodyResult() {}

  explicit GetTableResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataProcessConfig) {
      vector<boost::any> temp1;
      for(auto item1:*dataProcessConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataProcessConfig"] = boost::any(temp1);
    }
    if (dataProcessorCount) {
      res["dataProcessorCount"] = boost::any(*dataProcessorCount);
    }
    if (dataSource) {
      res["dataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fieldSchema) {
      res["fieldSchema"] = boost::any(*fieldSchema);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partitionCount) {
      res["partitionCount"] = boost::any(*partitionCount);
    }
    if (primaryKey) {
      res["primaryKey"] = boost::any(*primaryKey);
    }
    if (rawSchema) {
      res["rawSchema"] = boost::any(*rawSchema);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (vectorIndex) {
      vector<boost::any> temp1;
      for(auto item1:*vectorIndex){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vectorIndex"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataProcessConfig") != m.end() && !m["dataProcessConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["dataProcessConfig"].type()) {
        vector<GetTableResponseBodyResultDataProcessConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataProcessConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableResponseBodyResultDataProcessConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataProcessConfig = make_shared<vector<GetTableResponseBodyResultDataProcessConfig>>(expect1);
      }
    }
    if (m.find("dataProcessorCount") != m.end() && !m["dataProcessorCount"].empty()) {
      dataProcessorCount = make_shared<long>(boost::any_cast<long>(m["dataProcessorCount"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSource"].type()) {
        GetTableResponseBodyResultDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSource"]));
        dataSource = make_shared<GetTableResponseBodyResultDataSource>(model1);
      }
    }
    if (m.find("fieldSchema") != m.end() && !m["fieldSchema"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["fieldSchema"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      fieldSchema = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partitionCount") != m.end() && !m["partitionCount"].empty()) {
      partitionCount = make_shared<long>(boost::any_cast<long>(m["partitionCount"]));
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      primaryKey = make_shared<string>(boost::any_cast<string>(m["primaryKey"]));
    }
    if (m.find("rawSchema") != m.end() && !m["rawSchema"].empty()) {
      rawSchema = make_shared<string>(boost::any_cast<string>(m["rawSchema"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("vectorIndex") != m.end() && !m["vectorIndex"].empty()) {
      if (typeid(vector<boost::any>) == m["vectorIndex"].type()) {
        vector<GetTableResponseBodyResultVectorIndex> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vectorIndex"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTableResponseBodyResultVectorIndex model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vectorIndex = make_shared<vector<GetTableResponseBodyResultVectorIndex>>(expect1);
      }
    }
  }


  virtual ~GetTableResponseBodyResult() = default;
};
class GetTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTableResponseBodyResult> result{};

  GetTableResponseBody() {}

  explicit GetTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetTableResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetTableResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetTableResponseBody() = default;
};
class GetTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableResponseBody> body{};

  GetTableResponse() {}

  explicit GetTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableResponse() = default;
};
class GetTableGenerationResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> generationId{};
  shared_ptr<string> status{};

  GetTableGenerationResponseBodyResult() {}

  explicit GetTableGenerationResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generationId) {
      res["generationId"] = boost::any(*generationId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generationId") != m.end() && !m["generationId"].empty()) {
      generationId = make_shared<long>(boost::any_cast<long>(m["generationId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetTableGenerationResponseBodyResult() = default;
};
class GetTableGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetTableGenerationResponseBodyResult> result{};

  GetTableGenerationResponseBody() {}

  explicit GetTableGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        GetTableGenerationResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<GetTableGenerationResponseBodyResult>(model1);
      }
    }
  }


  virtual ~GetTableGenerationResponseBody() = default;
};
class GetTableGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTableGenerationResponseBody> body{};

  GetTableGenerationResponse() {}

  explicit GetTableGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetTableGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTableGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~GetTableGenerationResponse() = default;
};
class ListAdvanceConfigDirRequest : public Darabonba::Model {
public:
  shared_ptr<string> dirName{};

  ListAdvanceConfigDirRequest() {}

  explicit ListAdvanceConfigDirRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dirName) {
      res["dirName"] = boost::any(*dirName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dirName") != m.end() && !m["dirName"].empty()) {
      dirName = make_shared<string>(boost::any_cast<string>(m["dirName"]));
    }
  }


  virtual ~ListAdvanceConfigDirRequest() = default;
};
class ListAdvanceConfigDirResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> fullPathName{};
  shared_ptr<bool> isDir{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> name{};

  ListAdvanceConfigDirResponseBodyResult() {}

  explicit ListAdvanceConfigDirResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullPathName) {
      res["fullPathName"] = boost::any(*fullPathName);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (isTemplate) {
      res["isTemplate"] = boost::any(*isTemplate);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fullPathName") != m.end() && !m["fullPathName"].empty()) {
      fullPathName = make_shared<string>(boost::any_cast<string>(m["fullPathName"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("isTemplate") != m.end() && !m["isTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["isTemplate"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListAdvanceConfigDirResponseBodyResult() = default;
};
class ListAdvanceConfigDirResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAdvanceConfigDirResponseBodyResult>> result{};

  ListAdvanceConfigDirResponseBody() {}

  explicit ListAdvanceConfigDirResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListAdvanceConfigDirResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvanceConfigDirResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAdvanceConfigDirResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListAdvanceConfigDirResponseBody() = default;
};
class ListAdvanceConfigDirResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAdvanceConfigDirResponseBody> body{};

  ListAdvanceConfigDirResponse() {}

  explicit ListAdvanceConfigDirResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAdvanceConfigDirResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAdvanceConfigDirResponseBody>(model1);
      }
    }
  }


  virtual ~ListAdvanceConfigDirResponse() = default;
};
class ListAdvanceConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> indexName{};
  shared_ptr<string> type{};

  ListAdvanceConfigsRequest() {}

  explicit ListAdvanceConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["dataSourceName"] = boost::any(*dataSourceName);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSourceName") != m.end() && !m["dataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["dataSourceName"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAdvanceConfigsRequest() = default;
};
class ListAdvanceConfigsResponseBodyResultFiles : public Darabonba::Model {
public:
  shared_ptr<string> fullPathName{};
  shared_ptr<bool> isDir{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> name{};

  ListAdvanceConfigsResponseBodyResultFiles() {}

  explicit ListAdvanceConfigsResponseBodyResultFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullPathName) {
      res["fullPathName"] = boost::any(*fullPathName);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (isTemplate) {
      res["isTemplate"] = boost::any(*isTemplate);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fullPathName") != m.end() && !m["fullPathName"].empty()) {
      fullPathName = make_shared<string>(boost::any_cast<string>(m["fullPathName"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("isTemplate") != m.end() && !m["isTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["isTemplate"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListAdvanceConfigsResponseBodyResultFiles() = default;
};
class ListAdvanceConfigsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> desc{};
  shared_ptr<vector<ListAdvanceConfigsResponseBodyResultFiles>> files{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};

  ListAdvanceConfigsResponseBodyResult() {}

  explicit ListAdvanceConfigsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (contentType) {
      res["contentType"] = boost::any(*contentType);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["files"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("contentType") != m.end() && !m["contentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["contentType"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("files") != m.end() && !m["files"].empty()) {
      if (typeid(vector<boost::any>) == m["files"].type()) {
        vector<ListAdvanceConfigsResponseBodyResultFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvanceConfigsResponseBodyResultFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<ListAdvanceConfigsResponseBodyResultFiles>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
  }


  virtual ~ListAdvanceConfigsResponseBodyResult() = default;
};
class ListAdvanceConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListAdvanceConfigsResponseBodyResult>> result{};

  ListAdvanceConfigsResponseBody() {}

  explicit ListAdvanceConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListAdvanceConfigsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAdvanceConfigsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListAdvanceConfigsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListAdvanceConfigsResponseBody() = default;
};
class ListAdvanceConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAdvanceConfigsResponseBody> body{};

  ListAdvanceConfigsResponse() {}

  explicit ListAdvanceConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListAdvanceConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAdvanceConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAdvanceConfigsResponse() = default;
};
class ListClusterNamesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};

  ListClusterNamesResponseBodyResult() {}

  explicit ListClusterNamesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListClusterNamesResponseBodyResult() = default;
};
class ListClusterNamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ListClusterNamesResponseBodyResult> result{};

  ListClusterNamesResponseBody() {}

  explicit ListClusterNamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ListClusterNamesResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ListClusterNamesResponseBodyResult>(model1);
      }
    }
  }


  virtual ~ListClusterNamesResponseBody() = default;
};
class ListClusterNamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterNamesResponseBody> body{};

  ListClusterNamesResponse() {}

  explicit ListClusterNamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterNamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterNamesResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterNamesResponse() = default;
};
class ListClusterTasksResponseBodyResultTags : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> tagLevel{};

  ListClusterTasksResponseBodyResultTags() {}

  explicit ListClusterTasksResponseBodyResultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (tagLevel) {
      res["tagLevel"] = boost::any(*tagLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("tagLevel") != m.end() && !m["tagLevel"].empty()) {
      tagLevel = make_shared<string>(boost::any_cast<string>(m["tagLevel"]));
    }
  }


  virtual ~ListClusterTasksResponseBodyResultTags() = default;
};
class ListClusterTasksResponseBodyResultTaskNodes : public Darabonba::Model {
public:
  shared_ptr<string> finishDate{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  ListClusterTasksResponseBodyResultTaskNodes() {}

  explicit ListClusterTasksResponseBodyResultTaskNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishDate) {
      res["finishDate"] = boost::any(*finishDate);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishDate") != m.end() && !m["finishDate"].empty()) {
      finishDate = make_shared<string>(boost::any_cast<string>(m["finishDate"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListClusterTasksResponseBodyResultTaskNodes() = default;
};
class ListClusterTasksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extraAttribute{};
  shared_ptr<string> field3{};
  shared_ptr<string> fsmId{};
  shared_ptr<string> groupType{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListClusterTasksResponseBodyResultTags>> tags{};
  shared_ptr<vector<ListClusterTasksResponseBodyResultTaskNodes>> taskNodes{};
  shared_ptr<string> time{};
  shared_ptr<string> type{};
  shared_ptr<string> user{};

  ListClusterTasksResponseBodyResult() {}

  explicit ListClusterTasksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraAttribute) {
      res["extraAttribute"] = boost::any(*extraAttribute);
    }
    if (field3) {
      res["field3"] = boost::any(*field3);
    }
    if (fsmId) {
      res["fsmId"] = boost::any(*fsmId);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskNodes) {
      vector<boost::any> temp1;
      for(auto item1:*taskNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskNodes"] = boost::any(temp1);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extraAttribute") != m.end() && !m["extraAttribute"].empty()) {
      extraAttribute = make_shared<string>(boost::any_cast<string>(m["extraAttribute"]));
    }
    if (m.find("field3") != m.end() && !m["field3"].empty()) {
      field3 = make_shared<string>(boost::any_cast<string>(m["field3"]));
    }
    if (m.find("fsmId") != m.end() && !m["fsmId"].empty()) {
      fsmId = make_shared<string>(boost::any_cast<string>(m["fsmId"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListClusterTasksResponseBodyResultTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterTasksResponseBodyResultTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListClusterTasksResponseBodyResultTags>>(expect1);
      }
    }
    if (m.find("taskNodes") != m.end() && !m["taskNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["taskNodes"].type()) {
        vector<ListClusterTasksResponseBodyResultTaskNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterTasksResponseBodyResultTaskNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskNodes = make_shared<vector<ListClusterTasksResponseBodyResultTaskNodes>>(expect1);
      }
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ListClusterTasksResponseBodyResult() = default;
};
class ListClusterTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListClusterTasksResponseBodyResult>> result{};

  ListClusterTasksResponseBody() {}

  explicit ListClusterTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListClusterTasksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClusterTasksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListClusterTasksResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListClusterTasksResponseBody() = default;
};
class ListClusterTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClusterTasksResponseBody> body{};

  ListClusterTasksResponse() {}

  explicit ListClusterTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClusterTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClusterTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListClusterTasksResponse() = default;
};
class ListClustersResponseBodyResultDataNode : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<long> partition{};

  ListClustersResponseBodyResultDataNode() {}

  explicit ListClustersResponseBodyResultDataNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
  }


  virtual ~ListClustersResponseBodyResultDataNode() = default;
};
class ListClustersResponseBodyResultQueryNode : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> number{};
  shared_ptr<long> partition{};

  ListClustersResponseBodyResultQueryNode() {}

  explicit ListClustersResponseBodyResultQueryNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (number) {
      res["number"] = boost::any(*number);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("number") != m.end() && !m["number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["number"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
  }


  virtual ~ListClustersResponseBodyResultQueryNode() = default;
};
class ListClustersResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> configUpdateTime{};
  shared_ptr<string> currentAdvanceConfigVersion{};
  shared_ptr<string> currentOfflineDictConfigVersion{};
  shared_ptr<string> currentOnlineConfigVersion{};
  shared_ptr<string> currentOnlineQueryConfigVersion{};
  shared_ptr<ListClustersResponseBodyResultDataNode> dataNode{};
  shared_ptr<string> description{};
  shared_ptr<string> latestAdvanceConfigVersion{};
  shared_ptr<string> latestOfflineDictConfigVersion{};
  shared_ptr<string> latestOnlineConfigVersion{};
  shared_ptr<string> latestOnlineQueryConfigVersion{};
  shared_ptr<string> name{};
  shared_ptr<ListClustersResponseBodyResultQueryNode> queryNode{};
  shared_ptr<string> status{};

  ListClustersResponseBodyResult() {}

  explicit ListClustersResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configUpdateTime) {
      res["configUpdateTime"] = boost::any(*configUpdateTime);
    }
    if (currentAdvanceConfigVersion) {
      res["currentAdvanceConfigVersion"] = boost::any(*currentAdvanceConfigVersion);
    }
    if (currentOfflineDictConfigVersion) {
      res["currentOfflineDictConfigVersion"] = boost::any(*currentOfflineDictConfigVersion);
    }
    if (currentOnlineConfigVersion) {
      res["currentOnlineConfigVersion"] = boost::any(*currentOnlineConfigVersion);
    }
    if (currentOnlineQueryConfigVersion) {
      res["currentOnlineQueryConfigVersion"] = boost::any(*currentOnlineQueryConfigVersion);
    }
    if (dataNode) {
      res["dataNode"] = dataNode ? boost::any(dataNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (latestAdvanceConfigVersion) {
      res["latestAdvanceConfigVersion"] = boost::any(*latestAdvanceConfigVersion);
    }
    if (latestOfflineDictConfigVersion) {
      res["latestOfflineDictConfigVersion"] = boost::any(*latestOfflineDictConfigVersion);
    }
    if (latestOnlineConfigVersion) {
      res["latestOnlineConfigVersion"] = boost::any(*latestOnlineConfigVersion);
    }
    if (latestOnlineQueryConfigVersion) {
      res["latestOnlineQueryConfigVersion"] = boost::any(*latestOnlineQueryConfigVersion);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (queryNode) {
      res["queryNode"] = queryNode ? boost::any(queryNode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("configUpdateTime") != m.end() && !m["configUpdateTime"].empty()) {
      configUpdateTime = make_shared<string>(boost::any_cast<string>(m["configUpdateTime"]));
    }
    if (m.find("currentAdvanceConfigVersion") != m.end() && !m["currentAdvanceConfigVersion"].empty()) {
      currentAdvanceConfigVersion = make_shared<string>(boost::any_cast<string>(m["currentAdvanceConfigVersion"]));
    }
    if (m.find("currentOfflineDictConfigVersion") != m.end() && !m["currentOfflineDictConfigVersion"].empty()) {
      currentOfflineDictConfigVersion = make_shared<string>(boost::any_cast<string>(m["currentOfflineDictConfigVersion"]));
    }
    if (m.find("currentOnlineConfigVersion") != m.end() && !m["currentOnlineConfigVersion"].empty()) {
      currentOnlineConfigVersion = make_shared<string>(boost::any_cast<string>(m["currentOnlineConfigVersion"]));
    }
    if (m.find("currentOnlineQueryConfigVersion") != m.end() && !m["currentOnlineQueryConfigVersion"].empty()) {
      currentOnlineQueryConfigVersion = make_shared<string>(boost::any_cast<string>(m["currentOnlineQueryConfigVersion"]));
    }
    if (m.find("dataNode") != m.end() && !m["dataNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataNode"].type()) {
        ListClustersResponseBodyResultDataNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataNode"]));
        dataNode = make_shared<ListClustersResponseBodyResultDataNode>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("latestAdvanceConfigVersion") != m.end() && !m["latestAdvanceConfigVersion"].empty()) {
      latestAdvanceConfigVersion = make_shared<string>(boost::any_cast<string>(m["latestAdvanceConfigVersion"]));
    }
    if (m.find("latestOfflineDictConfigVersion") != m.end() && !m["latestOfflineDictConfigVersion"].empty()) {
      latestOfflineDictConfigVersion = make_shared<string>(boost::any_cast<string>(m["latestOfflineDictConfigVersion"]));
    }
    if (m.find("latestOnlineConfigVersion") != m.end() && !m["latestOnlineConfigVersion"].empty()) {
      latestOnlineConfigVersion = make_shared<string>(boost::any_cast<string>(m["latestOnlineConfigVersion"]));
    }
    if (m.find("latestOnlineQueryConfigVersion") != m.end() && !m["latestOnlineQueryConfigVersion"].empty()) {
      latestOnlineQueryConfigVersion = make_shared<string>(boost::any_cast<string>(m["latestOnlineQueryConfigVersion"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("queryNode") != m.end() && !m["queryNode"].empty()) {
      if (typeid(map<string, boost::any>) == m["queryNode"].type()) {
        ListClustersResponseBodyResultQueryNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["queryNode"]));
        queryNode = make_shared<ListClustersResponseBodyResultQueryNode>(model1);
      }
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListClustersResponseBodyResult() = default;
};
class ListClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListClustersResponseBodyResult>> result{};

  ListClustersResponseBody() {}

  explicit ListClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListClustersResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListClustersResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListClustersResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListClustersResponseBody() = default;
};
class ListClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListClustersResponseBody> body{};

  ListClustersResponse() {}

  explicit ListClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListClustersResponseBody>(model1);
      }
    }
  }


  virtual ~ListClustersResponse() = default;
};
class ListDataSourceSchemasResponseBodyResultPrimaryKey : public Darabonba::Model {
public:
  shared_ptr<bool> hasPrimaryKeyAttribute{};
  shared_ptr<bool> isPrimaryKey{};
  shared_ptr<bool> isPrimaryKeySorted{};

  ListDataSourceSchemasResponseBodyResultPrimaryKey() {}

  explicit ListDataSourceSchemasResponseBodyResultPrimaryKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hasPrimaryKeyAttribute) {
      res["hasPrimaryKeyAttribute"] = boost::any(*hasPrimaryKeyAttribute);
    }
    if (isPrimaryKey) {
      res["isPrimaryKey"] = boost::any(*isPrimaryKey);
    }
    if (isPrimaryKeySorted) {
      res["isPrimaryKeySorted"] = boost::any(*isPrimaryKeySorted);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("hasPrimaryKeyAttribute") != m.end() && !m["hasPrimaryKeyAttribute"].empty()) {
      hasPrimaryKeyAttribute = make_shared<bool>(boost::any_cast<bool>(m["hasPrimaryKeyAttribute"]));
    }
    if (m.find("isPrimaryKey") != m.end() && !m["isPrimaryKey"].empty()) {
      isPrimaryKey = make_shared<bool>(boost::any_cast<bool>(m["isPrimaryKey"]));
    }
    if (m.find("isPrimaryKeySorted") != m.end() && !m["isPrimaryKeySorted"].empty()) {
      isPrimaryKeySorted = make_shared<bool>(boost::any_cast<bool>(m["isPrimaryKeySorted"]));
    }
  }


  virtual ~ListDataSourceSchemasResponseBodyResultPrimaryKey() = default;
};
class ListDataSourceSchemasResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<bool> addIndex{};
  shared_ptr<bool> attribute{};
  shared_ptr<bool> custom{};
  shared_ptr<string> name{};
  shared_ptr<ListDataSourceSchemasResponseBodyResultPrimaryKey> primaryKey{};
  shared_ptr<bool> summary{};
  shared_ptr<string> type{};

  ListDataSourceSchemasResponseBodyResult() {}

  explicit ListDataSourceSchemasResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addIndex) {
      res["addIndex"] = boost::any(*addIndex);
    }
    if (attribute) {
      res["attribute"] = boost::any(*attribute);
    }
    if (custom) {
      res["custom"] = boost::any(*custom);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (primaryKey) {
      res["primaryKey"] = primaryKey ? boost::any(primaryKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (summary) {
      res["summary"] = boost::any(*summary);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("addIndex") != m.end() && !m["addIndex"].empty()) {
      addIndex = make_shared<bool>(boost::any_cast<bool>(m["addIndex"]));
    }
    if (m.find("attribute") != m.end() && !m["attribute"].empty()) {
      attribute = make_shared<bool>(boost::any_cast<bool>(m["attribute"]));
    }
    if (m.find("custom") != m.end() && !m["custom"].empty()) {
      custom = make_shared<bool>(boost::any_cast<bool>(m["custom"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["primaryKey"].type()) {
        ListDataSourceSchemasResponseBodyResultPrimaryKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["primaryKey"]));
        primaryKey = make_shared<ListDataSourceSchemasResponseBodyResultPrimaryKey>(model1);
      }
    }
    if (m.find("summary") != m.end() && !m["summary"].empty()) {
      summary = make_shared<bool>(boost::any_cast<bool>(m["summary"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListDataSourceSchemasResponseBodyResult() = default;
};
class ListDataSourceSchemasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourceSchemasResponseBodyResult>> result{};

  ListDataSourceSchemasResponseBody() {}

  explicit ListDataSourceSchemasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDataSourceSchemasResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceSchemasResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataSourceSchemasResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDataSourceSchemasResponseBody() = default;
};
class ListDataSourceSchemasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceSchemasResponseBody> body{};

  ListDataSourceSchemasResponse() {}

  explicit ListDataSourceSchemasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourceSchemasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceSchemasResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceSchemasResponse() = default;
};
class ListDataSourceTasksResponseBodyResultTags : public Darabonba::Model {
public:
  shared_ptr<string> msg{};
  shared_ptr<string> tagLevel{};

  ListDataSourceTasksResponseBodyResultTags() {}

  explicit ListDataSourceTasksResponseBodyResultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msg) {
      res["msg"] = boost::any(*msg);
    }
    if (tagLevel) {
      res["tagLevel"] = boost::any(*tagLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("msg") != m.end() && !m["msg"].empty()) {
      msg = make_shared<string>(boost::any_cast<string>(m["msg"]));
    }
    if (m.find("tagLevel") != m.end() && !m["tagLevel"].empty()) {
      tagLevel = make_shared<string>(boost::any_cast<string>(m["tagLevel"]));
    }
  }


  virtual ~ListDataSourceTasksResponseBodyResultTags() = default;
};
class ListDataSourceTasksResponseBodyResultTaskNodes : public Darabonba::Model {
public:
  shared_ptr<string> finishDate{};
  shared_ptr<long> index{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  ListDataSourceTasksResponseBodyResultTaskNodes() {}

  explicit ListDataSourceTasksResponseBodyResultTaskNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishDate) {
      res["finishDate"] = boost::any(*finishDate);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishDate") != m.end() && !m["finishDate"].empty()) {
      finishDate = make_shared<string>(boost::any_cast<string>(m["finishDate"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListDataSourceTasksResponseBodyResultTaskNodes() = default;
};
class ListDataSourceTasksResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> extraAttribute{};
  shared_ptr<string> field3{};
  shared_ptr<string> fsmId{};
  shared_ptr<string> groupType{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListDataSourceTasksResponseBodyResultTags>> tags{};
  shared_ptr<vector<ListDataSourceTasksResponseBodyResultTaskNodes>> taskNodes{};
  shared_ptr<string> time{};
  shared_ptr<string> type{};
  shared_ptr<string> user{};

  ListDataSourceTasksResponseBodyResult() {}

  explicit ListDataSourceTasksResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraAttribute) {
      res["extraAttribute"] = boost::any(*extraAttribute);
    }
    if (field3) {
      res["field3"] = boost::any(*field3);
    }
    if (fsmId) {
      res["fsmId"] = boost::any(*fsmId);
    }
    if (groupType) {
      res["groupType"] = boost::any(*groupType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (taskNodes) {
      vector<boost::any> temp1;
      for(auto item1:*taskNodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskNodes"] = boost::any(temp1);
    }
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extraAttribute") != m.end() && !m["extraAttribute"].empty()) {
      extraAttribute = make_shared<string>(boost::any_cast<string>(m["extraAttribute"]));
    }
    if (m.find("field3") != m.end() && !m["field3"].empty()) {
      field3 = make_shared<string>(boost::any_cast<string>(m["field3"]));
    }
    if (m.find("fsmId") != m.end() && !m["fsmId"].empty()) {
      fsmId = make_shared<string>(boost::any_cast<string>(m["fsmId"]));
    }
    if (m.find("groupType") != m.end() && !m["groupType"].empty()) {
      groupType = make_shared<string>(boost::any_cast<string>(m["groupType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListDataSourceTasksResponseBodyResultTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceTasksResponseBodyResultTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListDataSourceTasksResponseBodyResultTags>>(expect1);
      }
    }
    if (m.find("taskNodes") != m.end() && !m["taskNodes"].empty()) {
      if (typeid(vector<boost::any>) == m["taskNodes"].type()) {
        vector<ListDataSourceTasksResponseBodyResultTaskNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskNodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceTasksResponseBodyResultTaskNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskNodes = make_shared<vector<ListDataSourceTasksResponseBodyResultTaskNodes>>(expect1);
      }
    }
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["time"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ListDataSourceTasksResponseBodyResult() = default;
};
class ListDataSourceTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourceTasksResponseBodyResult>> result{};

  ListDataSourceTasksResponseBody() {}

  explicit ListDataSourceTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDataSourceTasksResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceTasksResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataSourceTasksResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDataSourceTasksResponseBody() = default;
};
class ListDataSourceTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceTasksResponseBody> body{};

  ListDataSourceTasksResponse() {}

  explicit ListDataSourceTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourceTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceTasksResponse() = default;
};
class ListDataSourcesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> domain{};
  shared_ptr<vector<string>> indexes{};
  shared_ptr<long> lastFulTime{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListDataSourcesResponseBodyResult() {}

  explicit ListDataSourcesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (indexes) {
      res["indexes"] = boost::any(*indexes);
    }
    if (lastFulTime) {
      res["lastFulTime"] = boost::any(*lastFulTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("indexes") != m.end() && !m["indexes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["indexes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["indexes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      indexes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("lastFulTime") != m.end() && !m["lastFulTime"].empty()) {
      lastFulTime = make_shared<long>(boost::any_cast<long>(m["lastFulTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListDataSourcesResponseBodyResult() = default;
};
class ListDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDataSourcesResponseBodyResult>> result{};

  ListDataSourcesResponseBody() {}

  explicit ListDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDataSourcesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourcesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDataSourcesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDataSourcesResponseBody() = default;
};
class ListDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourcesResponseBody> body{};

  ListDataSourcesResponse() {}

  explicit ListDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourcesResponse() = default;
};
class ListDateSourceGenerationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<bool> validStatus{};

  ListDateSourceGenerationsRequest() {}

  explicit ListDateSourceGenerationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (validStatus) {
      res["validStatus"] = boost::any(*validStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("validStatus") != m.end() && !m["validStatus"].empty()) {
      validStatus = make_shared<bool>(boost::any_cast<bool>(m["validStatus"]));
    }
  }


  virtual ~ListDateSourceGenerationsRequest() = default;
};
class ListDateSourceGenerationsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> buildDeployId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> dataDumpRoot{};
  shared_ptr<long> generation{};
  shared_ptr<map<string, long>> partition{};
  shared_ptr<string> status{};
  shared_ptr<long> timestamp{};

  ListDateSourceGenerationsResponseBodyResult() {}

  explicit ListDateSourceGenerationsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildDeployId) {
      res["buildDeployId"] = boost::any(*buildDeployId);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (dataDumpRoot) {
      res["dataDumpRoot"] = boost::any(*dataDumpRoot);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildDeployId") != m.end() && !m["buildDeployId"].empty()) {
      buildDeployId = make_shared<long>(boost::any_cast<long>(m["buildDeployId"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("dataDumpRoot") != m.end() && !m["dataDumpRoot"].empty()) {
      dataDumpRoot = make_shared<string>(boost::any_cast<string>(m["dataDumpRoot"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["partition"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      partition = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["timestamp"]));
    }
  }


  virtual ~ListDateSourceGenerationsResponseBodyResult() = default;
};
class ListDateSourceGenerationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDateSourceGenerationsResponseBodyResult>> result{};

  ListDateSourceGenerationsResponseBody() {}

  explicit ListDateSourceGenerationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListDateSourceGenerationsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDateSourceGenerationsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListDateSourceGenerationsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListDateSourceGenerationsResponseBody() = default;
};
class ListDateSourceGenerationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDateSourceGenerationsResponseBody> body{};

  ListDateSourceGenerationsResponse() {}

  explicit ListDateSourceGenerationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListDateSourceGenerationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDateSourceGenerationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDateSourceGenerationsResponse() = default;
};
class ListIndexesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> newMode{};

  ListIndexesRequest() {}

  explicit ListIndexesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newMode) {
      res["newMode"] = boost::any(*newMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("newMode") != m.end() && !m["newMode"].empty()) {
      newMode = make_shared<bool>(boost::any_cast<bool>(m["newMode"]));
    }
  }


  virtual ~ListIndexesRequest() = default;
};
class ListIndexesResponseBodyResultDataSourceInfoConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> path{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  ListIndexesResponseBodyResultDataSourceInfoConfig() {}

  explicit ListIndexesResponseBodyResultDataSourceInfoConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (path) {
      res["path"] = boost::any(*path);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("path") != m.end() && !m["path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["path"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~ListIndexesResponseBodyResultDataSourceInfoConfig() = default;
};
class ListIndexesResponseBodyResultDataSourceInfoSaroConfig : public Darabonba::Model {
public:
  shared_ptr<string> namespace_{};
  shared_ptr<string> tableName{};

  ListIndexesResponseBodyResultDataSourceInfoSaroConfig() {}

  explicit ListIndexesResponseBodyResultDataSourceInfoSaroConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (tableName) {
      res["tableName"] = boost::any(*tableName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("tableName") != m.end() && !m["tableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["tableName"]));
    }
  }


  virtual ~ListIndexesResponseBodyResultDataSourceInfoSaroConfig() = default;
};
class ListIndexesResponseBodyResultDataSourceInfo : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<ListIndexesResponseBodyResultDataSourceInfoConfig> config{};
  shared_ptr<string> domain{};
  shared_ptr<string> name{};
  shared_ptr<long> processPartitionCount{};
  shared_ptr<ListIndexesResponseBodyResultDataSourceInfoSaroConfig> saroConfig{};
  shared_ptr<string> type{};

  ListIndexesResponseBodyResultDataSourceInfo() {}

  explicit ListIndexesResponseBodyResultDataSourceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (processPartitionCount) {
      res["processPartitionCount"] = boost::any(*processPartitionCount);
    }
    if (saroConfig) {
      res["saroConfig"] = saroConfig ? boost::any(saroConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        ListIndexesResponseBodyResultDataSourceInfoConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<ListIndexesResponseBodyResultDataSourceInfoConfig>(model1);
      }
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("processPartitionCount") != m.end() && !m["processPartitionCount"].empty()) {
      processPartitionCount = make_shared<long>(boost::any_cast<long>(m["processPartitionCount"]));
    }
    if (m.find("saroConfig") != m.end() && !m["saroConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["saroConfig"].type()) {
        ListIndexesResponseBodyResultDataSourceInfoSaroConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["saroConfig"]));
        saroConfig = make_shared<ListIndexesResponseBodyResultDataSourceInfoSaroConfig>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListIndexesResponseBodyResultDataSourceInfo() = default;
};
class ListIndexesResponseBodyResultVersionsFiles : public Darabonba::Model {
public:
  shared_ptr<string> fullPathName{};
  shared_ptr<bool> isDir{};
  shared_ptr<bool> isTemplate{};
  shared_ptr<string> name{};

  ListIndexesResponseBodyResultVersionsFiles() {}

  explicit ListIndexesResponseBodyResultVersionsFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fullPathName) {
      res["fullPathName"] = boost::any(*fullPathName);
    }
    if (isDir) {
      res["isDir"] = boost::any(*isDir);
    }
    if (isTemplate) {
      res["isTemplate"] = boost::any(*isTemplate);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fullPathName") != m.end() && !m["fullPathName"].empty()) {
      fullPathName = make_shared<string>(boost::any_cast<string>(m["fullPathName"]));
    }
    if (m.find("isDir") != m.end() && !m["isDir"].empty()) {
      isDir = make_shared<bool>(boost::any_cast<bool>(m["isDir"]));
    }
    if (m.find("isTemplate") != m.end() && !m["isTemplate"].empty()) {
      isTemplate = make_shared<bool>(boost::any_cast<bool>(m["isTemplate"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~ListIndexesResponseBodyResultVersionsFiles() = default;
};
class ListIndexesResponseBodyResultVersions : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<vector<ListIndexesResponseBodyResultVersionsFiles>> files{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> versionId{};

  ListIndexesResponseBodyResultVersions() {}

  explicit ListIndexesResponseBodyResultVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["files"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (versionId) {
      res["versionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("files") != m.end() && !m["files"].empty()) {
      if (typeid(vector<boost::any>) == m["files"].type()) {
        vector<ListIndexesResponseBodyResultVersionsFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexesResponseBodyResultVersionsFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<ListIndexesResponseBodyResultVersionsFiles>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("versionId") != m.end() && !m["versionId"].empty()) {
      versionId = make_shared<long>(boost::any_cast<long>(m["versionId"]));
    }
  }


  virtual ~ListIndexesResponseBodyResultVersions() = default;
};
class ListIndexesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> dataSource{};
  shared_ptr<ListIndexesResponseBodyResultDataSourceInfo> dataSourceInfo{};
  shared_ptr<string> description{};
  shared_ptr<string> domain{};
  shared_ptr<string> fullUpdateTime{};
  shared_ptr<long> fullVersion{};
  shared_ptr<string> incUpdateTime{};
  shared_ptr<long> indexSize{};
  shared_ptr<string> indexStatus{};
  shared_ptr<string> name{};
  shared_ptr<long> partition{};
  shared_ptr<vector<ListIndexesResponseBodyResultVersions>> versions{};

  ListIndexesResponseBodyResult() {}

  explicit ListIndexesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (dataSource) {
      res["dataSource"] = boost::any(*dataSource);
    }
    if (dataSourceInfo) {
      res["dataSourceInfo"] = dataSourceInfo ? boost::any(dataSourceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (fullUpdateTime) {
      res["fullUpdateTime"] = boost::any(*fullUpdateTime);
    }
    if (fullVersion) {
      res["fullVersion"] = boost::any(*fullVersion);
    }
    if (incUpdateTime) {
      res["incUpdateTime"] = boost::any(*incUpdateTime);
    }
    if (indexSize) {
      res["indexSize"] = boost::any(*indexSize);
    }
    if (indexStatus) {
      res["indexStatus"] = boost::any(*indexStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      dataSource = make_shared<string>(boost::any_cast<string>(m["dataSource"]));
    }
    if (m.find("dataSourceInfo") != m.end() && !m["dataSourceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSourceInfo"].type()) {
        ListIndexesResponseBodyResultDataSourceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSourceInfo"]));
        dataSourceInfo = make_shared<ListIndexesResponseBodyResultDataSourceInfo>(model1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("fullUpdateTime") != m.end() && !m["fullUpdateTime"].empty()) {
      fullUpdateTime = make_shared<string>(boost::any_cast<string>(m["fullUpdateTime"]));
    }
    if (m.find("fullVersion") != m.end() && !m["fullVersion"].empty()) {
      fullVersion = make_shared<long>(boost::any_cast<long>(m["fullVersion"]));
    }
    if (m.find("incUpdateTime") != m.end() && !m["incUpdateTime"].empty()) {
      incUpdateTime = make_shared<string>(boost::any_cast<string>(m["incUpdateTime"]));
    }
    if (m.find("indexSize") != m.end() && !m["indexSize"].empty()) {
      indexSize = make_shared<long>(boost::any_cast<long>(m["indexSize"]));
    }
    if (m.find("indexStatus") != m.end() && !m["indexStatus"].empty()) {
      indexStatus = make_shared<string>(boost::any_cast<string>(m["indexStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<ListIndexesResponseBodyResultVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexesResponseBodyResultVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListIndexesResponseBodyResultVersions>>(expect1);
      }
    }
  }


  virtual ~ListIndexesResponseBodyResult() = default;
};
class ListIndexesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListIndexesResponseBodyResult>> result{};

  ListIndexesResponseBody() {}

  explicit ListIndexesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListIndexesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIndexesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListIndexesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListIndexesResponseBody() = default;
};
class ListIndexesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIndexesResponseBody> body{};

  ListIndexesResponse() {}

  explicit ListIndexesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListIndexesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIndexesResponseBody>(model1);
      }
    }
  }


  virtual ~ListIndexesResponse() = default;
};
class ListInstanceSpecsRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  ListInstanceSpecsRequest() {}

  explicit ListInstanceSpecsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListInstanceSpecsRequest() = default;
};
class ListInstanceSpecsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> cpu{};
  shared_ptr<long> maxDisk{};
  shared_ptr<long> mem{};
  shared_ptr<long> minDisk{};

  ListInstanceSpecsResponseBodyResult() {}

  explicit ListInstanceSpecsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cpu) {
      res["cpu"] = boost::any(*cpu);
    }
    if (maxDisk) {
      res["maxDisk"] = boost::any(*maxDisk);
    }
    if (mem) {
      res["mem"] = boost::any(*mem);
    }
    if (minDisk) {
      res["minDisk"] = boost::any(*minDisk);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cpu") != m.end() && !m["cpu"].empty()) {
      cpu = make_shared<long>(boost::any_cast<long>(m["cpu"]));
    }
    if (m.find("maxDisk") != m.end() && !m["maxDisk"].empty()) {
      maxDisk = make_shared<long>(boost::any_cast<long>(m["maxDisk"]));
    }
    if (m.find("mem") != m.end() && !m["mem"].empty()) {
      mem = make_shared<long>(boost::any_cast<long>(m["mem"]));
    }
    if (m.find("minDisk") != m.end() && !m["minDisk"].empty()) {
      minDisk = make_shared<long>(boost::any_cast<long>(m["minDisk"]));
    }
  }


  virtual ~ListInstanceSpecsResponseBodyResult() = default;
};
class ListInstanceSpecsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstanceSpecsResponseBodyResult>> result{};

  ListInstanceSpecsResponseBody() {}

  explicit ListInstanceSpecsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInstanceSpecsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceSpecsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInstanceSpecsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListInstanceSpecsResponseBody() = default;
};
class ListInstanceSpecsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceSpecsResponseBody> body{};

  ListInstanceSpecsResponse() {}

  explicit ListInstanceSpecsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListInstanceSpecsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceSpecsResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceSpecsResponse() = default;
};
class ListInstancesRequestTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesRequestTags() {}

  explicit ListInstancesRequestTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListInstancesRequestTags() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> edition{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<vector<ListInstancesRequestTags>> tags{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (edition) {
      res["edition"] = boost::any(*edition);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("edition") != m.end() && !m["edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["edition"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListInstancesRequestTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesRequestTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstancesRequestTags>>(expect1);
      }
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> edition{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> tagsShrink{};

  ListInstancesShrinkRequest() {}

  explicit ListInstancesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (edition) {
      res["edition"] = boost::any(*edition);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (tagsShrink) {
      res["tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("edition") != m.end() && !m["edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["edition"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["tags"]));
    }
  }


  virtual ~ListInstancesShrinkRequest() = default;
};
class ListInstancesResponseBodyResultNetwork : public Darabonba::Model {
public:
  shared_ptr<string> endpoint{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  ListInstancesResponseBodyResultNetwork() {}

  explicit ListInstancesResponseBodyResultNetwork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (vSwitchId) {
      res["vSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["vpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("vSwitchId") != m.end() && !m["vSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["vSwitchId"]));
    }
    if (m.find("vpcId") != m.end() && !m["vpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["vpcId"]));
    }
  }


  virtual ~ListInstancesResponseBodyResultNetwork() = default;
};
class ListInstancesResponseBodyResultTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListInstancesResponseBodyResultTags() {}

  explicit ListInstancesResponseBodyResultTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~ListInstancesResponseBodyResultTags() = default;
};
class ListInstancesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<bool> inDebt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<ListInstancesResponseBodyResultNetwork> network{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListInstancesResponseBodyResultTags>> tags{};
  shared_ptr<string> updateTime{};

  ListInstancesResponseBodyResult() {}

  explicit ListInstancesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (inDebt) {
      res["inDebt"] = boost::any(*inDebt);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (network) {
      res["network"] = network ? boost::any(network->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["tags"] = boost::any(temp1);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("inDebt") != m.end() && !m["inDebt"].empty()) {
      inDebt = make_shared<bool>(boost::any_cast<bool>(m["inDebt"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("network") != m.end() && !m["network"].empty()) {
      if (typeid(map<string, boost::any>) == m["network"].type()) {
        ListInstancesResponseBodyResultNetwork model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["network"]));
        network = make_shared<ListInstancesResponseBodyResultNetwork>(model1);
      }
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("tags") != m.end() && !m["tags"].empty()) {
      if (typeid(vector<boost::any>) == m["tags"].type()) {
        vector<ListInstancesResponseBodyResultTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyResultTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListInstancesResponseBodyResultTags>>(expect1);
      }
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~ListInstancesResponseBodyResult() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListInstancesResponseBodyResult>> result{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListInstancesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListInstancesResponseBodyResult>>(expect1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
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
class ListOnlineConfigsRequest : public Darabonba::Model {
public:
  shared_ptr<string> domain{};

  ListOnlineConfigsRequest() {}

  explicit ListOnlineConfigsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
  }


  virtual ~ListOnlineConfigsRequest() = default;
};
class ListOnlineConfigsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> config{};
  shared_ptr<string> indexName{};

  ListOnlineConfigsResponseBodyResult() {}

  explicit ListOnlineConfigsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("config") != m.end() && !m["config"].empty()) {
      config = make_shared<string>(boost::any_cast<string>(m["config"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
  }


  virtual ~ListOnlineConfigsResponseBodyResult() = default;
};
class ListOnlineConfigsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOnlineConfigsResponseBodyResult>> result{};

  ListOnlineConfigsResponseBody() {}

  explicit ListOnlineConfigsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListOnlineConfigsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOnlineConfigsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListOnlineConfigsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListOnlineConfigsResponseBody() = default;
};
class ListOnlineConfigsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOnlineConfigsResponseBody> body{};

  ListOnlineConfigsResponse() {}

  explicit ListOnlineConfigsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListOnlineConfigsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOnlineConfigsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOnlineConfigsResponse() = default;
};
class ListQueryResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> query{};
  shared_ptr<string> sql{};

  ListQueryResultRequest() {}

  explicit ListQueryResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (sql) {
      res["sql"] = boost::any(*sql);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("sql") != m.end() && !m["sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["sql"]));
    }
  }


  virtual ~ListQueryResultRequest() = default;
};
class ListQueryResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ListQueryResultResponseBody() {}

  explicit ListQueryResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListQueryResultResponseBody() = default;
};
class ListQueryResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListQueryResultResponseBody> body{};

  ListQueryResultResponse() {}

  explicit ListQueryResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListQueryResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListQueryResultResponseBody>(model1);
      }
    }
  }


  virtual ~ListQueryResultResponse() = default;
};
class ListTableGenerationsResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<long> generationId{};

  ListTableGenerationsResponseBodyResult() {}

  explicit ListTableGenerationsResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generationId) {
      res["generationId"] = boost::any(*generationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("generationId") != m.end() && !m["generationId"].empty()) {
      generationId = make_shared<long>(boost::any_cast<long>(m["generationId"]));
    }
  }


  virtual ~ListTableGenerationsResponseBodyResult() = default;
};
class ListTableGenerationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTableGenerationsResponseBodyResult>> result{};

  ListTableGenerationsResponseBody() {}

  explicit ListTableGenerationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListTableGenerationsResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTableGenerationsResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListTableGenerationsResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListTableGenerationsResponseBody() = default;
};
class ListTableGenerationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTableGenerationsResponseBody> body{};

  ListTableGenerationsResponse() {}

  explicit ListTableGenerationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTableGenerationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTableGenerationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTableGenerationsResponse() = default;
};
class ListTablesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> newMode{};

  ListTablesRequest() {}

  explicit ListTablesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newMode) {
      res["newMode"] = boost::any(*newMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("newMode") != m.end() && !m["newMode"].empty()) {
      newMode = make_shared<bool>(boost::any_cast<bool>(m["newMode"]));
    }
  }


  virtual ~ListTablesRequest() = default;
};
class ListTablesResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> indexStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  ListTablesResponseBodyResult() {}

  explicit ListTablesResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexStatus) {
      res["indexStatus"] = boost::any(*indexStatus);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexStatus") != m.end() && !m["indexStatus"].empty()) {
      indexStatus = make_shared<string>(boost::any_cast<string>(m["indexStatus"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListTablesResponseBodyResult() = default;
};
class ListTablesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListTablesResponseBodyResult>> result{};

  ListTablesResponseBody() {}

  explicit ListTablesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      vector<boost::any> temp1;
      for(auto item1:*result){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["result"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(vector<boost::any>) == m["result"].type()) {
        vector<ListTablesResponseBodyResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["result"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTablesResponseBodyResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        result = make_shared<vector<ListTablesResponseBodyResult>>(expect1);
      }
    }
  }


  virtual ~ListTablesResponseBody() = default;
};
class ListTablesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTablesResponseBody> body{};

  ListTablesResponse() {}

  explicit ListTablesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ListTablesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTablesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTablesResponse() = default;
};
class ModifyAdvanceConfigFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<map<string, VariablesValue>> variables{};
  shared_ptr<string> fileName{};

  ModifyAdvanceConfigFileRequest() {}

  explicit ModifyAdvanceConfigFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (variables) {
      map<string, boost::any> temp1;
      for(auto item1:*variables){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["variables"] = boost::any(temp1);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(map<string, boost::any>) == m["variables"].type()) {
        map<string, VariablesValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            VariablesValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        variables = make_shared<map<string, VariablesValue>>(expect1);
      }
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
  }


  virtual ~ModifyAdvanceConfigFileRequest() = default;
};
class ModifyAdvanceConfigFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyAdvanceConfigFileResponseBody() {}

  explicit ModifyAdvanceConfigFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyAdvanceConfigFileResponseBody() = default;
};
class ModifyAdvanceConfigFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAdvanceConfigFileResponseBody> body{};

  ModifyAdvanceConfigFileResponse() {}

  explicit ModifyAdvanceConfigFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAdvanceConfigFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAdvanceConfigFileResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAdvanceConfigFileResponse() = default;
};
class ModifyClusterDescRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  ModifyClusterDescRequest() {}

  explicit ModifyClusterDescRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyClusterDescRequest() = default;
};
class ModifyClusterDescResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyClusterDescResponseBody() {}

  explicit ModifyClusterDescResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyClusterDescResponseBody() = default;
};
class ModifyClusterDescResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterDescResponseBody> body{};

  ModifyClusterDescResponse() {}

  explicit ModifyClusterDescResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterDescResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterDescResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterDescResponse() = default;
};
class ModifyClusterOfflineConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> buildMode{};
  shared_ptr<map<string, long>> config{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> dataSourceType{};
  shared_ptr<long> dataTimeSec{};
  shared_ptr<string> domain{};
  shared_ptr<long> generation{};
  shared_ptr<string> partition{};
  shared_ptr<string> pushMode{};

  ModifyClusterOfflineConfigRequest() {}

  explicit ModifyClusterOfflineConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildMode) {
      res["buildMode"] = boost::any(*buildMode);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    if (dataSourceName) {
      res["dataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceType) {
      res["dataSourceType"] = boost::any(*dataSourceType);
    }
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    if (domain) {
      res["domain"] = boost::any(*domain);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (pushMode) {
      res["pushMode"] = boost::any(*pushMode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildMode") != m.end() && !m["buildMode"].empty()) {
      buildMode = make_shared<string>(boost::any_cast<string>(m["buildMode"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["config"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("dataSourceName") != m.end() && !m["dataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["dataSourceName"]));
    }
    if (m.find("dataSourceType") != m.end() && !m["dataSourceType"].empty()) {
      dataSourceType = make_shared<string>(boost::any_cast<string>(m["dataSourceType"]));
    }
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
    if (m.find("domain") != m.end() && !m["domain"].empty()) {
      domain = make_shared<string>(boost::any_cast<string>(m["domain"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("pushMode") != m.end() && !m["pushMode"].empty()) {
      pushMode = make_shared<string>(boost::any_cast<string>(m["pushMode"]));
    }
  }


  virtual ~ModifyClusterOfflineConfigRequest() = default;
};
class ModifyClusterOfflineConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyClusterOfflineConfigResponseBody() {}

  explicit ModifyClusterOfflineConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyClusterOfflineConfigResponseBody() = default;
};
class ModifyClusterOfflineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterOfflineConfigResponseBody> body{};

  ModifyClusterOfflineConfigResponse() {}

  explicit ModifyClusterOfflineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterOfflineConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterOfflineConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterOfflineConfigResponse() = default;
};
class ModifyClusterOnlineConfigRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clusters{};
  shared_ptr<map<string, long>> config{};

  ModifyClusterOnlineConfigRequest() {}

  explicit ModifyClusterOnlineConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusters) {
      res["clusters"] = boost::any(*clusters);
    }
    if (config) {
      res["config"] = boost::any(*config);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("clusters") != m.end() && !m["clusters"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["clusters"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["clusters"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clusters = make_shared<vector<string>>(toVec1);
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["config"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      config = make_shared<map<string, long>>(toMap1);
    }
  }


  virtual ~ModifyClusterOnlineConfigRequest() = default;
};
class ModifyClusterOnlineConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyClusterOnlineConfigResponseBody() {}

  explicit ModifyClusterOnlineConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyClusterOnlineConfigResponseBody() = default;
};
class ModifyClusterOnlineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyClusterOnlineConfigResponseBody> body{};

  ModifyClusterOnlineConfigResponse() {}

  explicit ModifyClusterOnlineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyClusterOnlineConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyClusterOnlineConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyClusterOnlineConfigResponse() = default;
};
class ModifyDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};
  shared_ptr<bool> dryRun{};

  ModifyDataSourceRequest() {}

  explicit ModifyDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifyDataSourceRequest() = default;
};
class ModifyDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyDataSourceResponseBody() {}

  explicit ModifyDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyDataSourceResponseBody() = default;
};
class ModifyDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDataSourceResponseBody> body{};

  ModifyDataSourceResponse() {}

  explicit ModifyDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDataSourceResponse() = default;
};
class ModifyFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> partition{};
  shared_ptr<string> fileName{};

  ModifyFileRequest() {}

  explicit ModifyFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<long>(boost::any_cast<long>(m["partition"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
  }


  virtual ~ModifyFileRequest() = default;
};
class ModifyFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyFileResponseBody() {}

  explicit ModifyFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyFileResponseBody() = default;
};
class ModifyFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyFileResponseBody> body{};

  ModifyFileResponse() {}

  explicit ModifyFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyFileResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyFileResponse() = default;
};
class ModifyIndexPartitionRequestIndexInfos : public Darabonba::Model {
public:
  shared_ptr<string> indexName{};
  shared_ptr<long> parallelNum{};
  shared_ptr<long> partitionCount{};

  ModifyIndexPartitionRequestIndexInfos() {}

  explicit ModifyIndexPartitionRequestIndexInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (parallelNum) {
      res["parallelNum"] = boost::any(*parallelNum);
    }
    if (partitionCount) {
      res["partitionCount"] = boost::any(*partitionCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("parallelNum") != m.end() && !m["parallelNum"].empty()) {
      parallelNum = make_shared<long>(boost::any_cast<long>(m["parallelNum"]));
    }
    if (m.find("partitionCount") != m.end() && !m["partitionCount"].empty()) {
      partitionCount = make_shared<long>(boost::any_cast<long>(m["partitionCount"]));
    }
  }


  virtual ~ModifyIndexPartitionRequestIndexInfos() = default;
};
class ModifyIndexPartitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> domainName{};
  shared_ptr<long> generation{};
  shared_ptr<vector<ModifyIndexPartitionRequestIndexInfos>> indexInfos{};

  ModifyIndexPartitionRequest() {}

  explicit ModifyIndexPartitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["dataSourceName"] = boost::any(*dataSourceName);
    }
    if (domainName) {
      res["domainName"] = boost::any(*domainName);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (indexInfos) {
      vector<boost::any> temp1;
      for(auto item1:*indexInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["indexInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataSourceName") != m.end() && !m["dataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["dataSourceName"]));
    }
    if (m.find("domainName") != m.end() && !m["domainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["domainName"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<long>(boost::any_cast<long>(m["generation"]));
    }
    if (m.find("indexInfos") != m.end() && !m["indexInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["indexInfos"].type()) {
        vector<ModifyIndexPartitionRequestIndexInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["indexInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyIndexPartitionRequestIndexInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        indexInfos = make_shared<vector<ModifyIndexPartitionRequestIndexInfos>>(expect1);
      }
    }
  }


  virtual ~ModifyIndexPartitionRequest() = default;
};
class ModifyIndexPartitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyIndexPartitionResponseBody() {}

  explicit ModifyIndexPartitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyIndexPartitionResponseBody() = default;
};
class ModifyIndexPartitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyIndexPartitionResponseBody> body{};

  ModifyIndexPartitionResponse() {}

  explicit ModifyIndexPartitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyIndexPartitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyIndexPartitionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyIndexPartitionResponse() = default;
};
class ModifyIndexVersionRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> buildDeployId{};
  shared_ptr<string> indexName{};
  shared_ptr<string> version{};

  ModifyIndexVersionRequestBody() {}

  explicit ModifyIndexVersionRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildDeployId) {
      res["buildDeployId"] = boost::any(*buildDeployId);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildDeployId") != m.end() && !m["buildDeployId"].empty()) {
      buildDeployId = make_shared<string>(boost::any_cast<string>(m["buildDeployId"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ModifyIndexVersionRequestBody() = default;
};
class ModifyIndexVersionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyIndexVersionRequestBody>> body{};

  ModifyIndexVersionRequest() {}

  explicit ModifyIndexVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      vector<boost::any> temp1;
      for(auto item1:*body){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["body"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(vector<boost::any>) == m["body"].type()) {
        vector<ModifyIndexVersionRequestBody> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["body"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyIndexVersionRequestBody model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        body = make_shared<vector<ModifyIndexVersionRequestBody>>(expect1);
      }
    }
  }


  virtual ~ModifyIndexVersionRequest() = default;
};
class ModifyIndexVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyIndexVersionResponseBody() {}

  explicit ModifyIndexVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyIndexVersionResponseBody() = default;
};
class ModifyIndexVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyIndexVersionResponseBody> body{};

  ModifyIndexVersionResponse() {}

  explicit ModifyIndexVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyIndexVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyIndexVersionResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyIndexVersionResponse() = default;
};
class ModifyNodeConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> active{};
  shared_ptr<long> dataDuplicateNumber{};
  shared_ptr<long> dataFragmentNumber{};
  shared_ptr<long> flowRatio{};
  shared_ptr<long> minServicePercent{};
  shared_ptr<bool> published{};
  shared_ptr<string> clusterName{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ModifyNodeConfigRequest() {}

  explicit ModifyNodeConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (active) {
      res["active"] = boost::any(*active);
    }
    if (dataDuplicateNumber) {
      res["dataDuplicateNumber"] = boost::any(*dataDuplicateNumber);
    }
    if (dataFragmentNumber) {
      res["dataFragmentNumber"] = boost::any(*dataFragmentNumber);
    }
    if (flowRatio) {
      res["flowRatio"] = boost::any(*flowRatio);
    }
    if (minServicePercent) {
      res["minServicePercent"] = boost::any(*minServicePercent);
    }
    if (published) {
      res["published"] = boost::any(*published);
    }
    if (clusterName) {
      res["clusterName"] = boost::any(*clusterName);
    }
    if (dataSourceName) {
      res["dataSourceName"] = boost::any(*dataSourceName);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("active") != m.end() && !m["active"].empty()) {
      active = make_shared<bool>(boost::any_cast<bool>(m["active"]));
    }
    if (m.find("dataDuplicateNumber") != m.end() && !m["dataDuplicateNumber"].empty()) {
      dataDuplicateNumber = make_shared<long>(boost::any_cast<long>(m["dataDuplicateNumber"]));
    }
    if (m.find("dataFragmentNumber") != m.end() && !m["dataFragmentNumber"].empty()) {
      dataFragmentNumber = make_shared<long>(boost::any_cast<long>(m["dataFragmentNumber"]));
    }
    if (m.find("flowRatio") != m.end() && !m["flowRatio"].empty()) {
      flowRatio = make_shared<long>(boost::any_cast<long>(m["flowRatio"]));
    }
    if (m.find("minServicePercent") != m.end() && !m["minServicePercent"].empty()) {
      minServicePercent = make_shared<long>(boost::any_cast<long>(m["minServicePercent"]));
    }
    if (m.find("published") != m.end() && !m["published"].empty()) {
      published = make_shared<bool>(boost::any_cast<bool>(m["published"]));
    }
    if (m.find("clusterName") != m.end() && !m["clusterName"].empty()) {
      clusterName = make_shared<string>(boost::any_cast<string>(m["clusterName"]));
    }
    if (m.find("dataSourceName") != m.end() && !m["dataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["dataSourceName"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ModifyNodeConfigRequest() = default;
};
class ModifyNodeConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyNodeConfigResponseBody() {}

  explicit ModifyNodeConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyNodeConfigResponseBody() = default;
};
class ModifyNodeConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyNodeConfigResponseBody> body{};

  ModifyNodeConfigResponse() {}

  explicit ModifyNodeConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyNodeConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyNodeConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyNodeConfigResponse() = default;
};
class ModifyOnlineConfigRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> body{};

  ModifyOnlineConfigRequest() {}

  explicit ModifyOnlineConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["body"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, string>>(toMap1);
    }
  }


  virtual ~ModifyOnlineConfigRequest() = default;
};
class ModifyOnlineConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyOnlineConfigResponseBody() {}

  explicit ModifyOnlineConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyOnlineConfigResponseBody() = default;
};
class ModifyOnlineConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyOnlineConfigResponseBody> body{};

  ModifyOnlineConfigResponse() {}

  explicit ModifyOnlineConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyOnlineConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyOnlineConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyOnlineConfigResponse() = default;
};
class ModifyPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> password{};
  shared_ptr<string> username{};

  ModifyPasswordRequest() {}

  explicit ModifyPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (password) {
      res["password"] = boost::any(*password);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("password") != m.end() && !m["password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["password"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~ModifyPasswordRequest() = default;
};
class ModifyPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyPasswordResponseBody() {}

  explicit ModifyPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyPasswordResponseBody() = default;
};
class ModifyPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPasswordResponseBody> body{};

  ModifyPasswordResponse() {}

  explicit ModifyPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPasswordResponse() = default;
};
class ModifyTableRequestDataProcessConfigParamsSrcFieldConfig : public Darabonba::Model {
public:
  shared_ptr<string> ossBucket{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> uid{};

  ModifyTableRequestDataProcessConfigParamsSrcFieldConfig() {}

  explicit ModifyTableRequestDataProcessConfigParamsSrcFieldConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ossBucket) {
      res["ossBucket"] = boost::any(*ossBucket);
    }
    if (ossEndpoint) {
      res["ossEndpoint"] = boost::any(*ossEndpoint);
    }
    if (uid) {
      res["uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ossBucket") != m.end() && !m["ossBucket"].empty()) {
      ossBucket = make_shared<string>(boost::any_cast<string>(m["ossBucket"]));
    }
    if (m.find("ossEndpoint") != m.end() && !m["ossEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["ossEndpoint"]));
    }
    if (m.find("uid") != m.end() && !m["uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["uid"]));
    }
  }


  virtual ~ModifyTableRequestDataProcessConfigParamsSrcFieldConfig() = default;
};
class ModifyTableRequestDataProcessConfigParams : public Darabonba::Model {
public:
  shared_ptr<ModifyTableRequestDataProcessConfigParamsSrcFieldConfig> srcFieldConfig{};
  shared_ptr<string> vectorModal{};
  shared_ptr<string> vectorModel{};

  ModifyTableRequestDataProcessConfigParams() {}

  explicit ModifyTableRequestDataProcessConfigParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (srcFieldConfig) {
      res["srcFieldConfig"] = srcFieldConfig ? boost::any(srcFieldConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (vectorModal) {
      res["vectorModal"] = boost::any(*vectorModal);
    }
    if (vectorModel) {
      res["vectorModel"] = boost::any(*vectorModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("srcFieldConfig") != m.end() && !m["srcFieldConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["srcFieldConfig"].type()) {
        ModifyTableRequestDataProcessConfigParamsSrcFieldConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["srcFieldConfig"]));
        srcFieldConfig = make_shared<ModifyTableRequestDataProcessConfigParamsSrcFieldConfig>(model1);
      }
    }
    if (m.find("vectorModal") != m.end() && !m["vectorModal"].empty()) {
      vectorModal = make_shared<string>(boost::any_cast<string>(m["vectorModal"]));
    }
    if (m.find("vectorModel") != m.end() && !m["vectorModel"].empty()) {
      vectorModel = make_shared<string>(boost::any_cast<string>(m["vectorModel"]));
    }
  }


  virtual ~ModifyTableRequestDataProcessConfigParams() = default;
};
class ModifyTableRequestDataProcessConfig : public Darabonba::Model {
public:
  shared_ptr<string> dstField{};
  shared_ptr<string> operator_{};
  shared_ptr<ModifyTableRequestDataProcessConfigParams> params{};
  shared_ptr<string> srcField{};

  ModifyTableRequestDataProcessConfig() {}

  explicit ModifyTableRequestDataProcessConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dstField) {
      res["dstField"] = boost::any(*dstField);
    }
    if (operator_) {
      res["operator"] = boost::any(*operator_);
    }
    if (params) {
      res["params"] = params ? boost::any(params->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (srcField) {
      res["srcField"] = boost::any(*srcField);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dstField") != m.end() && !m["dstField"].empty()) {
      dstField = make_shared<string>(boost::any_cast<string>(m["dstField"]));
    }
    if (m.find("operator") != m.end() && !m["operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["operator"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      if (typeid(map<string, boost::any>) == m["params"].type()) {
        ModifyTableRequestDataProcessConfigParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["params"]));
        params = make_shared<ModifyTableRequestDataProcessConfigParams>(model1);
      }
    }
    if (m.find("srcField") != m.end() && !m["srcField"].empty()) {
      srcField = make_shared<string>(boost::any_cast<string>(m["srcField"]));
    }
  }


  virtual ~ModifyTableRequestDataProcessConfig() = default;
};
class ModifyTableRequestDataSourceConfig : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> accessSecret{};
  shared_ptr<string> bucket{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> ossPath{};
  shared_ptr<string> partition{};
  shared_ptr<string> project{};
  shared_ptr<string> table{};

  ModifyTableRequestDataSourceConfig() {}

  explicit ModifyTableRequestDataSourceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["accessKey"] = boost::any(*accessKey);
    }
    if (accessSecret) {
      res["accessSecret"] = boost::any(*accessSecret);
    }
    if (bucket) {
      res["bucket"] = boost::any(*bucket);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (ossPath) {
      res["ossPath"] = boost::any(*ossPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    if (project) {
      res["project"] = boost::any(*project);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accessKey") != m.end() && !m["accessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["accessKey"]));
    }
    if (m.find("accessSecret") != m.end() && !m["accessSecret"].empty()) {
      accessSecret = make_shared<string>(boost::any_cast<string>(m["accessSecret"]));
    }
    if (m.find("bucket") != m.end() && !m["bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["bucket"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("ossPath") != m.end() && !m["ossPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["ossPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
    if (m.find("project") != m.end() && !m["project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["project"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~ModifyTableRequestDataSourceConfig() = default;
};
class ModifyTableRequestDataSource : public Darabonba::Model {
public:
  shared_ptr<bool> autoBuildIndex{};
  shared_ptr<ModifyTableRequestDataSourceConfig> config{};
  shared_ptr<long> dataTimeSec{};

  ModifyTableRequestDataSource() {}

  explicit ModifyTableRequestDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoBuildIndex) {
      res["autoBuildIndex"] = boost::any(*autoBuildIndex);
    }
    if (config) {
      res["config"] = config ? boost::any(config->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoBuildIndex") != m.end() && !m["autoBuildIndex"].empty()) {
      autoBuildIndex = make_shared<bool>(boost::any_cast<bool>(m["autoBuildIndex"]));
    }
    if (m.find("config") != m.end() && !m["config"].empty()) {
      if (typeid(map<string, boost::any>) == m["config"].type()) {
        ModifyTableRequestDataSourceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["config"]));
        config = make_shared<ModifyTableRequestDataSourceConfig>(model1);
      }
    }
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
  }


  virtual ~ModifyTableRequestDataSource() = default;
};
class ModifyTableRequestVectorIndexAdvanceParams : public Darabonba::Model {
public:
  shared_ptr<string> buildIndexParams{};
  shared_ptr<string> linearBuildThreshold{};
  shared_ptr<string> minScanDocCnt{};
  shared_ptr<string> searchIndexParams{};

  ModifyTableRequestVectorIndexAdvanceParams() {}

  explicit ModifyTableRequestVectorIndexAdvanceParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildIndexParams) {
      res["buildIndexParams"] = boost::any(*buildIndexParams);
    }
    if (linearBuildThreshold) {
      res["linearBuildThreshold"] = boost::any(*linearBuildThreshold);
    }
    if (minScanDocCnt) {
      res["minScanDocCnt"] = boost::any(*minScanDocCnt);
    }
    if (searchIndexParams) {
      res["searchIndexParams"] = boost::any(*searchIndexParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildIndexParams") != m.end() && !m["buildIndexParams"].empty()) {
      buildIndexParams = make_shared<string>(boost::any_cast<string>(m["buildIndexParams"]));
    }
    if (m.find("linearBuildThreshold") != m.end() && !m["linearBuildThreshold"].empty()) {
      linearBuildThreshold = make_shared<string>(boost::any_cast<string>(m["linearBuildThreshold"]));
    }
    if (m.find("minScanDocCnt") != m.end() && !m["minScanDocCnt"].empty()) {
      minScanDocCnt = make_shared<string>(boost::any_cast<string>(m["minScanDocCnt"]));
    }
    if (m.find("searchIndexParams") != m.end() && !m["searchIndexParams"].empty()) {
      searchIndexParams = make_shared<string>(boost::any_cast<string>(m["searchIndexParams"]));
    }
  }


  virtual ~ModifyTableRequestVectorIndexAdvanceParams() = default;
};
class ModifyTableRequestVectorIndex : public Darabonba::Model {
public:
  shared_ptr<ModifyTableRequestVectorIndexAdvanceParams> advanceParams{};
  shared_ptr<string> dimension{};
  shared_ptr<string> distanceType{};
  shared_ptr<string> indexName{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> sparseIndexField{};
  shared_ptr<string> sparseValueField{};
  shared_ptr<string> vectorField{};
  shared_ptr<string> vectorIndexType{};

  ModifyTableRequestVectorIndex() {}

  explicit ModifyTableRequestVectorIndex(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (advanceParams) {
      res["advanceParams"] = advanceParams ? boost::any(advanceParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dimension) {
      res["dimension"] = boost::any(*dimension);
    }
    if (distanceType) {
      res["distanceType"] = boost::any(*distanceType);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (sparseIndexField) {
      res["sparseIndexField"] = boost::any(*sparseIndexField);
    }
    if (sparseValueField) {
      res["sparseValueField"] = boost::any(*sparseValueField);
    }
    if (vectorField) {
      res["vectorField"] = boost::any(*vectorField);
    }
    if (vectorIndexType) {
      res["vectorIndexType"] = boost::any(*vectorIndexType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("advanceParams") != m.end() && !m["advanceParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["advanceParams"].type()) {
        ModifyTableRequestVectorIndexAdvanceParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["advanceParams"]));
        advanceParams = make_shared<ModifyTableRequestVectorIndexAdvanceParams>(model1);
      }
    }
    if (m.find("dimension") != m.end() && !m["dimension"].empty()) {
      dimension = make_shared<string>(boost::any_cast<string>(m["dimension"]));
    }
    if (m.find("distanceType") != m.end() && !m["distanceType"].empty()) {
      distanceType = make_shared<string>(boost::any_cast<string>(m["distanceType"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("sparseIndexField") != m.end() && !m["sparseIndexField"].empty()) {
      sparseIndexField = make_shared<string>(boost::any_cast<string>(m["sparseIndexField"]));
    }
    if (m.find("sparseValueField") != m.end() && !m["sparseValueField"].empty()) {
      sparseValueField = make_shared<string>(boost::any_cast<string>(m["sparseValueField"]));
    }
    if (m.find("vectorField") != m.end() && !m["vectorField"].empty()) {
      vectorField = make_shared<string>(boost::any_cast<string>(m["vectorField"]));
    }
    if (m.find("vectorIndexType") != m.end() && !m["vectorIndexType"].empty()) {
      vectorIndexType = make_shared<string>(boost::any_cast<string>(m["vectorIndexType"]));
    }
  }


  virtual ~ModifyTableRequestVectorIndex() = default;
};
class ModifyTableRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyTableRequestDataProcessConfig>> dataProcessConfig{};
  shared_ptr<ModifyTableRequestDataSource> dataSource{};
  shared_ptr<map<string, string>> fieldSchema{};
  shared_ptr<long> partitionCount{};
  shared_ptr<string> primaryKey{};
  shared_ptr<string> rawSchema{};
  shared_ptr<vector<ModifyTableRequestVectorIndex>> vectorIndex{};
  shared_ptr<bool> dryRun{};

  ModifyTableRequest() {}

  explicit ModifyTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataProcessConfig) {
      vector<boost::any> temp1;
      for(auto item1:*dataProcessConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataProcessConfig"] = boost::any(temp1);
    }
    if (dataSource) {
      res["dataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fieldSchema) {
      res["fieldSchema"] = boost::any(*fieldSchema);
    }
    if (partitionCount) {
      res["partitionCount"] = boost::any(*partitionCount);
    }
    if (primaryKey) {
      res["primaryKey"] = boost::any(*primaryKey);
    }
    if (rawSchema) {
      res["rawSchema"] = boost::any(*rawSchema);
    }
    if (vectorIndex) {
      vector<boost::any> temp1;
      for(auto item1:*vectorIndex){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["vectorIndex"] = boost::any(temp1);
    }
    if (dryRun) {
      res["dryRun"] = boost::any(*dryRun);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataProcessConfig") != m.end() && !m["dataProcessConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["dataProcessConfig"].type()) {
        vector<ModifyTableRequestDataProcessConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataProcessConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyTableRequestDataProcessConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataProcessConfig = make_shared<vector<ModifyTableRequestDataProcessConfig>>(expect1);
      }
    }
    if (m.find("dataSource") != m.end() && !m["dataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataSource"].type()) {
        ModifyTableRequestDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataSource"]));
        dataSource = make_shared<ModifyTableRequestDataSource>(model1);
      }
    }
    if (m.find("fieldSchema") != m.end() && !m["fieldSchema"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["fieldSchema"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      fieldSchema = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("partitionCount") != m.end() && !m["partitionCount"].empty()) {
      partitionCount = make_shared<long>(boost::any_cast<long>(m["partitionCount"]));
    }
    if (m.find("primaryKey") != m.end() && !m["primaryKey"].empty()) {
      primaryKey = make_shared<string>(boost::any_cast<string>(m["primaryKey"]));
    }
    if (m.find("rawSchema") != m.end() && !m["rawSchema"].empty()) {
      rawSchema = make_shared<string>(boost::any_cast<string>(m["rawSchema"]));
    }
    if (m.find("vectorIndex") != m.end() && !m["vectorIndex"].empty()) {
      if (typeid(vector<boost::any>) == m["vectorIndex"].type()) {
        vector<ModifyTableRequestVectorIndex> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["vectorIndex"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyTableRequestVectorIndex model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vectorIndex = make_shared<vector<ModifyTableRequestVectorIndex>>(expect1);
      }
    }
    if (m.find("dryRun") != m.end() && !m["dryRun"].empty()) {
      dryRun = make_shared<bool>(boost::any_cast<bool>(m["dryRun"]));
    }
  }


  virtual ~ModifyTableRequest() = default;
};
class ModifyTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ModifyTableResponseBody() {}

  explicit ModifyTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ModifyTableResponseBody() = default;
};
class ModifyTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTableResponseBody> body{};

  ModifyTableResponse() {}

  explicit ModifyTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTableResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTableResponse() = default;
};
class PublishAdvanceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  PublishAdvanceConfigRequest() {}

  explicit PublishAdvanceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PublishAdvanceConfigRequest() = default;
};
class PublishAdvanceConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  PublishAdvanceConfigResponseBody() {}

  explicit PublishAdvanceConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PublishAdvanceConfigResponseBody() = default;
};
class PublishAdvanceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishAdvanceConfigResponseBody> body{};

  PublishAdvanceConfigResponse() {}

  explicit PublishAdvanceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishAdvanceConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishAdvanceConfigResponseBody>(model1);
      }
    }
  }


  virtual ~PublishAdvanceConfigResponse() = default;
};
class PublishIndexVersionRequest : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> body{};

  PublishIndexVersionRequest() {}

  explicit PublishIndexVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = boost::any(*body);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["body"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      body = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PublishIndexVersionRequest() = default;
};
class PublishIndexVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  PublishIndexVersionResponseBody() {}

  explicit PublishIndexVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~PublishIndexVersionResponseBody() = default;
};
class PublishIndexVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PublishIndexVersionResponseBody> body{};

  PublishIndexVersionResponse() {}

  explicit PublishIndexVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PublishIndexVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishIndexVersionResponseBody>(model1);
      }
    }
  }


  virtual ~PublishIndexVersionResponse() = default;
};
class RecoverIndexRequest : public Darabonba::Model {
public:
  shared_ptr<long> buildDeployId{};
  shared_ptr<string> dataSourceName{};
  shared_ptr<string> generation{};
  shared_ptr<string> indexName{};

  RecoverIndexRequest() {}

  explicit RecoverIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildDeployId) {
      res["buildDeployId"] = boost::any(*buildDeployId);
    }
    if (dataSourceName) {
      res["dataSourceName"] = boost::any(*dataSourceName);
    }
    if (generation) {
      res["generation"] = boost::any(*generation);
    }
    if (indexName) {
      res["indexName"] = boost::any(*indexName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildDeployId") != m.end() && !m["buildDeployId"].empty()) {
      buildDeployId = make_shared<long>(boost::any_cast<long>(m["buildDeployId"]));
    }
    if (m.find("dataSourceName") != m.end() && !m["dataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["dataSourceName"]));
    }
    if (m.find("generation") != m.end() && !m["generation"].empty()) {
      generation = make_shared<string>(boost::any_cast<string>(m["generation"]));
    }
    if (m.find("indexName") != m.end() && !m["indexName"].empty()) {
      indexName = make_shared<string>(boost::any_cast<string>(m["indexName"]));
    }
  }


  virtual ~RecoverIndexRequest() = default;
};
class RecoverIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  RecoverIndexResponseBody() {}

  explicit RecoverIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RecoverIndexResponseBody() = default;
};
class RecoverIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecoverIndexResponseBody> body{};

  RecoverIndexResponse() {}

  explicit RecoverIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoverIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoverIndexResponseBody>(model1);
      }
    }
  }


  virtual ~RecoverIndexResponse() = default;
};
class ReindexRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataTimeSec{};
  shared_ptr<string> ossDataPath{};
  shared_ptr<string> partition{};

  ReindexRequest() {}

  explicit ReindexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataTimeSec) {
      res["dataTimeSec"] = boost::any(*dataTimeSec);
    }
    if (ossDataPath) {
      res["ossDataPath"] = boost::any(*ossDataPath);
    }
    if (partition) {
      res["partition"] = boost::any(*partition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataTimeSec") != m.end() && !m["dataTimeSec"].empty()) {
      dataTimeSec = make_shared<long>(boost::any_cast<long>(m["dataTimeSec"]));
    }
    if (m.find("ossDataPath") != m.end() && !m["ossDataPath"].empty()) {
      ossDataPath = make_shared<string>(boost::any_cast<string>(m["ossDataPath"]));
    }
    if (m.find("partition") != m.end() && !m["partition"].empty()) {
      partition = make_shared<string>(boost::any_cast<string>(m["partition"]));
    }
  }


  virtual ~ReindexRequest() = default;
};
class ReindexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  ReindexResponseBody() {}

  explicit ReindexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ReindexResponseBody() = default;
};
class ReindexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReindexResponseBody> body{};

  ReindexResponse() {}

  explicit ReindexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReindexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReindexResponseBody>(model1);
      }
    }
  }


  virtual ~ReindexResponse() = default;
};
class RemoveClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  RemoveClusterResponseBody() {}

  explicit RemoveClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~RemoveClusterResponseBody() = default;
};
class RemoveClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveClusterResponseBody> body{};

  RemoveClusterResponse() {}

  explicit RemoveClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveClusterResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveClusterResponse() = default;
};
class StopTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<map<string, boost::any>> result{};

  StopTaskResponseBody() {}

  explicit StopTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["result"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      result = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~StopTaskResponseBody() = default;
};
class StopTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopTaskResponseBody> body{};

  StopTaskResponse() {}

  explicit StopTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopTaskResponse() = default;
};
class UpdateInstanceRequestComponents : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> value{};

  UpdateInstanceRequestComponents() {}

  explicit UpdateInstanceRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~UpdateInstanceRequestComponents() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateInstanceRequestComponents>> components{};
  shared_ptr<string> description{};
  shared_ptr<string> orderType{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["components"] = boost::any(temp1);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (orderType) {
      res["orderType"] = boost::any(*orderType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("components") != m.end() && !m["components"].empty()) {
      if (typeid(vector<boost::any>) == m["components"].type()) {
        vector<UpdateInstanceRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateInstanceRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<UpdateInstanceRequestComponents>>(expect1);
      }
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("orderType") != m.end() && !m["orderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["orderType"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> chargeType{};
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> expiredTime{};
  shared_ptr<bool> inDebt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lockMode{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> status{};
  shared_ptr<string> updateTime{};

  UpdateInstanceResponseBodyResult() {}

  explicit UpdateInstanceResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chargeType) {
      res["chargeType"] = boost::any(*chargeType);
    }
    if (commodityCode) {
      res["commodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (expiredTime) {
      res["expiredTime"] = boost::any(*expiredTime);
    }
    if (inDebt) {
      res["inDebt"] = boost::any(*inDebt);
    }
    if (instanceId) {
      res["instanceId"] = boost::any(*instanceId);
    }
    if (lockMode) {
      res["lockMode"] = boost::any(*lockMode);
    }
    if (resourceGroupId) {
      res["resourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chargeType") != m.end() && !m["chargeType"].empty()) {
      chargeType = make_shared<string>(boost::any_cast<string>(m["chargeType"]));
    }
    if (m.find("commodityCode") != m.end() && !m["commodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["commodityCode"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("expiredTime") != m.end() && !m["expiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["expiredTime"]));
    }
    if (m.find("inDebt") != m.end() && !m["inDebt"].empty()) {
      inDebt = make_shared<bool>(boost::any_cast<bool>(m["inDebt"]));
    }
    if (m.find("instanceId") != m.end() && !m["instanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instanceId"]));
    }
    if (m.find("lockMode") != m.end() && !m["lockMode"].empty()) {
      lockMode = make_shared<string>(boost::any_cast<string>(m["lockMode"]));
    }
    if (m.find("resourceGroupId") != m.end() && !m["resourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["resourceGroupId"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["updateTime"]));
    }
  }


  virtual ~UpdateInstanceResponseBodyResult() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdateInstanceResponseBodyResult> result{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        UpdateInstanceResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<UpdateInstanceResponseBodyResult>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
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
  BuildIndexResponse buildIndexWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<BuildIndexRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BuildIndexResponse buildIndex(shared_ptr<string> instanceId, shared_ptr<BuildIndexRequest> request);
  CreateClusterResponse createClusterWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<CreateClusterRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateClusterResponse createCluster(shared_ptr<string> instanceId, shared_ptr<CreateClusterRequest> request);
  CreateDataSourceResponse createDataSourceWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<CreateDataSourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataSourceResponse createDataSource(shared_ptr<string> instanceId, shared_ptr<CreateDataSourceRequest> request);
  CreateIndexResponse createIndexWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<CreateIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIndexResponse createIndex(shared_ptr<string> instanceId, shared_ptr<CreateIndexRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateTableResponse createTableWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<CreateTableRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTableResponse createTable(shared_ptr<string> instanceId, shared_ptr<CreateTableRequest> request);
  DeleteAdvanceConfigResponse deleteAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> configName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAdvanceConfigResponse deleteAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName);
  DeleteDataSourceResponse deleteDataSourceWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> dataSourceName,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceResponse deleteDataSource(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName);
  DeleteIndexResponse deleteIndexWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> indexName,
                                             shared_ptr<DeleteIndexRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexResponse deleteIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<DeleteIndexRequest> request);
  DeleteIndexVersionResponse deleteIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> indexName,
                                                           shared_ptr<string> versionName,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIndexVersionResponse deleteIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<string> versionName);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<string> instanceId);
  DeleteTableResponse deleteTableWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> tableName,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTableResponse deleteTable(shared_ptr<string> instanceId, shared_ptr<string> tableName);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  ForceSwitchResponse forceSwitchWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> fsmId,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ForceSwitchResponse forceSwitch(shared_ptr<string> instanceId, shared_ptr<string> fsmId);
  GetAdvanceConfigResponse getAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> configName,
                                                       shared_ptr<GetAdvanceConfigRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAdvanceConfigResponse getAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<GetAdvanceConfigRequest> request);
  GetAdvanceConfigFileResponse getAdvanceConfigFileWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<string> configName,
                                                               shared_ptr<GetAdvanceConfigFileRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAdvanceConfigFileResponse getAdvanceConfigFile(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<GetAdvanceConfigFileRequest> request);
  GetClusterResponse getClusterWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> clusterName,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterResponse getCluster(shared_ptr<string> instanceId, shared_ptr<string> clusterName);
  GetClusterRunTimeInfoResponse getClusterRunTimeInfoWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetClusterRunTimeInfoResponse getClusterRunTimeInfo(shared_ptr<string> instanceId);
  GetDataSourceResponse getDataSourceWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<string> dataSourceName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSourceResponse getDataSource(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName);
  GetDataSourceDeployResponse getDataSourceDeployWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> deployName,
                                                             shared_ptr<string> dataSourceName,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSourceDeployResponse getDataSourceDeploy(shared_ptr<string> instanceId, shared_ptr<string> deployName, shared_ptr<string> dataSourceName);
  GetDeployGraphResponse getDeployGraphWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeployGraphResponse getDeployGraph(shared_ptr<string> instanceId);
  GetFileResponse getFileWithOptions(shared_ptr<string> instanceId,
                                     shared_ptr<string> indexName,
                                     shared_ptr<string> versionName,
                                     shared_ptr<GetFileRequest> request,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileResponse getFile(shared_ptr<string> instanceId,
                          shared_ptr<string> indexName,
                          shared_ptr<string> versionName,
                          shared_ptr<GetFileRequest> request);
  GetIndexResponse getIndexWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<string> indexName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexResponse getIndex(shared_ptr<string> instanceId, shared_ptr<string> indexName);
  GetIndexVersionResponse getIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                     shared_ptr<string> clusterName,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetIndexVersionResponse getIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> clusterName);
  GetInstanceResponse getInstanceWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstanceResponse getInstance(shared_ptr<string> instanceId);
  GetNodeConfigResponse getNodeConfigWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<GetNodeConfigRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeConfigResponse getNodeConfig(shared_ptr<string> instanceId, shared_ptr<GetNodeConfigRequest> request);
  GetTableResponse getTableWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<string> tableName,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableResponse getTable(shared_ptr<string> instanceId, shared_ptr<string> tableName);
  GetTableGenerationResponse getTableGenerationWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> tableName,
                                                           shared_ptr<string> generationId,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTableGenerationResponse getTableGeneration(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<string> generationId);
  ListAdvanceConfigDirResponse listAdvanceConfigDirWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<string> configName,
                                                               shared_ptr<ListAdvanceConfigDirRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAdvanceConfigDirResponse listAdvanceConfigDir(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<ListAdvanceConfigDirRequest> request);
  ListAdvanceConfigsResponse listAdvanceConfigsWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<ListAdvanceConfigsRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAdvanceConfigsResponse listAdvanceConfigs(shared_ptr<string> instanceId, shared_ptr<ListAdvanceConfigsRequest> request);
  ListClusterNamesResponse listClusterNamesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterNamesResponse listClusterNames();
  ListClusterTasksResponse listClusterTasksWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClusterTasksResponse listClusterTasks(shared_ptr<string> instanceId);
  ListClustersResponse listClustersWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListClustersResponse listClusters(shared_ptr<string> instanceId);
  ListDataSourceSchemasResponse listDataSourceSchemasWithOptions(shared_ptr<string> instanceId,
                                                                 shared_ptr<string> dataSourceName,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceSchemasResponse listDataSourceSchemas(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName);
  ListDataSourceTasksResponse listDataSourceTasksWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceTasksResponse listDataSourceTasks(shared_ptr<string> instanceId);
  ListDataSourcesResponse listDataSourcesWithOptions(shared_ptr<string> instanceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourcesResponse listDataSources(shared_ptr<string> instanceId);
  ListDateSourceGenerationsResponse listDateSourceGenerationsWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<string> dataSourceName,
                                                                         shared_ptr<ListDateSourceGenerationsRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDateSourceGenerationsResponse listDateSourceGenerations(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName, shared_ptr<ListDateSourceGenerationsRequest> request);
  ListIndexesResponse listIndexesWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<ListIndexesRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIndexesResponse listIndexes(shared_ptr<string> instanceId, shared_ptr<ListIndexesRequest> request);
  ListInstanceSpecsResponse listInstanceSpecsWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<ListInstanceSpecsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceSpecsResponse listInstanceSpecs(shared_ptr<string> instanceId, shared_ptr<ListInstanceSpecsRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ListOnlineConfigsResponse listOnlineConfigsWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> nodeName,
                                                         shared_ptr<ListOnlineConfigsRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOnlineConfigsResponse listOnlineConfigs(shared_ptr<string> instanceId, shared_ptr<string> nodeName, shared_ptr<ListOnlineConfigsRequest> request);
  ListQueryResultResponse listQueryResultWithOptions(shared_ptr<string> instanceId,
                                                     shared_ptr<ListQueryResultRequest> request,
                                                     shared_ptr<map<string, string>> headers,
                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListQueryResultResponse listQueryResult(shared_ptr<string> instanceId, shared_ptr<ListQueryResultRequest> request);
  ListTableGenerationsResponse listTableGenerationsWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<string> tableName,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTableGenerationsResponse listTableGenerations(shared_ptr<string> instanceId, shared_ptr<string> tableName);
  ListTablesResponse listTablesWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<ListTablesRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTablesResponse listTables(shared_ptr<string> instanceId, shared_ptr<ListTablesRequest> request);
  ModifyAdvanceConfigFileResponse modifyAdvanceConfigFileWithOptions(shared_ptr<string> instanceId,
                                                                     shared_ptr<string> configName,
                                                                     shared_ptr<ModifyAdvanceConfigFileRequest> request,
                                                                     shared_ptr<map<string, string>> headers,
                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAdvanceConfigFileResponse modifyAdvanceConfigFile(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<ModifyAdvanceConfigFileRequest> request);
  ModifyClusterDescResponse modifyClusterDescWithOptions(shared_ptr<string> instanceId,
                                                         shared_ptr<string> clusterName,
                                                         shared_ptr<ModifyClusterDescRequest> request,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterDescResponse modifyClusterDesc(shared_ptr<string> instanceId, shared_ptr<string> clusterName, shared_ptr<ModifyClusterDescRequest> request);
  ModifyClusterOfflineConfigResponse modifyClusterOfflineConfigWithOptions(shared_ptr<string> instanceId,
                                                                           shared_ptr<ModifyClusterOfflineConfigRequest> request,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterOfflineConfigResponse modifyClusterOfflineConfig(shared_ptr<string> instanceId, shared_ptr<ModifyClusterOfflineConfigRequest> request);
  ModifyClusterOnlineConfigResponse modifyClusterOnlineConfigWithOptions(shared_ptr<string> instanceId,
                                                                         shared_ptr<ModifyClusterOnlineConfigRequest> request,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyClusterOnlineConfigResponse modifyClusterOnlineConfig(shared_ptr<string> instanceId, shared_ptr<ModifyClusterOnlineConfigRequest> request);
  ModifyDataSourceResponse modifyDataSourceWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<string> dataSourceName,
                                                       shared_ptr<ModifyDataSourceRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDataSourceResponse modifyDataSource(shared_ptr<string> instanceId, shared_ptr<string> dataSourceName, shared_ptr<ModifyDataSourceRequest> request);
  ModifyFileResponse modifyFileWithOptions(shared_ptr<string> instanceId,
                                           shared_ptr<string> indexName,
                                           shared_ptr<string> versionName,
                                           shared_ptr<ModifyFileRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyFileResponse modifyFile(shared_ptr<string> instanceId,
                                shared_ptr<string> indexName,
                                shared_ptr<string> versionName,
                                shared_ptr<ModifyFileRequest> request);
  ModifyIndexPartitionResponse modifyIndexPartitionWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<ModifyIndexPartitionRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyIndexPartitionResponse modifyIndexPartition(shared_ptr<string> instanceId, shared_ptr<ModifyIndexPartitionRequest> request);
  ModifyIndexVersionResponse modifyIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> clusterName,
                                                           shared_ptr<ModifyIndexVersionRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyIndexVersionResponse modifyIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> clusterName, shared_ptr<ModifyIndexVersionRequest> request);
  ModifyNodeConfigResponse modifyNodeConfigWithOptions(shared_ptr<string> instanceId,
                                                       shared_ptr<ModifyNodeConfigRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyNodeConfigResponse modifyNodeConfig(shared_ptr<string> instanceId, shared_ptr<ModifyNodeConfigRequest> request);
  ModifyOnlineConfigResponse modifyOnlineConfigWithOptions(shared_ptr<string> instanceId,
                                                           shared_ptr<string> nodeName,
                                                           shared_ptr<string> indexName,
                                                           shared_ptr<ModifyOnlineConfigRequest> request,
                                                           shared_ptr<map<string, string>> headers,
                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyOnlineConfigResponse modifyOnlineConfig(shared_ptr<string> instanceId,
                                                shared_ptr<string> nodeName,
                                                shared_ptr<string> indexName,
                                                shared_ptr<ModifyOnlineConfigRequest> request);
  ModifyPasswordResponse modifyPasswordWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<ModifyPasswordRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPasswordResponse modifyPassword(shared_ptr<string> instanceId, shared_ptr<ModifyPasswordRequest> request);
  ModifyTableResponse modifyTableWithOptions(shared_ptr<string> instanceId,
                                             shared_ptr<string> tableName,
                                             shared_ptr<ModifyTableRequest> request,
                                             shared_ptr<map<string, string>> headers,
                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTableResponse modifyTable(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<ModifyTableRequest> request);
  PublishAdvanceConfigResponse publishAdvanceConfigWithOptions(shared_ptr<string> instanceId,
                                                               shared_ptr<string> configName,
                                                               shared_ptr<PublishAdvanceConfigRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishAdvanceConfigResponse publishAdvanceConfig(shared_ptr<string> instanceId, shared_ptr<string> configName, shared_ptr<PublishAdvanceConfigRequest> request);
  PublishIndexVersionResponse publishIndexVersionWithOptions(shared_ptr<string> instanceId,
                                                             shared_ptr<string> indexName,
                                                             shared_ptr<PublishIndexVersionRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishIndexVersionResponse publishIndexVersion(shared_ptr<string> instanceId, shared_ptr<string> indexName, shared_ptr<PublishIndexVersionRequest> request);
  RecoverIndexResponse recoverIndexWithOptions(shared_ptr<string> instanceId,
                                               shared_ptr<RecoverIndexRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoverIndexResponse recoverIndex(shared_ptr<string> instanceId, shared_ptr<RecoverIndexRequest> request);
  ReindexResponse reindexWithOptions(shared_ptr<string> instanceId,
                                     shared_ptr<string> tableName,
                                     shared_ptr<ReindexRequest> request,
                                     shared_ptr<map<string, string>> headers,
                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReindexResponse reindex(shared_ptr<string> instanceId, shared_ptr<string> tableName, shared_ptr<ReindexRequest> request);
  RemoveClusterResponse removeClusterWithOptions(shared_ptr<string> instanceId,
                                                 shared_ptr<string> clusterName,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveClusterResponse removeCluster(shared_ptr<string> instanceId, shared_ptr<string> clusterName);
  StopTaskResponse stopTaskWithOptions(shared_ptr<string> instanceId,
                                       shared_ptr<string> fsmId,
                                       shared_ptr<map<string, string>> headers,
                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTaskResponse stopTask(shared_ptr<string> instanceId, shared_ptr<string> fsmId);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<string> instanceId,
                                                   shared_ptr<UpdateInstanceRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<string> instanceId, shared_ptr<UpdateInstanceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Searchengine20211025

#endif
